#include <QtGui>
#include "streamgrid.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/flood.h"
#include "../../pihmRasterLIBS/setdir.h"
#include "../../pihmRasterLIBS/aread8.h"
#include "../../pihmRasterLIBS/streamSegmentation.h"
#include "../../pihmRasterLIBS/streamDefinition.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include <fstream>
using namespace std;


StreamGridDlg::StreamGridDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(outputBrowseButton, SIGNAL(clicked()), this, SLOT(outputBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
}

void StreamGridDlg::inputBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","Flow Acc Grid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);
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
	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(logFileName.ascii());
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        messageLog->setSource(logFileName);
        messageLog->setFocus();
        messageLog->setModified(TRUE);	

	QString inputFileName((inputFileLineEdit->text()));
	QString outputFileName((outputFileLineEdit->text()));
	double thresh;
	thresh = (inputThreshLineEdit->text()).toDouble();
	
	ifstream inFile;      inFile.open((inputFileLineEdit->text()).ascii());
	ofstream outFile;    outFile.open((outputFileLineEdit->text()).ascii());
	int runFlag = 1;

	log.open(logFileName.ascii(), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Flow Acc. Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<inputFileName.ascii()<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	log.open(logFileName.ascii(), ios::app);
	if(outputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Stream Grid Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<outputFileName.ascii()<<"... ";
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

	log.open(logFileName.ascii(), ios::app);
	if((inputThreshLineEdit->text()).length() == 0){
		log<<"<p><font size=3 color=red> Error! Please input Threshold</p>";
		runFlag = 0;
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	if(runFlag == 1){
		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Running...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		int err1 = streamDefinition((char *)inputFileName.ascii(), "dummy", (char *)outputFileName.ascii(), 1, thresh );
	
		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		if(showSG_DFrame->isChecked() == 1){
       			//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
			//??applicationPointer->addRasterLayer(QStringList(outputFileName));
		}
	}
}

void StreamGridDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Stream Grid", 1, "helpFiles/streamgrid.html", "Help :: Stream Grid");
	hlpDlg->show();	

}
/* ??
void StreamGridDlg::setApplicationPointer(QgisApp* appPtr){
    applicationPointer = appPtr;
}*/
