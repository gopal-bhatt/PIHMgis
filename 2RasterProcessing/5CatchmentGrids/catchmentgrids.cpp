#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "catchmentgrids.h"
#include "ui_catchmentgrids.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsRaster/catchment.h"

CatchmentGrids::CatchmentGrids(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CatchmentGrids)
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

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("LinkGrids"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditLinkGrids->setText(ModuleStringList.at(3));
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("StreamGrids"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditCatchmentGrids->setText(ProjectFolder+"/1RasterProcessing/Catchment"+ModuleStringList.at(3)+".asc");
    }


    ModuleStringList = ReadModuleLine(ProjectFileName,tr("FlowGrids"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditFlowDirGrids->setText(ModuleStringList.at(2));
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("CatchmentGrids"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditLinkGrids->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditFlowDirGrids->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditCatchmentGrids->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditLinkGrids->setText(ModuleStringList.at(1));
        ui->lineEditFlowDirGrids->setText(ModuleStringList.at(2));
        ui->lineEditCatchmentGrids->setText(ModuleStringList.at(3));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();
}

CatchmentGrids::~CatchmentGrids()
{
    delete ui;
}

void CatchmentGrids::pushButtonSetFocus()
{
    ui->pushButtonLinkGrids->setDefault(false);
    ui->pushButtonFlowDirGrids->setDefault(false);
    ui->pushButtonCatchmentGrids->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditLinkGrids->text() == NULL)
    {
        ui->pushButtonLinkGrids->setDefault(true);
        ui->pushButtonLinkGrids->setFocus();
        return;
    }
    if (ui->lineEditFlowDirGrids->text() == NULL)
    {
        ui->pushButtonFlowDirGrids->setDefault(true);
        ui->pushButtonFlowDirGrids->setFocus();
        return;
    }
    if (ui->lineEditCatchmentGrids->text() == NULL)
    {
        ui->pushButtonCatchmentGrids->setDefault(true);
        ui->pushButtonCatchmentGrids->setFocus();
        return;
    }
    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void CatchmentGrids::on_pushButtonLinkGrids_clicked()
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

    QString LinkGridFileName = QFileDialog::getOpenFileName(this, "Choose Link Grid File", ProjectFolder+tr("/1RasterProcessing"), "Link Grid File(*.asc *.ASC)");
    if ( LinkGridFileName != NULL)
    {
        ui->lineEditLinkGrids->setStyleSheet("color: black;");

        ui->lineEditLinkGrids->setText(LinkGridFileName);

        if( ui->lineEditCatchmentGrids->text() == NULL )
        {
            QStringList ModuleStringList = ReadModuleLine(ProjectFileName,tr("StreamGrids"));
            if ( ModuleStringList.length() > 0  )
            {
                ui->lineEditCatchmentGrids->setStyleSheet("color: black;");
                ui->lineEditCatchmentGrids->setText(ProjectFolder+"/1RasterProcessing/Catchment"+ModuleStringList.at(3)+".asc");
            }
        }
        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void CatchmentGrids::on_pushButtonFlowDirGrids_clicked()
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

    QString FlowDirGridFileName = QFileDialog::getOpenFileName(this, "Choose Flow Dir Grid File", ProjectFolder+tr("/1RasterProcessing"), "Flow Dir Grid File(*.asc *.ASC)");
    if ( FlowDirGridFileName != NULL)
    {
        ui->lineEditFlowDirGrids->setStyleSheet("color: black;");

        ui->lineEditFlowDirGrids->setText(FlowDirGridFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void CatchmentGrids::on_pushButtonCatchmentGrids_clicked()
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

    QString CatchmentGridsFileName = QFileDialog::getSaveFileName(this, "Choose Catchment Grid", ProjectFolder+"/1RasterProcessing","Catchment Grid File(*.asc)");
    QString tempString = CatchmentGridsFileName;
    if ( CatchmentGridsFileName != NULL)
    {
        ui->lineEditLinkGrids->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".asc") )
        {
            tempString.append(".asc");
            CatchmentGridsFileName = tempString;
        }
        ui->lineEditLinkGrids->setText(CatchmentGridsFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void CatchmentGrids::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Catchment Grids Processing Started ... <br>"));
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

    if( ui->lineEditLinkGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Link Grid Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditLinkGrids->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditLinkGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditLinkGrids->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditFlowDirGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Flow Dir Grid Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditFlowDirGrids->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditFlowDirGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditFlowDirGrids->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditCatchmentGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Catchment Grid Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditCatchmentGrids->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditCatchmentGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditCatchmentGrids->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    qDebug()<<tr("RunFlag = ") << QString::number(runFlag);

    if(runFlag == 1)
    {

        LogsString.append("Running Catchment Grids ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorCat = catchment((char *)qPrintable(ui->lineEditLinkGrids->text()), (char *)qPrintable(ui->lineEditFlowDirGrids->text()), (char *)qPrintable(ui->lineEditCatchmentGrids->text()) );
        qDebug()<<tr("ErrorCat = ") << QString::number(ErrorCat);
        if( ErrorCat != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Catchment Grid Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorCat)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        ProjectIOStringList << "CatchmentGrids" << ui->lineEditLinkGrids->text() << ui->lineEditFlowDirGrids->text() << ui->lineEditCatchmentGrids->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        if( ui->checkBoxCatchmentGrids->isChecked() == 1 )
        {
            LogsString.append("Loading Data in GIS ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }

        if(ui->checkBoxCatchmentGrids->isChecked() == 1)
        {
            if ( ! QDesktopServices::openUrl(QUrl("file://"+ui->lineEditCatchmentGrids->text())) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load ASC File in GIS ... </span>")+ui->lineEditCatchmentGrids->text()+tr("<br>"));
        }

        LogsString.append(tr("<br><b>Catchment Grids Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void CatchmentGrids::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "STRPOLY";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void CatchmentGrids::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Catchment_Grids")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
