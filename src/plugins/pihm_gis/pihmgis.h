/***************************************************************************
    pihmgis.h 
    -------------------
    begin                : Jan 21, 2004
    copyright            : (C) 2004 by Tim Sutton
    email                : tim@linfiniti.com
  
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
 /*  $Id: plugin.h 6931 2007-05-06 02:40:33Z wonder $ */
/***************************************************************************
 *   QGIS Programming conventions:
 *   
 *   mVariableName - a class level member variable
 *   sVariableName - a static class level member variable
 *   variableName() - accessor for a class member (no 'get' in front of name)
 *   setVariableName() - mutator for a class member (prefix with 'set')
 *
 *   Additional useful conventions:
 *
 *   theVariableName - a method parameter (prefix with 'the')
 *   myVariableName - a locally declared variable within a method ('my' prefix)
 * 
 *   DO: Use mixed case variable names - myVariableName
 *   DON'T: separate variable names using underscores: my_variable_name (NO!)
 *
 * **************************************************************************/
#ifndef PIHMgis_H
#define PIHMgis_H

//QT4 includes
#include <QObject>
#include <QThread>
#include "RunPIHM/runpihm.h"
//QGIS includes
#include "../qgisplugin.h"

//forward declarations
class QAction;
class QToolBar;

class QgisInterface;

/**
* \class Plugin
* \brief [name] plugin for QGIS
* [description]
*/
class PIHMgis:public QObject, public QgisPlugin
{
  Q_OBJECT;
  public:
      
  //////////////////////////////////////////////////////////////////////
  //
  //                MANDATORY PLUGIN METHODS FOLLOW
  //
  //////////////////////////////////////////////////////////////////////

  /** 
  * Constructor for a plugin. The QgisInterface pointer is passed by 
  * QGIS when it attempts to instantiate the plugin.
  * @param theInterface Pointer to the QgisInterface object. 
   */
  PIHMgis(QgisInterface * theInterface);
  //! Destructor
  virtual ~PIHMgis();
public slots:
  //! init the gui
  virtual void initGui();
  //! Show the dialog box
  void run();
  //! unload the plugin
  void unload();
  //! show the help document
  void help();

void runDefineProject();
void runOpenProject();
void runCloseProject();
void runImportProject();

void runRunAllRaster();
void runFillPits();
void runFlowGrid();
void runStreamGrid();
void runLinkGrid();
void runStreamPolyLine();
void runCatchmentGrid();
void runCatchmentPolygon();

void runDissolve();
void runPolygonToPolyline();
void runSimplifyLine();
void runSplitLine();
void runVectorMerge();

void runRunAllDomain();
void runGenerateShapeTopology();
void runRunTriangle();
void runCreateTINs();

void runMshFile();
void runAttFile();
void runRivFile();
void runParaFile();
void runSoilFile();
void runGeolFile();
void runLCFile();
void runCalibFile();
void runInitFile();
void runIBCFile();
void runForcFile();

void runPIHM();

void runSpatialPlots();
void runTimeSeriesPlots();

void runAbout();
void runHomePage();
void runOnlineHelp();

private:

  ////////////////////////////////////////////////////////////////////
  //
  // MANDATORY PLUGIN PROPERTY DECLARATIONS  .....
  //
  ////////////////////////////////////////////////////////////////////
  
  int mPluginType;
  //! Pointer to our toolbar
  QToolBar *mToolBarPointer;
  //! Pointer to the QGIS interface object
  QgisInterface *mQGisIface;
  //!pointer to the qaction for this plugin
  QAction * mQActionPointer;
  ////////////////////////////////////////////////////////////////////
  //
  // ADD YOUR OWN PROPERTY DECLARATIONS AFTER THIS POINT.....
  //
  ////////////////////////////////////////////////////////////////////
};
#endif //PIHMgis_H
