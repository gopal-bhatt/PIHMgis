#include <QtGui>
#include "fillpits.h"
#include "../../pihmRasterLIBS/flood.h"
#include "../../pihmRasterLIBS/bin2ascii.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmgis.h"
#include "../../pihmLIBS/homeDir.h"

#include <fstream>
using namespace std;

fillpitsDlg::fillpitsDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(outputBrowseButton, SIGNAL(clicked()), this, SLOT(outputBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
}

void fillpitsDlg::inputBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","DEM Grid File(*.adf *.asc)");
	inputFileLineEdit->setText(str);
}

void fillpitsDlg::outputBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","DEM Grid File(*.adf *.asc)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".asc")){
        tmp.append(".asc");
        temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}

void fillpitsDlg::run()
{
	QString inputFileName((inputFileLineEdit->text()));
	QString outputFileName((outputFileLineEdit->text()));
	
	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(logFileName.ascii());
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        messageLog->setSource(logFileName);
        messageLog->setFocus();
        messageLog->setModified(TRUE);	
	
	ifstream inFile;   inFile.open((inputFileLineEdit->text()).ascii());
	ofstream outFile; outFile.open((outputFileLineEdit->text()).ascii());
	int runFlag = 1;
	
	log.open(logFileName.ascii(), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input DEM File</p>";
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
	if(outputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"</p><p>Checking... "<<outputFileName.ascii()<<"... ";
		if(outFile == NULL){
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
		log<<"<p>Running Fill Pits...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();
		
		QString tmp = inputFileName;

		QString inputAsciiFileName = inputFileName;

		if((tmp.toLower()).endsWith(".adf")){
			inputAsciiFileName.truncate(inputAsciiFileName.length()-3);
			inputAsciiFileName.append("asc"); 
       			bin2ascii((char*)inputFileName.ascii(), (char *)inputAsciiFileName.ascii());
        	}	
	
		int err = flood((char *)inputAsciiFileName.ascii(), "dummy", (char *)outputFileName.ascii() );
		
		log.open(logFileName.ascii(), ios::app);
		log<<" Done!";
		log.close();
		messageLog->reload();
		QApplication::processEvents();
		
		if(showPF_DFrame->isChecked() == 1){
			//qWarning("here");
			//??applicationPointer->addRasterLayer(QStringList(outputFileName));
		        //QgsRasterLayer *tempLayer = new QgsRasterLayer("/backup/pihm/RasterProcessing/FillPits", "morgedem.asc");
		}
	}
}

void fillpitsDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Fill Pits", 1, "helpFiles/fillpits.html", "Help :: Fill Pits");
	hlpDlg->show();	
}
/* ??
void fillpitsDlg::setApplicationPointer(QgisApp* appPtr){
    applicationPointer = appPtr;
}*/