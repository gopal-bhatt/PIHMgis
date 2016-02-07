#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "calibdatafile.h"
#include "ui_calibdatafile.h"

#include "0LibsIO/IOProjectFile.h"


CalibDataFile::CalibDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalibDataFile)
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

    // ** Data Model INPUT File Name
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(3);
        TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);

        TempFileName.replace( QString(".shp"), QString(".calib") );
        ui->lineEditCalibDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditCalibDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".calib");
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("CalibDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditCalibDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditCalibDataFile->setText(ModuleStringList.at(1));

        ui->doubleSpinBoxS_Alpha->setValue(ModuleStringList.at(2).toDouble());
        ui->doubleSpinBoxS_Beta->setValue(ModuleStringList.at(3).toDouble());
        ui->doubleSpinBoxS_Porosity->setValue(ModuleStringList.at(4).toDouble());
        ui->doubleSpinBoxS_InfilDepth->setValue(ModuleStringList.at(5).toDouble());
        ui->doubleSpinBoxS_KsatV->setValue(ModuleStringList.at(6).toDouble());
        ui->doubleSpinBoxS_MPKsatV->setValue(ModuleStringList.at(7).toDouble());

        ui->doubleSpinBoxG_KsatH->setValue(ModuleStringList.at(8).toDouble());
        ui->doubleSpinBoxG_KsatV->setValue(ModuleStringList.at(9).toDouble());
        ui->doubleSpinBoxG_MPKsatH->setValue(ModuleStringList.at(10).toDouble());
        ui->doubleSpinBoxG_MPDepth->setValue(ModuleStringList.at(11).toDouble());
        ui->doubleSpinBoxG_MPfracV->setValue(ModuleStringList.at(12).toDouble());
        ui->doubleSpinBoxG_MPfracH->setValue(ModuleStringList.at(13).toDouble());

        ui->doubleSpinBoxL_RZDepth->setValue(ModuleStringList.at(14).toDouble());
        ui->doubleSpinBoxL_VegFrac->setValue(ModuleStringList.at(15).toDouble());
        ui->doubleSpinBoxL_Albedo->setValue(ModuleStringList.at(16).toDouble());
        ui->doubleSpinBoxL_Roughness->setValue(ModuleStringList.at(17).toDouble());

        ui->doubleSpinBoxR_Rough->setValue(ModuleStringList.at(18).toDouble());
        ui->doubleSpinBoxR_BedTh->setValue(ModuleStringList.at(19).toDouble());
        ui->doubleSpinBoxR_KsatH->setValue(ModuleStringList.at(20).toDouble());
        ui->doubleSpinBoxR_KsatV->setValue(ModuleStringList.at(21).toDouble());
        ui->doubleSpinBoxR_Depth->setValue(ModuleStringList.at(22).toDouble());
        ui->doubleSpinBoxR_Width->setValue(ModuleStringList.at(23).toDouble());

        ui->doubleSpinBoxF_Precip->setValue(ModuleStringList.at(24).toDouble());
        ui->doubleSpinBoxF_Temp->setValue(ModuleStringList.at(25).toDouble());
        ui->doubleSpinBoxF_ET0->setValue(ModuleStringList.at(26).toDouble());
        ui->doubleSpinBoxF_ET1->setValue(ModuleStringList.at(27).toDouble());
        ui->doubleSpinBoxF_ET2->setValue(ModuleStringList.at(28).toDouble());
        ui->doubleSpinBoxF_ISMax->setValue(ModuleStringList.at(29).toDouble());
        ui->doubleSpinBoxF_ThruFall->setValue(ModuleStringList.at(30).toDouble());
        ui->doubleSpinBoxF_MeltFac->setValue(ModuleStringList.at(31).toDouble());
    }
    // ** End: Fill Form If Module Has Been Run Previously

    ui->tabWidget->setCurrentIndex( 0 );

    pushButtonSetFocus();
}

CalibDataFile::~CalibDataFile()
{
    delete ui;
}

