#include <iostream>
#include <fstream>
#include <iomanip>
#include "shapefil.h"
#include "Point.h"

using namespace std;

void addSOrder(const char *dbfFileName, const char *shpFileName){
	DBFHandle dbf = DBFOpen(dbfFileName, "rb");
	SHPHandle shp = SHPOpen(shpFileName, "rb");

	cout<<"Checking Required Fields...";
	int fromField = DBFGetFieldIndex(dbf, "FROM_NODE");
	if (fromField==-1){ cout<<"Error: FROM_NODE field does NOT exist\nCan not proceed\n"; return; }
	int toField = DBFGetFieldIndex(dbf, "TO_NODE");
	if (toField==-1){ cout<<"Error: TO_NODE field does NOT exist\nCan not proceed\n"; return; }
	cout<<"Done!\n\n";

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


	int SOrderField = DBFAddField(newdbf, "S_Order", FTInteger, 6, 0); //cout<<"SOrderField= "<<SOrderField<<"\n";

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
	cout<<"Adding New field \"S_Order\" at Field #"<<SOrderField<<"...Done!\n\n";

	cout<<"Computing Stream Order...";
	int (*toArray)[5] = new int[2*recordCount][5];
	int *count = new int [2*recordCount];
	for (int i=0; i<2*recordCount; i++)
		count[i]=0;
	//count[2*recordCount]={0};

	for(int i=0; i<recordCount; i++){
		temp = DBFReadIntegerAttribute(dbf, i, toField);
		//cout<<"temp = "<<temp<<"\n";
		//cout<<"count= "<<count[temp]<<"\n";
		if(DBFReadIntegerAttribute(dbf,toArray[temp][count[temp]-1],fromField) != DBFReadIntegerAttribute(dbf,i,fromField))
			toArray[temp][count[temp]++]=i;
	}

	int UPDATE = 1;
	int loopCount = 0;
	int max1, max2, from, to, so;
	while(UPDATE == 1){
		UPDATE = 0;
		loopCount++;
		//cout<<"loop Count= "<<loopCount<<"\n";

		for(int i=0; i<recordCount; i++){
			int temp = DBFReadIntegerAttribute(newdbf, i, fromField);
			if(count[temp]==0){
				//
				//cout <<"i= "<<i<<" SO =1\n";getchar();
				DBFWriteIntegerAttribute(newdbf, i, SOrderField, 1);
				//cout<<"Wrote = "<<DBFReadIntegerAttribute(newdbf, i, SOrderField)<<"\n";
			}
			else if(count[temp] == 1){
				temp = DBFReadIntegerAttribute(newdbf, i, fromField);
				//cout<<temp<<"\t";
				temp = toArray[temp][0];
				//cout<<temp<<"\n";//getchar();
				//cout <<"i= "<<i<<" SO= "<<DBFReadIntegerAttribute(newdbf, temp, SOrderField);getchar();
				if(DBFReadIntegerAttribute(newdbf, temp, SOrderField) != DBFReadIntegerAttribute(newdbf, i, SOrderField))
					UPDATE = 1;
				DBFWriteIntegerAttribute(newdbf, i, SOrderField, DBFReadIntegerAttribute(newdbf, temp, SOrderField));
			}
			else{
				from = DBFReadIntegerAttribute(newdbf, i, fromField);
				max1=0; max2=0;
				//cout<<"i = "<<i<<"\n";
				for(int j=0; j<count[temp]; j++){
					to = toArray[from][j]; //cout<<"  to = "<<to<<"\t";
					so = DBFReadIntegerAttribute(newdbf, to, SOrderField);// cout<<"  so = "<<so<<"\n";
					if(so>=max1){
						max2=max1;
						max1=so;
					}
				}
				if(max1==max2){
					if(DBFReadIntegerAttribute(newdbf, i, SOrderField) != max1+1)
						UPDATE = 1;
					DBFWriteIntegerAttribute(newdbf, i, SOrderField, max1+1);
				}
				else{
					if(DBFReadIntegerAttribute(newdbf, i, SOrderField) != max1)
						UPDATE = 1;
					DBFWriteIntegerAttribute(newdbf, i, SOrderField, max1);
				}
			}

				//if(DBFReadIntegerAttribute(newdbf, i, SOrderField) != DBFReadIntegerAttribute(newdbf, i, DBFGetFieldIndex(newdbf, "SO_VALUE"))){
					//{getchar();getchar();}
		}
	}
	cout<<"Done!\n\n";

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