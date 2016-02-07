#include <iomanip>
#include <math.h>

#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>

#define PI 3.14
#define distPt(p1, p2) fabs(p1.x-p2.x)+fabs(p1.y-p2.y)
#define distXY(x1, y1, x2, y2) fabs(x1-x2)+fabs(y1-y2)
#define distPtXY(p, x, y) fabs(p.x-x)+fabs(p.y-y)
//#define SLOPE(p1, p2) (180.0/PI)*atan((p2.y-p1.y+.0000001)/(p2.x-p1.x))


#include "interpolate_river_nodes_elev.h"
#include "./../0LibsShape/shapefil.h"

using namespace std;

/*
typedef struct{
	double x;
	double y;
}Point;*/

double SLOPEa(Point p1, Point p2)
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



int interpolate_river_nodes_elev(QString shpFileName, QString dbfFileName, QString EleFileName, QString NodeFileName, QString NeighFileName, QString OldMeshFileName, QString NewMeshFileName, QString DecompRiverFileNameShp, QString DecompRiverFileNameDbf)
{
    QFile EleFile(EleFileName);
    if ( ! EleFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 47;
    QTextStream EleFileTextStream(&EleFile);

    QFile NodeFile(NodeFileName);
    if ( ! NodeFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 52;
    QTextStream NodeFileTextStream(&NodeFile);

    QFile NeighFile(NeighFileName);
    if ( ! NeighFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 57;
    QTextStream NeighFileTextStream(&NeighFile);

    QFile OldMeshFile(OldMeshFileName);
    if ( ! OldMeshFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 62;
    QTextStream OldMeshFileTextStream(&OldMeshFile);

    QFile NewMeshFile(NewMeshFileName);
    if ( ! NewMeshFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 68;
    QTextStream NewMeshFileTextStream(&NewMeshFile);


    SHPHandle shp = SHPOpen(qPrintable(shpFileName), "rb");
    DBFHandle dbf = DBFOpen(qPrintable(dbfFileName), "rb");

    if ( shp == NULL || dbf == NULL )
        return 75;

    SHPHandle newshp = SHPCreate(qPrintable(DecompRiverFileNameShp), SHPT_ARC);
    DBFHandle newdbf = DBFCreate(qPrintable(DecompRiverFileNameDbf));

    if ( newshp == NULL || newdbf == NULL )
        return 81;

	int left = DBFAddField(newdbf, "LeftEle", FTInteger, 10, 0);
	int right= DBFAddField(newdbf, "RightEle", FTInteger, 10, 0);

    if ( left == -1 || right == -1 )
        return 87;

	int temp;
	
    int NumNode;
    NodeFileTextStream >> NumNode;
    Point* node = new Point[NumNode+1];
    NodeFileTextStream >> temp; NodeFileTextStream >> temp; NodeFileTextStream >> temp;
    for(int i=1; i<=NumNode; i++)
    {
        NodeFileTextStream >> temp;
        NodeFileTextStream >> node[i].x;
        NodeFileTextStream >> node[i].y;
        NodeFileTextStream >> temp;
	}
	
    int NumEle;
    EleFileTextStream >> NumEle;
    int** element = new int*[NumEle+1];
    EleFileTextStream >> temp; EleFileTextStream >> temp;
    for(int i=1; i<=NumEle; i++)
    {
		element[i] = new int[3];
        EleFileTextStream >> temp;
        EleFileTextStream >> element[i][0];
        EleFileTextStream >> element[i][1];
        EleFileTextStream >> element[i][2];
	}
	
    int NumNeigh;
    NeighFileTextStream >> NumNeigh;
    int** neighbour = new int*[NumNeigh+1];
    NeighFileTextStream >> temp;
    for(int i=1; i<=NumNeigh; i++)
    {
		neighbour[i] = new int[3];
        NeighFileTextStream >> temp;
        NeighFileTextStream >> neighbour[i][0];
        NeighFileTextStream >> neighbour[i][1];
        NeighFileTextStream >> neighbour[i][2];
	}

    int RIV_NumEle, RIV_NumNode;
    OldMeshFileTextStream >> RIV_NumEle;
    OldMeshFileTextStream >> RIV_NumNode;
    NewMeshFileTextStream << RIV_NumEle << "\t" << RIV_NumNode;

    QString RIV_line;
    for(int RIV_i=0; RIV_i<RIV_NumEle+1; RIV_i++)
    {
        RIV_line = OldMeshFileTextStream.readLine();
        NewMeshFileTextStream << RIV_line << "\n";
		////cout<<RIV_line<<"\n"; 
	}
	//getchar(); getchar();

    double** RIV_para = new double*[RIV_NumNode+1];
    int RIV_dummy;
    for(int RIV_i=1; RIV_i<=RIV_NumNode; RIV_i++)
    {
		RIV_para[RIV_i]=new double[4];
        OldMeshFileTextStream >> RIV_dummy;
		////cout<<RIV_dummy<<"\t";
        for(int RIV_j=0; RIV_j<4; RIV_j++)
        {
            OldMeshFileTextStream >> RIV_para[RIV_i][RIV_j];
		}
	}

    //int** neighNode = new int*[NumNode];
    int** nodeInEle = new int*[NumNode+1]; //tells you : this (node present in which elements)
    int* nodeInEleCount = new int[NumNode+1];
    for(int i=1; i<=NumNode; i++)
    {
		nodeInEle[i] = new int[20];
		nodeInEleCount[i]=0;
	}

    for(int i=1; i<=NumEle; i++)
    {
		//cout<<i;
        for(int j=0; j<3; j++)
        {
			nodeInEle[element[i][j]][nodeInEleCount[element[i][j]]++] = i;
		}
	}
	/*
	for(int i=0; i<nodeInEleCount[1]; i++)
		cout<<nodeInEle[1][i]<<" ";
	cout<<"\n";
	*/
    int** neighNode = new int*[NumNode+1]; //tells you which nodes are neighbours to i-th node
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
                if(i != element[nodeInEle[i][j]][k])
					neighNode[i][neighNodeCount[i]++]=element[nodeInEle[i][j]][k];
			}
		}
	}
	/*
	for(int i=0; i<neighNodeCount[1]; i++)
		cout<<neighNode[1][i]<<" ";
	cout<<"\n";
	*/
	//cout<<"dd ="<<distPt(node[8], node[3702])<<"\n";
	int LeftRight[2]; // To store left and right element #
	int recordCount = DBFGetRecordCount(dbf);
	int record = 0;
	double X[2], Y[2], Z[2];
	Z[0] = 0.0; Z[1] = 0.0;
	Point pt1, pt2;
	int numPt;
	double oldDist, slope;

	double RIV_dist;
	int RIV_numPt1, RIV_numPt2;
    for(int i=0; i<recordCount; i++)
    {
		SHPObject* shpObj = SHPReadObject(shp, i);
		pt1.x = shpObj->padfX[0];
		pt1.y = shpObj->padfY[0];
		pt2.x = shpObj->padfX[shpObj->nVertices-1]; // nVertices = 2 
		pt2.y = shpObj->padfY[shpObj->nVertices-1];
		slope = SLOPEa(pt1, pt2);

		
		Point pt; int Val;
        for(int j=1; j<=NumNode; j++)
        {
			Val=j; //??
			if(distPt(pt1, node[j])<0.001)
				break;
		}
		numPt = Val;//??j;

		RIV_numPt1 = Val; //??j;
        for(int j=1; j<=NumNode; j++){
			Val=j; //??
			if(distPt(pt2, node[j])<0.001)
				break;
		}
		RIV_numPt2 = Val; //??j;
		
        if(RIV_para[RIV_numPt1][3]<RIV_para[RIV_numPt2][3])
        {
            qDebug() <<"\nSegment Number "<<i<<" Node# "<<RIV_numPt1<<","<<RIV_numPt2<<":"<<RIV_para[RIV_numPt1][3]-RIV_para[RIV_numPt2][3]<<"\n";
		}
		/*
		/////////////////
        for(int j=1; j<=NumNode; j++){
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
        while( distPt(pt2, node[numPt]) > 0.001 )
        {
			/*
			cout<<"\n"<<numPt<<"\n";
			for(int ii=0; ii<neighNodeCount[numPt]; ii++)
				cout<<neighNode[numPt][ii]<<" ";
			cout<<"\n";
			*/
            int j, k, l;
            bool found; found = false;
            for(j=0; j<neighNodeCount[numPt]; j++)
            {
				//cout<<"x= "<<node[numPt].x<<" y= "<<node[numPt].y<<"\n";
				//cout<<"x= "<<node[neighNode[numPt][j]].x<<" y= "<<node[neighNode[numPt][j]].y<<"\n";
				//cout<<"slope2= "<<SLOPEa(node[numPt], node[neighNode[numPt][j]])<<"\n";
				//cout<<"del slope= "<<slope-SLOPEa(node[numPt], node[neighNode[numPt][j]])<<"\n";
				//cout<<"="<<oldDist<<"\n";
				//cout<<"="<<distPt(node[neighNode[numPt][j]], pt2)<<"\n";
                if(fabs(slope-SLOPEa(node[numPt], node[neighNode[numPt][j]])) < 0.01)
                {
					//if(oldDist>distPt(node[neighNode[numPt][j]], pt2))
                    found = true;
                    break;
                }
			}
			//cout<<numPt<<" "<<neighNode[numPt][j]<<"\n"; getchar(); getchar();
			
            if ( found == false )
            {
                qDebug() << "Split River File Nodes Did *NOT* Match With The Mesh Nodes\n";
                qDebug() << "Perhaps River File Was Edited But Not Used In Merge Vector Layers ...\n\n";
                return 290;
            }

			RIV_para[neighNode[numPt][j]][3]=((distPt(pt1,node[neighNode[numPt][j]]))/(distPt(pt1,pt2)))*(RIV_para[RIV_numPt2][3]-RIV_para[RIV_numPt1][3])+RIV_para[RIV_numPt1][3];

			X[0] = node[numPt].x;
			Y[0] = node[numPt].y;
			X[1] = node[neighNode[numPt][j]].x;
			Y[1] = node[neighNode[numPt][j]].y;
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
            if ( SHPWriteObject(newshp, -1, newobj) < 0 )
                return 311;
            if ( ! DBFWriteIntegerAttribute(newdbf, record, left, LeftRight[0]) )
                return 313;
            if ( ! DBFWriteIntegerAttribute(newdbf, record, right, LeftRight[1]) )
                return 315;
			record++;
			
			numPt = neighNode[numPt][j];
			//cout<<numPt<<" "; //getchar(); getchar();
			oldDist = distPt(node[numPt], pt2);
		}
		//cout<<"\nend\n";//getchar(); getchar();
	}

    for(int RIV_i=1; RIV_i<=RIV_NumNode; RIV_i++)
    {
        NewMeshFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        NewMeshFileTextStream << RIV_i << "\t";

        NewMeshFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        NewMeshFileTextStream.setRealNumberPrecision(20);
        NewMeshFileTextStream << RIV_para[RIV_i][0] << "\t"; // << setprecision(20)

        NewMeshFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        NewMeshFileTextStream.setRealNumberPrecision(20);
        NewMeshFileTextStream << RIV_para[RIV_i][1] << "\t"; // << setprecision(20)

        NewMeshFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        NewMeshFileTextStream.setRealNumberPrecision(15);
        NewMeshFileTextStream << RIV_para[RIV_i][2] << "\t"; // << setprecision(15)

        NewMeshFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        NewMeshFileTextStream.setRealNumberPrecision(15);
        NewMeshFileTextStream << RIV_para[RIV_i][3] << "\n"; // << setprecision(15)
	}

	SHPClose(shp);
	DBFClose(dbf);
	SHPClose(newshp);
	DBFClose(newdbf);

    EleFile.close();
    NodeFile.close();
    NeighFile.close();
    OldMeshFile.close();
    NewMeshFile.close();
		

    return 0;
	//system("PAUSE");
}