void CalibDataFile::pushButtonSetFocus()
{
    ui->pushButtonCalibDataFile->setDefault(false);

    if (ui->lineEditCalibDataFile->text() == NULL)
    {
        ui->pushButtonCalibDataFile->setDefault(true);
        ui->pushButtonCalibDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void CalibDataFile::on_pushButtonCalibDataFile_clicked()
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

    QString CalibDataFileName = QFileDialog::getSaveFileName(this, "Choose Calib Data File Name", ProjectFolder+"/4DataModelLoader","Calib Data File(*.calib)");
    QString tempString = CalibDataFileName;
    if ( CalibDataFileName != NULL)
    {
        ui->lineEditCalibDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".calib") )
        {
            tempString.append(".calib");
            CalibDataFileName = tempString;
        }
        ui->lineEditCalibDataFile->setText(CalibDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}


int CalibDataFile::calib_data_file()
{
    QFile CalibFile( ui->lineEditCalibDataFile->text() );
    if ( ! CalibFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 129;
    QTextStream CalibFileTextStream(&CalibFile);

    CalibFileTextStream << ui->doubleSpinBoxG_KsatH->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxG_KsatV->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxS_KsatV->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxG_MPKsatH->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxS_MPKsatV->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxS_InfilDepth->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxL_RZDepth->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxG_MPDepth->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxS_Porosity->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxS_Alpha->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxS_Beta->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxG_MPfracV->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxG_MPfracH->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxL_VegFrac->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxL_Albedo->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxL_Roughness->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxF_Precip->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxF_Temp->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxF_ET0->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxF_ET1->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxF_ET2->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxR_Rough->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxR_KsatH->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxR_KsatV->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxR_BedTh->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxR_Depth->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxR_Width->text() << "\n";

    CalibFileTextStream << ui->doubleSpinBoxF_ISMax->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxF_ThruFall->text() << "\t";
    CalibFileTextStream << ui->doubleSpinBoxF_MeltFac->text() << "\n";


    CalibFile.close();

    return 0;
}

void CalibDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Calib Data File Processing Started ... <br>"));
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

    if( ui->lineEditCalibDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Calib Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditCalibDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditCalibDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditCalibDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if(runFlag == 1)
    {

        LogsString.append("Running Calib Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorCalib = calib_data_file();

        if( ErrorCalib != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Calib Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE CALIB: ... </span>")+QString::number(ErrorCalib)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        ProjectIOStringList << "CalibDataFile" << ui->lineEditCalibDataFile->text();
        ProjectIOStringList << ui->doubleSpinBoxS_Alpha->text();
        ProjectIOStringList << ui->doubleSpinBoxS_Beta->text();
        ProjectIOStringList << ui->doubleSpinBoxS_Porosity->text();
        ProjectIOStringList << ui->doubleSpinBoxS_InfilDepth->text();
        ProjectIOStringList << ui->doubleSpinBoxS_KsatV->text();
        ProjectIOStringList << ui->doubleSpinBoxS_MPKsatV->text();

        ProjectIOStringList << ui->doubleSpinBoxG_KsatH->text();
        ProjectIOStringList << ui->doubleSpinBoxG_KsatV->text();
        ProjectIOStringList << ui->doubleSpinBoxG_MPKsatH->text();
        ProjectIOStringList << ui->doubleSpinBoxG_MPDepth->text();
        ProjectIOStringList << ui->doubleSpinBoxG_MPfracV->text();
        ProjectIOStringList << ui->doubleSpinBoxG_MPfracH->text();

        ProjectIOStringList << ui->doubleSpinBoxL_RZDepth->text();
        ProjectIOStringList << ui->doubleSpinBoxL_VegFrac->text();
        ProjectIOStringList << ui->doubleSpinBoxL_Albedo->text();
        ProjectIOStringList << ui->doubleSpinBoxL_Roughness->text();

        ProjectIOStringList << ui->doubleSpinBoxR_Rough->text();
        ProjectIOStringList << ui->doubleSpinBoxR_BedTh->text();
        ProjectIOStringList << ui->doubleSpinBoxR_KsatH->text();
        ProjectIOStringList << ui->doubleSpinBoxR_KsatV->text();
        ProjectIOStringList << ui->doubleSpinBoxR_Depth->text();
        ProjectIOStringList << ui->doubleSpinBoxR_Width->text();

        ProjectIOStringList << ui->doubleSpinBoxF_Precip->text();
        ProjectIOStringList << ui->doubleSpinBoxF_Temp->text();
        ProjectIOStringList << ui->doubleSpinBoxF_ET0->text();
        ProjectIOStringList << ui->doubleSpinBoxF_ET1->text();
        ProjectIOStringList << ui->doubleSpinBoxF_ET2->text();
        ProjectIOStringList << ui->doubleSpinBoxF_ISMax->text();
        ProjectIOStringList << ui->doubleSpinBoxF_ThruFall->text();
        ProjectIOStringList << ui->doubleSpinBoxF_MeltFac->text();

        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        LogsString.append(tr("<br><b>Calib Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void CalibDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "FORC";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void CalibDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#calib_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
