#ifndef PICKGRIDVALUE
#define PICKGRIDVALUE

#include <iostream>
#include <gdal.h>
#include <gdal_priv.h>

double readValue ( void *data, GDALDataType type, int index );
void getExtent(GDALDataset *temp, double *ranges);
double getRasterValue(GDALDataset* layer, int bandNumber, double x, double y, double *ranges);

#endif
