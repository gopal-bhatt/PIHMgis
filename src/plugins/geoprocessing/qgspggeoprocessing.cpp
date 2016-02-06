/***************************************************************************
  qgspggeoprocessing.cpp 
  Geoprocessing plugin for PostgreSQL/PostGIS layers
Functions:
Buffer
-------------------
begin                : Jan 21, 2004
copyright            : (C) 2004 by Gary E.Sherman
email                : sherman at mrcc.com

 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*  $Id: qgspggeoprocessing.cpp 6833 2007-03-24 22:40:10Z wonder $ */

// includes
#include <iostream>
#include <vector>
#include "qgisinterface.h"
#include "qgsmaplayer.h"
#include "qgsvectorlayer.h"
#include "qgsvectordataprovider.h"
#include "qgsfield.h"

#include <QMessageBox>
#include <QAction>
#include <QApplication>
#include <QMenu>

#include "qgsdlgpgbuffer.h"
#include "qgspggeoprocessing.h"

// xpm for creating the toolbar icon
#include "icon_buffer.xpm"

static const char * const ident_ = "$Id: qgspggeoprocessing.cpp 6833 2007-03-24 22:40:10Z wonder $";

static const QString name_ = QObject::tr("PostgresSQL Geoprocessing");
static const QString description_ = QObject::tr("Geoprocessing functions for working with PostgreSQL/PostGIS layers");
static const QString version_ = QObject::tr("Version 0.1");
static const QgisPlugin::PLUGINTYPE type_ = QgisPlugin::UI;


/**
 * Constructor for the plugin. The plugin is passed a pointer to the main app
 * and an interface object that provides access to exposed functions in QGIS.
 * @param qgis Pointer to the QGIS main window
 * @parma _qI Pointer to the QGIS interface object
 */
QgsPgGeoprocessing::QgsPgGeoprocessing(QgisInterface * _qI)
  : QgisPlugin( name_, description_, version_, type_ ),
    qgisMainWindow(_qI->getMainWindow()),
    qI(_qI)
{
}

QgsPgGeoprocessing::~QgsPgGeoprocessing()
{

}


/*
 * Initialize the GUI interface for the plugin 
 */
void QgsPgGeoprocessing::initGui()
{
  // Create the action for tool
  bufferAction = new QAction(QIcon(icon_buffer), tr("&Buffer features"), this);
  bufferAction->setWhatsThis(tr("Create a buffer for a PostgreSQL layer. " +
      tr("A new layer is created in the database with the buffered features.")));
  // Connect the action to the buffer slot
  connect(bufferAction, SIGNAL(activated()), this, SLOT(buffer()));

  // Add the icon to the toolbar
  qI->addToolBarIcon(bufferAction);
  qI->addPluginMenu(tr("&Geoprocessing"), bufferAction);

}

