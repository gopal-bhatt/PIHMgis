#include <iostream>

#include "generateShape.h"
#include "shapefil.h"
#include "fileStruct.h"

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
	
	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
	
	QString shpStr, dbfStr;
	shpStr = projDir+"/InfoViz/SpatialData.shp";
	dbfStr = projDir+"/InfoViz/SpatialData.dbf";

	SHPHandle newshp = SHPCreate(qPrintable(shpStr), SHP_TYPE[0]);
	DBFHandle newdbf = DBFCreate(qPrintable(dbfStr)); 
	
	cout<<"Entities = "<<*Entities <<"\n";
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


void generateShape2(QString shpFileName, double **avgVal, int NUM_FEATURES, int TYPE, const char *fStr, int bins)
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

        QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();

        QString shpStr, dbfStr;
        shpStr = projDir+"/InfoViz/SpatialData.shp";
        dbfStr = projDir+"/InfoViz/SpatialData.dbf";
	cout << "shpStr= "<<qPrintable(shpStr) <<"\n";

        SHPHandle newshp = SHPCreate(qPrintable(shpStr), SHP_TYPE[0]);
        DBFHandle newdbf = DBFCreate(qPrintable(dbfStr));

        cout<<"Entities = "<<*Entities <<"\n";
        if(NUM_FEATURES != *Entities){
                qWarning("Number of Features doesnot match that in the shape file\n");
                runFlag = 0;
        }

        if(runFlag == 1){
	   int *valFld; int idFld; char *IDChar;
	   valFld = (int *)malloc(bins*sizeof(int));

	   for(int b=0; b<bins; b++){
		cout<<fStr<<"\n";
                QString att; IDChar = (char *) malloc (100*sizeof(char));
                att=fStr+QString::number(b+1,10); strcpy(IDChar, qPrintable(att)); cout <<qPrintable(att)<<"|"<<IDChar<<"\n";
                valFld[b] = DBFAddField(newdbf, IDChar, FTDouble,  10, 8);
                cout << "Fld= " << valFld[b] <<"\n"; //delete(IDChar);
                if(b==0) {idFld  = DBFAddField(newdbf, "ID", FTInteger, 10, 0); cout << "idFld= " << idFld <<"\n"; }
	   }

	   for(int b=0; b<bins; b++){
                double *x, *y, *z;
                x = (double *)malloc(TYPE*sizeof(double));
                y = (double *)malloc(TYPE*sizeof(double));
                z = (double *)malloc(TYPE*sizeof(double));
                //cout<<fStr<<"\n";
		//QString att; IDChar = (char *) malloc (100*sizeof(char));
		//att=fStr+QString::number(b+1,10); strcpy(IDChar, qPrintable(att)); cout <<qPrintable(att)<<"|"<<IDChar<<"\n";
                //valFld[b] = DBFAddField(newdbf, IDChar, FTDouble,  10, 8);
		//cout << "Fld= " << valFld[b] <<"\n"; //delete(IDChar);
                //if(b==0) {idFld  = DBFAddField(newdbf, "ID", FTInteger, 10, 0); cout << "idFld= " << idFld <<"\n";

                for(int i=0; i<NUM_FEATURES; i++){
                        obj = SHPReadObject(shp, i);
                        SHPWriteObject(newshp, -1, obj);

                        if(b==0) DBFWriteIntegerAttribute(newdbf, i, idFld, i+1);
			int attFld; attFld = valFld[b];
                        DBFWriteDoubleAttribute(newdbf, i, valFld[b], avgVal[b][i]);
                }
	   }
        }
        SHPClose(shp); SHPClose(newshp);
        DBFClose(dbf); DBFClose(newdbf);
}

