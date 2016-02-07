#include <iostream>
#include <iomanip>
#include "simplifyPolyline.h"
#include "shapefil.h"

using namespace std;

void simplifyPolySHP(const char *shpFileName, const char *dbfFileName, const char *newshpFileName, const char *newdbfFileName, double tolerance){
	
	cout<<"Simplifying "<<shpFileName<<"...";
	//cout<<dbfFileName<<"\n";
	SHPHandle shp = SHPOpen(shpFileName, "rb");
	DBFHandle dbf = DBFOpen(dbfFileName, "rb");

	int recordCount, shpType;
	
	SHPObject *obj1 = SHPReadObject(shp, 0);
	shpType=obj1->nSHPType;
	recordCount=DBFGetRecordCount(dbf);

	int fld = DBFGetFieldIndex(dbf, "ARCID");

	//cout<<"recordCount= "<<recordCount<<"\n";
	//cout<<"shpType= "<<shpType<<"\n";
	
	SHPHandle newshp = SHPCreate(newshpFileName, shpType);
	DBFHandle newdbf = DBFCreate(newdbfFileName);
	
	int arcidField = DBFAddField(newdbf, "ARCID", FTInteger, 5, 0);

	for(int i=0; i<recordCount; i++){
		SHPObject* obj = SHPReadObject(shp, i);

		Point* pts = new Point[obj->nVertices];
		int *marker= new int[obj->nVertices];

		for(int j=0; j<obj->nVertices; j++){
			marker[j]=0;
			pts[j].x=obj->padfX[j];
			pts[j].y=obj->padfY[j];
		}

		marker[0]=1;
		simplifyPolyline(pts, 0, obj->nVertices-1, tolerance, marker);//, 0);
		marker[obj->nVertices-1]=1;

		int count=0;
		for(int j=0; j<obj->nVertices; j++){
			count=count+marker[j];
		}
	
		double *X = new double[count];
		double *Y = new double[count];
		double *Z = new double[count];
		
		int k=0;
		for(int j=0; j<obj->nVertices; j++){
			if(marker[j]==1){
				X[k]=pts[j].x;
				Y[k]=pts[j].y;
				Z[k]=0;
				k++;
			}
		}
		SHPObject *newobj = SHPCreateSimpleObject(shpType, count, X, Y, Z);
		SHPComputeExtents(newobj);
		SHPWriteObject(newshp, -1, newobj);
		
		int arcid = DBFReadIntegerAttribute(dbf, i, fld);
		DBFWriteIntegerAttribute(newdbf, i, arcidField, arcid);
	}
	cout<<"Done!\n\n";

	SHPClose(shp);
	DBFClose(dbf);

	SHPClose(newshp);
	DBFClose(newdbf);
}


