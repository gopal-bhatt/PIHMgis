#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <Qdir>


#include <qmath.h>

#include "riv_data_file.h"
#include "./0LibsShape/shapefil.h"

#define PI                      3.14159265359
#define distPt(p1, p2)          fabs(p1.x-p2.x)+fabs(p1.y-p2.y)
#define distXY(x1, y1, x2, y2)  fabs(x1-x2)+fabs(y1-y2)
#define distPtXY(p, x, y)       fabs(p.x-x)+fabs(p.y-y)


double SLOPE(Point p1, Point p2)
{
    double delX = p2.x - p1.x;
    double delY = delX==0?p2.y - p1.y + 0.0000001:p2.y - p1.y;

    if(delX<0.0 && delY>0.0)
        return 90 + (180.0/PI)*atan(fabs(delY)/fabs(delX));
    else if(delX<=0.0 && delY<=0.0)
        return 180 + (180.0/PI)*atan(fabs(delY)/fabs(delX));
    else if(delX>0.0 && delY<0.0)
        return -90 + (180.0/PI)*atan(fabs(delY)/fabs(delX));
    else
        return 0 + (180.0/PI)*atan(fabs(delY)/fabs(delX));

}


int IsEqualPoint( Point p1, Point p2 )
{
    if( p1.x == p2.x && p1.y == p2.y )
        return 1;
    else
        return 0;
}


