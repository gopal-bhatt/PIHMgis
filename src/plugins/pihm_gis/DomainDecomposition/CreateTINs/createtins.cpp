#include <QtGui>
#include "createtins.h"

#include "../../pihmLIBS/createTinShapeFile.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include "../../pihmLIBS/fileStruct.h"

#include <iostream>
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

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString tempStr=readLineNumber(qPrintable(projFile), 42); tempStr.truncate(tempStr.length()-5);
	eleFileLineEdit->setText(tempStr+".1.ele");
	nodeFileLineEdit->setText(tempStr+".1.node");
	shpFileLineEdit->setText(tempStr+"_q"+readLineNumber(qPrintable(projFile), 43)+"_a"+readLineNumber(qPrintable(projFile), 44)+"_o"+readLineNumber(qPrintable(projFile), 45)+".shp");
}

void createTINsDlg::eleBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/DomainDecomposition","ele File(*.ele *.ELE)");
	eleFileLineEdit->setText(str);
}

void createTINsDlg::nodeBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString str = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/DomainDecomposition", "node File(*.node *.NODE)");
	nodeFileLineEdit->setText(str);
}

void createTINsDlg::shpBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString temp = QFileDialog::getSaveFileName(this, "Choose File", projDir+"/DomainDecomposition","Shape File(*.shp *.SHP)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".shp")){
        	tmp.append(".shp");
        	temp = tmp;
        }
	
        shpFileLineEdit->setText(temp);
}


void createTINsDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 46, qPrintable(eleFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 47, qPrintable(nodeFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 48, qPrintable(shpFileLineEdit->text()));

	QDir dir = QDir::home();
        QString home = dir.homePath();
	QString logFileName(qPrintable(home+"/log.html"));
	ofstream log;
	log.open(qPrintable(logFileName));
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
	ifstream inEle(qPrintable(eleFileName));
	ifstream inNode(qPrintable(nodeFileName));
	ofstream outFile(qPrintable(shpFileName));

	log.open(qPrintable(logFileName), ios::app);
	if(eleFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input ele Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(eleFileName)<<"... ";
		if(inEle == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", qPrintable((inputFileLineEdit->text())));
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	MessageLog->reload();
	QApplication::processEvents();
	

	log.open(qPrintable(logFileName), ios::app);
	if(nodeFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input node Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(nodeFileName)<<"... ";
		if(inNode == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", qPrintable((inputFileLineEdit->text())));
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	if(shpFileName.length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Output Shape File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable(shpFileName)<<"... ";
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
	//	qWarning("\n %s doesn't exist!", qPrintable(eleFileName));
	//else if(tempNode==NULL)
	//	qWarning("\n %s doesn't exist!", qPrintable(nodeFileName));


	if(runFlag == 1){
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running TRINAGLE...";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();

		createTinShapeFile(qPrintable(eleFileName), qPrintable(nodeFileName), qPrintable(shpFileName), qPrintable(dbfFileName), "dummy");

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();

			QString myFileNameQString = shpFileName;
                        QFileInfo myFileInfo(myFileNameQString);
                        QString myBaseNameQString = myFileInfo.baseName();
                        QString provider = "OGR";
                        applicationPointer->addVectorLayer(myFileNameQString, myBaseNameQString, "ogr");
	}
}
			


void createTINsDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "TIN Generation", 1, "helpFiles/tingeneration.html", "Help :: TIN Generation");
	hlpDlg->show();	

}

void createTINsDlg::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
}
