#include "closeproject.h"
#include "ui_closeproject.h"

#include <QtGui>

#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

CloseProject::CloseProject(QWidget *parent)
    : QDialog(parent), ui(new Ui::CloseProject)
{
    ui->setupUi(this);

    QString ProjectFolder, ProjectFileName;
    QFile OpenProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    OpenProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream OpenProjectFileTextStream(&OpenProjectFile);
    ProjectFolder  = OpenProjectFileTextStream.readLine();
    ProjectFileName = OpenProjectFileTextStream.readLine();
    OpenProjectFile.close();
	
    ui->textEdit->setText(ProjectFileName);    
    ProjectFileName=ProjectFileName.mid(1 + ProjectFileName.lastIndexOf("/", -1));
    qDebug() << qPrintable(ProjectFileName) <<"\n";
    ui->label_3->setText(ProjectFileName);

    if(ProjectFileName == NULL)
    {
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
    else
    {
        ui->pushButtonOpen->setDefault(true);
        ui->pushButtonOpen->setFocus();
    }
}

CloseProject::~CloseProject()
{
    delete ui;
}

void CloseProject::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "WORKFLOW8";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void CloseProject::on_pushButtonOpen_clicked()
{
    LogsString = tr("");
    bool success;
    QString ProjectFolder, ProjectFileName;
    QFile OpenProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    OpenProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream OpenProjectFileTextStream(&OpenProjectFile);
    ProjectFolder  = OpenProjectFileTextStream.readLine();
    ProjectFileName = OpenProjectFileTextStream.readLine();
    OpenProjectFile.close();

    success = QFile::remove(QDir::homePath()+"/.PIHMgis/OpenProject.txt");

    qDebug() << "Delete File: " << QDir::homePath()+"/.PIHMgis/OpenProject.txt";
    if (success == false)
    {
        qDebug() << "ERROR: Unable to Delete Project File!";
        //QMessageBox::critical(this,tr("Close Project"),tr("Error: Unable to Delete Project File"),QMessageBox::Ok);
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Close Project: </span>")+tr("<br>"));
        LogsString.append(tr("Need Write Access to File: ")+QDir::homePath()+"/.PIHMgis/OpenProject.txt");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return;
    }

    ui->label_3->setText("...");
    ui->textEdit->setText("...");

    //QMessageBox::information(this,tr("Close Project"),tr("Project Closed Successfully"),QMessageBox::Ok);
    LogsString.append(tr("<b>Project Closed Successfully.")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    ui->pushButtonOpen->setDefault(false);
    ui->pushButtonClose->setDefault(true);
    ui->pushButtonClose->setFocus();
}

void CloseProject::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Close_Project")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
