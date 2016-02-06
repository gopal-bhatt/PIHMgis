#include <QtGui>
#include "generateshapetopology.h"

#include "../../pihmLIBS/generatePolyFile.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include <fstream>
using namespace std;

generateShapeTopologyDlg::generateShapeTopologyDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(outputBrowseButton, SIGNAL(clicked()), this, SLOT(outputBrowse()));
	connect(okButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

void generateShapeTopologyDlg::inputBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","Shape File(*.shp *.SHP)");
	inputFileLineEdit->setText(str);
}


void generateShapeTopologyDlg::outputBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Poly File(*.poly)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".poly")){
        	tmp.append(".poly");
        	temp = tmp;
        }
	
        outputFileLineEdit->setText(temp);
}


void generateShapeTopologyDlg::run()
{

	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        MessageLog->setSource(logFileName);
        MessageLog->setFocus();
        MessageLog->setModified(TRUE);


	QString inputFileName((inputFileLineEdit->text()));
	QString outputFileName((outputFileLineEdit->text()));

	ifstream inFile;      inFile.open(qPrintable((inputFileLineEdit->text())));
	ofstream outFile;    outFile.open(qPrintable((outputFileLineEdit->text())));
	int runFlag = 1;

	log.open(qPrintable(logFileName), ios::app);
	if(inputFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Vector Merge Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(inputFileName)<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\n%s doesn't exist!", qPrintable((inputFileLineEdit->text())));
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	MessageLog->reload();
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
	MessageLog->reload();
	QApplication::processEvents();


	
	
	//ifstream temp(inputFileName.ascii());
	
	//if(inputFileName.length()==0)
	//	qWarning("\n Enter Shape File");
	//else if(outputFileName.length()==0)
	//	qWarning("\n Enter poly file");
	//else if(temp==NULL)
	//	qWarning("\n %s doesn't exist!", inputFileName.ascii());
	//else
		
	if(runFlag == 1){
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running...";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();

		generatePolyFile(qPrintable(inputFileName), qPrintable(outputFileName), qPrintable(logFileName)); //"dummy");

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();
	}
}
			


void generateShapeTopologyDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Read Shape Topology", 1, "helpFiles/readshapetopology.html", "Help :: Read Shape Topology");
	hlpDlg->show();	

}
