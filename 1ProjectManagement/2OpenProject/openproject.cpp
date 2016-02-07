#include "openproject.h"
#include "ui_openproject.h"

#include <QtGui>

#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>


OpenProject::OpenProject(QWidget *parent)
    : QDialog(parent), ui(new Ui::OpenProject)
{
    ui->setupUi(this);

    ui->pushButtonFile->setDefault(true);
    ui->pushButtonFile->setFocus();
}

OpenProject::~OpenProject()
{
    delete ui;
}

void OpenProject::on_pushButtonFile_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Processing ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    LogsString = tr("");

    QString ProjectFolder, ProjectFileName;
    QFile OpenProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if (! OpenProjectFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        ProjectFolder = QDir::homePath();
        qDebug() << "IF ProjectFolder = " << ProjectFolder;
    }
    else
    {
        QTextStream OpenProjectFileTextStream(&OpenProjectFile);
        ProjectFolder   = OpenProjectFileTextStream.readLine();
        ProjectFileName = OpenProjectFileTextStream.readLine();
        OpenProjectFile.close();
        qDebug() << "ELSE ProjectFolder = " << ProjectFolder;
    }

    qDebug() << "ProjectFolder = " << ProjectFolder;
    QString str = QFileDialog::getOpenFileName(this, "Open Existing Project", ProjectFolder, "PIHMgis Project (*.pihmgis)");
    if(str != NULL)
    {
        ui->lineEditFile->setText(str);
        ui->lineEditFolder->setText(str.left(str.lastIndexOf("/",-1)));
        QString tempStr = str.left(str.lastIndexOf("/",-1));
        ui->lineEditFolder2->setText(tempStr.left(tempStr.lastIndexOf("/",-1)));

        ui->pushButtonFile->setDefault(false);
        ui->pushButtonOpen->setDefault(true);
        ui->pushButtonOpen->setFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void OpenProject::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "WORKFLOW8";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void OpenProject::on_pushButtonOpen_clicked()
{
    LogsString = tr("");
    if(ui->lineEditFile->text() != NULL)
    {
        QFile OpenProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
        QTextStream OpenProjectFileTextStream(&OpenProjectFile);

        if( OpenProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        {
            OpenProjectFileTextStream.readLine();
            LogsString.append(tr("Closing Project: ")+OpenProjectFileTextStream.readLine()+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }
        OpenProjectFile.close();

        if( !OpenProjectFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write to Current Project File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            //QMessageBox::critical(this,tr("Open Project"),tr("Error: Unable to Create Open Project."),QMessageBox::Ok);
            return;
        }

        QFile ProjectFile(ui->lineEditFile->text());
        if( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Project File: </span>")+ui->lineEditFile->text()+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            //QMessageBox::critical(this,tr("Open Project"),tr("Error: Unable to Find Project File\nTry to Import Project First"),QMessageBox::Ok);
            return;
        }
        QTextStream ProjectFileTextStream(&ProjectFile);
        ProjectFileTextStream.readLine();
        ProjectFileTextStream.readLine();
        QString ProjectFileName = ProjectFileTextStream.readLine();
        ProjectFile.close();
        if ( ProjectFileName != ui->lineEditFile->text())
        {
            qDebug() << "ProjectFileName to Open        = " << ProjectFileName;
            qDebug() << "ProjectFileName in Description = " << ui->lineEditFile->text();
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Project Description Did Not Match. Try to Import Project.</span>")+tr("<br>"));
            LogsString.append(tr("ProjectFileName to Open        = ")+ProjectFileName+tr("<br>"));
            LogsString.append(tr("ProjectFileName in Description = ")+ui->lineEditFile->text()+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            //QMessageBox::critical(this,tr("Open Project"),tr("Error: Project Description Did Not Match\nTry to Import Project First"),QMessageBox::Ok);
            return;
        }
        //QTextStream OpenProjectFileTextStream(&OpenProjectFile);
        OpenProjectFileTextStream<<ui->lineEditFolder->text()<<"\n";
        OpenProjectFileTextStream<<ui->lineEditFile->text()<<"\n";
        OpenProjectFile.close();

        LogsString.append(tr("<b>Existing Project Opened Successfully.")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        //QMessageBox::information(this,tr("Open Project"),tr("Opened Project Successfully."),QMessageBox::Ok);

        ui->pushButtonOpen->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void OpenProject::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Open_Project")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
