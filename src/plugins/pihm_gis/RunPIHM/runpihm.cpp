#include <QtGui>
#include <QApplication>

#include "runpihm.h"
#include "../PIHM_v1.5/calib.h"

#include <iomanip>
#include <fstream>
using namespace std;
#include "../MyNewThread.h"
#include "../pihmLIBS/helpDialog/helpdialog.h"
#include "../PIHM_v2.0/pihm.h"
//#include "../PIHM_v1.5/calib.h"
//#include "../PIHM_v1.5/et_is.h"

#include "../pihmLIBS/fileStruct.h"

runPIHMDlg::runPIHMDlg(QWidget *parent)
{
	QPlastiqueStyle::QPlastiqueStyle();
	setupUi(this);
	connect(browseButton, SIGNAL(clicked()), this, SLOT(folderBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancelPIHM()));

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	lineEdit->setText(projDir+"/DataModel");
	lineEditFile->setText(readLineNumber(qPrintable(projFile), 50));
}

void runPIHMDlg::cancelPIHM()
{	
	cout<<"\n->"<<thread;
	if(thread != NULL )
		thread->kill();
	//thread->wait();
	done(0);
	close();
}
void runPIHMDlg::folderBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout <<"\n$ "<< qPrintable(projDir) <<"\n";
	
	QDir::setCurrent(projDir);
	QString folder = QFileDialog::getExistingDirectory(this, "Choose Input Directory", projDir);
	lineEdit->setText(folder);
}

void runPIHMDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();

	static int Number=0; int folderCreated=0; int runFlag = 1;
	QString dir, file; dir=lineEdit->text(); file=lineEditFile->text();
	QDir tempDir; tempDir.cd(lineEdit->text());
	QDir dummyDir; QString source, dest, newFolder;
	
	if(checkBox->isChecked()==1){
	while(folderCreated==0){
		newFolder=Number < 10?"Simul0"+QString::number(Number,10) : "Simul"+QString::number(Number,10); Number++;
		if(dummyDir.exists(lineEdit->text()+"/"+newFolder) == 0){
			tempDir.mkdir(newFolder);
			folderCreated=1;
			
			source=dir+"/"+file+".mesh"; runFlag=QFile::exists(source)?runFlag:2; dest=dir+"/"+newFolder+"/"+file+".mesh"; QFile::copy(source, dest);
			source=dir+"/"+file+".att"; runFlag=QFile::exists(source)?runFlag:3; dest=dir+"/"+newFolder+"/"+file+".att"; QFile::copy(source, dest);
			source=dir+"/"+file+".riv"; runFlag=QFile::exists(source)?runFlag:4; dest=dir+"/"+newFolder+"/"+file+".riv"; QFile::copy(source, dest);
			source=dir+"/"+file+".para"; runFlag=QFile::exists(source)?runFlag:5; dest=dir+"/"+newFolder+"/"+file+".para"; QFile::copy(source, dest);
			source=dir+"/"+file+".soil"; runFlag=QFile::exists(source)?runFlag:6; dest=dir+"/"+newFolder+"/"+file+".soil"; QFile::copy(source, dest);
			source=dir+"/"+file+".geol"; runFlag=QFile::exists(source)?runFlag:7; dest=dir+"/"+newFolder+"/"+file+".geol"; QFile::copy(source, dest);
			source=dir+"/"+file+".lc"; runFlag=QFile::exists(source)?runFlag:8; dest=dir+"/"+newFolder+"/"+file+".lc"; QFile::copy(source, dest);
			source=dir+"/"+file+".calib";runFlag=QFile::exists(source)?runFlag:9; dest=dir+"/"+newFolder+"/"+file+".calib"; QFile::copy(source, dest);
			source=dir+"/"+file+".init"; runFlag=QFile::exists(source)?runFlag:10; dest=dir+"/"+newFolder+"/"+file+".init"; QFile::copy(source, dest);
			source=dir+"/"+file+".ibc"; runFlag=QFile::exists(source)?runFlag:11; dest=dir+"/"+newFolder+"/"+file+".ibc"; QFile::copy(source, dest);
			source=dir+"/"+file+".forc"; runFlag=QFile::exists(source)?runFlag:12; dest=dir+"/"+newFolder+"/"+file+".forc"; QFile::copy(source, dest);
		}
	}
	}
	
	QString id = lineEditFile->text();
	QString fileID;
	if(checkBox->isChecked()==1)
		fileID = lineEdit->text() +"/"+ newFolder + "/" + id;
	else
		fileID = lineEdit->text() + "/" + id;
	//fileNameID(qPrintable(fileID));
	char **nfile;
        nfile    = (char **)malloc(2*sizeof(char *));
        nfile[0] = (char * )malloc(400*sizeof(char));
        nfile[1] = (char * )malloc(400*sizeof(char));
        nfile[0] = "2 ";
        //nfile[1] = (char *)qPrintable(fileID);
	nfile[1] = (char *) fileID.ascii();
	cout<<nfile[1]<<"\n";

	QDir hdir = QDir::home();
        QString home = hdir.homePath();
	QString logFileName(home+"/log.html");
        ofstream log;
        log.open(qPrintable(logFileName));
        log<<"<html><body><font size=3 color=black><p> Running PIHM v2.0 ...<br>";//</font></body></html>";
        log.close();
        textBrowser->setSource(logFileName);
        textBrowser->setFocus();
        //textBrowser->modified=TRUE;
	QApplication::processEvents();	

 	//pihm(2, nfile, progressBar);
	//MyNewThread* 
	if(runFlag == 1){
		ifstream paraFile; paraFile.open(qPrintable(fileID+".para"));
		double tempNum; int tempNumInt, tempScale=999;
		if(paraFile){
			for(int ti=0; ti<23; ti++) paraFile>>tempNum;
			for(int tj=0; tj<9; tj++){ paraFile >>tempNumInt;
				writeLineNumber(qPrintable(projFile), 101+tj, qPrintable(QString::number(tempNumInt,10)));
				tempNumInt=(tempNumInt%1440==0 ? 2 : (tempNumInt % 60==0) ? 1 : 0);
				tempScale=tempScale<tempNumInt? tempScale : tempNumInt;
			}
			//tempNumInt=tempNumInt%1440==0 ? 2 : (tempNumInt % 60==0) ? 1 : 0;
			//tempNumInt=tempNumInt<60?0: (tempNumInt<60*24 && tempNumInt%60!=0) ? 0 : tempNumInt%1440!=0 ? 1 : 2;
			writeLineNumber(qPrintable(projFile), 110, qPrintable(QString::number(tempScale,10)));

			for(int ti=0; ti<12; ti++) paraFile >> tempNum;
			paraFile >> tempNumInt; writeLineNumber(qPrintable(projFile), 111, qPrintable(QString::number(tempNumInt,10)));
			paraFile >> tempNumInt; writeLineNumber(qPrintable(projFile), 112, qPrintable(QString::number(tempNumInt,10)));
		}
		thread = new MyNewThread(this);
		thread->init(2, nfile, progressBar, logFileName);
		cout<<"Over to tread Start\n";
        	thread->start();
	}
	else
		cout<<"\nError: Input file(s) missing. Flag = "<<runFlag<<"\n";

	log.open(qPrintable(logFileName), ios::app);
	//log<<" Done!";
        log.close();
	textBrowser->reload();
	QApplication::processEvents();
	
}

void runPIHMDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Run PIHM", 1, "helpFiles/runpihm.html", "Help :: Run PIHM");
	hlpDlg->show();
}
