#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "readtopology.h"
#include "ui_readtopology.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/shape_pslg.h"

ReadTopology::ReadTopology(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadTopology)
{
    ui->setupUi(this);

    // ** Start: Fill Form If Module Has Been Run Previously
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if ( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Open File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
    }
    QTextStream ProjectFileTextStream(&ProjectFile);
    QString ProjectFolder   = ProjectFileTextStream.readLine();
    QString ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();

    QStringList ModuleStringList;

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MergeVectorDomainDecomposition"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditMerge->setText(ModuleStringList.at(2));
        QString TempString = ModuleStringList.at(2);
        if( TempString != "" )
        {
            TempString.replace(QString(".shp"),QString(".poly"));
            ui->lineEditPSLG->setText(TempString);
        }
    }


    ModuleStringList = ReadModuleLine(ProjectFileName,tr("ReadTopology"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditMerge->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditPSLG->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditMerge->setText(ModuleStringList.at(1));
        ui->lineEditPSLG->setText(ModuleStringList.at(2));
    }
    // ** End: Fill Form If Module Has Been Run Previously
    pushButtonSetFocus();
}

ReadTopology::~ReadTopology()
{
    delete ui;
}

void ReadTopology::pushButtonSetFocus()
{
    ui->pushButtonMerge->setDefault(false);
    ui->pushButtonPSLG->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditMerge->text() == NULL)
    {
        ui->pushButtonMerge->setDefault(true);
        ui->pushButtonMerge->setFocus();
        return;
    }
    if (ui->lineEditPSLG->text() == NULL)
    {
        ui->pushButtonPSLG->setDefault(true);
        ui->pushButtonPSLG->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void ReadTopology::on_pushButtonMerge_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Processing ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    LogsString = tr("");

    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Open File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return;
    }

    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();
    qDebug() << ProjectFolder;

    QString MergeVectorFileName = QFileDialog::getOpenFileName(this, "Choose Merge Vector File", ProjectFolder+tr("/3DomainDecomposition"), "Vector Shape File(*.shp *.SHP)");
    if ( MergeVectorFileName != NULL)
    {
        ui->lineEditMerge->setStyleSheet("color: black;");
        ui->lineEditMerge->setText(MergeVectorFileName);

        MergeVectorFileName.replace(QString(".shp"),QString(".poly"));

        ui->lineEditPSLG->setStyleSheet("color: black;");
        ui->lineEditPSLG->setText(MergeVectorFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void ReadTopology::on_pushButtonPSLG_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Processing ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    LogsString = tr("");

    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if ( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Open File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return;
    }
    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();
    qDebug() << ProjectFolder;

    QString PSLGFileName = QFileDialog::getSaveFileName(this, "Choose Planar Straight Line Graph", ProjectFolder+"/3DomainDecomposition","PSLG File(*.poly)");
    QString tempString = PSLGFileName;
    if ( PSLGFileName != NULL)
    {
        ui->lineEditPSLG->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".shp") )
        {
            tempString.append(".shp");
            PSLGFileName = tempString;
        }
        ui->lineEditPSLG->setText(PSLGFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void ReadTopology::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Read Topology Processing Started ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();


    LogsString.append(tr("Verifying Data Files ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    int runFlag = 1;
    QFile IOTestFile;

    if( ui->lineEditMerge->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Merge Vector Split Line Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditMerge->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditMerge->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditMerge->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditPSLG->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PSLG Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditPSLG->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditPSLG->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditPSLG->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();



    if(runFlag == 1)
    {

        LogsString.append("Running Read Topology ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorPSLG = shape_pslg((char *)qPrintable(ui->lineEditMerge->text()), (char *)qPrintable(ui->lineEditPSLG->text()), &LogsString);
        if( ErrorPSLG != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Read Topology Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorPSLG)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        ProjectIOStringList << "ReadTopology" << ui->lineEditMerge->text() << ui->lineEditPSLG->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();


        LogsString.append(tr("<br><b>Read Topology Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void ReadTopology::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW4" << "TRIANGLE";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void ReadTopology::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Read_Topology")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
