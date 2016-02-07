#ifndef POLYGON_POLYLINE
#define POLYGON_POLYLINE

#include "./../0LibsShape/shapefil.h"

/* Current version of code assumes a polygon intersects just once with the other polygon for EFFICIENCY purpose */

void sortArray(int ***junction, int* jctCount, int recordCount);

void calPts(int start, int end, SHPObject* handle, double *X, double *Y, double *Z, int node, int *vertices);

int polygon_polylines(const char* shpFileName, const char* dbfFileName, const char *newshpFileName, const char *newdbfFileName);


#endif
