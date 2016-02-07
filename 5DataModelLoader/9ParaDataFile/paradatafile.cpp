#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "paradatafile.h"
#include "ui_paradatafile.h"

#include "0LibsIO/IOProjectFile.h"


ParaDataFile::ParaDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ParaDataFile)
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

        TempFileName.replace( QString(".shp"), QString(".para") );
        ui->lineEditParaDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditParaDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".para");
    }

    ui->comboBoxStartStop->setCurrentIndex(2);
    ui->comboBoxOutput->setCurrentIndex(2);

    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("ParaDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditParaDataFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditParaDataFile->setText(ModuleStringList.at(1));

        ui->comboBoxSurfaceMode->setCurrentIndex(ModuleStringList.at(2).toInt());
        ui->comboBoxSubsurfaceMode->setCurrentIndex(ModuleStringList.at(3).toInt());
        ui->comboBoxRiverMode->setCurrentIndex(ModuleStringList.at(4).toInt());
        ui->comboBoxInitMode->setCurrentIndex(ModuleStringList.at(5).toInt());
        ui->checkBoxVerboseMode->setChecked(ModuleStringList.at(6).toInt());
        ui->checkBoxDebugMode->setChecked(ModuleStringList.at(7).toInt());

        ui->radioButtonDirectDense->setChecked(ModuleStringList.at(8).toInt());
        ui->radioButtonIterative->setChecked(ModuleStringList.at(9).toInt());
        ui->comboBoxGrahmSchmidt->setCurrentIndex(ModuleStringList.at(10).toInt());
        ui->spinBoxKrylovDimension->setValue(ModuleStringList.at(11).toInt());
        ui->doubleSpinBoxConvergenceThreshold->setValue(ModuleStringList.at(12).toDouble());
        ui->doubleSpinBoxETStep->setValue(ModuleStringList.at(13).toDouble());
        ui->doubleSpinBoxInitialStep->setValue(ModuleStringList.at(14).toDouble());
        ui->doubleSpinBoxMaximumStep->setValue(ModuleStringList.at(15).toDouble());
        ui->doubleSpinBoxRelativeTolerance->setValue(ModuleStringList.at(16).toDouble());
        ui->doubleSpinBoxAbsoluteTolerance->setValue(ModuleStringList.at(17).toDouble());

        ui->spinBoxStartTime->setValue(ModuleStringList.at(18).toInt());
        ui->spinBoxStopTime->setValue(ModuleStringList.at(19).toInt());
        ui->comboBoxStartStop->setCurrentIndex(ModuleStringList.at(20).toInt());
        ui->comboBoxOutput->setCurrentIndex(ModuleStringList.at(21).toInt());

        ui->spinBoxRiver->setValue(ModuleStringList.at(22).toInt());
        ui->spinBoxRiverUpDown->setValue(ModuleStringList.at(23).toInt());
        ui->spinBoxRiverSurfaceLeftRight->setValue(ModuleStringList.at(24).toInt());
        ui->spinBoxRiverBaseLeftRight->setValue(ModuleStringList.at(25).toInt());
        ui->spinBoxRiverbed->setValue(ModuleStringList.at(26).toInt());
        ui->spinBoxRiverbedUpDown->setValue(ModuleStringList.at(27).toInt());
        ui->spinBoxRiverbedLeftRight->setValue(ModuleStringList.at(28).toInt());
        ui->spinBoxRivertoRiverBed->setValue(ModuleStringList.at(29).toInt());
        ui->spinBoxInterception->setValue(ModuleStringList.at(30).toInt());
        ui->spinBoxSnow->setValue(ModuleStringList.at(31).toInt());
        ui->spinBoxSurface->setValue(ModuleStringList.at(32).toInt());
        ui->spinBoxSoilMoisture->setValue(ModuleStringList.at(33).toInt());
        ui->spinBoxGroundwater->setValue(ModuleStringList.at(34).toInt());
        ui->spinBoxInfiltration->setValue(ModuleStringList.at(35).toInt());
        ui->spinBoxRecharge->setValue(ModuleStringList.at(36).toInt());
        ui->spinBoxCanopyEvaporation->setValue(ModuleStringList.at(37).toInt());
        ui->spinBoxTranspiration->setValue(ModuleStringList.at(38).toInt());
        ui->spinBoxGroundEvaporation->setValue(ModuleStringList.at(39).toInt());
    }
    // ** End: Fill Form If Module Has Been Run Previously


    ui->tabWidget->setCurrentIndex( 2 );

    pushButtonSetFocus();
}

