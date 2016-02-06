#include <QtGui>
#include "streampolyline.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/streamSegmentationShp.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"

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
}

void StreamPolyLineDlg::inputSTRBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","Stream Grid File(*.adf *.asc)");
	inputSTRFileLineEdit->setText(str);
}

void StreamPolyLineDlg::inputFDRBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","Flow Dir Grid File(*.adf *.asc)");
        inputFDRFileLineEdit->setText(str);
}

void StreamPolyLineDlg::outputBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Stream PolyLine File(*.shp)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".shp")){
        tmp.append(".shp");
        temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}


void StreamPolyLineDlg::run()
{
	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(logFileName.ascii());
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
    	outputDbfFileName.append("dbf");

	ifstream STRinFile;      STRinFile.open((inputSTRFileLineEdit->text()).ascii());
	ifstream FDRinFile;      FDRinFile.open((inputFDRFileLineEdit->text()).ascii());
	ofstream outFile;          outFile.open((outputFileLineEdit->text()).ascii());
	int runFlag = 1;

	log.open(logFileName.ascii(), ios::app);
	if(inputSTRFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Stream Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<inputSTRFileName.ascii()<<"... ";
		if(STRinFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", (inputSTRFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();	

	log.open(logFileName.ascii(), ios::app);
	if(inputFDRFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Flow Dir. Grid Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<inputFDRFileName.ascii()<<"... ";
		if(FDRinFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", (inputFDRFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();
	
	log.open(logFileName.ascii(), ios::app);
	if(outputShpFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Stream Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<outputShpFileName.ascii()<<"... ";
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
		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Running...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();		

	    	int err = streamSegmentationShp((char *)inputSTRFileName.ascii(), (char *)inputFDRFileName.ascii(), (char *)outputShpFileName.ascii(), (char *)outputDbfFileName.ascii());
		
		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		if(showSG_DFrame->isChecked() == 1){
		//??	applicationPointer->addLayer(QStringList(outputShpFileName), NULL);
	        	//QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		}
	}
}

void StreamPolyLineDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Stream Polyline", 1, "helpFiles/streampolyline.html", "Help :: Stream Polyline");
	hlpDlg->show();	

}
/* ??
void StreamPolyLineDlg::setApplicationPointer(QgisApp* appPtr){
    applicationPointer = appPtr;
}*/
