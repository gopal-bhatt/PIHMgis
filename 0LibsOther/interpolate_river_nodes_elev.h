#ifndef INTERPOLATE_RIVER_NODES_ELEV
#define INTERPOLATE_RIVER_NODES_ELEV

#include <QString>

typedef struct{
	double x;
	double y;
}Point;

double SLOPEa(Point p1, Point p2);


int interpolate_river_nodes_elev(QString shpFileName, QString dbfFileName, QString EleFileName, QString NodeFileName, QString NeighFileName, QString OldMeshFileName, QString NewMeshFileName, QString DecompRiverFileNameShp, QString DecompRiverFileNameDbf);


#endif
