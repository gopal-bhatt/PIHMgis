#ifndef RASTER_GRID_VALUE
#define RASTER_GRID_VALUE

#include <gdal.h>
#include <gdal_priv.h>

double readValue ( void *data, GDALDataType type, int index );
void   getExtent (GDALDataset *temp, double *ranges);
double raster_grid_value (GDALDataset* layer, int bandNumber, double x, double y, double *ranges);

#endif
