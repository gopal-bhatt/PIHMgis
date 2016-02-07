#ifndef GENERATE_SHAPE
#define GENERATE_SHAPE

#include <QtGui>

void generateShape(QString shapeFileName, double *avgVal, int NUM_FEATURE, int TYPE, const char *fStr);
void generateShape2(QString shpFileName, double **avgVal, int NUM_FEATURES, int TYPE, const char *fStr, int bins);

#endif