int RiverFromTIN(QString RiverShpFileName, QString RiverDbfFileName, QString EleFileName, QString NodeFileName, QString NeighFileName, QString xRiverShpFileName, QString xRiverDbfFileName)
{
    QFile EleFile(EleFileName);
    if ( ! EleFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 34;
    QTextStream EleFileTextStream(&EleFile);

    QFile NodeFile(NodeFileName);
    if ( ! NodeFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 39;
    QTextStream NodeFileTextStream(&NodeFile);

    QFile NeighFile(NeighFileName);
    if ( ! NeighFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 44;
    QTextStream NeighFileTextStream(&NeighFile);

    SHPHandle RiverShpHandle = SHPOpen(qPrintable(RiverShpFileName), "rb");
    DBFHandle RiverDbfHandle = DBFOpen(qPrintable(RiverDbfFileName), "rb");

    if ( RiverShpHandle == NULL || RiverDbfHandle == NULL )
        return 51;

    SHPHandle xRiverShpHandle = SHPCreate(qPrintable(xRiverShpFileName), SHPT_ARC);
    DBFHandle xRiverDbfHandle = DBFCreate(qPrintable(xRiverDbfFileName));

    if ( xRiverShpHandle == NULL || xRiverDbfHandle == NULL )
        return 57;

    int LeftEle     = DBFAddField(xRiverDbfHandle, "LeftEle",     FTInteger, 10, 0);
    int RightEle    = DBFAddField(xRiverDbfHandle, "RightEle",    FTInteger, 10, 0);
    int FrmEleNode = DBFAddField(xRiverDbfHandle, "FrmEleNode", FTInteger, 10, 0);
    int ToEleNode   = DBFAddField(xRiverDbfHandle, "ToEleNode",   FTInteger, 10, 0);

    int TempInt;

    int NumNode;
    NodeFileTextStream >> NumNode;

    Point* node = new Point[NumNode+1];

    NodeFileTextStream >> TempInt; NodeFileTextStream >> TempInt; NodeFileTextStream >> TempInt;

    for(int i=1; i<=NumNode; i++)
    {
        NodeFileTextStream >> TempInt;
        NodeFileTextStream >> node[i].x;
        NodeFileTextStream >> node[i].y;
        NodeFileTextStream >> TempInt;
    }

    int NumEle;
    EleFileTextStream >> NumEle;

    int** element = new int*[NumEle+1];

    EleFileTextStream >> TempInt; EleFileTextStream >> TempInt;

    for(int i=1; i<=NumEle; i++)
    {
        element[i] = new int[3];

        EleFileTextStream >> TempInt;
        EleFileTextStream >> element[i][0];
        EleFileTextStream >> element[i][1];
        EleFileTextStream >> element[i][2];
    }

    int NumNeigh;
    NeighFileTextStream >> NumNeigh;

    int** neighbour = new int*[NumNeigh+1];

    NeighFileTextStream >> TempInt;

    for(int i=1; i<=NumNeigh; i++)
    {
        neighbour[i] = new int[3];

        NeighFileTextStream >> TempInt;
        NeighFileTextStream >> neighbour[i][0];
        NeighFileTextStream >> neighbour[i][1];
        NeighFileTextStream >> neighbour[i][2];
    }


    //int** neighNode = new int*[NumNode];
    int** nodeInEle      = new int*[NumNode+1]; //tells you : this (node present in which elements)
    int*  nodeInEleCount = new int[NumNode+1];

    for(int i=1; i<=NumNode; i++)
    {
        nodeInEle[i] = new int[20];
        nodeInEleCount[i] = 0;
    }

    for(int i=1; i<=NumEle; i++)
    {
        //cout<<i;
        for(int j=0; j<3; j++)
        {
            nodeInEle[element[i][j]][nodeInEleCount[element[i][j]]++] = i;
        }
    }


    //for(int i=0; i<nodeInEleCount[1]; i++)
    //    cout<<nodeInEle[1][i]<<" ";
    //cout<<"\n";


    int** neighNode     = new int*[NumNode+1]; //tells you which nodes are neighbours to i-th node
    int* neighNodeCount = new int[NumNode+1];

    for(int i=1; i<=NumNode; i++)
    {
        neighNode[i] = new int[100];
        neighNodeCount[i] = 0;
    }

    for(int i=1; i<=NumNode; i++)
    {
        for(int j=0; j<nodeInEleCount[i]; j++)
        {
            for(int k=0; k<3; k++)
            {
                if( i != element[nodeInEle[i][j]][k] )
                    neighNode[i][neighNodeCount[i]++] = element[nodeInEle[i][j]][k];
            }
        }
    }

    //for(int i=0; i<neighNodeCount[1]; i++)
    //    cout<<neighNode[1][i]<<" ";
    //cout<<"\n";

    //cout<<"dd ="<<distPt(node[8], node[3702])<<"\n";

    int FromTo[2];
    int LeftRight[2];

    int recordCount = DBFGetRecordCount(RiverDbfHandle);
    int record = 0;
    double X[2], Y[2], Z[2];
    Z[0] = 0.0; Z[1] = 0.0;
    Point pt1, pt2;
    int numPt;
    double oldDist, slope;

    for(int i=0; i<recordCount; i++)
    {
        SHPObject* shpObj = SHPReadObject(RiverShpHandle, i);
        pt1.x = shpObj->padfX[0];
        pt1.y = shpObj->padfY[0];
        pt2.x = shpObj->padfX[shpObj->nVertices-1];
        pt2.y = shpObj->padfY[shpObj->nVertices-1];
        slope = SLOPE(pt1, pt2);
        Point pt;
        int j;

        for(j=1; j<=NumNode; j++)
        {
            if(distPt(pt1, node[j]) < 0.001)
                break;
        }
        numPt = j;

        /*
        /////////////////
        for(j=1; j<=numNode; j++){
            if(distPt(pt2, node[j])<0.001)
                break;
        }
        cout<<"\npt2= "<<j<<" ("<<pt2.x<<","<<pt2.y<<") "<<"\n";
        //cout<<"slope= "<<slope<<"\n";
        ///////////////////
        */
        oldDist = distPt(node[numPt], pt2);
        //dist = oldDist+1;

        //cout<<"\npt1= "<<numPt<<" ("<<pt1.x<<","<<pt1.y<<") "<<"\n";
        while(distPt(pt2, node[numPt]) > 0.001)
        {
            /*
            cout<<"\n"<<numPt<<"\n";
            for(int ii=0; ii<neighNodeCount[numPt]; ii++)
                cout<<neighNode[numPt][ii]<<" ";
            cout<<"\n";
            */
            int j, k, l;
            for(j=0; j<neighNodeCount[numPt]; j++)
            {
                //cout<<"x= "<<node[numPt].x<<" y= "<<node[numPt].y<<"\n";
                //cout<<"x= "<<node[neighNode[numPt][j]].x<<" y= "<<node[neighNode[numPt][j]].y<<"\n";
                //cout<<"slope2= "<<SLOPE(node[numPt], node[neighNode[numPt][j]])<<"\n";
                //cout<<"del slope= "<<slope-SLOPE(node[numPt], node[neighNode[numPt][j]])<<"\n";
                //cout<<"="<<oldDist<<"\n";
                //cout<<"="<<distPt(node[neighNode[numPt][j]], pt2)<<"\n";
                if(fabs(slope-SLOPE(node[numPt], node[neighNode[numPt][j]])) < 0.001)
                    //if(oldDist>distPt(node[neighNode[numPt][j]], pt2))
                        break;
            }
            //cout<<numPt<<" "<<neighNode[numPt][j]<<"\n"; getchar(); getchar();

            X[0] = node[numPt].x;
            Y[0] = node[numPt].y;
            X[1] = node[neighNode[numPt][j]].x;
            Y[1] = node[neighNode[numPt][j]].y;
            FromTo[0]=numPt;
            FromTo[1]=neighNode[numPt][j];
            int m =0;
            for(k=0; k<nodeInEleCount[numPt]; k++)
            {
                for(l=0; l<nodeInEleCount[neighNode[numPt][j]]; l++)
                {
                    if(nodeInEle[numPt][k] == nodeInEle[neighNode[numPt][j]][l])
                        LeftRight[m++] = nodeInEle[numPt][k];
                }
            }
            SHPObject* newobj = SHPCreateSimpleObject(SHPT_ARC, 2, X, Y, Z);
            SHPWriteObject(xRiverShpHandle, -1, newobj);
            DBFWriteIntegerAttribute(xRiverDbfHandle, record, LeftEle,  LeftRight[0]);
            DBFWriteIntegerAttribute(xRiverDbfHandle, record, RightEle, LeftRight[1]);
            DBFWriteIntegerAttribute(xRiverDbfHandle, record, FrmEleNode, FromTo[0]);
            DBFWriteIntegerAttribute(xRiverDbfHandle, record, ToEleNode,   FromTo[1]);
            record++;

            numPt = neighNode[numPt][j];
            //cout<<numPt<<" "; //getchar(); getchar();
            oldDist = distPt(node[numPt], pt2);
        }
        //cout<<"\nend\n";//getchar(); getchar();
    }

    SHPClose(RiverShpHandle);
    DBFClose(RiverDbfHandle);
    SHPClose(xRiverShpHandle);
    DBFClose(xRiverDbfHandle);

    return 0;

}


int AddFID(QString RiverDbfFileName)
{

    DBFHandle RiverDbfHandle = DBFOpen(qPrintable(RiverDbfFileName), "rb");
    if ( RiverDbfHandle == NULL )
        return 283;

    int TempInt;
    int fieldCount  = DBFGetFieldCount(RiverDbfHandle);
    int recordCount = DBFGetRecordCount(RiverDbfHandle);

    QString TempDbfFileName;
    TempDbfFileName = QDir::homePath()+"/.PIHMgis/temp.dbf";
    DBFHandle TempDbfHandle = DBFCreate(qPrintable(TempDbfFileName));

    if ( TempDbfHandle == NULL )
        return 293;

    int width[1], decimals[1];
    char fieldName[20];
    DBFFieldType fieldType;

    int RivIDField;

    qDebug() << "Adding RivID Field ...";

    RivIDField = DBFAddField(TempDbfHandle, "RivID", FTInteger, 6, 0);

    qDebug() << "Adding Existing Fields ...";

    for (int i=0; i<fieldCount; i++)
    {
        fieldType = DBFGetFieldInfo(RiverDbfHandle, i, fieldName, width, decimals);
        TempInt = DBFAddField(TempDbfHandle, fieldName, fieldType, width[0], decimals[0]);
    }


    qDebug() << "Copying Existing Records ...";
    int iValue;
    double fValue;
    const char * cValue;
    for (int i=0; i<recordCount; i++)
    {
        for (int j=0; j<fieldCount; j++)
        {
            fieldType = DBFGetFieldInfo(RiverDbfHandle, j, fieldName, width, decimals);
            if(fieldType == FTString)
            {
                cValue = DBFReadStringAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteStringAttribute(TempDbfHandle, i, j+1, cValue);
            }
            else if(fieldType == FTInteger)
            {
                iValue = DBFReadIntegerAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, j+1, iValue);
            }
            else if(fieldType == FTDouble)
            {
                fValue = DBFReadDoubleAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteDoubleAttribute(TempDbfHandle, i, j+1, fValue);
            }
        }
        TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, 0, i+1);
    }
    DBFClose(RiverDbfHandle);
    DBFClose(TempDbfHandle);



    qDebug() << "Finalizing DBF File ...";

    QFile::remove(RiverDbfFileName);

    QFile::copy(TempDbfFileName, RiverDbfFileName);

    QFile::remove(TempDbfFileName);

    return 0;
}


int AddToFromNode( QString RiverShpFileName, QString RiverDbfFileName )
{
    SHPHandle RiverShpHandle = SHPOpen( qPrintable(RiverShpFileName), "rb");
    DBFHandle RiverDbfHandle = DBFOpen( qPrintable(RiverDbfFileName), "rb");

    if ( RiverShpHandle == NULL || RiverDbfHandle == NULL )
        return 365;

    QString TempDbfFileName;
    TempDbfFileName = QDir::homePath()+"/.PIHMgis/temp.dbf";
    DBFHandle TempDbfHandle = DBFCreate( qPrintable(TempDbfFileName) );

    if ( TempDbfHandle == NULL )
        return 372;

    int TempInt;

    int fieldCount  = DBFGetFieldCount(RiverDbfHandle);
    int recordCount = DBFGetRecordCount(RiverDbfHandle);

    // ** Copy Existing Record
    qDebug() << "Copying Existing Records ...";

    int width[1], decimals[1];
    char fieldName[20];
    DBFFieldType fieldType;

    for (int i=0; i<fieldCount; i++)
    {
        fieldType = DBFGetFieldInfo(RiverDbfHandle, i, fieldName, width, decimals);
        TempInt   = DBFAddField(TempDbfHandle, fieldName, fieldType, width[0], decimals[0]);
        //cout<<temp<<"\n";
    }

    int fromField = DBFAddField(TempDbfHandle, "FromNode", FTInteger, 6, 0); //cout<<"fromField= "<<fromField<<"\n";
    int toField   = DBFAddField(TempDbfHandle, "ToNode",   FTInteger, 6, 0); //cout<<"toField= "<<toField<<"\n";

    if ( fromField < 0 || toField < 0 )
        return 397;

    //temp = DBFAddField(TempDbfHandle, "FID", FTInteger, 6, 0);

    int iValue;
    double fValue;
    const char * cValue;
    for (int i=0; i<recordCount; i++)
    {
        for (int j=0; j<fieldCount; j++)
        {
            fieldType = DBFGetFieldInfo(RiverDbfHandle, j, fieldName, width, decimals);
            if(fieldType == FTString)
            {
                cValue  = DBFReadStringAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteStringAttribute(TempDbfHandle, i, j, cValue);
            }
            else if(fieldType == FTInteger)
            {
                iValue  = DBFReadIntegerAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, j, iValue);
            }
            else if(fieldType == FTDouble)
            {
                fValue  = DBFReadDoubleAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteDoubleAttribute(TempDbfHandle, i, j, fValue);
            }

            if ( TempInt == false )
                return 426;
        }
        //temp = DBFWriteIntegerAttribute(TempDbfHandle, i, fieldCount, i+1);
    }


    qDebug() << "Computing FromNode and ToNode ...";

    Point *nodes = new Point[recordCount*2];
    int ptCount = 0;

    for(int i=0; i<recordCount; i++)
    {
        SHPObject *obj = SHPReadObject(RiverShpHandle, i);
        Point TempPoint;
        for (int k=0; k<2; k++)
        {
            TempPoint.x = obj->padfX[k];
            TempPoint.y = obj->padfY[k];
            int j = ptCount-1;
            while( IsEqualPoint(TempPoint, nodes[j]) != 1 && j >= 0 )
                j--;
            if(j == -1)
            {
                nodes[ptCount].x=obj->padfX[k];
                nodes[ptCount].y=obj->padfY[k];
                ptCount++;

                if(k == 0)
                    TempInt = DBFWriteIntegerAttribute(TempDbfHandle,i,fromField,ptCount);
                else
                    TempInt = DBFWriteIntegerAttribute(TempDbfHandle,i,toField,ptCount);
            }
            else
            {
                if(k == 0)
                    TempInt = DBFWriteIntegerAttribute(TempDbfHandle,i,fromField,j+1);
                else
                    TempInt = DBFWriteIntegerAttribute(TempDbfHandle,i,toField,j+1);
            }

            if ( TempInt == false )
                return 426;
        }
    }

    SHPClose(RiverShpHandle);
    DBFClose(RiverDbfHandle);
    DBFClose(TempDbfHandle);


    qDebug() << "Finalizing DBF File ...";

    QFile::remove(RiverDbfFileName);

    QFile::copy(TempDbfFileName, RiverDbfFileName);

    QFile::remove(TempDbfFileName);

    return 0;

}



