#include <QtGui>
#include <QApplication>

#include "runpihm.h"
#include "../PIHM_v1.5/calib.h"

#include <iomanip>
#include <fstream>
using namespace std;

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
	//fileNameID(fileID.ascii());
	char **nfile;
        nfile    = (char **)malloc(2*sizeof(char *));
        nfile[0] = (char * )malloc(400*sizeof(char));
        nfile[1] = (char * )malloc(400*sizeof(char));
        nfile[0] = "2 ";
        nfile[1] = (char *)fileID.ascii();
	cout<<nfile[1]<<"\n";

	QString logFileName("/tmp/log.html");
        ofstream log;
        log.open(logFileName.ascii());
        log<<"<html><body><font size=3 color=black><p> Running PIHM v2.0 ...";//</font></body></html>";
        log.close();
        textBrowser->setSource(logFileName);
        textBrowser->setFocus();
        textBrowser->setModified(TRUE);
	QApplication::processEvents();	

 	pihm(2, nfile, progressBar);

	log.open(logFileName.ascii(), ios::app);
	log<<" Done!";
        log.close();
	textBrowser->reload();
	QApplication::processEvents();
	
}

void runPIHMDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Run PIHM", 1, "helpFiles/runpihm.html", "Help :: Run PIHM");
	hlpDlg->show();
}
