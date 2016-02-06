#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>
#include "shapefil.h"

//#include "shpopen.h"
//#include "dbfopen.h"

using namespace std;

struct Point{
	double x,y;
	int serialNum;
};

struct Line{
	int pt1, pt2;
};


int searchPoint(Point* pointArray, double coord1,double coord2,int *temp, int pointCounter){
		std::cout<<"------- Inside searchPoint--------\n";
		//getchar();getchar();
		for(int i=0;i<pointCounter;i++){
				//std::cout<<"\n"<<pointArray[i].x<<"\t"<<pointArray[i].y<<"\n";
			//if(pointArray[i].x == coord1 && pointArray[i].y == coord2){
			if(fabs(pointArray[i].x - coord1)<0.000001 && fabs(pointArray[i].y - coord2)<0.000001){

				*temp=i;
				//std::cout<<"++++++++++++++++++++++++++ "<<i<<"\n"; 
				return 1;
			}
		}
		return 0;
}


void generatePolyFile(const char* constFileName, const char* outputFileName, const char* logFileName){
		
		//struct Map_info* vectMap;
		
		//G_gisinit("QGIS");
		//int vectOpenResult = Vect_open_new(vectMap,"/root/Desktop/testData/Export_Output.shp",0);
		 
		//SHPInfo* currentHandle = SHPOpen("/root/Desktop/testData/q20.shp","r+");
		cout<<"File: "<<constFileName<<"\n";	
		SHPHandle thisObj = SHPOpen(constFileName,"r+");
		if(thisObj == NULL)
			cout<<"\ntestObj NULL\n";
		ofstream out;
		out.open(logFileName,ios::app);
		out<<" Done!</p>";
		//out.close();
				//SHPHandle thisObj = SHPOpen("/root/Desktop/share/Boundary_SplitLine.shp","r+");
		int numEntities, shapeType;
		double minBound[4], maxBound[4];
		//SHPGetInfo(thisObj, &numEntities, &shapeType, thisObj->adBoundsMin,thisObj->adBoundsMax);
		SHPGetInfo(thisObj, &numEntities, &shapeType, minBound, maxBound);
		std::cout<<"============ SHAPE FILE DETAILS===============\n";
		std::cout<<"Number of Entities:"<<numEntities<<"\n"<<"Shapefile type:"<<shapeType<<"\n"<<"Minimum Bound "<<minBound<<"\n"<<"Maximum Bound "<<maxBound<<"\n";


		std::cout<<"---------- DEBUG DATA -------\n";

		std::cout<<thisObj->adBoundsMin[0]<<"\n";
		std::cout<<thisObj->adBoundsMax[0]<<"\n";

		std::cout<<"-------- END DEBUG DATA ------- \n";

		std::cout<<"successful shpopen call!\n";
		std::cout<<"THIS IS JUST FOR TESTING"<<"\n";	
		
		
		
		

		out<<"<p><font size=2 color=black>Reading Nodes..."; 
		Line* lineArray = new Line[numEntities];

		Point* pointArray = new Point[2*numEntities];

		int lineCounter=0;
		int pointCounter=0;
		int tempPt;

		//std::cout<<"\n"<<"After declaration of arrays"<<"\n";
		
		SHPObject* thisObjHandle;
		//thisObjHandle = (SHPObject *) malloc(sizeof(SHPObject));	
		for(int i=0; i<numEntities; i++){
		 	thisObjHandle  = SHPReadObject(thisObj, i);
			std::cout<<"Read Object # "<<i<<"\n";
			//cout<<thisObjHandle->nSHPType<<"\n";	
			//for(int j=0; j<2; j++){
			//	cout<<j<<" X= "<<thisObjHandle->padfX[j]<<" Y= "<<thisObjHandle->padfY[j]<<"\n";getchar(); getchar(); }
	
			//std::cout<<"\n"<<"Before call to searchPoint"<<"\n";
	
			// Line Pt 1
			if(pointCounter!=0 && searchPoint(pointArray,thisObjHandle->padfX[0],thisObjHandle->padfY[0],&tempPt, pointCounter)){
				//std::cout<<"If 1\n"; 
				lineArray[lineCounter].pt1=tempPt;
			}
			else{
				//cout<<"-Else 1\n";
				if(thisObjHandle == NULL)
					cout<<"testNULL\n";
				//getchar(); getchar();
				//cout<<thisObjHandle->nVertices<<" nVertices\n";
				//cout<<pointCounter<<" pts\n"; getchar(); getchar();
				//cout<<thisObjHandle->padfX[0]<<" x\n"; //return();
				//cout<<thisObjHandle->padfY[0]<<" y\n"; getchar(); getchar();
				//cout<<pointCounter<<" pts\n"; getchar(); getchar();
				
				pointArray[pointCounter].x=thisObjHandle->padfX[0]; pointArray[pointCounter].y=thisObjHandle->padfY[0];
					//std::cout<<"e1\n";
				lineArray[lineCounter].pt1=pointCounter;
					//std::cout<<"e2\n";
				++pointCounter;
				//std::cout<<"Else 1 Done\n";
			}
			std::cout<<"Line Pt 2\n";
			// Line Pt 2
			if(pointCounter!=0 && searchPoint(pointArray,thisObjHandle->padfX[1],thisObjHandle->padfY[1],&tempPt, pointCounter)){
				//std::cout<<"If 2\n";
				lineArray[lineCounter].pt2=tempPt;
			}
			else{
				//std::cout<<"Else 2\n";
				pointArray[pointCounter].x=thisObjHandle->padfX[1]; pointArray[pointCounter].y=thisObjHandle->padfY[1];
				lineArray[lineCounter].pt2=pointCounter;
				++pointCounter;
			}
			++lineCounter;
		
			std::cout<<"++++++++++++++++++++++++++++ LINE COUNTER:"<<lineCounter<<"\n"; //getchar(); getchar();
			//lineArray[lineCounter].pt1=
		}
		out<<" Done!</p>";
		//std::cout<<"----------nVertices for shpobject: "<<thisObjHandle->nVertices;
		
		//std::cout<<"\n"<<thisObjHandle->padfX[0]<<"\n";
		
		//char filename[40]={"input.poly"};
		out<<"<p><font size=2 color=black>Writing poly File...";
		ofstream fp;
		fp.open(outputFileName);
		
		//std::cout<<pointCounter<<"\t"<<"2"<<"\t"<<"0"<<"\t"<<"0"<<"\n";
		fp<<pointCounter<<" "<<"2"<<" "<<"0"<<" "<<" "<<"0"<<"\n";
		for(int i=0; i<pointCounter; i++){
				fp<<i+1<<" "<<setprecision (20)<<pointArray[i].x<<" "<<setprecision (20)<<pointArray[i].y<<"\n";
				//std::cout<<i+1<<"\t"<<pointArray[i].x<<"\t"<<pointArray[i].y<<"\n";
		}
		//std::cout<<"\n";
		fp<<"\n";
		//std::cout<<numEntities<<"\t"<<"0"<<"\n";
		fp<<numEntities<<" "<<"0"<<"\n";
		for(int i=0;i<numEntities;i++){
				fp<<i+1<<" "<<lineArray[i].pt1+1<<" "<<lineArray[i].pt2+1<<"\n";
				//std::cout<<i+1<<"\t"<<lineArray[i].pt1+1<<"\t"<<lineArray[i].pt2+1<<"\n";
		}
		//std::cout<<"0\n";
		fp<<"0"<<"\n";
		//fflush(fp);
		fp.close();
		out<<" Done!</p>";
		
		out.close();
		//std::cout<<"----------- POINT COUNTER = "<<pointCounter<<"\n";

		
		//SHPClose(currentHandle);
		//
		SHPClose(thisObj);
		// std::cout<<"After closing shapefile"<<"\n";
		
		//currentHandle = SHPOpen("/root/Desktop/testData/q20.shp","r+");
		
		//SHPClose();
		
		
		
		//std::cout<<"Again opened a file!"<<"\n";
		
		//dummy();
		return;
		//std::cout<<"After return\n";
		
}