int AddStrahlerStreamOrder( QString RiverShpFileName, QString RiverDbfFileName )
{
    SHPHandle RiverShpHandle = SHPOpen(qPrintable(RiverShpFileName), "rb");
    DBFHandle RiverDbfHandle = DBFOpen(qPrintable(RiverDbfFileName), "rb");

    qDebug() << "Checking Required Fields ... ";

    int fromField = DBFGetFieldIndex(RiverDbfHandle, "FromNode");
    if (fromField == -1)
    {
        qDebug() << "Error: FromNode field does *not* exist";
        return 513;
    }

    int toField = DBFGetFieldIndex(RiverDbfHandle, "ToNode");
    if (toField == -1)
    {
        qDebug() << "Error: ToNode field does *not* exist";
        return 520;
    }


    QString TempDbfFileName;
    TempDbfFileName = QDir::homePath()+"/.PIHMgis/temp.dbf";
    DBFHandle TempDbfHandle = DBFCreate( qPrintable(TempDbfFileName) );

    int TempInt;

    int fieldCount  = DBFGetFieldCount(RiverDbfHandle);
    int recordCount = DBFGetRecordCount(RiverDbfHandle);


    // ** Copy Existing Record
    qDebug() << "Copying Existing Records ...";

    int width[1], decimals[1];
    char fieldName[20];
    DBFFieldType fieldType;

    for (int i=0; i<fieldCount; i++)
    {
        fieldType = DBFGetFieldInfo(RiverDbfHandle, i, fieldName, width, decimals);
        TempInt   = DBFAddField(TempDbfHandle, fieldName, fieldType, width[0], decimals[0]);
    }


    int StrahlerStreamOrder = DBFAddField(TempDbfHandle, "StrOrder", FTInteger, 6, 0);
    //cout<<"StrahlerStreamOrder= "<<StrahlerStreamOrder<<"\n";

    //temp = DBFAddField(newdbf, "FID", FTInteger, 6, 0);


    int iValue;
    double fValue;
    const char * cValue;
    for (int i=0; i<recordCount; i++)
    {
        for (int j=0; j<fieldCount; j++)
        {
            fieldType = DBFGetFieldInfo(RiverDbfHandle, j, fieldName, width, decimals);
            if(fieldType == FTString)
            {
                cValue = DBFReadStringAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteStringAttribute(TempDbfHandle, i, j, cValue);
            }
            else if(fieldType == FTInteger)
            {
                iValue = DBFReadIntegerAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, j, iValue);
            }
            else if(fieldType == FTDouble)
            {
                fValue = DBFReadDoubleAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteDoubleAttribute(TempDbfHandle, i, j, fValue);
            }
        }
        //temp = DBFWriteIntegerAttribute(newdbf, i, fieldCount, i+1);
    }



    qDebug() << "Computing Strahler Stream Order ...";

    int (*toArray)[5] = new int[2*recordCount][5];
    int *count = new int [2*recordCount];

    for (int i=0; i<2*recordCount; i++)
        count[i]=0;
    //count[2*recordCount]={0};

    for(int i=0; i<recordCount; i++)
    {
        TempInt = DBFReadIntegerAttribute(RiverDbfHandle, i, toField);
        //cout<<"temp = "<<temp<<"\n";
        //cout<<"count= "<<count[temp]<<"\n";
        if( DBFReadIntegerAttribute(RiverDbfHandle,toArray[TempInt][count[TempInt]-1],fromField) != DBFReadIntegerAttribute(RiverDbfHandle,i,fromField))
            toArray[TempInt][count[TempInt]++]=i;
    }

    for(int i=recordCount-1; i>=0; i--)
    {
        TempInt = DBFReadIntegerAttribute(RiverDbfHandle, i, toField);
        //cout<<"temp = "<<temp<<"\n";
        //cout<<"count= "<<count[temp]<<"\n";
        if( DBFReadIntegerAttribute(RiverDbfHandle,toArray[TempInt][count[TempInt]-1],fromField) != DBFReadIntegerAttribute(RiverDbfHandle,i,fromField))
            toArray[TempInt][count[TempInt]++]=i;
    }

    int UPDATE = 1;
    int loopCount = 0;
    int max1, max2, from, to, so;

    while(UPDATE == 1)
    {
        UPDATE = 0;
        loopCount++;
        //cout<<"loop Count= "<<loopCount<<"\n";

        for(int i=0; i<recordCount; i++)
        {
            int TempInt = DBFReadIntegerAttribute(TempDbfHandle, i, fromField);
            if(count[TempInt] == 0)
            {
                //
                //cout <<"i= "<<i<<" SO =1\n";getchar();
                DBFWriteIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder, 1);
                //cout<<"Wrote = "<<DBFReadIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder)<<"\n";
            }
            else if(count[TempInt] == 1)
            {
                TempInt = DBFReadIntegerAttribute(TempDbfHandle, i, fromField);
                //cout<<temp<<"\t";
                TempInt = toArray[TempInt][0];
                //cout<<temp<<"\n";//getchar();
                //cout <<"i= "<<i<<" SO= "<<DBFReadIntegerAttribute(TempDbfHandle, temp, StrahlerStreamOrder);getchar();
                if(DBFReadIntegerAttribute(TempDbfHandle, TempInt, StrahlerStreamOrder) != DBFReadIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder))
                    UPDATE = 1;
                DBFWriteIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder, DBFReadIntegerAttribute(TempDbfHandle, TempInt, StrahlerStreamOrder));
            }
            else
            {
                from = DBFReadIntegerAttribute(TempDbfHandle, i, fromField);
                max1=0; max2=0;
                //cout<<"i = "<<i<<"\n";
                for(int j=0; j<count[TempInt]; j++)
                {
                    to = toArray[from][j]; //cout<<"  to = "<<to<<"\t";
                    so = DBFReadIntegerAttribute(TempDbfHandle, to, StrahlerStreamOrder);// cout<<"  so = "<<so<<"\n";
                    if(so >= max1)
                    {
                        max2=max1;
                        max1=so;
                    }
                }
                if(max1 == max2)
                {
                    if(DBFReadIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder) != max1+1)
                        UPDATE = 1;
                    DBFWriteIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder, max1+1);
                }
                else
                {
                    if(DBFReadIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder) != max1)
                        UPDATE = 1;
                    DBFWriteIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder, max1);
                }
            }

            //if(DBFReadIntegerAttribute(TempDbfHandle, i, StrahlerStreamOrder) != DBFReadIntegerAttribute(TempDbfHandle, i, DBFGetFieldIndex(TempDbfHandle, "SO_VALUE"))){
            //{getchar();getchar();}
        }
    }

    SHPClose(RiverShpHandle);
    DBFClose(RiverDbfHandle);
    DBFClose(TempDbfHandle);



    qDebug() << "Finalizing DBF File ...";

    QFile::remove(RiverDbfFileName);

    QFile::copy(TempDbfFileName, RiverDbfFileName);

    QFile::remove(TempDbfFileName);

    return 0;

}



