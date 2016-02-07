#include <iostream>
#include <string>
#include <fstream>
#include "fileStruct.h"
#include <QtGui>

using namespace std;


QString readLineNumber(const char* fileName, int lineNumber){

	QString temp; //char temp[1000]; QString tempQString;
	ifstream file;
	QFile inData(fileName);
	inData.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream qInFile(&inData);
	//file.open(fileName, ios::in);

	for (int i=0; i<lineNumber; i++)
		temp = qInFile.readLine();
		//file.getline(temp, 1000);//getline(file, temp);

	//file.close();
	inData.close();
	//tempQString = temp;
	//return tempQString;
	return temp;
}

int writeLineNumber(const char *fileName, int lineNumber, const char* str){
	
	ifstream inFile; int lineCount=0;
	ofstream outFile;
	QString temp;

	QFile inData1(fileName); //inFile.open(fileName, ios::in);
	inData1.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream qInFile1(&inData1);
	
	QFile outData1("tempWrite.txt"); //outFile.open("tempWrite.txt", ios::out);
	outData1.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream qOutFile1(&outData1);

	while(! qInFile1.atEnd() ){
		if(lineCount != 0){
			temp=qInFile1.readLine(); //getline(inFile, temp);
			qOutFile1 <<"\n"<< temp;
			lineCount++;
		}
		else{
			temp=qInFile1.readLine(); //getline(inFile, temp);
                        qOutFile1 << temp;
			lineCount++;
		}
	}
	lineCount = 0;
	inData1.close();
	outData1.close();


	QFile inData2("tempWrite.txt"); //inFile.open("tempWrite.txt", ios::in);
	inData2.open(QIODevice::ReadOnly | QIODevice::Text);
	QTextStream qInFile2(&inData2);

	//outFile.open(fileName, ios::out);
	QFile outData2(fileName);
	outData2.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream qOutFile2(&outData2);

	while(! qInFile2.atEnd() ){
		lineCount++;
		if(lineCount == lineNumber){
			if(lineCount != 1){
				temp=qInFile2.readLine(); //getline(inFile, temp);
				qOutFile2 <<"\n"<<str;
			}
			else{
				temp=qInFile2.readLine(); //getline(inFile, temp);
				qOutFile2<<str;
			}
		}
		else{
			if(lineCount != 1){
				temp=qInFile2.readLine();//getline(inFile, temp);
				qOutFile2<<"\n"<<temp;
			}
			else{
				temp=qInFile2.readLine();//getline(inFile, temp);
				qOutFile2<<temp;
			}
		}
	}
	cout<<lineCount<<"\n";
	if(lineCount < lineNumber){
		for(int i=lineCount; i<lineNumber; i++){
			qOutFile2<<"\n";
		}
		qOutFile2<<str;
	}

	inData2.close();
        outData2.close();
}
