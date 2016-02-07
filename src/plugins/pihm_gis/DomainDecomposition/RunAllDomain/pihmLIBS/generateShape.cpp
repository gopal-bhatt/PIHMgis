#include <iostream>

#include "generateShape.h"
#include "shapefil.h"

using namespace std;

void generateShape(QString shpFileName, double *avgVal, int NUM_FEATURES, int TYPE, const char *fStr)
{
	int runFlag = 1;
	
	QString dbfFileName(shpFileName);
	dbfFileName.truncate(dbfFileName.length()-3);
	dbfFileName.append("dbf");

	SHPHandle shp = SHPOpen(qPrintable(shpFileName), "rb");
	DBFHandle dbf = DBFOpen(qPrintable(dbfFileName), "rb");
	SHPObject *obj;

	int SHP_TYPE[1], Entities[1];
	SHPGetInfo(shp, Entities, SHP_TYPE, NULL, NULL);

	SHPHandle newshp = SHPCreate("tempShape.shp", SHP_TYPE[0]);
	DBFHandle newdbf = DBFCreate("tempShape.dbf"); 
	
	if(NUM_FEATURES != *Entities){
		qWarning("Number of Features doesnot match that in the shape file\n");
		runFlag = 0;
	}

	if(runFlag == 1){
		double *x, *y, *z;
		x = (double *)malloc(TYPE*sizeof(double));
		y = (double *)malloc(TYPE*sizeof(double));
		z = (double *)malloc(TYPE*sizeof(double));
		cout<<fStr<<"\n";
		int valFld = DBFAddField(newdbf, fStr, FTDouble,  10, 8);
		int idFld  = DBFAddField(newdbf, "ID", FTInteger, 10, 0);

		for(int i=0; i<NUM_FEATURES; i++){
			obj = SHPReadObject(shp, i);
			SHPWriteObject(newshp, -1, obj);

			DBFWriteIntegerAttribute(newdbf, i, idFld, i+1);
			DBFWriteDoubleAttribute(newdbf, i, valFld, avgVal[i]);
		}
	}
	SHPClose(shp); SHPClose(newshp);
	DBFClose(dbf); DBFClose(newdbf);
}
