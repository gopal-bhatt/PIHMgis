#include <QtGui>
#include "createtins.h"

#include "../../pihmLIBS/createTinShapeFile.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include <fstream>
using namespace std;

createTINsDlg::createTINsDlg(QWidget *parent)
{
	setupUi(this);
	connect(eleFileButton, SIGNAL(clicked()), this, SLOT(eleBrowse()));
	connect(nodeFileButton, SIGNAL(clicked()), this, SLOT(nodeBrowse()));
	connect(shpFileButton, SIGNAL(clicked()), this, SLOT(shpBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

void createTINsDlg::eleBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","ele File(*.ele *.ELE)");
	eleFileLineEdit->setText(str);
}

void createTINsDlg::nodeBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/", "node File(*.node *.NODE)");
	nodeFileLineEdit->setText(str);
}

void createTINsDlg::shpBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","Shape File(*.shp *.SHP)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".shp")){
        	tmp.append(".shp");
        	temp = tmp;
        }
	
        shpFileLineEdit->setText(temp);
}


void createTINsDlg::run()
{

	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(logFileName.ascii());
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        MessageLog->setSource(logFileName);
        MessageLog->setFocus();
        MessageLog->setModified(TRUE);


	QString eleFileName((eleFileLineEdit->text()));
	QString nodeFileName((nodeFileLineEdit->text()));
	QString shpFileName((shpFileLineEdit->text()));
	QString dbfFileName(shpFileName);
	dbfFileName.truncate(dbfFileName.length()-3);
	dbfFileName.append("dbf");
	
	int runFlag = 1;
	ifstream inEle(eleFileName.ascii());
	ifstream inNode(nodeFileName.ascii());
	ofstream outFile(shpFileName.ascii());

	log.open(logFileName.ascii(), ios::app);
	if(eleFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input ele Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<eleFileName.ascii()<<"... ";
		if(inEle == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	MessageLog->reload();
	QApplication::processEvents();
	

	log.open(logFileName.ascii(), ios::app);
	if(nodeFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input node Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<nodeFileName.ascii()<<"... ";
		if(inNode == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	log.open(logFileName.ascii(), ios::app);
	if(shpFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Output Shape File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<shpFileName.ascii()<<"... ";
		if(outFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\nCan not open output file name");
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	//if(eleFileName.length()==0)
	//	qWarning("\n Enter ele File");
	//else if(nodeFileName.length()==0)
	//	qWarning("\n Enter node File");
	//else if(shpFileName.length()==0)
	//	qWarning("\n Enter Shape File");
	//else if(tempEle==NULL)
	//	qWarning("\n %s doesn't exist!", eleFileName.ascii());
	//else if(tempNode==NULL)
	//	qWarning("\n %s doesn't exist!", nodeFileName.ascii());


	if(runFlag == 1){
		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Running TRINAGLE...";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();

		createTinShapeFile(eleFileName.ascii(), nodeFileName.ascii(), shpFileName.ascii(), dbfFileName.ascii(), "dummy");

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();
	}
}
			


void createTINsDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "TIN Generation", 1, "helpFiles/tingeneration.html", "Help :: TIN Generation");
	hlpDlg->show();	

}