int AddDownSegment(QString RiverDbfFileName, QString BoundaryCondition)
{
    int TempInt;

    DBFHandle RiverDbfHandle = DBFOpen(qPrintable(RiverDbfFileName), "rb");

    if ( RiverDbfHandle == NULL )
        return 692;

    qDebug() << "Checking Requirent Fields ...";

    int RivID     = DBFGetFieldIndex(RiverDbfHandle, "RivID");
    if( RivID == -1)
    {
        qDebug() << "Error: RivID field does *not* exist";
        return 695;
    }

    int FROM_NODE = DBFGetFieldIndex(RiverDbfHandle, "FromNode");
    if( FROM_NODE == -1)
    {
        qDebug() << "Error: FromNode field does *not* exist";
        return 704;
    }

    int TO_NODE   = DBFGetFieldIndex(RiverDbfHandle, "ToNode");
    if( TO_NODE == -1)
    {
        qDebug() << "Error: ToNode field does *not* exist";
        return 711;
    }


    QString TempDbfFileName;
    TempDbfFileName = QDir::homePath()+"/.PIHMgis/temp.dbf";
    DBFHandle TempDbfHandle = DBFCreate( qPrintable(TempDbfFileName) );

    if ( TempDbfHandle == NULL )
        return 723;

    int fieldCount  = DBFGetFieldCount(RiverDbfHandle);
    int recordCount = DBFGetRecordCount(RiverDbfHandle);


    qDebug() << "Copying Existing Records ...";

    int width[1], decimals[1];
    char fieldName[20];
    DBFFieldType fieldType;

    for (int i=0; i<fieldCount; i++)
    {
        fieldType = DBFGetFieldInfo(RiverDbfHandle, i, fieldName, width, decimals);
        TempInt   = DBFAddField(TempDbfHandle, fieldName, fieldType, width[0], decimals[0]);
    }

    int DownSegmt = DBFAddField(TempDbfHandle, "DownSegmt", FTInteger, 6, 0);

    if ( DownSegmt < 0 )
        return 744;



    int iValue;
    double fValue;
    const char * cValue;
    for (int i=0; i<recordCount; i++)
    {
        for (int j=0; j<fieldCount; j++)
        {
            fieldType = DBFGetFieldInfo(RiverDbfHandle, j, fieldName, width, decimals);
            if(fieldType == FTString)
            {
                cValue = DBFReadStringAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteStringAttribute(TempDbfHandle, i, j, cValue);
            }
            else if(fieldType == FTInteger)
            {
                iValue = DBFReadIntegerAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, j, iValue);
            }
            else if(fieldType == FTDouble)
            {
                fValue = DBFReadDoubleAttribute(RiverDbfHandle, i, j);
                TempInt = DBFWriteDoubleAttribute(TempDbfHandle, i, j, fValue);
            }
        }
        //temp = DBFWriteIntegerAttribute(newdbf, i, fieldCount, i+1);
    }


    //cout<<"field number= "<<TempInt<<"\n";

    qDebug() << "Computing Down Segments Records ...";

    int j;
    for(int i=0; i<recordCount; i++)
    {
        //cout<<"\n"<<"i = "<<i<<"\n";
        j=0;
        while((DBFReadIntegerAttribute(RiverDbfHandle,i,TO_NODE) != DBFReadIntegerAttribute(RiverDbfHandle,j,FROM_NODE) && j<recordCount))
        {
            //cout<<j<<" "<<DBFReadIntegerAttribute(dbf,i,TNode)<<" "<<DBFReadIntegerAttribute(dbf,j,FNode)<<"\n";
            j++;
            //cout<<"done\n";
        }
        if(j<recordCount)
        {
            //cout<<"here "<<fieldCount <<" " <<DBFReadIntegerAttribute(dbf, j, IDIndex)<<"\n";
            TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, fieldCount, DBFReadIntegerAttribute(RiverDbfHandle, j, RivID));
            //cout<<"After push\n";
        }
        else
        {
            int BC = BoundaryCondition.toInt();
            TempInt = DBFWriteIntegerAttribute(TempDbfHandle, i, fieldCount, BC);
        }
    }

    DBFClose(RiverDbfHandle);
    DBFClose(TempDbfHandle);
    //cout<<"here2";


    qDebug() << "Finalizing DBF File ...";

    QFile::remove(RiverDbfFileName);

    QFile::copy(TempDbfFileName, RiverDbfFileName);

    QFile::remove(TempDbfFileName);

    return 0;

}



