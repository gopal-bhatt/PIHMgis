/***************************************************************************
    qgsrasterdataprovider.cpp - DataProvider Interface for raster layers
     --------------------------------------
    Date                 : Mar 11, 2005
    Copyright            : (C) 2005 by Brendan Morley
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
/* $Id: qgsrasterdataprovider.cpp 6415 2007-01-09 02:39:15Z wonder $ */

#include "qgsrasterdataprovider.h"
#include <iostream>

QgsRasterDataProvider::QgsRasterDataProvider()
{
}


QgsRasterDataProvider::QgsRasterDataProvider( QString const & uri )
    : QgsDataProvider(uri)
{
}


QString QgsRasterDataProvider::capabilitiesString() const
{
  QStringList abilitiesList;

  int abilities = capabilities();

  if (abilities & QgsRasterDataProvider::Identify)
  {
    abilitiesList += "Identify";
#ifdef QGISDEBUG
        std::cerr << "QgsRasterDataProvider::capabilitiesString "
          << "Identify" << std::endl;
#endif

  }

  return abilitiesList.join(", ");
}


// ENDS