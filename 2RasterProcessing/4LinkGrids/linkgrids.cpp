#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "linkgrids.h"
#include "ui_linkgrids.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsRaster/stream_links.h"

LinkGrids::LinkGrids(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LinkGrids)
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

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("StreamGrids"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditStreamGrids->setText(ModuleStringList.at(2));
        ui->lineEditLinkGrids->setText(ProjectFolder+"/1RasterProcessing/Link"+ModuleStringList.at(3)+".asc");
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("FlowGrids"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditFlowDirGrids->setText(ModuleStringList.at(2));
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("LinkGrids"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditStreamGrids->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditFlowDirGrids->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditLinkGrids->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditStreamGrids->setText(ModuleStringList.at(1));
        ui->lineEditFlowDirGrids->setText(ModuleStringList.at(2));
        ui->lineEditLinkGrids->setText(ModuleStringList.at(3));

    }
    // ** End: Fill Form If Module Has Been Run Previously
    pushButtonSetFocus();
}

LinkGrids::~LinkGrids()
{
    delete ui;
}

void LinkGrids::pushButtonSetFocus()
{
    ui->pushButtonStreamGrids->setDefault(false);
    ui->pushButtonFlowDirGrids->setDefault(false);
    ui->pushButtonLinkGrids->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditStreamGrids->text() == NULL)
    {
        ui->pushButtonStreamGrids->setDefault(true);
        ui->pushButtonStreamGrids->setFocus();
        return;
    }
    if (ui->lineEditFlowDirGrids->text() == NULL)
    {
        ui->pushButtonFlowDirGrids->setDefault(true);
        ui->pushButtonFlowDirGrids->setFocus();
        return;
    }
    if (ui->lineEditLinkGrids->text() == NULL)
    {
        ui->pushButtonLinkGrids->setDefault(true);
        ui->pushButtonLinkGrids->setFocus();
        return;
    }
    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void LinkGrids::on_pushButtonStreamGrids_clicked()
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

    QString StreamGridFileName = QFileDialog::getOpenFileName(this, "Choose Stream Grid File", ProjectFolder+tr("/1RasterProcessing"), "Stream Grid File(*.asc *.ASC)");
    if ( StreamGridFileName != NULL)
    {
        ui->lineEditStreamGrids->setStyleSheet("color: black;");

        ui->lineEditStreamGrids->setText(StreamGridFileName);

        if( ui->lineEditLinkGrids->text() == NULL )
        {
            QStringList ModuleStringList = ReadModuleLine(ProjectFileName,tr("StreamGrids"));
            if ( ModuleStringList.length() > 0  )
            {
                ui->lineEditLinkGrids->setStyleSheet("color: black;");
                ui->lineEditLinkGrids->setText(ProjectFolder+"/1RasterProcessing/Link"+ModuleStringList.at(3)+".asc");
            }
        }
        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void LinkGrids::on_pushButtonFlowDirGrids_clicked()
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

void LinkGrids::on_pushButtonLinkGrids_clicked()
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

    QString LinkGridsFileName = QFileDialog::getSaveFileName(this, "Choose Link Grid", ProjectFolder+"/1RasterProcessing","Link Grid File(*.asc)");
    QString tempString = LinkGridsFileName;
    if ( LinkGridsFileName != NULL)
    {
        ui->lineEditLinkGrids->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".asc") )
        {
            tempString.append(".asc");
            LinkGridsFileName = tempString;
        }
        ui->lineEditLinkGrids->setText(LinkGridsFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void LinkGrids::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Link Grids Processing Started ... <br>"));
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

    if( ui->lineEditStreamGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Stream Grid Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditStreamGrids->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditStreamGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditStreamGrids->text() + " ... <br>");
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

    if( ui->lineEditLinkGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Link Grid Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditLinkGrids->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditLinkGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditLinkGrids->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();



    if(runFlag == 1)
    {

        LogsString.append("Running Link Grids ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorLnk = stream_links((char *)qPrintable(ui->lineEditStreamGrids->text()), (char *)qPrintable(ui->lineEditFlowDirGrids->text()), (char *)qPrintable(ui->lineEditLinkGrids->text()), (char *)qPrintable(ProjectFolder+"/1RasterProcessing/link_nodes.dat") );
        if( ErrorLnk != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Link Grid Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorLnk)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        ProjectIOStringList << "LinkGrids" << ui->lineEditStreamGrids->text() << ui->lineEditFlowDirGrids->text() << ui->lineEditLinkGrids->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        if( ui->checkBoxLinkGrids->isChecked() == 1 )
        {
            LogsString.append("Loading Data in GIS ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }

        if(ui->checkBoxLinkGrids->isChecked() == 1)
        {
            if ( ! QDesktopServices::openUrl(QUrl("file://"+ui->lineEditLinkGrids->text())) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load ASC File in GIS ... </span>")+ui->lineEditLinkGrids->text()+tr("<br>"));
        }

        LogsString.append(tr("<br><b>Link Grids Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void LinkGrids::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "CATGRIDS";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void LinkGrids::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Link_Grids")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
