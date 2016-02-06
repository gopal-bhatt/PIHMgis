/***************************************************************************
     qgsclipboard.cpp  -  QGIS internal clipboard for storage of features 
     --------------------------------------------------------------------
    begin                : 20 May, 2005
    copyright            : (C) 2005 by Brendan Morley
    email                : morb at ozemail dot com dot au
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

/* $Id: qgsclipboard.cpp 6879 2007-04-11 11:46:35Z wonder $ */

#include <fstream>
#include <iostream>

#include <QApplication>
#include <QString>
#include <QStringList>
#include <QClipboard>

#include "qgsclipboard.h"
#include "qgsfeature.h"
#include "qgsfield.h"
#include "qgsgeometry.h"
#include "qgslogger.h"


QgsClipboard::QgsClipboard()
  : mFeatureClipboard()
{
}

QgsClipboard::~QgsClipboard()
{
}

void QgsClipboard::replaceWithCopyOf( const QgsFieldMap& fields, QgsFeatureList& features )
{

  // Replace the QGis clipboard.
  mFeatureClipboard = features;
#ifdef QGISDEBUG
        std::cerr << "QgsClipboard::replaceWith: replaced QGis clipboard."
                  << std::endl;
#endif

  // Replace the system clipboard.

  QStringList textLines;
  QStringList textFields;

  // first do the field names
  textFields += "wkt_geom";
  for (QgsFieldMap::const_iterator fit = fields.begin(); fit != fields.end(); ++fit)
  {
    textFields += fit->name();
  }
  textLines += textFields.join(",");
  textFields.clear();

  
  // then the field contents
  for (QgsFeatureList::iterator it = features.begin(); it != features.end(); ++it)
  {
    QgsAttributeMap attributes = it->attributeMap();


    // TODO: Set up Paste Transformations to specify the order in which fields are added.

    if (it->geometry())
      textFields += it->geometry()->exportToWkt();
    else
      textFields += "NULL";

#ifdef QGISDEBUG
//       std::cout << "QgsClipboard::replaceWithCopyOf: about to traverse fields." << std::endl;
#endif
    for (QgsAttributeMap::iterator it2 = attributes.begin(); it2 != attributes.end(); ++it2)
    {
#ifdef QGISDEBUG
//       std::cout << "QgsClipboard::replaceWithCopyOf: inspecting field '"
//                 << (it2->fieldName()).toLocal8Bit().data()
//                 << "'." << std::endl;
#endif
      textFields += it2->toString();
    }

    textLines += textFields.join(",");
    textFields.clear();
  }
  
  QString textCopy = textLines.join("\n");

  QClipboard *cb = QApplication::clipboard();

  // Copy text into the clipboard

  // With qgis running under Linux, but with a Windows based X
  // server (Xwin32), ::Selection was necessary to get the data into
  // the Windows clipboard (which seems contrary to the Qt
  // docs). With a Linux X server, ::Clipboard was required.
  // The simple solution was to put the text into both clipboards.

  // The ::Selection setText() below one may need placing inside so
  // #ifdef so that it doesn't get compiled under Windows.
  cb->setText(textCopy, QClipboard::Selection);
  cb->setText(textCopy, QClipboard::Clipboard);
  
#ifdef QGISDEBUG
        std::cerr << "QgsClipboard::replaceWith: replaced system clipboard with: "
                  << textCopy.toLocal8Bit().data()
                  << "."
                  << std::endl;
#endif

}

QgsFeatureList QgsClipboard::copyOf()
{

  QgsDebugMsg("QgsClipboard::copyOf: returning clipboard.");
  
  //TODO: Slurp from the system clipboard as well.

  return mFeatureClipboard;
    
//  return mFeatureClipboard;
  
}

void QgsClipboard::clear()
{
  mFeatureClipboard.clear();

  QgsDebugMsg("QgsClipboard::clear: cleared clipboard.");
}
  
void QgsClipboard::insert( QgsFeature& feature )
{
  mFeatureClipboard.push_back(feature);
        
  QgsDebugMsg("QgsClipboard::insert: inserted " + feature.geometry()->exportToWkt());
}
 