// Slot called when the buffer menu item is activated
void QgsPgGeoprocessing::buffer()
{
  // need to get a pointer to the current layer
  QgsMapLayer *layer = qI->activeLayer();
  if (layer) {
    QgsVectorLayer *lyr = (QgsVectorLayer*)layer;
    // check the layer to see if its a postgres layer
    if (layer->type() != QgsMapLayer::RASTER && 
        lyr->providerType() == "postgres") {

      QString dataSource = lyr->source(); //qI->activeLayerSource();

      // create the connection string
      QString connInfo = dataSource.left(dataSource.find("table="));
#ifdef QGISDEBUG
      std::cerr << "Data source = " << QString("Datasource:%1\n\nConnectionInfo:%2").arg(dataSource).arg(connInfo).toLocal8Bit().data() << std::endl;
#endif
      // connect to the database and check the capabilities
      PGconn *capTest = PQconnectdb((const char *) connInfo);
      if (PQstatus(capTest) == CONNECTION_OK) {
        postgisVersion(capTest);
      }
      PQfinish(capTest);
      if(geosAvailable){
        // get the table name
        QStringList connStrings = QStringList::split(" ", dataSource);
        QStringList tables = connStrings.grep("table=");
        QString table = tables[0];
        QString tableName = table.mid(table.find("=") + 1);
        // get the schema
        QString schema = tableName.left(tableName.find("."));
        // get the database name
        QStringList dbnames = connStrings.grep("dbname=");
        QString dbname = dbnames[0];
        dbname = dbname.mid(dbname.find("=") + 1);
        // get the user name
        QStringList userNames = connStrings.grep("user=");
        QString user = userNames[0];
        user = user.mid(user.find("=") + 1);

        // show dialog to fetch buffer distrance, new layer name, and option to
        // add the new layer to the map
        QgsDlgPgBuffer *bb = new QgsDlgPgBuffer(qI);

        // set the label
        QString lbl = tr("Buffer features in layer %1").arg(tableName);
        bb->setBufferLabel(lbl);
        // set a default output table name
        bb->setBufferLayerName(tableName.mid(tableName.find(".") + 1) + "_buffer");
        // set the fields on the dialog box drop-down
        QgsVectorDataProvider *dp = dynamic_cast<QgsVectorDataProvider *>(lyr->getDataProvider());
        QgsFieldMap flds = dp->fields();
        for (QgsFieldMap::iterator it = flds.begin(); it != flds.end(); ++it) {
          // check the field type -- if its int we can use it
          if (it->typeName().find("int") > -1) {
            bb->addFieldItem(it->name());
          }
        }
        // connect to the database
        PGconn *conn = PQconnectdb((const char *) connInfo);
        if (PQstatus(conn) == CONNECTION_OK) {
          // populate the schema drop-down
          QString schemaSql =
            QString("select nspname from pg_namespace,pg_user where nspowner = usesysid and usename = '%1'").arg(user);
          PGresult *schemas = PQexec(conn, (const char *) schemaSql);
          if (PQresultStatus(schemas) == PGRES_TUPLES_OK) {
            // add the schemas to the drop-down, otherwise just public (the
            // default) will show up
            for (int i = 0; i < PQntuples(schemas); i++) {
              bb->addSchema(PQgetvalue(schemas, i, 0));
            }
          }
          PQclear(schemas);
          // query the geometry_columns table to get the srid and use it as default
          QString sridSql =
            QString("select srid,f_geometry_column from geometry_columns where f_table_schema='%1' and f_table_name='%2'")
            .arg(schema)
            .arg(tableName.mid(tableName.find(".") + 1));
#ifdef QGISDEBUG
          std::cerr << "SRID SQL" << sridSql.toLocal8Bit().data() << std::endl;
#endif 
          QString geometryCol;
          PGresult *sridq = PQexec(conn, (const char *) sridSql);
          if (PQresultStatus(sridq) == PGRES_TUPLES_OK) {
            bb->setSrid(PQgetvalue(sridq, 0, 0));
            geometryCol = PQgetvalue(sridq, 0, 1);
            bb->setGeometryColumn(geometryCol);
          } else {
            bb->setSrid("-1");
          }
          PQclear(sridq);
          // exec the dialog and process if user selects ok
          if (bb->exec()) {
            QApplication::setOverrideCursor(Qt::WaitCursor);
            qApp->processEvents();
            // determine what column to use as the obj id
            QString objId = bb->objectIdColumn();
            QString objIdType = "int";
            QString objIdValue;
            if (objId == "Create unique object id") {
              objId = "objectid";
              objIdType = "serial";
              objIdValue = "DEFAULT";
            } else {
              objIdValue = objId;
            }
            // set the schema path (need public to find the postgis
            // functions)
            PGresult *result = PQexec(conn, "begin work");
            PQclear(result);
            QString sql;
            // set the schema search path if schema is not public
            if(bb->schema() != "public")
            {
              sql = QString("set search_path = '%1','public'").arg(bb->schema());
              result = PQexec(conn, (const char *) sql);
              PQclear(result);
#ifdef QGISDEBUG
              std::cerr << sql.toLocal8Bit().data() << std::endl;
#endif
            }
            // first create the new table

            sql = QString("create table %1.%2 (%3 %4 PRIMARY KEY)")
              .arg(bb->schema())
              .arg(bb->bufferLayerName())
              .arg(objId)
              .arg(objIdType);
#ifdef QGISDEBUG
            std::cerr << sql.toLocal8Bit().data() << std::endl;
#endif
            result = PQexec(conn, (const char *) sql);
#ifdef QGISDEBUG
            std::cerr << "Status from create table is " << PQresultStatus(result) << std::endl;
            std::cerr << "Error message is " << PQresStatus(PQresultStatus(result)) << std::endl;
#endif
            if (PQresultStatus(result) == PGRES_COMMAND_OK) {
              PQclear(result);
              // add the geometry column
              //<db_name>, <table_name>, <column_name>, <srid>, <type>, <dimension>
              sql = QString("select addgeometrycolumn('%1','%2','%3',%4,'%5',%6)")
                .arg(bb->schema())
                .arg(bb->bufferLayerName())
                .arg(bb->geometryColumn())
                .arg(bb->srid())
                .arg("POLYGON")
                .arg("2");
#ifdef QGISDEBUG
              std::cerr << sql.toLocal8Bit().data() << std::endl;
#endif
              PGresult *geoCol = PQexec(conn, (const char *) sql);

            if (PQresultStatus(geoCol) == PGRES_TUPLES_OK) {
              PQclear(geoCol);
              /* The constraint naming convention has changed in PostGIS
               * from $2 to enforce_geotype_shape. This change means the
               * buffer plugin will fail for older version of PostGIS.
               */
              // drop the check constraint based on geometry type
              sql = QString("alter table %1.%2 drop constraint \"enforce_geotype_shape\"")
                .arg(bb->schema())
                .arg(bb->bufferLayerName());
#ifdef QGISDEBUG
              std::cerr << sql.toLocal8Bit().data() << std::endl;
#endif
              result = PQexec(conn, (const char *) sql);
              if(PQresultStatus(result) == PGRES_COMMAND_OK)
              {
              PQclear(result);
              // check pg version and formulate insert query accordingly
              result = PQexec(conn,"select version()");
              QString versionString = PQgetvalue(result,0,0);
              QStringList versionParts = QStringList::split(" ", versionString);
              // second element is the version number
              QString version = versionParts[1];

              if(version < "7.4.0"){
                // modify the tableName 
                tableName = tableName.mid(tableName.find(".")+1);
              }
#ifdef QGISDEBUG
              std::cerr << "Table name for PG 7.3 is: " << tableName.mid(tableName.find(".")+1).toLocal8Bit().data() << std::endl;
#endif
              //   if(PQresultStatus(geoCol) == PGRES_COMMAND_OK) {
              // do the buffer and insert the features
              if (objId == "objectid") {
                sql = QString("insert into %1 (%2) select buffer(%3,%4) from %5")
                  .arg(bb->bufferLayerName())
                  .arg(bb->geometryColumn())
                  .arg(geometryCol)
                  .arg(bb->bufferDistance().toDouble())
                  .arg(tableName);
              } else {
                sql = QString("insert into %1 select %2, buffer(%3,%4) from %5")
                  .arg(bb->bufferLayerName())
                  .arg(objIdValue)
                  .arg(geometryCol)
                  .arg(bb->bufferDistance().toDouble())
                  .arg(tableName);
#ifdef QGISDEBUG
                std::cerr << sql.toLocal8Bit().data() << std::endl;
#endif

              }
              result = PQexec(conn, (const char *) sql);
              PQclear(result);
              // }
#ifdef QGISDEBUG
              std::cerr << sql.toLocal8Bit().data() << std::endl;
#endif
              result = PQexec(conn, "end work");
              PQclear(result);
              result = PQexec(conn, "commit;vacuum");
              PQclear(result);
              PQfinish(conn);
              // QMessageBox::information(0, "Add to Map?", "Do you want to add the layer to the map?");
              // add new layer to the map
              if (bb->addLayerToMap()) {
                // create the connection string
                QString newLayerSource = dataSource.left(dataSource.find("table="));
#ifdef QGISDEBUG
                std::cerr << "newLayerSource: " << newLayerSource.toLocal8Bit().data() << std::endl;
#endif
                // add the schema.table and geometry column
                /*  newLayerSource += "table=" + bb->schema() + "." + bb->bufferLayerName()  
                    + " (" + bb->geometryColumn() + ")"; */
#ifdef QGISDEBUG
                std::cerr << "newLayerSource: " << newLayerSource.toLocal8Bit().data() << std::endl;
                std::cerr << "Adding new layer using\n\t" << newLayerSource.toLocal8Bit().data() << std::endl;
#endif
                // host=localhost dbname=gis_data user=gsherman password= table=public.alaska (the_geom)
                // Using addVectorLayer requires that be add a table=xxxx to the layer path since
                // addVectorLayer is generic for all supported layers
               std::cerr << "Building dataURI string" << std::endl; 
                QString dataURI = newLayerSource + "table=" + bb->schema() + "." + bb->bufferLayerName()
                    + " (" + bb->geometryColumn() + ")\n" +
                    bb->schema() + "." + bb->bufferLayerName() + " (" + bb->geometryColumn() + ")\n" +
                    "postgres"; 
                    
                    std::cerr << "Passing to addVectorLayer:\n" << dataURI.toLocal8Bit().data() << std::endl;
                 qI->addVectorLayer(newLayerSource + "table=" + bb->schema() + "." + bb->bufferLayerName()
                     + " (" + bb->geometryColumn() + ")",
                 bb->schema() + "." + bb->bufferLayerName() + " (" + bb->geometryColumn() + ")", 
                 "postgres"); 

              }
              }
              else
              {
#ifdef QGISDEBUG
            std::cerr << "Status from drop constraint is " << PQresultStatus(result) << std::endl;
            std::cerr << "Error message is " << PQresStatus(PQresultStatus(result)) << std::endl;
#endif
              }
            }
            else
            {
#ifdef QGISDEBUG
            std::cerr << "Status from add geometry column is " << PQresultStatus(geoCol) << std::endl;
            std::cerr << "Error message is " << PQresStatus(PQresultStatus(geoCol)) << std::endl;
#endif
              QMessageBox::critical(0, tr("Unable to add geometry column"),
                  QString(tr("Unable to add geometry column to the output table ") +
                      QString("%1-%2").arg(bb->bufferLayerName()).arg(PQerrorMessage(conn))));

            }
            } else {
              QMessageBox::critical(0, tr("Unable to create table"),
                  QString(tr("Failed to create the output table ") +
                          QString("%1").arg(bb->bufferLayerName())));
            }
            QApplication::restoreOverrideCursor();
          }
          delete bb;
        } else {
          // connection error
          QString err = tr("Error connecting to the database");
          QMessageBox::critical(0, err, PQerrorMessage(conn));
        }
      }else{
        QMessageBox::critical(0,tr("No GEOS support"),
                              tr("Buffer function requires GEOS support in PostGIS"));
      }
    } else {
      QMessageBox::critical(0, tr("Not a PostgreSQL/PosGIS Layer"),
                   QString("%1").arg(lyr->name()) +
                   tr(" is not a PostgreSQL/PosGIS layer.\n") +
                   tr("Geoprocessing functions are only available for PostgreSQL/PosGIS Layers"));
    }
  } else {
    QMessageBox::warning(0, tr("No Active Layer"), 
                         tr("You must select a layer in the legend to buffer"));
  }
}
/* Functions for determining available features in postGIS */
QString QgsPgGeoprocessing::postgisVersion(PGconn *connection){
  PGresult *result = PQexec(connection, "select postgis_version()");
  postgisVersionInfo = PQgetvalue(result,0,0);
#ifdef QGISDEBUG
  std::cerr << "PostGIS version info: " << postgisVersionInfo.toLocal8Bit().data() << std::endl;
#endif
  // assume no capabilities
  geosAvailable = false;
  gistAvailable = false;
  projAvailable = false;
  // parse out the capabilities and store them
  QStringList postgisParts = QStringList::split(" ", postgisVersionInfo);
  QStringList geos = postgisParts.grep("GEOS");
  if(geos.size() == 1){
    geosAvailable = (geos[0].find("=1") > -1);  
  }
  QStringList gist = postgisParts.grep("STATS");
  if(gist.size() == 1){
    gistAvailable = (geos[0].find("=1") > -1);
  }
  QStringList proj = postgisParts.grep("PROJ");
  if(proj.size() == 1){
    projAvailable = (proj[0].find("=1") > -1);
  }
  return postgisVersionInfo;
}
bool QgsPgGeoprocessing::hasGEOS(PGconn *connection){
  // make sure info is up to date for the current connection
  postgisVersion(connection);
  // get geos capability
  return geosAvailable;
}
bool QgsPgGeoprocessing::hasGIST(PGconn *connection){
  // make sure info is up to date for the current connection
  postgisVersion(connection);
  // get gist capability
  return gistAvailable;
}
bool QgsPgGeoprocessing::hasPROJ(PGconn *connection){
  // make sure info is up to date for the current connection
  postgisVersion(connection);
  // get proj4 capability
  return projAvailable;
}

// Unload the plugin by cleaning up the GUI
void QgsPgGeoprocessing::unload()
{
  // remove the GUI
  qI->removePluginMenu(tr("&Geoprocessing"),bufferAction);
  qI->removeToolBarIcon(bufferAction);
  delete bufferAction;
}
/** 
 * Required extern functions needed  for every plugin 
 * These functions can be called prior to creating an instance
 * of the plugin class
 */
// Class factory to return a new instance of the plugin class
extern "C" QgisPlugin * classFactory(QgisInterface * qI)
{
  return new QgsPgGeoprocessing(qI);
}

// Return the name of the plugin
extern "C" QString name()
{
    return name_;
}

// Return the description
extern "C" QString description()
{
    return description_;
}

// Return the type (either UI or MapLayer plugin)
extern "C" int type()
{
    return type_;
}

// Return the version number for the plugin
extern "C" QString version()
{
  return version_;
}

// Delete ourself
extern "C" void unload(QgisPlugin * p)
{
  delete p;
}