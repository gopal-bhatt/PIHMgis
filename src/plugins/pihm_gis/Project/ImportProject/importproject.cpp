#include <QtGui>
#include "importproject.h"
#include "ui_importproject.h"
#include <iostream>

#include "../../pihmLIBS/fileStruct.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

using namespace std;

ImportProject::ImportProject(QWidget *parent)
    : QDialog(parent), ui(new Ui::ImportProject)
{
    ui->setupUi(this);
}

ImportProject::~ImportProject()
{
    delete ui;
}

void ImportProject::on_pushButtonProject_clicked()
{
    QString projDir, projFile;
    QFile tFile(QDir::homePath()+"/project.txt");
    tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tin(&tFile);
    projDir = tin.readLine();
    projFile= tin.readLine();
    tFile.close();

    QString oldProjFile = QFileDialog::getOpenFileName(this, "Open Existing Project", projDir, "PIHMgis project (*.pihmgis)");
    ui->lineEdit->setText(oldProjFile);
    QString newProjFile = oldProjFile;
    QString newProjDir  = oldProjFile; newProjDir.truncate(newProjDir.lastIndexOf("/",-1));
    QString oldProjDir;
    QFile t2File(oldProjFile); t2File.open(QIODevice::ReadOnly | QIODevice::Text); QTextStream t2in(&t2File); t2in.readLine();
    oldProjDir = t2in.readLine();
    t2File.close();
    cout<<"OldProjDir = "<<qPrintable(oldProjDir)<<"\n";
    cout<<"OldProjFile= "<<qPrintable(oldProjFile)<<"\n";
    cout<<"NewProjDir = "<<qPrintable(newProjDir)<<"\n";
    cout<<"NewProjFile= "<<qPrintable(newProjFile)<<"\n";

    ui->lineEditOld->setText(oldProjDir);
    ui->lineEditNew->setText(newProjDir);




}

void ImportProject::on_pushButtonClose_clicked()
{
    close();
}

void ImportProject::on_pushButtonOpen_clicked()
{
    QString oldProjDir; oldProjDir=ui->lineEditOld->text();
    QString newProjDir; newProjDir=ui->lineEditNew->text();
    QString ProjFile;   ProjFile  =ui->lineEdit->text();
    cout << "\nProj File="<<qPrintable(ProjFile)<<"\n";
    QString tempStr;
    QString tempFileName = QDir::homePath()+"/tempImportFile.txt";
    QFile t4File(ProjFile);     t4File.open(QIODevice::ReadOnly  | QIODevice::Text); QTextStream t4in(&t4File);
    QFile t5File(tempFileName); t5File.open(QIODevice::WriteOnly | QIODevice::Text); QTextStream t5in(&t5File);

    //while( !t4File.atEnd() ){
        tempStr = t4in.readAll();
        cout << "# "<< qPrintable(tempStr) <<"\n";
        tempStr.replace(oldProjDir, newProjDir);
        cout << "$ "<< qPrintable(tempStr) <<"\n";
        t5in<<tempStr;// <<"\n";
    //}
    t4File.close();
    t5File.close();

    QFile t6File(tempFileName); t6File.open(QIODevice::ReadOnly  | QIODevice::Text); QTextStream t6(&t6File);
    QFile t7File(ProjFile);     t7File.open(QIODevice::WriteOnly | QIODevice::Text); QTextStream t7(&t7File);
    //while(! t6File.atEnd()){
        tempStr = t6.readAll();
        t7 << tempStr;// <<"\n";
    //}
    t6File.close();
    t7File.close();


    QFile t3File(QDir::homePath()+"/project.txt");
    t3File.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream t3out(&t3File);
    t3out << newProjDir << "\n";
    t3out << ProjFile;
    //projDir = tin.readLine();
    //projFile= tin.readLine();
    t3File.close();
    QMessageBox::information(this,tr("Import Project"),tr("Project Imported Successfully.\nClick OK to close the dialog!"),QMessageBox::Ok);
    close();

}

void ImportProject::on_pushButtonHelp_clicked()
{
	helpDialog* hlpDlg = new helpDialog(this, "Import Project", 1, "helpFiles/importproject.html", "Help :: Import Project");
	hlpDlg->show();
}
