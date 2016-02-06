#include <iostream>
#include <iomanip>

#include "shapefil.h"

using namespace std;


void mergeFeatures(const char** shpFileNames, const char** dbfFileNames, int fileCount, const char *newshpFileName, const char *newdbfFileName){
	//const char **test = new const char*[3];
	//test[0] = "test"; 
	int recordCount;
	SHPObject *obj;

	SHPHandle newshp = SHPCreate(newshpFileName, SHPT_ARC);
	DBFHandle newdbf = DBFCreate(newdbfFileName);

	int fld = DBFAddField(newdbf, "ID", FTInteger, 5, 0);

	int k=0;
	for(int i=0; i<fileCount; i++){
		std::cout<<"\n-->"<<shpFileNames[i];
		SHPHandle shp = SHPOpen(shpFileNames[i], "rb");
		DBFHandle dbf = DBFOpen(dbfFileNames[i], "rb");

		recordCount = DBFGetRecordCount(dbf);

		for(int j=0; j<recordCount; j++){
			obj = SHPReadObject(shp, j);
			SHPWriteObject(newshp, -1, obj);
			DBFWriteIntegerAttribute(newdbf, k++, fld, j+1);
		}

		SHPClose(shp);
		DBFClose(dbf);
	}

	SHPClose(newshp);
	DBFClose(newdbf);
}
