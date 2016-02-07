#include <iostream>
#include <QtGui>
#include "runtriangle.h"
#include <fstream>
#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "triangle.h"

#include "../../pihmLIBS/fileStruct.h"

#include <fstream>

using namespace std;

runTriangleDlg::runTriangleDlg(QWidget *parent)
{
	setupUi(this);
	connect(polyFileBrowseButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(showOptionsButton, SIGNAL(clicked()), this, SLOT(options()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
	nOptionCheckBox->setCheckState(Qt::Checked);
        VOptionsCheckBox->setCheckState(Qt::Checked);

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	polyFileLineEdit->setText(readLineNumber(qPrintable(projFile), 41));
	if(readLineNumber(qPrintable(projFile), 43).length()>1){
		qOptionsCheckBox->setCheckState(Qt::Checked);
		qOptionLineEdit->setText(readLineNumber(qPrintable(projFile), 43));
	}
	if(readLineNumber(qPrintable(projFile), 44).length()>1){
		aOptionsCheckBox->setCheckState(Qt::Checked);
		aOptionLineEdit->setText(readLineNumber(qPrintable(projFile), 44));
	}
	if(readLineNumber(qPrintable(projFile), 45).length()>1){
		otherOptionLineEdit->setText(readLineNumber(qPrintable(projFile), 45));
	}
		
}


void runTriangleDlg::inputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString temp = QFileDialog::getOpenFileName(this, "Choose File", projDir+"/DomainDecomposition","Poly File(*.poly)");
	
        polyFileLineEdit->setText(temp);
}

void runTriangleDlg::options()
{
	helpDialog* hlpDlg = new helpDialog(this, "TRIANGLE Options", 1, "helpFiles/triangleoptions.html", "Help :: TRIANGLE Options");
        hlpDlg->show();
}

void runTriangleDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 42, qPrintable(polyFileLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 43, qPrintable(qOptionLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 44, qPrintable(aOptionLineEdit->text()));
	writeLineNumber(qPrintable(projFile), 45, qPrintable(otherOptionLineEdit->text()));

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

/*
	ifstream temp;
        temp.open(qPrintable((polyFileLineEdit->text())));
        if((polyFileLineEdit->text()).length()==0){
        	qWarning("\n Enter Poly File");
	}
        else if(temp==NULL){
        	qWarning("\n %s doesn't exist!", qPrintable((polyFileLineEdit->text())));
	}
*/

	ifstream inFile;      inFile.open(qPrintable((polyFileLineEdit->text())));
	int runFlag = 1;

	log.open(qPrintable(logFileName), ios::app);
	if((polyFileLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input poly File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((polyFileLineEdit->text()))<<"... ";
		if(inFile == NULL){
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
	
        if(runFlag == 1){
		QString temp(polyFileLineEdit->text());
		//int slashPos = temp.findRev('/');
        	//temp.truncate(slashPos);
		temp=temp.section('/', 0, -2);
        	QString presentDir(temp);
		cout<<"DEBUG: "<<qPrintable(temp)<<"\n";
		
		QString* exeString = new QString("triangle");
		QString* optString = new QString("-");
                if(nOptionCheckBox->isChecked()){optString->append("n");}
                if(VOptionsCheckBox->isChecked()){optString->append("V");}
                if(qOptionsCheckBox->isChecked()){optString->append("q"); optString->append(qOptionLineEdit->text());}
                if(aOptionsCheckBox->isChecked()){optString->append("a"); optString->append(aOptionLineEdit->text());}
                if(otherOptionCheckBox->isChecked()) {optString->append(otherOptionLineEdit->text());}
		//cmdString->append(aOptionLineEdit->text());}

                //qWarning("cmdstring = %s\n", qPrintable(cmdString));

                //cmdString->append(" ");
                QString fileString(polyFileLineEdit->text());
		//cmdString->append(polyFileLineEdit->text());
		int arg1=0;
		char **arg2;
		arg2 = (char **)malloc(3 * sizeof(char *));
		for (int ii=0; ii<3; ii++)
			arg2[ii]=(char *)malloc(1000*sizeof(char));
		arg2[0]=(char *)exeString->ascii();
                arg1++;

		if(optString->length() != 0){
			arg2[1]=(char *)optString->ascii();
			arg1++;
			arg2[2]=(char *)fileString.ascii();
			arg1++;
		}
		else{
			arg2[1]=(char *)qPrintable(fileString);
			arg1++;
		}

		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running...";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();
		cout<<"arg1 = "<<arg1<<"\n";
		cout<<"arg2 0= ="<<*arg2[0]<<"= || "<<qPrintable(*exeString)<<"\n";
		cout<<"arg2 1= ="<<*arg2[1]<<"= || "<<qPrintable(*optString)<<"\n";
		cout<<"arg2 2= ="<<*arg2[2]<<"= || "<<qPrintable(fileString)<<"\n";
		cout<<"file  = "<<qPrintable(fileString)<<"\n";

		ShewchukTRIANGLE(arg1, arg2);
		
		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();

		// std::cout<<str;
                //cmdString->append(" 1>");
                //cmdString->append(presentDir);
                //cmdString->append("/statistics.txt");
		
		//const char* str = qPrintable(*cmdString);
		//std::system(str);
/*
		QFile statFile( presentDir+"/statistics.txt" );

                if ( !statFile.open( IO_ReadOnly ) )
                       return;
                QTextStream textStream( &statFile );

                int lines2print;
                if(VOptionsCheckBox->isChecked()){
                       if(!qOptionsCheckBox->isChecked())
                               lines2print = 23;
                       else
                               lines2print = 29;
                }
                else{
                       if(!qOptionsCheckBox->isChecked())
                               lines2print = 15;
                       else
                               lines2print = 17;
                }

                for(int i=1; i<=lines2print; i++){
                       qWarning("\n %s",qPrintable((textStream.readLine())));
                }
*/
	}
}
			
void runTriangleDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Run TRIANGLE", 1, "helpFiles/runtriangle.html", "Help :: Run TRIANGLE");
	hlpDlg->show();	
}
