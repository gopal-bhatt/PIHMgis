#include <QtGui>

#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "newproject.h"
#include "ui_newproject.h"


NewProject::NewProject(QWidget *parent)
    : QDialog(parent), ui(new Ui::NewProject)
{
    ui->setupUi(this);
    ui->pushButtonFile->setDefault(true);
    ui->pushButtonFile->setFocus();
}

NewProject::~NewProject()
{
    delete ui;
}

void NewProject::on_pushButtonFile_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Processing ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    LogsString = tr("");

    QString ProjectHome = QFileDialog::getExistingDirectory(this, "Project Home Folder", QDir::homePath(), 0);

    QString mmm, dd, yyyy, hh, mm, folder;
    QString format = QString("MMMddyyyyhhmm");
    ProjectDateTime = ProjectDateTime.currentDateTime();
    folder = ProjectDateTime.toString(format);
    qDebug() << "Format = " << format << "; " << "DateTime = " << ProjectDateTime;

    if(ProjectHome != NULL)
    {
        ui->lineEditFile->setText(ProjectHome);

        ui->lineEditFolder->setText(ProjectHome+"/"+folder);
        ui->lineEditFile2->setText(ProjectHome+"/"+folder+"/"+folder+".pihmgis");
        //ui->lineEditFolder->setText(str.left(str.lastIndexOf("/",-1)+1));//polyStr.right(polyStr.length()-polyStr.lastIndexOf("/",-1));

        ui->pushButtonFile->setDefault(false);
        ui->pushButtonCreate->setDefault(true);
        ui->pushButtonCreate->setFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void NewProject::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "WORKFLOW8";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void NewProject::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#New_Project")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

/* This is a very elementary implementation of Project management
   I need to extend it further with option to SAVE and OPEN a project
   Idea: Use a tempProgress file while working on different modules --
       store all the information that are being provided by the user.
       When prompted with SAVE project: copy the tempProgress file to
       existing project file.
       When prompted with OPEN project: (1) copy the project file to tempProgress
       (2) When earlier executed modules are opened - auto populate the fields
       */
void NewProject::on_pushButtonCreate_clicked()
{
    LogsString = tr("");
    QDir dir;
    if ( dir.mkpath(ui->lineEditFolder->text()) )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+tr("<br>"));
    if ( dir.mkpath(ui->lineEditFolder->text() + "/1RasterProcessing") )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+"/1RasterProcessing"+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+"/1RasterProcessing"+tr("<br>"));
    if ( dir.mkpath(ui->lineEditFolder->text() + "/2VectorProcessing") )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+"/2VectorProcessing"+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+"/2VectorProcessing"+tr("<br>"));
    if ( dir.mkpath(ui->lineEditFolder->text() + "/3DomainDecomposition") )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+"/3DomainDecomposition"+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+"/3DomainDecomposition"+tr("<br>"));
    if ( dir.mkpath(ui->lineEditFolder->text() + "/4DataModelLoader") )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+"/4DataModelLoader"+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+"/4DataModelLoader"+tr("<br>"));
    if ( dir.mkpath(ui->lineEditFolder->text() + "/5PIHMSimulation") )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+"/5PIHMSimulation"+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+"/5PIHMSimulation"+tr("<br>"));
    if ( dir.mkpath(ui->lineEditFolder->text() + "/6VisualAnalytics") )
        LogsString.append(tr("Created Folder: ")+ui->lineEditFolder->text()+"/6VisualAnalytics"+tr("<br>"));
    else
        LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+ui->lineEditFolder->text()+"/6VisualAnalytics"+tr("<br>"));

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    QFile ProjectFile(ui->lineEditFile2->text());

    if(!ProjectFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qWarning("File could *not* be saved! Try Again!");
        qDebug() << ui->lineEditFile2->text();
        //QMessageBox::critical(this,tr("New Project"),tr("Error: Unable to Create Project."),QMessageBox::Ok);
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Create Project File: </span>")+ui->lineEditFile2->text()+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return;
    }
    else
    {
        // ** Write Header Information to the Project File
        QTextStream ProjectFileTextStream(&ProjectFile);
        ProjectFileTextStream<<"Created on: "<<ProjectDateTime.toString()<<"\n";
        ProjectFileTextStream<<ui->lineEditFolder->text()<<"\n";
        ProjectFileTextStream<<ui->lineEditFile2->text()<<"\n";

        // ** Crete Open Project File in .PIHMgis Folder
        QFile OpenProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
        qDebug() << "Open Project File = " <<qPrintable(QDir::homePath()+"/.PIHMgis/OpenProject.txt") << "\n";
        if (! OpenProjectFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        {
            qDebug() << "Error: Unable To Open File";
            //QMessageBox::critical(this,tr("New Project"),tr("Error: Unable to Create Project File"),QMessageBox::Ok);
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Create File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        // ** Brief Description of Open Project File
        // ** First Line : Folder where Project File is Stored
        // ** Second Line: Absolute Path of the Project File
        QTextStream OpenProjectFileTextStream(&OpenProjectFile);
        OpenProjectFileTextStream<<ui->lineEditFolder->text()<<"\n";
        OpenProjectFileTextStream<<ui->lineEditFile2->text()<<"\n";
        //QMessageBox::information(this,tr("New Project"),tr("Project Created Successfully!"),QMessageBox::Ok);
        LogsString.append(tr("<br><b>New Project Created Successfully.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->lineEditFile->setDisabled(true);
        ui->pushButtonFile->setDisabled(true);

        ui->pushButtonCreate->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}
