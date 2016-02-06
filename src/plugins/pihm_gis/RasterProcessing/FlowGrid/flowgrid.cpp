#include <QtGui>
#include "flowgrid.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/flood.h"
#include "../../pihmRasterLIBS/setdir.h"
#include "../../pihmRasterLIBS/aread8.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include <fstream>
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
}

void FlowGridDlg::inputBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","DEM/Fill Grid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);
}

void FlowGridDlg::outputFDRBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Flow Dir Grid File(*.adf *.asc)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".asc")){
        tmp.append(".asc");
        temp = tmp;
        }
	
        outputFDRFileLineEdit->setText(temp);
}

void FlowGridDlg::outputFAGBrowse()
{
        QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Flow Acc Grid File(*.adf *.asc)");
        QString tmp = temp;
        if(!(tmp.toLower()).endsWith(".asc")){
        tmp.append(".asc");
        temp = tmp;
        }

        outputFAGFileLineEdit->setText(temp);
}

void FlowGridDlg::run()
{
	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(logFileName.ascii());
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        messageLog->setSource(logFileName);
        messageLog->setFocus();
        messageLog->setModified(TRUE);

	QString inputFileName((inputFileLineEdit->text()));
	QString outputFDRFileName((outputFDRFileLineEdit->text()));
	QString outputFAGFileName((outputFAGFileLineEdit->text()));
	
	ifstream inFile;      inFile.open((inputFileLineEdit->text()).ascii());
	ofstream FDRoutFile; FDRoutFile.open((outputFDRFileLineEdit->text()).ascii());
	ofstream FAGoutFile; FAGoutFile.open((outputFAGFileLineEdit->text()).ascii());
	int runFlag = 1;
	
	log.open(logFileName.ascii(), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Fill Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p>Checking... "<<inputFileName.ascii()<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!";
			qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	log.open(logFileName.ascii(), ios::app);
	if(outputFDRFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input FDR Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p><p>Checking... "<<outputFDRFileName.ascii()<<"... ";
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

	log.open(logFileName.ascii(), ios::app);
	if(outputFAGFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input FAG Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p><p>Checking... "<<outputFAGFileName.ascii()<<"... ";
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
		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Running Flow Direction...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		int err1 = setdird8((char *)inputFileName.ascii(), (char *)outputFDRFileName.ascii(), "dummy" );

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Running Flow Accumulation...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		int err2 = aread8((char *)outputFDRFileName.ascii(), (char *)outputFAGFileName.ascii(), 0.0, 0.0, 1 );

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();


		if(showFDR_DFrame->isChecked() == 1){
        		//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		//??	applicationPointer->addRasterLayer(QStringList(outputFDRFileName));
		}
		if(showFAG_DFrame->isChecked() == 1){
		        //QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		//??	applicationPointer->addRasterLayer(QStringList(outputFAGFileName));
	        }
	}
}

void FlowGridDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Flow Grid", 1, "helpFiles/flowgrid.html", "Help :: Flow Grid");
	hlpDlg->show();	
}
/*
void FlowGridDlg::setApplicationPointer(QgisApp* appPtr){
    applicationPointer = appPtr;
}*/
