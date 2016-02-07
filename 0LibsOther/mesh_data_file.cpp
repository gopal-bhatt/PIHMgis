#include <iostream>
#include <iomanip>
#include <math.h>

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include "0LibsOther/raster_grid_value.h"


using namespace std;

int mesh_data_file(QString SurfaceFilename, QString SubsurfaceFileName, QString EleFileName, QString NodeFileName, QString NeighFileName, QString MeshDataFileName, bool CheckBoxSubSurface)
{
    QFile EleFile(EleFileName);
    if ( ! EleFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 18;
    QTextStream EleFileTextStream(&EleFile);

    QFile NodeFile(NodeFileName);
    if ( ! NodeFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 23;
    QTextStream NodeFileTextStream(&NodeFile);

    QFile NeighFile(NeighFileName);
    if ( ! NeighFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 28;
    QTextStream NeighFileTextStream(&NeighFile);

    QFile MeshDataFile(MeshDataFileName);
    if ( ! MeshDataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 32;
    QTextStream MeshDataFileTextStream(&MeshDataFile);



    GDALDataset *SurfElev, *SubSurfElev;
    double sRanges[6], bRanges[6];

    GDALAllRegister();
    SurfElev = (GDALDataset *)GDALOpen(qPrintable(SurfaceFilename), GA_ReadOnly);
    if ( SurfElev == NULL )
        return 44;
    getExtent(SurfElev, sRanges);

    if( CheckBoxSubSurface == false )
    {
        SubSurfElev = (GDALDataset *)GDALOpen(qPrintable(SubsurfaceFileName), GA_ReadOnly);
        if ( SubSurfElev == NULL )
            return 51;
        getExtent(SubSurfElev, bRanges);
    }


    int temp;
    int NumEle, NumNode, NumNeigh;

    EleFileTextStream   >> NumEle;   EleFileTextStream   >> temp; EleFileTextStream  >> temp;
    NodeFileTextStream  >> NumNode;  NodeFileTextStream  >> temp; NodeFileTextStream >> temp; NodeFileTextStream >> temp;
    NeighFileTextStream >> NumNeigh; NeighFileTextStream >> temp;

    MeshDataFileTextStream << NumEle << "\t" << NumNode << "\n";
    int index;
    int node0, node1, node2, nabr0, nabr1, nabr2;
    for(int i=0; i<NumEle; i++)
    {
            EleFileTextStream>>index; EleFileTextStream>>node0; EleFileTextStream>>node1; EleFileTextStream>>node2;
            NeighFileTextStream>>temp; NeighFileTextStream>>nabr0; NeighFileTextStream>>nabr1; NeighFileTextStream>>nabr2;
            MeshDataFileTextStream<<index<<"\t"<<node0<<"\t"<<node1<<"\t"<<node2<<"\t"<<(nabr0<0?0:nabr0)<<"\t"<<(nabr1<0?0:nabr1)<<"\t"<<(nabr2<0?0:nabr2)<<"\n";
    }
    double X, Y, Zmin, Zmax;
    for(int i=0; i<NumNode; i++){
            NodeFileTextStream>>index; NodeFileTextStream>>X; NodeFileTextStream>>Y; NodeFileTextStream>>temp;
            //Zmin = getRasterValue(bElev, 1, X, Y, bRanges);
            Zmax = raster_grid_value(SurfElev, 1, X, Y, sRanges);

            if( CheckBoxSubSurface == false )
                Zmin = raster_grid_value(SubSurfElev, 1, X, Y, bRanges);
            else
                Zmin = Zmax-(SubsurfaceFileName).toDouble();

            MeshDataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
            MeshDataFileTextStream<<index<<"\t";

            MeshDataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
            MeshDataFileTextStream.setRealNumberPrecision(20);
            MeshDataFileTextStream<<X<<"\t"; //<<setprecision(20)

            MeshDataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
            MeshDataFileTextStream.setRealNumberPrecision(20);
            MeshDataFileTextStream<<Y<<"\t"; //<<setprecision(20)

            MeshDataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
            MeshDataFileTextStream.setRealNumberPrecision(15);
            MeshDataFileTextStream<<Zmin<<"\t"; //<<setprecision(15)

            MeshDataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
            MeshDataFileTextStream.setRealNumberPrecision(15);
            MeshDataFileTextStream<<Zmax<<"\n"; //<<setprecision(15)
    }


    EleFile.close();
    NodeFile.close();
    NeighFile.close();
    MeshDataFile.close();

    ///////////////////////////////////////////////////////////////////////
    //ADDING INTERPOLATION OF ELEVATION FOR NODE INSERTED ON RIVER SEGMENTS
    ///////////////////////////////////////////////////////////////////////




    return 0;
}

