#ifndef RIV_DATA_FILE_H
#define RIV_DATA_FILE_H

#include <QString>

typedef struct{
    double x;
    double y;
} Point;



double SLOPE( Point p1, Point p2 );

int IsEqualPoint( Point p1, Point p2 );

int RiverFromTIN( QString RiverShpFileName, QString RiverDbfFileName, QString EleFileName, QString NodeFileName, QString NeighFileName, QString xRiverShpFileName, QString xRiverDbfFileName);

int AddFID( QString RiverDbfFileName );

int AddToFromNode( QString RiverShpFileName, QString RiverDbfFileName );

int AddDownSegment(QString RiverDbfFileName, QString BoundaryCondition);

int riv_data_file( QString EleFileName, QString NodeFileName, QString NeighFileName,
                   QString RiverShpFileName, QString RiverDbfFileName,
                   QString xRiverShpFileName, QString xRiverDbfFileName,
                   QString BoundaryCondition,
                   QString RivDataFileName
                   );


#endif // RIV_DATA_FILE_H
