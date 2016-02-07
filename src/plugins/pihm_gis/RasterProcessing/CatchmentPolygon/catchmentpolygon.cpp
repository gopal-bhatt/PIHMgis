#include <QtGui>
#include "catchmentpolygon.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/catPoly.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

#include <iostream>
#include <fstream>
using namespace std;

CatchmentPolygonDlg::CatchmentPolygonDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(outputBrowseButton, SIGNAL(clicked()), this, SLOT(outputBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	inputFileLineEdit->setText(readLineNumber(qPrintable(projFile), 19));
	
	QString qstrThresh(readLineNumber(qPrintable(projFile), 10));
        outputFileLineEdit->setText(projDir+"/RasterProcessing/cat"+ qstrThresh +".shp");
}

void CatchmentPolygonDlg::inputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/RasterProcessing","CatchmentGrid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);
}


void CatchmentPolygonDlg::outputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString temp = QFileDialog::getSaveFileName(this, "Choose File", projDir+"/RasterProcessing","Catchment Polygon File(*.shp)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".shp")){
        tmp.append(".shp");
        temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}


void CatchmentPolygonDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 20, qPrintable(inputFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 21, qPrintable(outputFileLineEdit->text()));

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
	QString outputShpFileName((outputFileLineEdit->text()));
	QString outputDbfFileName; QString outputShxFileName, id;
	outputDbfFileName = outputShpFileName;
    	outputDbfFileName.truncate(outputDbfFileName.length()-3); outputShxFileName=outputDbfFileName;
    	outputDbfFileName.append("dbf");
	
	outputShxFileName.truncate(outputShxFileName.length()-1);
	id=outputShxFileName;
	id=id.right(id.length()-id.lastIndexOf("/",-1)-1);
	cout << "ID = "<<qPrintable(id) <<"\n";
	outputShxFileName.append(".shx");

	QString shpFile = projDir+"/VectorProcessing/"+id+".shp";
	QString dbfFile = projDir+"/VectorProcessing/"+id+".dbf";
	QString shxFile = projDir+"/VectorProcessing/"+id+".shx";

	ifstream inFile;      inFile.open(qPrintable(inputFileLineEdit->text()));
	ofstream outFile;    outFile.open(qPrintable(outputFileLineEdit->text()));
	int runFlag = 1;

	log.open(qPrintable(logFileName), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Catchment Grid Input File</p>";
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
	if(outputShpFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Catchment Polygon Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(outputShpFileName)<<"... ";
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

	
	if(runFlag == 1){
	
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();	
		
		int err = catchmentPoly((char *)qPrintable(inputFileName), "dummy", (char *)qPrintable(outputShpFileName), (char *)qPrintable(outputDbfFileName));
		QFile::copy(outputShpFileName, shpFile);
		QFile::copy(outputDbfFileName, dbfFile);
		QFile::copy(outputShxFileName, shxFile);

		writeLineNumber(qPrintable(projFile), 21, qPrintable(shpFile));

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		if(showSG_DFrame->isChecked() == 1){
			QString myFileNameQString = outputShpFileName;
                        QFileInfo myFileInfo(myFileNameQString);
                        QString myBaseNameQString = myFileInfo.baseName();
                        QString provider = "OGR";
                        cout<<"\n"<<myFileNameQString.ascii()<<"\n"<<myBaseNameQString.ascii()<<"\n"<<provider.ascii()<<"\n";
                        //getchar(); getchar();
                        applicationPointer->addVectorLayer(myFileNameQString, myBaseNameQString, "ogr");
       			//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
//??			applicationPointer->addLayer(QStringList(outputShpFileName), NULL);
		}
	}
}

void CatchmentPolygonDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Catchment Polygon", 1, "helpFiles/catchmentpolygon.html", "Help :: Catchment Polygon");
	hlpDlg->show();	

}
/* ?? */
void CatchmentPolygonDlg::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
} 
