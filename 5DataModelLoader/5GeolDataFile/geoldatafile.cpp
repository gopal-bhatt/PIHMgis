#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "geoldatafile.h"
#include "ui_geoldatafile.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/pedo_transfer_functions.h"


GeolDataFile::GeolDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeolDataFile)
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
        TempFileName.replace( QString(".shp"), QString(".geol") );
        ui->lineEditGeolDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditGeolDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".geol");
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("GeolDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditGeolTextureFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditGeolDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditGeolTextureFile->setText(ModuleStringList.at(1));
        ui->lineEditGeolDataFile->setText(ModuleStringList.at(2));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();
}

GeolDataFile::~GeolDataFile()
{
    delete ui;
}

void GeolDataFile::pushButtonSetFocus()
{
    ui->pushButtonGeolTextureFile->setDefault(false);
    ui->pushButtonGeolDataFile->setDefault(false);

    if (ui->lineEditGeolTextureFile->text() == NULL)
    {
        ui->pushButtonGeolTextureFile->setDefault(true);
        ui->pushButtonGeolTextureFile->setFocus();
        return;
    }

    if (ui->lineEditGeolDataFile->text() == NULL)
    {
        ui->pushButtonGeolDataFile->setDefault(true);
        ui->pushButtonGeolDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void GeolDataFile::on_pushButtonGeolTextureFile_clicked()
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

    QString GeolTextureFileName = QFileDialog::getOpenFileName(this, "Geol Texture File Name", ProjectFolder, "Geol Texture File(*.txt *.TXT)");

    if ( GeolTextureFileName != NULL)
    {
        ui->lineEditGeolTextureFile->setStyleSheet("color: black;");
        ui->lineEditGeolTextureFile->setText(GeolTextureFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void GeolDataFile::on_pushButtonGeolDataFile_clicked()
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

    QString GeolDataFileName = QFileDialog::getSaveFileName(this, "Choose Geol Data File Name", ProjectFolder+"/4DataModelLoader","Geol Data File(*.geol)");
    QString tempString = GeolDataFileName;
    if ( GeolDataFileName != NULL)
    {
        ui->lineEditGeolDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".geol") )
        {
            tempString.append(".geol");
            GeolDataFileName = tempString;
        }
        ui->lineEditGeolDataFile->setText(GeolDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void GeolDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Geol Data File Processing Started ... <br>"));
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

    if( ui->lineEditGeolTextureFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Geol Texture Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditGeolTextureFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditGeolTextureFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditGeolTextureFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditGeolDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Geol Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditGeolDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditGeolDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditGeolDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if(runFlag == 1)
    {

        LogsString.append("Running Geol Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorGeol = Geol_PedoTransferFunction( ui->lineEditGeolTextureFile->text(), ui->lineEditGeolDataFile->text() );

        if( ErrorGeol != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Geol Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE GEOL: ... </span>")+QString::number(ErrorGeol)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }



        ProjectIOStringList << "GeolDataFile" << ui->lineEditGeolTextureFile->text() << ui->lineEditGeolDataFile->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();


        LogsString.append(tr("<br><b>Geol Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void GeolDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "LCXX";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void GeolDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#geol_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