int Riv_File( QString RiverDbfFileName, QString RivDataFileName )
{
    DBFHandle RiverDbfHandle = DBFOpen(qPrintable(RiverDbfFileName), "rb");

    if ( RiverDbfHandle == NULL )
        return 827;

    qDebug() << "Checking Requirent Fields ...";

    int RivID     = DBFGetFieldIndex(RiverDbfHandle, "RivID");
    if( RivID == -1)
    {
        qDebug() << "Error: RivID field does *not* exist";
        return 835;
    }

    int LeftEle     = DBFGetFieldIndex(RiverDbfHandle, "LeftEle");
    if( LeftEle == -1)
    {
        qDebug() << "Error: LeftEle field does *not* exist";
        return 842;
    }

    int RightEle     = DBFGetFieldIndex(RiverDbfHandle, "RightEle");
    if( RightEle == -1)
    {
        qDebug() << "Error: RightEle field does *not* exist";
        return 849;
    }

    int FrmEleNode     = DBFGetFieldIndex(RiverDbfHandle, "FrmEleNode");
    if( FrmEleNode == -1)
    {
        qDebug() << "Error: FrmEleNode field does *not* exist";
        return 856;
    }

    int ToEleNode     = DBFGetFieldIndex(RiverDbfHandle, "ToEleNode");
    if( ToEleNode == -1)
    {
        qDebug() << "Error: ToEleNode field does *not* exist";
        return 863;
    }

    int DownSegmt     = DBFGetFieldIndex(RiverDbfHandle, "DownSegmt");
    if( DownSegmt == -1)
    {
        qDebug() << "Error: DownSegmt field does *not* exist";
        return 870;
    }

    int StrOrder     = DBFGetFieldIndex(RiverDbfHandle, "StrOrder");
    if( StrOrder == -1)
    {
        qDebug() << "Error: StrOrder field does *not* exist";
        return 877;
    }

    QFile RivDataFile(RivDataFileName);
    if ( ! RivDataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 882;
    QTextStream RivDataFileTextStream(&RivDataFile);

    int NumRivSeg = DBFGetRecordCount( RiverDbfHandle );
    RivDataFileTextStream << NumRivSeg << "\n";

    int Order;
    int maxOrder = -1;

    for (int c=0; c<NumRivSeg; c++)
    {
        RivDataFileTextStream << DBFReadIntegerAttribute(RiverDbfHandle, c, RivID)      <<"\t";
        RivDataFileTextStream << DBFReadIntegerAttribute(RiverDbfHandle, c, FrmEleNode) <<"\t";
        RivDataFileTextStream << DBFReadIntegerAttribute(RiverDbfHandle, c, ToEleNode)  <<"\t";
        RivDataFileTextStream << DBFReadIntegerAttribute(RiverDbfHandle, c, DownSegmt)  <<"\t";
        RivDataFileTextStream << DBFReadIntegerAttribute(RiverDbfHandle, c, LeftEle)    <<"\t";
        RivDataFileTextStream << DBFReadIntegerAttribute(RiverDbfHandle, c, RightEle)   <<"\t";
        Order = DBFReadIntegerAttribute(RiverDbfHandle, c, StrOrder);
        RivDataFileTextStream << Order <<"\t"; //Shape
        RivDataFileTextStream << Order <<"\t"; //Material
        RivDataFileTextStream << Order <<"\t"; //IC
        RivDataFileTextStream << "0"   <<"\t"; //BC
        RivDataFileTextStream << "0"   <<"\n"; //Res

        if(maxOrder < Order)
            maxOrder = Order;
    }

    RivDataFileTextStream << "Shape\t" << maxOrder << "\n";
    for(int c=1; c<=maxOrder; c++)
    {
        RivDataFileTextStream << c << "\t" << //index
            0.5*c << "\t" << //depth
            "1"   << "\t" << //interpOrder
            2.0*c << "\n"; //width
    }

    RivDataFileTextStream << "Material\t" << maxOrder << "\n";
    for(int c=1; c<=maxOrder; c++)
    {
        RivDataFileTextStream<< c << "\t" <<    //index
            "4.63E-07" << "\t" <<               //n
            "0.6"      << "\t" <<               //cwr
            "0.1"      << "\t" <<               //Kh
            "1.0"      << "\t" <<               //Kv
            "1"        << "\n";                 //BedDepth
    }

    RivDataFileTextStream << "IC\t" << maxOrder << "\n";
    for(int c=1; c<=maxOrder; c++)
    {
        RivDataFileTextStream << c << "\t" <<   //index
            0.25*c << "\n";                     //rivIC
    }

    RivDataFileTextStream<<"BC\t"      <<"0"     <<"\n";
    RivDataFileTextStream<<"RES\t"     <<"0"     <<"\n";

    RivDataFile.close();

    return 0;

}


int riv_data_file( QString EleFileName, QString NodeFileName, QString NeighFileName,
                   QString RiverShpFileName, QString RiverDbfFileName,
                   QString xRiverShpFileName, QString xRiverDbfFileName,
                   QString BoundaryCondition,
                   QString RivDataFileName
                   )
{

    int ReturnFlag;

    qDebug() << "Extracting River Data From TINs ...";
    ReturnFlag = RiverFromTIN( RiverShpFileName, RiverDbfFileName, EleFileName, NodeFileName, NeighFileName, xRiverShpFileName, xRiverDbfFileName);

    if ( ReturnFlag != 0 )
        return ReturnFlag;
    else
        qDebug() << "Extracting River Data From TINs ... Complete";


    // ** River IDs
    qDebug() << "Adding River IDs ...";
    ReturnFlag = AddFID( xRiverDbfFileName );

    if ( ReturnFlag != 0 )
        return ReturnFlag;
    else
        qDebug() << "Adding River IDs ... Complete";


    // ** River FromNode and ToNode
    qDebug() << "Processing River FromNode & ToNodes ...";
    ReturnFlag = AddToFromNode( xRiverShpFileName, xRiverDbfFileName );

    if ( ReturnFlag != 0 )
        return ReturnFlag;
    else
        qDebug() << "Processing River FromNode & ToNodes ... Complete";


    // ** Strahler Stream Order
    qDebug() << "Processing Strahler Stream Order ...";
    ReturnFlag = AddStrahlerStreamOrder( xRiverShpFileName, xRiverDbfFileName );

    if ( ReturnFlag != 0 )
        return ReturnFlag;
    else
        qDebug() << "Processing Strahler Stream Order ... Complete";


    // ** Down Segment
    qDebug() << "Processing Down Segment ...";
    ReturnFlag = AddDownSegment(xRiverDbfFileName, BoundaryCondition );

    if ( ReturnFlag != 0 )
        return ReturnFlag;
    else
        qDebug() << "Processing Down Segment ... Complete";


    // ** Riv File
    qDebug() << "Processing Riv File ...";
    ReturnFlag = Riv_File( xRiverDbfFileName, RivDataFileName );

    if ( ReturnFlag != 0 )
        return ReturnFlag;
    else
        qDebug() << "Processing Riv File ... Complete";



    return 0;
}
