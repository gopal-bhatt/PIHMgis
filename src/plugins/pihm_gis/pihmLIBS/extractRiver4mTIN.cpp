#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

#define PI 3.14
#define distPt(p1, p2) fabs(p1.x-p2.x)+fabs(p1.y-p2.y)
#define distXY(x1, y1, x2, y2) fabs(x1-x2)+fabs(y1-y2)
#define distPtXY(p, x, y) fabs(p.x-x)+fabs(p.y-y)
//#define SLOPE(p1, p2) (180.0/PI)*atan((p2.y-p1.y+.0000001)/(p2.x-p1.x))



#include "shapefil.h"

using namespace std;

typedef struct{
	double x;
	double y;
}Point;

double SLOPE(Point p1, Point p2){
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

void extractRiver4mTIN(const char* shpFileName, const char* dbfFileName, const char* eleFileName, const char* nodeFileName, const char* neighFileName, const char *newshpFileName, const char *newdbfFileName){
	ifstream eleFile, nodeFile, neighFile;
	eleFile.open(eleFileName);
	nodeFile.open(nodeFileName);
	neighFile.open(neighFileName);

	SHPHandle shp = SHPOpen(shpFileName, "rb");
	DBFHandle dbf = DBFOpen(dbfFileName, "rb");

	SHPHandle newshp = SHPCreate(newshpFileName, SHPT_ARC);
	DBFHandle newdbf = DBFCreate(newdbfFileName);

	int left = DBFAddField(newdbf, "LeftEle", FTInteger, 10, 0);
	int right= DBFAddField(newdbf, "RightEle", FTInteger, 10, 0);
	int fromTriNode = DBFAddField(newdbf, "FromTriNode", FTInteger, 10, 0);
	int toTriNode   = DBFAddField(newdbf, "ToTriNode",   FTInteger, 10, 0);
	int temp;
	
	int numNode;
	nodeFile>>numNode;
	Point* node = new Point[numNode+1];
	nodeFile>>temp; nodeFile>>temp; nodeFile>>temp;
	for(int i=1; i<=numNode; i++){
		nodeFile>>temp;
		nodeFile >> node[i].x;
		nodeFile >> node[i].y;
		nodeFile>>temp;
	}
	
	int numEle;
	eleFile>>numEle;
	int** element = new int*[numEle+1];
	eleFile>>temp; eleFile>>temp;
	for(int i=1; i<=numEle; i++){
		element[i] = new int[3];
		eleFile>>temp;
		eleFile>>element[i][0];
		eleFile>>element[i][1];
		eleFile>>element[i][2];
	}
	
	int numNeigh;
	neighFile>>numNeigh;
	int** neighbour = new int*[numNeigh+1];
	neighFile>>temp;
	for(int i=1; i<=numNeigh; i++){
		neighbour[i] = new int[3];
		neighFile>>temp;
		neighFile>>neighbour[i][0];
		neighFile>>neighbour[i][1];
		neighFile>>neighbour[i][2];
	}

	
	//int** neighNode = new int*[numNode];
	int** nodeInEle = new int*[numNode+1]; //tells you : this (node present in which elements)
	int* nodeInEleCount = new int[numNode+1];
	for(int i=1; i<=numNode; i++){
		nodeInEle[i] = new int[20];
		nodeInEleCount[i]=0;
	}

	for(int i=1; i<=numEle; i++){
		//cout<<i;
		for(int j=0; j<3; j++){
			nodeInEle[element[i][j]][nodeInEleCount[element[i][j]]++] = i;
		}
	}
	/*
	for(int i=0; i<nodeInEleCount[1]; i++)
		cout<<nodeInEle[1][i]<<" ";
	cout<<"\n";
	*/
	int** neighNode = new int*[numNode+1]; //tells you which nodes are neighbours to i-th node
	int* neighNodeCount = new int[numNode+1];
	for(int i=1; i<=numNode; i++){
		neighNode[i] = new int[100];
		neighNodeCount[i] = 0;
	}
	
	for(int i=1; i<=numNode; i++){
		for(int j=0; j<nodeInEleCount[i]; j++){
			for(int k=0; k<3; k++){
				if(i!=element[nodeInEle[i][j]][k])
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
	int FromTo[2];
	int LeftRight[2];
	
	int recordCount = DBFGetRecordCount(dbf);
	int record = 0;
	double X[2], Y[2], Z[2];
	Z[0] = 0.0; Z[1] = 0.0;
	Point pt1, pt2;
	int numPt;
	double oldDist, slope;
	for(int i=0; i<recordCount; i++){
		SHPObject* shpObj = SHPReadObject(shp, i);
		pt1.x = shpObj->padfX[0];
		pt1.y = shpObj->padfY[0];
		pt2.x = shpObj->padfX[shpObj->nVertices-1];
		pt2.y = shpObj->padfY[shpObj->nVertices-1];
		slope = SLOPE(pt1, pt2);
		Point pt;
		int j;
		for(j=1; j<=numNode; j++){
			if(distPt(pt1, node[j])<0.001)
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
		while(distPt(pt2, node[numPt])>0.001){
			/*
			cout<<"\n"<<numPt<<"\n";
			for(int ii=0; ii<neighNodeCount[numPt]; ii++)
				cout<<neighNode[numPt][ii]<<" ";
			cout<<"\n";
			*/
			int j, k, l;
			for(j=0; j<neighNodeCount[numPt]; j++){
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
			for(k=0; k<nodeInEleCount[numPt]; k++){
				for(l=0; l<nodeInEleCount[neighNode[numPt][j]]; l++){
					if(nodeInEle[numPt][k] == nodeInEle[neighNode[numPt][j]][l])
						LeftRight[m++] = nodeInEle[numPt][k];
				}
			}
			SHPObject* newobj = SHPCreateSimpleObject(SHPT_ARC, 2, X, Y, Z);
			SHPWriteObject(newshp, -1, newobj);
			DBFWriteIntegerAttribute(newdbf, record, left, LeftRight[0]);
			DBFWriteIntegerAttribute(newdbf, record, right, LeftRight[1]);
			DBFWriteIntegerAttribute(newdbf, record, fromTriNode, FromTo[0]);
			DBFWriteIntegerAttribute(newdbf, record, toTriNode,   FromTo[1]);
			record++;
			
			numPt = neighNode[numPt][j];
			//cout<<numPt<<" "; //getchar(); getchar();
			oldDist = distPt(node[numPt], pt2);
		}
		//cout<<"\nend\n";//getchar(); getchar();
	}

	SHPClose(shp);
	DBFClose(dbf);
	SHPClose(newshp);
	DBFClose(newdbf);
		

	//system("PAUSE");
}


		
