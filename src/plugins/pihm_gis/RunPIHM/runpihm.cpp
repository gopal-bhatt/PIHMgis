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


runPIHMDlg::runPIHMDlg(QWidget *parent)
{
	QPlastiqueStyle::QPlastiqueStyle();
	setupUi(this);
	connect(browseButton, SIGNAL(clicked()), this, SLOT(folderBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(cancelPIHM()));
}

void runPIHMDlg::cancelPIHM()
{
	thread->kill();
	//thread->wait();
	done(0);
}
void runPIHMDlg::folderBrowse()
{
	QString folder = QFileDialog::getExistingDirectory(this, "Choose Input Directory", "/");
	lineEdit->setText(folder);
}

void runPIHMDlg::run()
{
	QString id = lineEditFile->text();
	QString fileID = lineEdit->text() +"/"+ id;
	//fileNameID(qPrintable(fileID));
	char **nfile;
        nfile    = (char **)malloc(2*sizeof(char *));
        nfile[0] = (char * )malloc(400*sizeof(char));
        nfile[1] = (char * )malloc(400*sizeof(char));
        nfile[0] = "2 ";
        //nfile[1] = (char *)qPrintable(fileID);
	nfile[1] = (char *) fileID.ascii();
	cout<<nfile[1]<<"\n";

	QString logFileName("/tmp/log.html");
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
	thread = new MyNewThread(this);
	thread->init(2, nfile, progressBar, logFileName);
	cout<<"Over to tread Start\n";
        thread->start();

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
