#include <QtGui>
#include "streampolyline.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/streamSegmentationShp.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

#include <iostream>
#include <fstream>
using namespace std;

StreamPolyLineDlg::StreamPolyLineDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputSTRBrowseButton, SIGNAL(clicked()), this, SLOT(inputSTRBrowse()));
	connect(inputFDRBrowseButton, SIGNAL(clicked()), this, SLOT(inputFDRBrowse()));
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

	inputSTRFileLineEdit->setText(readLineNumber(qPrintable(projFile), 11));
	inputFDRFileLineEdit->setText(readLineNumber(qPrintable(projFile), 6));

	QString qstrThresh(readLineNumber(qPrintable(projFile), 10));
	outputFileLineEdit->setText(projDir+"/RasterProcessing/str"+qstrThresh+".shp");
}

void StreamPolyLineDlg::inputSTRBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/RasterProcessing","Stream Grid File(*.adf *.asc)");
	inputSTRFileLineEdit->setText(str);
}

void StreamPolyLineDlg::inputFDRBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

        QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/RasterProcessing","Flow Dir Grid File(*.adf *.asc)");
        inputFDRFileLineEdit->setText(str);
}

void StreamPolyLineDlg::outputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString temp = QFileDialog::getSaveFileName(this, "Choose File", projDir+"/RasterProcessing","Stream PolyLine File(*.shp)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".shp")){
        tmp.append(".shp");
        temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}


void StreamPolyLineDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);
	writeLineNumber(qPrintable(projFile), 14, qPrintable(inputSTRFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 15, qPrintable(inputFDRFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 16, qPrintable(outputFileLineEdit->text()));

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

	QString inputSTRFileName((inputSTRFileLineEdit->text()));
	QString inputFDRFileName((inputFDRFileLineEdit->text()));
	QString outputShpFileName((outputFileLineEdit->text()));
	QString outputDbfFileName;
	outputDbfFileName = outputShpFileName;
    	outputDbfFileName.truncate(outputDbfFileName.length()-3);
	QString outputShxFileName, id; outputShxFileName = outputDbfFileName;
    	outputDbfFileName.append("dbf");

	outputShxFileName.truncate(outputShxFileName.length()-1);
        id=outputShxFileName;
        id=id.right(id.length()-id.lastIndexOf("/",-1)-1);
        cout << "ID = "<<qPrintable(id) <<"\n";
        outputShxFileName.append(".shx");

        QString shpFile = projDir+"/VectorProcessing/"+id+".shp";
        QString dbfFile = projDir+"/VectorProcessing/"+id+".dbf";
        QString shxFile = projDir+"/VectorProcessing/"+id+".shx";

	ifstream STRinFile;      STRinFile.open(qPrintable(inputSTRFileLineEdit->text()));
	ifstream FDRinFile;      FDRinFile.open(qPrintable(inputFDRFileLineEdit->text()));
	ofstream outFile;          outFile.open(qPrintable(outputFileLineEdit->text()));
	int runFlag = 1;

	log.open(qPrintable(logFileName), ios::app);
	if(inputSTRFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Stream Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(inputSTRFileName)<<"... ";
		if(STRinFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", qPrintable(inputSTRFileLineEdit->text()));
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();	

	log.open(qPrintable(logFileName), ios::app);
	if(inputFDRFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Flow Dir. Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(inputFDRFileName)<<"... ";
		if(FDRinFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", qPrintable(inputFDRFileLineEdit->text()));
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
		log<<"<p><font size=3 color=red> Error! Please input Stream Output File</p>";
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

	    	int err = streamSegmentationShp((char *)qPrintable(inputSTRFileName), (char *)qPrintable(inputFDRFileName), (char *)qPrintable(outputShpFileName), (char *)qPrintable(outputDbfFileName));

		QFile::copy(outputShpFileName, shpFile);
                QFile::copy(outputDbfFileName, dbfFile);
                QFile::copy(outputShxFileName, shxFile);
		writeLineNumber(qPrintable(projFile), 16, qPrintable(shpFile));
		
		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		if(showSG_DFrame->isChecked() == 1){
		//??
			QString myFileNameQString = outputShpFileName;
		        QFileInfo myFileInfo(myFileNameQString);
     			QString myBaseNameQString = myFileInfo.baseName();
			QString provider = "OGR";
			cout<<"\n"<<myFileNameQString.ascii()<<"\n"<<myBaseNameQString.ascii()<<"\n"<<provider.ascii()<<"\n";
			//getchar(); getchar();
			applicationPointer->addVectorLayer(myFileNameQString, myBaseNameQString, "ogr");
	        	//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		}
	}
}

void StreamPolyLineDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Stream Polyline", 1, "helpFiles/streampolyline.html", "Help :: Stream Polyline");
	hlpDlg->show();	

}
/* ??*/
void StreamPolyLineDlg::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
}
