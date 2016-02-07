#include <iostream>
#include <iomanip>

#include "./../0LibsShape/shapefil.h"

using namespace std;


int merge_lines(const char** shpFileNames, const char** dbfFileNames, int fileCount, const char *newshpFileName, const char *newdbfFileName)
{
	//const char **test = new const char*[3];
	//test[0] = "test"; 
	int recordCount;
	SHPObject *obj;

	SHPHandle newshp = SHPCreate(newshpFileName, SHPT_ARC);
	DBFHandle newdbf = DBFCreate(newdbfFileName);

    if ( newshp == NULL || newdbf == NULL )
        return 20;

	int fld = DBFAddField(newdbf, "ID", FTInteger, 5, 0);

    if ( fld == -1 )
        return 25;

	int k=0;

    for(int i=0; i<fileCount; i++)
    {
		std::cout<<"\n-->"<<shpFileNames[i];
		SHPHandle shp = SHPOpen(shpFileNames[i], "rb");
		DBFHandle dbf = DBFOpen(dbfFileNames[i], "rb");

        if ( shp == NULL || dbf == NULL )
            return 36;

        int InfoShpType;
        SHPGetInfo (shp, NULL, &InfoShpType, NULL, NULL);
        if ( InfoShpType != SHPT_ARC )
        {
            cout << "Not a SHPT_ARC: ... " << shpFileNames[i] << "\n";
            cout << "SHAPE TYPE = " << InfoShpType << "\n";
            return InfoShpType;
        }

		recordCount = DBFGetRecordCount(dbf);

        for(int j=0; j<recordCount; j++)
        {
			obj = SHPReadObject(shp, j);
            if ( obj->nVertices > 2 )
                return 53;
            if ( SHPWriteObject(newshp, -1, obj) < 0 )
                return 55;
            if ( ! DBFWriteIntegerAttribute(newdbf, k++, fld, j+1) )
                return 57;
		}

		SHPClose(shp);
		DBFClose(dbf);
	}

	SHPClose(newshp);
	DBFClose(newdbf);

    return 0;
}
