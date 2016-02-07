#include "initfile.h"
#include "ui_initfile.h"

#include <QFileDialog>
#include <fstream>

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

using namespace std;

InitFile::InitFile(QWidget *parent)
    : QDialog(parent), ui(new Ui::InitFile)
{
    ui->setupUi(this);

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString tempStr=readLineNumber(qPrintable(projFile), 49); tempStr.truncate(tempStr.length()-4);
	ui->lineEditMeshFile->setText(tempStr+"mesh");
	ui->lineEditRivFile->setText(tempStr+"riv");
	ui->lineEditInitFile->setText(tempStr+"init");
}

InitFile::~InitFile()
{
    delete ui;
}

void InitFile::on_pushButton_MeshFile_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getOpenFileName(this, "Choose Mesh File", projDir+"/DataModel", "Mesh File (*.mesh)");
    ui->lineEditMeshFile->setText(s);
}

void InitFile::on_pushButton_RivFile_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getOpenFileName(this, "Choose Riv File", projDir+"/DataModel", "Riv File (*.riv)");
    ui->lineEditRivFile->setText(s);
}

void InitFile::on_pushButton_InitFile_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Choose Init File Name", projDir+"/DataModel", "Init file (*.init)");
    if(!s.endsWith(".init"))
        s.append(".init");
    ui->lineEditInitFile->setText(s);
}

void InitFile::on_pushButton_Close_clicked()
{
    this->close();
}

void InitFile::on_pushButton_Run_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 94, qPrintable(ui->lineEditInitFile->text()));

    int RunFlag=1;
    ifstream inFileMesh, inFileRiv;
    ofstream outFile;
    inFileMesh.open((ui->lineEditMeshFile->text()).toAscii());
    inFileRiv.open((ui->lineEditRivFile->text()).toAscii());
    outFile.open((ui->lineEditInitFile->text()).toAscii());

    ofstream logFile;
	QDir dir = QDir::home();
        QString home = dir.homePath();
    QString logFileName(home+"/log.html");
    logFile.open(qPrintable(logFileName));
    logFile<<"<html><body><font size=3 color=black> Verifying Files...<br>";
    logFile.close();
    ui->textBrowser->setSource(logFileName);
    ui->textBrowser->setFocus();
    ui->textBrowser->setModified(TRUE);

    logFile.open(qPrintable(logFileName), ios::app);
    logFile<<"Checking Mesh File... ";
    if (inFileMesh == NULL){
        logFile<<"could NOT open file.  ERROR<br>";
        RunFlag = 0;
    }
    else
        logFile<<"Done!<br>";
    logFile<<"Checking Riv File... ";
    if (inFileRiv == NULL){
        logFile<<"could NOT open file.  ERROR<br>";
        RunFlag = 0;
    }
    else
        logFile<<"Done!<br>";
    logFile<<"Checking Init File... ";
    if (outFile == NULL){
        logFile<<"could NOT open file to write.  ERROR<br>";
        RunFlag = 0;
    }
    else
        logFile<<"Done!<br>";
    logFile.close();
    ui->textBrowser->reload();

    if(RunFlag == 1){
        logFile.open(qPrintable(logFileName), ios::app);
        logFile<<"Generating INIT file... ";
        int NumEle, NumRiv;
        inFileMesh >> NumEle;
        inFileRiv  >> NumRiv;

        for(int i=0; i<NumEle; i++){
            outFile<<ui->interception->text().toFloat()<<"\t";
            outFile<<ui->snow->text().toFloat()<<"\t";
            outFile<<ui->surface->text().toFloat()<<"\t";
            outFile<<ui->unsaturated->text().toFloat()<<"\t";
            outFile<<ui->saturated->text().toFloat()<<"\n";
        }
        for(int i=0; i<NumRiv; i++){
            outFile<<ui->river->text().toFloat()<<"\t";
            outFile<<ui->riverBed->text().toFloat()<<"\n";
        }
        logFile<<"Done!<br>";
        logFile<<"InitFile Module - COMPLETE";
        logFile.close();
        ui->textBrowser->reload();
        QApplication::processEvents();
    }

}

void InitFile::on_pushButton_Help_clicked()
{
helpDialog* hlpDlg = new helpDialog(this, "Init File", 1, "helpFiles/initfile.html", "Help :: Init File");
        hlpDlg->show();
}