ParaDataFile::~ParaDataFile()
{
    delete ui;
}

void ParaDataFile::pushButtonSetFocus()
{
    ui->pushButtonParaDataFile->setDefault(false);

    if (ui->lineEditParaDataFile->text() == NULL)
    {
        ui->pushButtonParaDataFile->setDefault(true);
        ui->pushButtonParaDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void ParaDataFile::on_pushButtonParaDataFile_clicked()
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

    QString ParaDataFileName = QFileDialog::getSaveFileName(this, "Choose Para Data File Name", ProjectFolder+"/4DataModelLoader","Para Data File(*.para)");
    QString tempString = ParaDataFileName;
    if ( ParaDataFileName != NULL)
    {
        ui->lineEditParaDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".para") )
        {
            tempString.append(".para");
            ParaDataFileName = tempString;
        }
        ui->lineEditParaDataFile->setText(ParaDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

int ParaDataFile::para_data_file()
{
    QFile ParaFile( ui->lineEditParaDataFile->text() );
    if ( ! ParaFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 129;
    QTextStream ParaFileTextStream(&ParaFile);

    // ** Verbose
    if ( ui->checkBoxVerboseMode->isChecked() )
        ParaFileTextStream << "1\t";
    else
        ParaFileTextStream << "0\t";

    // ** Debug
    if ( ui->checkBoxDebugMode->isChecked() )
        ParaFileTextStream << "1\t";
    else
        ParaFileTextStream << "0\t";

    // ** Init Mode
    ParaFileTextStream << ui->comboBoxInitMode->currentIndex() + 1 << "\n";

    // ** Print Variables

    ( ui->spinBoxGroundwater->text().toInt() > 0 )              ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxSurface->text().toInt() > 0 )                  ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxSnow->text().toInt() > 0 )                     ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiver->text().toInt() > 0 )                    ? ( ParaFileTextStream << "1\n" ) : ( ParaFileTextStream << "0\n" );

    ( ui->spinBoxRecharge->text().toInt() > 0 )                 ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxInterception->text().toInt() > 0 )             ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxSoilMoisture->text().toInt() > 0 )             ? ( ParaFileTextStream << "1\n" ) : ( ParaFileTextStream << "0\n" );

    ( ui->spinBoxCanopyEvaporation->text().toInt() > 0 )        ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxTranspiration->text().toInt() > 0 )            ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxGroundEvaporation->text().toInt() > 0 )        ? ( ParaFileTextStream << "1\n" ) : ( ParaFileTextStream << "0\n" );

    ( ui->spinBoxRiverUpDown->text().toInt() > 0 )              ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverUpDown->text().toInt() > 0 )              ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverSurfaceLeftRight->text().toInt() > 0 )    ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverSurfaceLeftRight->text().toInt() > 0 )    ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverBaseLeftRight->text().toInt() > 0 )       ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverBaseLeftRight->text().toInt() > 0 )       ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverbedLeftRight->text().toInt() > 0 )        ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverbedLeftRight->text().toInt() > 0 )        ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverbedUpDown->text().toInt() > 0 )           ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRiverbedUpDown->text().toInt() > 0 )           ? ( ParaFileTextStream << "1\t" ) : ( ParaFileTextStream << "0\t" );
    ( ui->spinBoxRivertoRiverBed->text().toInt() > 0 )          ? ( ParaFileTextStream << "1\n" ) : ( ParaFileTextStream << "0\n" );

    // ** Print Variable Intervals

    int factor, I_temp;
    if ( ui->comboBoxOutput->currentIndex() + 1 == 1 ) factor = 1;
    if ( ui->comboBoxOutput->currentIndex() + 1 == 2 ) factor = 60;
    if ( ui->comboBoxOutput->currentIndex() + 1 == 3 ) factor = 24*60;
    if ( ui->comboBoxOutput->currentIndex() + 1 == 4 ) factor = 24*60*7;
    if ( ui->comboBoxOutput->currentIndex() + 1 == 5 ) factor = 24*60*30;
    if ( ui->comboBoxOutput->currentIndex() + 1 == 6 ) factor = 24*60*365;

    ParaFileTextStream << ui->spinBoxGroundwater->text().toInt() * factor   << "\t";
    ParaFileTextStream << ui->spinBoxSurface->text().toInt() * factor       << "\t";
    ParaFileTextStream << ui->spinBoxSnow->text().toInt() * factor          << "\t";
    ParaFileTextStream << ui->spinBoxRiver->text().toInt() * factor         << "\n";

    ParaFileTextStream << ui->spinBoxRecharge->text().toInt() * factor      << "\t";
    ParaFileTextStream << ui->spinBoxInterception->text().toInt() * factor  << "\t";
    ParaFileTextStream << ui->spinBoxSoilMoisture->text().toInt() * factor  << "\t";
    I_temp = 99999999;
    if ( ui->spinBoxCanopyEvaporation->text().toInt() > 0   && ui->spinBoxCanopyEvaporation->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxCanopyEvaporation->text().toInt() * factor;
    if ( ui->spinBoxTranspiration->text().toInt() > 0       && ui->spinBoxTranspiration->text().toInt() * factor < I_temp )     I_temp = ui->spinBoxTranspiration->text().toInt() * factor;
    if ( ui->spinBoxGroundEvaporation->text().toInt() > 0   && ui->spinBoxGroundEvaporation->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxGroundEvaporation->text().toInt() * factor;
    ParaFileTextStream << I_temp << "\t";
    I_temp = 99999999;
    if ( ui->spinBoxRiverUpDown->text().toInt() > 0   && ui->spinBoxRiverUpDown->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxRiverUpDown->text().toInt() * factor;
    if ( ui->spinBoxRiverSurfaceLeftRight->text().toInt() > 0   && ui->spinBoxRiverSurfaceLeftRight->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxRiverSurfaceLeftRight->text().toInt() * factor;
    if ( ui->spinBoxRiverBaseLeftRight->text().toInt() > 0   && ui->spinBoxRiverBaseLeftRight->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxRiverBaseLeftRight->text().toInt() * factor;
    if ( ui->spinBoxRiverbedLeftRight->text().toInt() > 0   && ui->spinBoxRiverbedLeftRight->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxRiverbedLeftRight->text().toInt() * factor;
    if ( ui->spinBoxRiverbedUpDown->text().toInt() > 0   && ui->spinBoxRiverbedUpDown->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxRiverbedUpDown->text().toInt() * factor;
    if ( ui->spinBoxRivertoRiverBed->text().toInt() > 0   && ui->spinBoxRivertoRiverBed->text().toInt() * factor < I_temp ) I_temp = ui->spinBoxRivertoRiverBed->text().toInt() * factor;
    ParaFileTextStream << I_temp << "\n";

    ParaFileTextStream << ui->comboBoxSurfaceMode->currentIndex() + 1 << "\t";
    ParaFileTextStream << ui->comboBoxSubsurfaceMode->currentIndex() + 1 << "\t";
    ParaFileTextStream << ui->comboBoxRiverMode->currentIndex() + 1 << "\n";

    if ( ui->radioButtonDirectDense->isChecked() )  ParaFileTextStream << "1\t";
    if ( ui->radioButtonIterative->isChecked() )    ParaFileTextStream << "2\t";
    ParaFileTextStream << ui->comboBoxGrahmSchmidt->currentIndex() + 1 << "\t";
    ParaFileTextStream << ui->spinBoxKrylovDimension->text().toInt() << "\t";
    ParaFileTextStream << ui->doubleSpinBoxConvergenceThreshold->text().toDouble() << "\n";

    ParaFileTextStream << ui->doubleSpinBoxAbsoluteTolerance->text().toDouble() << "\t";
    ParaFileTextStream << ui->doubleSpinBoxRelativeTolerance->text().toDouble() << "\t";
    ParaFileTextStream << ui->doubleSpinBoxInitialStep->text().toDouble() << "\t";
    ParaFileTextStream << ui->doubleSpinBoxMaximumStep->text().toDouble() << "\t";
    ParaFileTextStream << ui->doubleSpinBoxETStep->text().toDouble() << "\n";


    if ( ui->comboBoxStartStop->currentIndex() + 1 == 1 ) factor = 1;
    if ( ui->comboBoxStartStop->currentIndex() + 1 == 2 ) factor = 60;
    if ( ui->comboBoxStartStop->currentIndex() + 1 == 3 ) factor = 60*24;
    if ( ui->comboBoxStartStop->currentIndex() + 1 == 4 ) factor = 60*24*7;
    if ( ui->comboBoxStartStop->currentIndex() + 1 == 5 ) factor = 60*24*30;
    if ( ui->comboBoxStartStop->currentIndex() + 1 == 6 ) factor = 60*24*365;
    ParaFileTextStream << ui->spinBoxStartTime->text().toInt() * factor << "\t";
    ParaFileTextStream << ui->spinBoxStopTime->text().toInt() * factor << "\t";
    ParaFileTextStream << "0\n";

    ParaFileTextStream << "1\t";
    ParaFileTextStream << "1\n";

    ParaFile.close();

    return 0;
}

void ParaDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Para Data File Processing Started ... <br>"));
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

    if( ui->lineEditParaDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Para Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditParaDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditParaDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditParaDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if(runFlag == 1)
    {

        LogsString.append("Running Para Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorPara = para_data_file();

        if( ErrorPara != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Para Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE PARA: ... </span>")+QString::number(ErrorPara)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        ProjectIOStringList << "ParaDataFile" << ui->lineEditParaDataFile->text();

        ProjectIOStringList << QString::number(ui->comboBoxSurfaceMode->currentIndex());
        ProjectIOStringList << QString::number(ui->comboBoxSubsurfaceMode->currentIndex());
        ProjectIOStringList << QString::number(ui->comboBoxRiverMode->currentIndex());
        ProjectIOStringList << QString::number(ui->comboBoxInitMode->currentIndex());
        ProjectIOStringList << QString::number(ui->checkBoxVerboseMode->isChecked());
        ProjectIOStringList << QString::number(ui->checkBoxDebugMode->isChecked());

        ProjectIOStringList << QString::number(ui->radioButtonDirectDense->isChecked());
        ProjectIOStringList << QString::number(ui->radioButtonIterative->isChecked());
        ProjectIOStringList << QString::number(ui->comboBoxGrahmSchmidt->currentIndex());
        ProjectIOStringList << ui->spinBoxKrylovDimension->text();
        ProjectIOStringList << ui->doubleSpinBoxConvergenceThreshold->text();
        ProjectIOStringList << ui->doubleSpinBoxETStep->text();
        ProjectIOStringList << ui->doubleSpinBoxInitialStep->text();
        ProjectIOStringList << ui->doubleSpinBoxMaximumStep->text();
        ProjectIOStringList << ui->doubleSpinBoxRelativeTolerance->text();
        ProjectIOStringList << ui->doubleSpinBoxAbsoluteTolerance->text();

        ProjectIOStringList << ui->spinBoxStartTime->text();
        ProjectIOStringList << ui->spinBoxStopTime->text();
        ProjectIOStringList << QString::number(ui->comboBoxStartStop->currentIndex());
        ProjectIOStringList << QString::number(ui->comboBoxOutput->currentIndex());
        ProjectIOStringList << ui->spinBoxRiver->text();
        ProjectIOStringList << ui->spinBoxRiverUpDown->text();
        ProjectIOStringList << ui->spinBoxRiverSurfaceLeftRight->text();
        ProjectIOStringList << ui->spinBoxRiverBaseLeftRight->text();
        ProjectIOStringList << ui->spinBoxRiverbed->text();
        ProjectIOStringList << ui->spinBoxRiverbedUpDown->text();
        ProjectIOStringList << ui->spinBoxRiverbedLeftRight->text();
        ProjectIOStringList << ui->spinBoxRivertoRiverBed->text();
        ProjectIOStringList << ui->spinBoxInterception->text();
        ProjectIOStringList << ui->spinBoxSnow->text();
        ProjectIOStringList << ui->spinBoxSurface->text();
        ProjectIOStringList << ui->spinBoxSoilMoisture->text();
        ProjectIOStringList << ui->spinBoxGroundwater->text();
        ProjectIOStringList << ui->spinBoxInfiltration->text();
        ProjectIOStringList << ui->spinBoxRecharge->text();
        ProjectIOStringList << ui->spinBoxCanopyEvaporation->text();
        ProjectIOStringList << ui->spinBoxTranspiration->text();
        ProjectIOStringList << ui->spinBoxGroundEvaporation->text();

        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        LogsString.append(tr("<br><b>Para Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void ParaDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "CALI";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void ParaDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#para_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
