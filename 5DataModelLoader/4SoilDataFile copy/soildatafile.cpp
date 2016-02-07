#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "soildatafile.h"
#include "ui_soildatafile.h"

#include "0LibsIO/IOProjectFile.h"


SoilDataFile::SoilDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SoilDataFile)
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
        TempFileName.replace( QString(".shp"), QString(".soil") );
        ui->lineEditSoilDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditSoilDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".soil");
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("SoilDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditSoilTextureFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSoilDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditSoilTextureFile->setText(ModuleStringList.at(1));
        ui->lineEditSoilDataFile->setText(ModuleStringList.at(2));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();

}

SoilDataFile::~SoilDataFile()
{
    delete ui;
}

void SoilDataFile::pushButtonSetFocus()
{
    ui->pushButtonSoilTextureFile->setDefault(false);
    ui->pushButtonSoilDataFile->setDefault(false);

    if (ui->lineEditSoilTextureFile->text() == NULL)
    {
        ui->pushButtonSoilTextureFile->setDefault(true);
        ui->pushButtonSoilTextureFile->setFocus();
        return;
    }

    if (ui->lineEditSoilDataFile->text() == NULL)
    {
        ui->pushButtonSoilDataFile->setDefault(true);
        ui->pushButtonSoilDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void SoilDataFile::on_pushButtonSoilTextureFile_clicked()
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

    QString SoilTextureFileName = QFileDialog::getOpenFileName(this, "Soil Texture File Name", ProjectFolder, "Soil Texture File(*.txt *.TXT)");

    if ( SoilTextureFileName != NULL)
    {
        ui->lineEditSoilTextureFile->setStyleSheet("color: black;");
        ui->lineEditSoilTextureFile->setText(SoilTextureFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void SoilDataFile::on_pushButtonSoilDataFile_clicked()
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

    QString SoilDataFileName = QFileDialog::getSaveFileName(this, "Choose Soil Data File Name", ProjectFolder+"/4DataModelLoader","Mesh Data File(*.mesh)");
    QString tempString = SoilDataFileName;
    if ( SoilDataFileName != NULL)
    {
        ui->lineEditSoilDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".soil") )
        {
            tempString.append(".soil");
            SoilDataFileName = tempString;
        }
        ui->lineEditSoilDataFile->setText(SoilDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void SoilDataFile::on_pushButtonRun_clicked()
{

}

void SoilDataFile::on_pushButtonClose_clicked()
{
    close();
}

void SoilDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://www.pihm.psu.edu")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
