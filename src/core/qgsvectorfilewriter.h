/***************************************************************************
                          qgsvectorfilewriter.h
                          generic vector file writer 
                             -------------------
    begin                : Jun 6 2004
    copyright            : (C) 2004 by Tim Sutton
    email                : tim at linfiniti.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/* $Id: qgsvectorfilewriter.h 6940 2007-05-10 11:26:25Z wonder $ */

#ifndef _QGSVECTORFILEWRITER_H_
#define _QGSVECTORFILEWRITER_H_

#include "qgsvectorlayer.h"

#include <QString>

class OGRDataSource;
class OGRLayer;
class OGRGeometry;

class QTextCodec;

/**
 There are two possibilities how to use this class:
 1. static call to QgsVectorFileWriter::writeAsShapefile(...) which saves the whole vector layer
 2. create an instance of the class and issue calls to addFeature(...)

 Currently supports only writing to shapefiles, but shouldn't be a problem to add capability
 to support other OGR-writable formats.
 */
class CORE_EXPORT QgsVectorFileWriter
{
  public:
      
    enum WriterError
    {
      NoError = 0,
      ErrDriverNotFound,
      ErrCreateDataSource,
      ErrCreateLayer
    };

    /** Write contents of vector layer to a shapefile */
    static WriterError writeAsShapefile(QgsVectorLayer* layer,
                                        const QString& shapefileName,
                                        const QString& fileEncoding,
                                        bool onlySelected = FALSE);


    /** create shapefile and initialize it */
    QgsVectorFileWriter(const QString& shapefileName,
                        const QString& fileEncoding,
                        const QgsFieldMap& fields,
                        QGis::WKBTYPE geometryType,
                        const QgsSpatialRefSys* srs);
    
    /** checks whether there were any errors in constructor */
    WriterError hasError();
    
    /** add feature to the currently opened shapefile */
    bool addFeature(QgsFeature& feature);
    
    /** close opened shapefile for writing */
    ~QgsVectorFileWriter();
    
  protected:
    
    OGRGeometry* createEmptyGeometry(QGis::WKBTYPE wkbType);
    
    OGRDataSource* mDS;
    OGRLayer* mLayer;
    OGRGeometry* mGeom;
    
    QgsFieldMap mFields;
    
    /** contains error value if construction was not successfull */
    WriterError mError;

    QTextCodec* mCodec;
    
    /** geometry type which is being used */
    QGis::WKBTYPE mWkbType;
};

#endif