#include <iostream>
#include <fstream>
#include <iomanip>
#include "shapefil.h"

using namespace std;

void addFID(const char *dbfFileName){
	DBFHandle dbf = DBFOpen(dbfFileName, "rb");
	cout<<"Copying Existing Records...";
	int temp; 
	int fieldCount = DBFGetFieldCount(dbf);
	int recordCount = DBFGetRecordCount(dbf);

	DBFHandle newdbf = DBFCreate("temp.dbf");
	
	int width[1], decimals[1];
	char fieldName[20];
	DBFFieldType fieldType;
	for (int i=0; i<fieldCount; i++){
		fieldType = DBFGetFieldInfo(dbf, i, fieldName, width, decimals);
		temp = DBFAddField(newdbf, fieldName, fieldType, width[0], decimals[0]);
	}

	temp = DBFAddField(newdbf, "FID", FTInteger, 6, 0);

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
		temp = DBFWriteIntegerAttribute(newdbf, i, fieldCount, i+1);
	}
	cout<<"Done!\n\n";
	cout<<"Adding New Field FID...";
	cout<<"Done!\n\n";
	DBFClose(dbf);
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