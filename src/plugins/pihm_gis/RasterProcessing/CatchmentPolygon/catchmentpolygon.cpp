#include <QtGui>
#include "catchmentpolygon.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/catPoly.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"

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
}

void CatchmentPolygonDlg::inputBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","CatchmentGrid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);
}


void CatchmentPolygonDlg::outputBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Catchment Polygon File(*.shp)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".shp")){
        tmp.append(".shp");
        temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}


void CatchmentPolygonDlg::run()
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
	QString outputShpFileName((outputFileLineEdit->text()));
	QString outputDbfFileName;
	outputDbfFileName = outputShpFileName;
    	outputDbfFileName.truncate(outputDbfFileName.length()-3);
    	outputDbfFileName.append("dbf");

	ifstream inFile;      inFile.open((inputFileLineEdit->text()).ascii());
	ofstream outFile;    outFile.open((outputFileLineEdit->text()).ascii());
	int runFlag = 1;

	log.open(logFileName.ascii(), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Catchment Grid Input File</p>";
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
	if(outputShpFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Catchment Polygon Output File</p>";
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
		
		int err = catchmentPoly((char *)inputFileName.ascii(), "dummy", (char *)outputShpFileName.ascii(), (char *)outputDbfFileName.ascii());	

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		if(showSG_DFrame->isChecked() == 1){
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
/* ??
void CatchmentPolygonDlg::setApplicationPointer(QgisApp* appPtr){
    applicationPointer = appPtr;
} */
