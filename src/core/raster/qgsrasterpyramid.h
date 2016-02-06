/***************************************************************************
                            qgsrasterpyramid.h
                       
                             -------------------
    begin                : 2007
    copyright            : (C) 2007 by Gary E. Sherman
    email                : sherman@mrcc.com
***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSRASTERPYRAMID
#define QGSRASTERPYRAMID
/** \brief This struct is used to store pyramid info for the raster layer. */
class CORE_EXPORT QgsRasterPyramid
{
  public:
  /** \brief The pyramid level as implemented in gdal (level 2 is half orignal raster size etc) */
  int levelInt;
  /** \brief XDimension for this pyramid layer */
  int xDimInt;
  /** \brief YDimension for this pyramid layer */
  int yDimInt;
  /** \brief Whether the pyramid layer has been built yet */
  bool existsFlag;

};
#endif