#include <QtGui>
#include "parafile.h"

#include <iomanip>
#include <fstream>
using namespace std;

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

paraFileDlg::paraFileDlg(QWidget *parent)
{
	setupUi(this);
	connect(paraFileButton, SIGNAL(clicked()), this, SLOT(paraBrowse()));
	connect(okButton, SIGNAL(clicked()), this, SLOT(run()));
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
	
	QString tempStr; tempStr=readLineNumber(qPrintable(projFile), 49); tempStr.truncate(tempStr.length()-4);
	paraFileLineEdit->setText(tempStr+"para");
}

void paraFileDlg::paraBrowse()
{	
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString temp = QFileDialog::getSaveFileName(this, "Choose File", projDir+"/DataModel","para File(*.para *.PARA)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".para")){
        	tmp.append(".para");
        	temp = tmp;
        }
	paraFileLineEdit->setText(temp);	
}


void paraFileDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 82, qPrintable(paraFileLineEdit->text()));

	QDir dir = QDir::home();
        QString home = dir.homePath();
	QString logFileName(home+"/log.html");
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        MessageLog->setSource(logFileName);
        MessageLog->setFocus();
        MessageLog->setModified(TRUE);

        ofstream parameters;
        parameters.open(qPrintable((paraFileLineEdit->text())), ios::out);

	int runFlag = 1;

	/*
        if(parameters==NULL){
        	qWarning("\nPlease input para file name");
	        runFlag=0;
        }*/

	log.open(qPrintable(logFileName), ios::app);
	if((paraFileLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .para Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((paraFileLineEdit->text()))<<"... ";
		if(parameters == NULL){
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

	
	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Krylov Dimension..."; 
	if(KDlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Krylov Dimension");
                //out<<"<p><font size=2 color=red>Please enter Krylov Dimension</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Convergence Threshold...";
        if(CTlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Convergence Tolerance");
                //out<<"<p><font size=2 color=red>Please enter Convergence Tolerance</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Absolute Tolerance...";
        if(ATlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Absolute Tolerance");
   	        //out<<"<p><font size=2 color=red>Please enter Absolute Tolerance</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Relative Tolerance...";
        if(RTlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Relative Tolerance");
                //out<<"<p><font size=2 color=red>Please enter Relative Tolerance</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Initial Step...";
        if(ISlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Initial Time Step");
                //out<<"<p><font size=2 color=red>Please enter Initial Time Step</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();

	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Maximum Step...";
        if(MSlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
                qWarning("\nPlease enter Maximum Time Step");
		//out<<"<p><font size=2 color=red>Please enter Maximum Time Step</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();

	
	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Start Time...";
        if(STlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Start Time");
                //out<<"<p><font size=2 color=red>Please enter Start Time</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking End Time...";
        if(ETlineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter End Time");
                //out<<"<p><font size=2 color=red>Please enter End Time</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Step Size...";
        if(a_lineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Step Size Factor (a)");
                //out<<"<p><font size=2 color=red>Please enter Step Size Factor (a)</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=black>Checking Base Step Size...";
        if(b_lineEdit->text().length()==0){
		log<<"<font size=3 color=red>Error!</p>";
                runFlag=0;
		qWarning("\nPlease enter Base Step Size (b)");
                //out<<"<p><font size=2 color=red>Please enter Base Step Size (b)</font></p>";
        }
	else
		log<<"Done</p>";
	log.close();
	MessageLog->reload();
	QApplication::processEvents();


	if(runFlag == 1){

		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Writing .para file...";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();


		if(verboseCheckBox->isChecked())
	                parameters<<"1\t";
        	else
                	parameters<<"0\t";

	        if(debugCheckBox->isChecked())
        	        parameters<<"1\t";
	        else
        	        parameters<<"0\t";

	        if(imComboBox->currentIndex() == 0)
        	        parameters<<"3\n";
	        else if(imComboBox->currentIndex() == 1)
        	        parameters<<"1\n";
	        else
        	        parameters<<"0\n";
		/*
	        if(resFileCheckBox->isChecked())
        	        parameters<<"1\t";
	        else
        	        parameters<<"0\t";

	        if(fluxFileCheckBox->isChecked())
        	        parameters<<"1\t";
	        else
        	        parameters<<"0\t";

	        if(qFileCheckBox->isChecked())
        	        parameters<<"1\t";
	        else
        	        parameters<<"0\t";

	        if(etFileCheckBox->isChecked())
        	        parameters<<"1\n";
	        else
        	        parameters<<"0\n";
		*/

		if(checkBox1->isChecked())
			parameters<<"1\t";
		else
			parameters<<"0\t";
                if(checkBox2->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox3->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox4->isChecked())
                        parameters<<"1\n";
                else
                        parameters<<"0\n";
		////
                if(checkBox5->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox6->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox7->isChecked())
                        parameters<<"1\n";
                else
                        parameters<<"0\n";
		////
                if(checkBox8->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox9->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox10->isChecked())
                        parameters<<"1\n";
                else
                        parameters<<"0\n";
		////
                if(checkBox11->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox12->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox13->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox14->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox15->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox16->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox17->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox18->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox19->isChecked())
                        parameters<<"1\t";
                else
                        parameters<<"0\t";
                if(checkBox20->isChecked())
                        parameters<<"1\n";
                else
                        parameters<<"0\n";
		///
		int multiplier = comboBoxTime2->currentIndex()==0 ? 1 : comboBoxTime2->currentIndex()==1? 60 : 24*60;
                if(checkBox1->isChecked())
                        parameters<<(lineEdit1->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox2->isChecked())
                        parameters<<(lineEdit2->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox3->isChecked())
                        parameters<<(lineEdit3->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox4->isChecked())
                        parameters<<(lineEdit4->text()).toDouble()*multiplier<<"\n";
                else
                        parameters<<"0\n";

		////
                if(checkBox5->isChecked())
                        parameters<<(lineEdit5->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox6->isChecked())
                        parameters<<(lineEdit6->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox7->isChecked())
                        parameters<<(lineEdit7->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox8->isChecked() || checkBox9->isChecked() || checkBox10->isChecked())
                        parameters<<(lineEdit8->text()).toDouble()*multiplier<<"\t";
                else
                        parameters<<"0\t";
                if(checkBox11->isChecked() || checkBox12->isChecked() || checkBox13->isChecked() || checkBox14->isChecked() || checkBox15->isChecked() || checkBox16->isChecked() || checkBox17->isChecked() || checkBox18->isChecked() || checkBox19->isChecked() || checkBox20->isChecked())
                        parameters<<(lineEdit11->text()).toDouble()*multiplier<<"\n";
                else
                        parameters<<"0\n";

		////

		if(umComboBox->currentIndex() == 0)
	                parameters<<"1\t";
        	else
                	parameters<<"2\t";

	        if(smComboBox->currentIndex() == 0)
        	        parameters<<"2\t";
	        else if(smComboBox->currentIndex() == 1)
        	        parameters<<"1\t";
	        else
        	        parameters<<"3\t";

	        if(rmComboBox->currentIndex() == 0)
        	        parameters<<"2\n";
	        else if(rmComboBox->currentIndex() == 1)
        	        parameters<<"1\n";
	        else
        	        parameters<<"3\n";

	        /************************************************/

        	if(DDradioButton->isChecked())
                	parameters<<"1\t";
	        else
        	        parameters<<"2\t";

	        if(GScomboBox->currentIndex() == 0)
        	        parameters<<"1\t";
	        else
        	        parameters<<"2\t";

	        parameters<<qPrintable((KDlineEdit->text()))<<"\t";

        	parameters<<qPrintable((CTlineEdit->text()))<<"\n";

	        /*************************************************/

        	parameters<<qPrintable((ATlineEdit->text()))<<"\t";

	        parameters<<qPrintable((RTlineEdit->text()))<<"\t";

        	parameters<<qPrintable((ISlineEdit->text()))<<"\t";

	        parameters<<qPrintable((MSlineEdit->text()))<<"\t";

		parameters<<qPrintable((ETSlineEdit->text()))<<"\n";

		/***********/
		multiplier = comboBoxTime1->currentIndex()==0 ? 1 : comboBoxTime1->currentIndex()==1? 60 : 24*60;
		parameters<<(STlineEdit->text()).toDouble()*multiplier<<"\t";

		parameters<<(ETlineEdit->text()).toDouble()*multiplier<<"\t";

		if(SScomboBox->currentIndex() == 0)
			parameters<<"0\n";
		else
			parameters<<"1\n";
		
		parameters<<qPrintable((a_lineEdit->text()))<<"\t";
		parameters<<qPrintable((b_lineEdit->text()))<<"\n";

		if(checkBoxFillSurf->isChecked())
			parameters<<"1\t";
		else
			parameters<<"0\t";

		if(checkBoxFillSub->isChecked())
			parameters<<"1\n";
		else
			parameters<<"0\n";

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();

	}	
}
			
void paraFileDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Para File", 1, "helpFiles/parafile.html", "Help :: Para File");
	hlpDlg->show();	
}
