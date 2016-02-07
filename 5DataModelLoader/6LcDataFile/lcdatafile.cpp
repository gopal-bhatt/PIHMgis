#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "Lcdatafile.h"
#include "ui_Lcdatafile.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/pedo_transfer_functions.h"


LcDataFile::LcDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LcDataFile)
{
    ui->setupUi(this);

    // ** Start: Set Defaults
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
    QString TempFileName;

    // ** Data Model OUTPUT File Name
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(3);
        TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);
        TempFileName.replace( QString(".shp"), QString(".lc") );
        ui->lineEditLcDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditLcDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".lc");
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("LcDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditLcClassFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditLcDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditLcClassFile->setText(ModuleStringList.at(1));
        ui->lineEditLcDataFile->setText(ModuleStringList.at(2));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();
}

LcDataFile::~LcDataFile()
{
    delete ui;
}

void LcDataFile::pushButtonSetFocus()
{
    ui->pushButtonLcClassFile->setDefault(false);
    ui->pushButtonLcDataFile->setDefault(false);

    if (ui->lineEditLcClassFile->text() == NULL)
    {
        ui->pushButtonLcClassFile->setDefault(true);
        ui->pushButtonLcClassFile->setFocus();
        return;
    }

    if (ui->lineEditLcDataFile->text() == NULL)
    {
        ui->pushButtonLcDataFile->setDefault(true);
        ui->pushButtonLcDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void LcDataFile::on_pushButtonLcClassFile_clicked()
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

    QString LcClassFileName = QFileDialog::getOpenFileName(this, "Lc class File Name", ProjectFolder, "Lc Class File(*.txt *.TXT)");

    if ( LcClassFileName != NULL)
    {
        ui->lineEditLcClassFile->setStyleSheet("color: black;");
        ui->lineEditLcClassFile->setText(LcClassFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void LcDataFile::on_pushButtonLcDataFile_clicked()
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

    QString LcDataFileName = QFileDialog::getSaveFileName(this, "Choose Lc Data File Name", ProjectFolder+"/4DataModelLoader","Lc Data File(*.lc)");
    QString tempString = LcDataFileName;
    if ( LcDataFileName != NULL)
    {
        ui->lineEditLcDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".lc") )
        {
            tempString.append(".lc");
            LcDataFileName = tempString;
        }
        ui->lineEditLcDataFile->setText(LcDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void LcDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Lc Data File Processing Started ... <br>"));
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

    if( ui->lineEditLcClassFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Lc Class Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditLcClassFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditLcClassFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditLcClassFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditLcDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Lc Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditLcDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditLcDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditLcDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if(runFlag == 1)
    {

        LogsString.append("Running Lc Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorLc = Lc_PedoTransferFunction( ui->lineEditLcClassFile->text(), ui->lineEditLcDataFile->text() );

        if( ErrorLc != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Lc Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE LC: ... </span>")+QString::number(ErrorLc)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }



        ProjectIOStringList << "LcDataFile" << ui->lineEditLcClassFile->text() << ui->lineEditLcDataFile->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();


        LogsString.append(tr("<br><b>Lc Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void LcDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "INIT";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void LcDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#lc_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
