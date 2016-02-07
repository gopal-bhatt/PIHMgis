#include <iostream>
#include <fstream>
#include <iomanip>
#include "shapefil.h"

using namespace std;

void calDownSegment(const char* dbfFileName, int BC){
	int temp;

	DBFHandle dbf = DBFOpen(dbfFileName, "rb");
	cout<<"Checking Requirent Field";
	int FId= DBFGetFieldIndex(dbf, "FID");
	if( FId == -1){ cout<<"Error: FID field does NOT exist\nCan not proceed\n"; return; }
	int FROM_NODE= DBFGetFieldIndex(dbf, "FROM_NODE");
	if( FId == -1){ cout<<"Error: FROM_NODE field does NOT exist\nCan not proceed\n"; return; }
	int TO_NODE = DBFGetFieldIndex(dbf, "TO_NODE");
	if( FId == -1){ cout<<"Error: TO_NODE field does NOT exist\nCan not proceed\n"; return; }

	DBFHandle newdbf = DBFCreate("temp.dbf");

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
	
	int DSegmt = DBFAddField(newdbf, "DownSegmt", FTInteger, 6, 0);
	
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

	cout<<"\nAdding  Field  DownSegmt...";
	cout<<"DONE!\n";

	//cout<<"field number= "<<temp<<"\n";

	cout<<"\nComputing DownSegmt Records...";
	// = DBFGetFieldIndex(newdbf, "DownSegmt"); //cout<<DSegmt<<"\n";
	//getchar();getchar();
	int j;
	for(int i=0; i<recordCount; i++){
		//cout<<"\n"<<"i = "<<i<<"\n";
		j=0;
		while((DBFReadIntegerAttribute(dbf,i,TO_NODE) != DBFReadIntegerAttribute(dbf,j,FROM_NODE) && j<recordCount)){
			//cout<<j<<" "<<DBFReadIntegerAttribute(dbf,i,TNode)<<" "<<DBFReadIntegerAttribute(dbf,j,FNode)<<"\n";
			j++;
			//cout<<"done\n";
		}
		if(j<recordCount){
			//cout<<"here "<<fieldCount <<" " <<DBFReadIntegerAttribute(dbf, j, IDIndex)<<"\n";
			temp = DBFWriteIntegerAttribute(newdbf, i, fieldCount, DBFReadIntegerAttribute(dbf, j, FId));
			//cout<<"After push\n";
		}
		else{
			temp = DBFWriteIntegerAttribute(newdbf, i, fieldCount, BC);
		}
	}
	cout<<"DONE!\n";
	DBFClose(dbf);
	DBFClose(newdbf);
	//cout<<"here2";

	char buffer[100];
	ifstream infile;
	ofstream outfile;
	infile.open("temp.dbf",ios::binary|ios::in);
	outfile.open(dbfFileName,ios::binary|ios::out);
	j=1;
	cout<<"\nWriting to the .dbf file...";
	while(infile){
		infile.read(buffer,100);
		infile.seekg(j*100);j++;
		outfile.write(buffer,100);
	}
	cout<<"DONE!\n\n";

}
