#include <iostream>
#include <iomanip>

#include "shapefil.h"

using namespace std;

void splitLineAtVertices(const char* shpFileName, const char* dbfFileName, const char* newshpFileName, const char* newdbfFileName){
	SHPHandle shp = SHPOpen(shpFileName, "rb");
	DBFHandle dbf = DBFOpen(dbfFileName, "rb");
	//cout<<shpFileName<<"\n";
	SHPHandle newshp = SHPCreate(newshpFileName, SHPT_ARC);
	DBFHandle newdbf = DBFCreate(newdbfFileName);

	int fld = DBFAddField(newdbf, "ID", FTInteger, 5, 0);

	int recordCount = DBFGetRecordCount(dbf);

	double X[2], Y[2], Z[2];
	int k=0;
	for(int i=0; i<recordCount; i++){
		SHPObject *obj = SHPReadObject(shp, i);
		for(int j=0; j<obj->nVertices-1; j++){
			X[0]=obj->padfX[j];	X[1]=obj->padfX[j+1];
			Y[0]=obj->padfY[j]; Y[1]=obj->padfY[j+1];
			Z[0]=0; Z[1]=0;
			SHPObject *newobj = SHPCreateSimpleObject(SHPT_ARC, 2, X, Y, Z);
			SHPWriteObject(newshp, -1, newobj);
			DBFWriteIntegerAttribute(newdbf, k++, fld, i+1);
		}	
	}

	SHPClose(shp);
	DBFClose(dbf);
	SHPClose(newshp);
	DBFClose(newdbf);
}
