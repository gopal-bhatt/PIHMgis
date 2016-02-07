#include <QtGui>
#include "streamgrid.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/flood.h"
#include "../../pihmRasterLIBS/setdir.h"
#include "../../pihmRasterLIBS/aread8.h"
#include "../../pihmRasterLIBS/streamSegmentation.h"
#include "../../pihmRasterLIBS/streamDefinition.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

#include <fstream>
#include <iostream>
using namespace std;


StreamGridDlg::StreamGridDlg(QWidget *parent)
{
	setupUi(this);
	runButton->setDefault(TRUE);
	connect(inputBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(outputBrowseButton, SIGNAL(clicked()), this, SLOT(outputBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
	connect(pushButtonSuggestMe, SIGNAL(clicked()), this, SLOT(suggestMe()));

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	inputFileLineEdit->setText(readLineNumber(qPrintable(projFile), 7));
	outputFileLineEdit->setText(projDir+"/RasterProcessing/str.asc");	

}

void StreamGridDlg::inputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	cout << qPrintable(projDir);

	QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/RasterProcessing","Flow Acc Grid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);

	outputFileLineEdit->setText(projDir+"/RasterProcessing/str.asc");	
}


void StreamGridDlg::outputBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Stream Grid File(*.adf *.asc)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".asc")){
        tmp.append(".asc");
        temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}


void StreamGridDlg::run()
{	
        QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);
        writeLineNumber(qPrintable(projFile), 8, qPrintable(inputFileLineEdit->text()));
        writeLineNumber(qPrintable(projFile), 9, qPrintable(outputFileLineEdit->text()));
        writeLineNumber(qPrintable(projFile), 10, qPrintable(inputThreshLineEdit->text()));

	QDir dir = QDir::home();
        QString home = dir.homePath();
	QString logFileName(qPrintable(home+"/log.html"));
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        messageLog->setSource(logFileName);
        messageLog->setFocus();
        messageLog->setModified(TRUE);	

	QString inputFileName((inputFileLineEdit->text()));
	QString outputFileName((outputFileLineEdit->text()));
	double thresh;
	thresh = (inputThreshLineEdit->text()).toDouble();
	
	ifstream inFile;      inFile.open(qPrintable(inputFileLineEdit->text()));
	ofstream outFile;    outFile.open(qPrintable(outputFileLineEdit->text()));
	int runFlag = 1;

	log.open(qPrintable(logFileName), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Flow Acc. Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(inputFileName)<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", qPrintable(inputFileLineEdit->text()));
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	if(outputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Stream Grid Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(outputFileName)<<"... ";
		if(outFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\nCan not open output file name");
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	if((inputThreshLineEdit->text()).length() == 0){
		log<<"<p><font size=3 color=red> Error! Please input Threshold</p>";
		runFlag = 0;
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	if(runFlag == 1){
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		int err1 = streamDefinition((char *)qPrintable(inputFileName), "dummy", (char *)qPrintable(outputFileName), 1, thresh );
	
		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		if(showSG_DFrame->isChecked() == 1){
       			//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
			applicationPointer->addRasterLayer(outputFileName);
		}
	}
}

void StreamGridDlg::suggestMe(){
	fstream inFile;
	inFile.open(inputFileLineEdit->text().toAscii());
	
	if(inFile == NULL){
		QMessageBox msgBox;
		msgBox.setIcon(QMessageBox::Critical);
		msgBox.critical(0, "Error", "Error: Flow Accumulation Grid File not provided or accessible", QMessageBox::Close);
	}

	char tempChar[100];
	int tempInt, Rows, Cols, NoData, suggestedThreshold;
	double tempDouble;
	int *sortedData, count=0;
	int flag = 1;

	inFile >> tempChar; inFile >> Cols;
	inFile >> tempChar; inFile >> Rows;
	inFile >> tempChar; inFile >> tempDouble;
	inFile >> tempChar; inFile >> tempDouble;
	//??inFile >> tempDouble; inFile >> NoData;
	inFile >> tempChar; inFile >> tempDouble;
	inFile >> tempChar; inFile >> NoData;

	cout <<"Rows= " <<Rows<<" Cols= "<<Cols<<" ND= "<<NoData<<"\n";
	sortedData = (int *)malloc(Rows*Cols* sizeof(int));
	for(int i=0; i<Rows*Cols; i++){
		inFile >> tempInt;
		if(tempInt >= 0){
			sortedData[i] = tempInt;
			count++;
		}
	}
	char strThresh[100];
	sprintf(strThresh, "%d", (int)(count*0.02));
	QString qstrThresh(strThresh);
	inputThreshLineEdit->setText(strThresh);

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	cout << qPrintable(projDir);

        outputFileLineEdit->setText(projDir+"/RasterProcessing/str"+qstrThresh+".asc");
}

void StreamGridDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Stream Grid", 1, "helpFiles/streamgrid.html", "Help :: Stream Grid");
	hlpDlg->show();	

}
/* ??*/
void StreamGridDlg::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
}
