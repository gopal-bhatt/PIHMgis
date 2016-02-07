#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

#include <QString>

#include "./../0LibsShape/shapefil.h"

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


int searchPoint(Point* pointArray, double coord1, double coord2, int *temp, int pointCounter)
{
		std::cout<<"------- Inside searchPoint--------\n";
		//getchar();getchar();
		for(int i=0;i<pointCounter;i++){
				//std::cout<<"\n"<<pointArray[i].x<<"\t"<<pointArray[i].y<<"\n";
			//if(pointArray[i].x == coord1 && pointArray[i].y == coord2){
            if(fabs(pointArray[i].x - coord1)<0.000001 && fabs(pointArray[i].y - coord2)<0.000001)
            {

				*temp=i;
				//std::cout<<"++++++++++++++++++++++++++ "<<i<<"\n"; 
				return 1;
			}
		}
		return 0;
}


int shape_pslg(const char* constFileName, const char* outputFileName, QString *tempLogString)
{
		
        //tempLogString->append("Running Read Topology ... <br>");
		 
		//SHPInfo* currentHandle = SHPOpen("/root/Desktop/testData/q20.shp","r+");
        cout<<"File: "<<constFileName<<"\n";
		SHPHandle thisObj = SHPOpen(constFileName,"r+");
		if(thisObj == NULL)
            return 53;

		int numEntities, shapeType;
		double minBound[4], maxBound[4];
        //SHPGetInfo(thisObj, &numEntities, &shapeType, thisObj->adBoundsMin,thisObj->adBoundsMax);
		SHPGetInfo(thisObj, &numEntities, &shapeType, minBound, maxBound);

        if ( shapeType != SHPT_ARC )
        {
            cout << "Not a SHPT_ARC: ... " << constFileName << "\n";
            cout << "SHAPE TYPE = " << shapeType << "\n";
            return shapeType;
        }

		std::cout<<"============ SHAPE FILE DETAILS===============\n";
		std::cout<<"Number of Entities:"<<numEntities<<"\n"<<"Shapefile type:"<<shapeType<<"\n"<<"Minimum Bound "<<minBound<<"\n"<<"Maximum Bound "<<maxBound<<"\n";



		std::cout<<thisObj->adBoundsMin[0]<<"\n";
		std::cout<<thisObj->adBoundsMax[0]<<"\n";


        tempLogString->append("Reading Nodes ... <br>");
		Line* lineArray = new Line[numEntities];

		Point* pointArray = new Point[2*numEntities];

		int lineCounter=0;
		int pointCounter=0;
		int tempPt;

		
		SHPObject* thisObjHandle;
        for(int i=0; i<numEntities; i++)
        {
		 	thisObjHandle  = SHPReadObject(thisObj, i);
            if ( thisObjHandle->nVertices > 2 )
            {

                tempLogString->append(QString("<span style=\"color:#FF0000\">ERROR: Shape File Not Split Line </span>")+QString("<br>"));
                return 93;
            }
			std::cout<<"Read Object # "<<i<<"\n";
	
	
			// Line Pt 1
			if(pointCounter!=0 && searchPoint(pointArray,thisObjHandle->padfX[0],thisObjHandle->padfY[0],&tempPt, pointCounter)){
				lineArray[lineCounter].pt1=tempPt;
			}
            else
            {
				if(thisObjHandle == NULL)
					cout<<"testNULL\n";

				
				pointArray[pointCounter].x=thisObjHandle->padfX[0]; pointArray[pointCounter].y=thisObjHandle->padfY[0];
				lineArray[lineCounter].pt1=pointCounter;
				++pointCounter;
			}
			std::cout<<"Line Pt 2\n";
			// Line Pt 2
            if(pointCounter!=0 && searchPoint(pointArray,thisObjHandle->padfX[1],thisObjHandle->padfY[1],&tempPt, pointCounter))
            {
				lineArray[lineCounter].pt2=tempPt;
			}
            else
            {
				pointArray[pointCounter].x=thisObjHandle->padfX[1]; pointArray[pointCounter].y=thisObjHandle->padfY[1];
				lineArray[lineCounter].pt2=pointCounter;
				++pointCounter;
			}
			++lineCounter;
		
			std::cout<<"++++++++++++++++++++++++++++ LINE COUNTER:"<<lineCounter<<"\n"; //getchar(); getchar();
		}


        tempLogString->append("Writing PSLG (.poly) File ... <br>");

		ofstream fp;
		fp.open(outputFileName);
		
		fp<<pointCounter<<" "<<"2"<<" "<<"0"<<" "<<" "<<"0"<<"\n";
        for(int i=0; i<pointCounter; i++)
        {
				fp<<i+1<<" "<<setprecision (20)<<pointArray[i].x<<" "<<setprecision (20)<<pointArray[i].y<<"\n";
		}
		fp<<"\n";
		fp<<numEntities<<" "<<"0"<<"\n";
        for(int i=0;i<numEntities;i++)
        {
				fp<<i+1<<" "<<lineArray[i].pt1+1<<" "<<lineArray[i].pt2+1<<"\n";
		}
		fp<<"0"<<"\n";
		fp.close();

		

		SHPClose(thisObj);

        return 0;
		
}
