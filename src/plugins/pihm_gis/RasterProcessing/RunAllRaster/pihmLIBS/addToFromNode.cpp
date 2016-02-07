#include <iostream>
#include <fstream>
#include <iomanip>
#include "shapefil.h"
#include "Point.h"

using namespace std;

void addToFromNode(const char *dbfFileName, const char *shpFileName){
	DBFHandle dbf = DBFOpen(dbfFileName, "rb");
	SHPHandle shp = SHPOpen(shpFileName, "rb");

	DBFHandle newdbf = DBFCreate("temp.dbf");
	int temp;

	int fieldCount = DBFGetFieldCount(dbf);
	int recordCount = DBFGetRecordCount(dbf);

	/*********************************************************/
	/*				Copying Existing Record					 */
	/*********************************************************/
	cout<<"Copying Existing Records...";
	int width[1], decimals[1];
	char fieldName[20];
	DBFFieldType fieldType;
	for (int i=0; i<fieldCount; i++){
		fieldType = DBFGetFieldInfo(dbf, i, fieldName, width, decimals);
		temp = DBFAddField(newdbf, fieldName, fieldType, width[0], decimals[0]);
		//cout<<temp<<"\n";
	}

	int fromField = DBFAddField(newdbf, "FROM_NODE", FTInteger, 6, 0); //cout<<"fromField= "<<fromField<<"\n";
	int toField = DBFAddField(newdbf, "TO_NODE", FTInteger, 6, 0); //cout<<"toField= "<<toField<<"\n";
	
	//temp = DBFAddField(newdbf, "FID", FTInteger, 6, 0);
	
	int iValue;
	double fValue;
	const char * cValue;
	for (int i=0; i<recordCount; i++){
		for (int j=0; j<fieldCount; j++){
			fieldType = DBFGetFieldInfo(dbf, j, fieldName, width, decimals);
			if(fieldType == FTString){
				cValue = DBFReadStringAttribute(dbf, i, j);
				temp = DBFWriteStringAttribute(newdbf, i, j, cValue);
			}
			else if(fieldType == FTInteger){
				iValue = DBFReadIntegerAttribute(dbf, i, j);
				temp = DBFWriteIntegerAttribute(newdbf, i, j, iValue);
			}
			else if(fieldType == FTDouble){
				fValue = DBFReadDoubleAttribute(dbf, i, j);
				temp = DBFWriteDoubleAttribute(newdbf, i, j, fValue);
			}
		}
		//temp = DBFWriteIntegerAttribute(newdbf, i, fieldCount, i+1);
	}
	cout<<"Done!\n\n";
	/*********************************************************/
	//cout<<"hello";
	cout<<"Adding New Field \"FROM_NODE\"...Done!\n\n";
	cout<<"Adding New Field \"TO_NODE\"...Done!\n\n";
	
	cout<<"Computing FROM-NODE and TO-NODE...";
	Point *nodes = new Point[recordCount*2];
	int ptCount = 0;
	
	for(int i=0; i<recordCount; i++){
		SHPObject *obj = SHPReadObject(shp, i);
		Point tempPt;
		for (int k=0; k<2; k++){
			tempPt.x=obj->padfX[k];
			tempPt.y=obj->padfY[k];
			int j = ptCount-1;
			while(equalPoint(tempPt, nodes[j]) != 1 && j>=0)
				j--;
			if(j==-1){
				nodes[ptCount].x=obj->padfX[k];
				nodes[ptCount].y=obj->padfY[k];
				ptCount++;

				if(k==0)
					temp = DBFWriteIntegerAttribute(newdbf,i,fromField,ptCount);
				else
					temp = DBFWriteIntegerAttribute(newdbf,i,toField,ptCount);
			}
			else{
				if(k==0)
					temp = DBFWriteIntegerAttribute(newdbf,i,fromField,j+1);
				else
					temp = DBFWriteIntegerAttribute(newdbf,i,toField,j+1);
			}
		}
	}
	cout<<"Done!\n\n";
	//cout<<"Number of nodes = "<<ptCount<<"\n";
	//cout<<"test";
	
	DBFClose(dbf);
	SHPClose(shp);
	DBFClose(newdbf);

	cout<<"Writing to the .dbf File...";
	char buffer[100];
	ifstream infile;
	ofstream outfile;
	infile.open("temp.dbf",ios::binary|ios::in);
	outfile.open(dbfFileName,ios::binary|ios::out);
	int j=1;
	//cout<<"\nWriting to the .dbf file...";
	while(infile){
		infile.read(buffer,100);
		infile.seekg(j*100);j++;
		outfile.write(buffer,100);
	}
	cout<<"Done!\n\n";
}