#include <QtGui>
#include "flowgrid.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/flood.h"
#include "../../pihmRasterLIBS/setdir.h"
#include "../../pihmRasterLIBS/aread8.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

#include <fstream>
#include <iostream>
using namespace std;

FlowGridDlg::FlowGridDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(outputFDRBrowseButton, SIGNAL(clicked()), this, SLOT(outputFDRBrowse()));
	connect(outputFAGBrowseButton, SIGNAL(clicked()), this, SLOT(outputFAGBrowse()));
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
	inputFileLineEdit->setText(readLineNumber(qPrintable(projFile), 4));
	outputFDRFileLineEdit->setText(projDir+"/RasterProcessing/fdr.asc");
        outputFAGFileLineEdit->setText(projDir+"/RasterProcessing/fac.asc");	
}

void FlowGridDlg::inputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();

	QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/RasterProcessing","DEM/Fill Grid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);

	outputFDRFileLineEdit->setText(projDir+"/RasterProcessing/fdr.asc");
	outputFAGFileLineEdit->setText(projDir+"/RasterProcessing/fac.asc");
}

void FlowGridDlg::outputFDRBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();

	QString temp = QFileDialog::getSaveFileName(this, "Choose File", projDir+"/RasterProcessing","Flow Dir Grid File(*.adf *.asc)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".asc")){
        tmp.append(".asc");
        temp = tmp;
        }
	
        outputFDRFileLineEdit->setText(temp);
}

void FlowGridDlg::outputFAGBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();

        QString temp = QFileDialog::getSaveFileName(this, "Choose File", projDir+"/RasterProcessing","Flow Acc Grid File(*.adf *.asc)");
        QString tmp = temp;
        if(!(tmp.toLower()).endsWith(".asc")){
        tmp.append(".asc");
        temp = tmp;
        }

        outputFAGFileLineEdit->setText(temp);
}

void FlowGridDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);
	writeLineNumber(qPrintable(projFile), 5, qPrintable(inputFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 6, qPrintable(outputFDRFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 7, qPrintable(outputFAGFileLineEdit->text()));

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
	QString outputFDRFileName((outputFDRFileLineEdit->text()));
	QString outputFAGFileName((outputFAGFileLineEdit->text()));
	
	ifstream inFile;      inFile.open(qPrintable(inputFileLineEdit->text()));
	ofstream FDRoutFile; FDRoutFile.open(qPrintable(outputFDRFileLineEdit->text()));
	ofstream FAGoutFile; FAGoutFile.open(qPrintable(outputFAGFileLineEdit->text()));
	int runFlag = 1;
	
	log.open(qPrintable(logFileName), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Fill Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p>Checking... "<<qPrintable(inputFileName)<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!";
			qWarning("\n%s doesn't exist!", qPrintable(inputFileLineEdit->text()));
			runFlag = 0;
		}
		else
			log<<"Done!";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	if(outputFDRFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input FDR Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p><p>Checking... "<<qPrintable(outputFDRFileName)<<"... ";
		if(FDRoutFile == NULL){
			log<<"<font size=3 color=red> Error!";
			qWarning("\nCan not open output file");
			runFlag = 0;
		}
		else
			log<<"Done!";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	if(outputFAGFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input FAG Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p><p>Checking... "<<qPrintable(outputFAGFileName)<<"... ";
		if(FAGoutFile == NULL){
			log<<"<font size=3 color=red> Error!";
			qWarning("\nCan not open output file name");
			runFlag = 0;
		}
		else
			log<<"Done!";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();
	
	if(runFlag == 1){	
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running Flow Direction...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		int err1 = setdird8((char *)qPrintable(inputFileName), (char *)qPrintable(outputFDRFileName), "dummy" );

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running Flow Accumulation...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		int err2 = aread8((char *)qPrintable(outputFDRFileName), (char *)qPrintable(outputFAGFileName), 0.0, 0.0, 1 );

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();


		if(showFDR_DFrame->isChecked() == 1){
        		//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		//??	
			applicationPointer->addRasterLayer(outputFDRFileName);
		}
		if(showFAG_DFrame->isChecked() == 1){
		        //QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		//??	
			applicationPointer->addRasterLayer(outputFAGFileName);
	        }
	}
}

void FlowGridDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Flow Grid", 1, "helpFiles/flowgrid.html", "Help :: Flow Grid");
	hlpDlg->show();	
}

void FlowGridDlg::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
}
