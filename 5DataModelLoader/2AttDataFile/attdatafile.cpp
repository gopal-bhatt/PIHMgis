#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "attdatafile.h"
#include "ui_attdatafile.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/att_data_file.h"


AttDataFile::AttDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AttDataFile)
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
        TempFileName.replace( QString(".shp"), QString(".att") );
        ui->lineEditAttDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditAttDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".att");
    }

    ui->tabWidget->setCurrentIndex( 0 );

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(3);
        ui->lineEditTINShapeLayerFile->setText(TempFileName);
    }

    on_checkBoxPrecipitation_toggled(true);
    on_checkBoxTemperature_toggled(true);
    on_checkBoxRelativeHumidity_toggled(true);
    on_checkBoxWindVelocity_toggled(true);
    on_checkBoxSolarRadiation_toggled(true);
    on_checkBoxVaporPressure_toggled(true);

    on_checkBoxSoilClasses_toggled(true);
    on_checkBoxGeologyClasses_toggled(true);
    on_checkBoxMacropores_toggled(true);
    on_checkBoxLandCoverClasses_toggled(true);
    on_checkBoxMeltRegions_toggled(true);
    on_checkBoxSourcesSinks_toggled(true);

    on_checkBoxInterception_toggled(true);
    on_checkBoxSnowCover_toggled(true);
    on_checkBoxSurfaceStorage_toggled(true);
    on_checkBoxSoilMoisture_toggled(true);
    on_checkBoxGroundwater_toggled(true);
    on_checkBoxBoundaryCondition_toggled(true);

    ui->checkBoxPrecipitation->setChecked(true);            ui->lineEditPrecipitationFile->setText( QString( "1" ) );
    ui->checkBoxTemperature->setChecked(true);              ui->lineEditTemperatureFile->setText( QString( "1" ) );
    ui->checkBoxRelativeHumidity->setChecked(true);         ui->lineEditRelativeHumidityFile->setText( QString( "1" ) );
    ui->checkBoxWindVelocity->setChecked(true);             ui->lineEditWindVelocityFile->setText( QString( "1" ) );
    ui->checkBoxSolarRadiation->setChecked(true);           ui->lineEditSolarRadiationFile->setText( QString( "1" ) );
    ui->checkBoxVaporPressure->setChecked(true);            ui->lineEditVaporPressureFile->setText( QString( "1" ) );

    ui->checkBoxSoilClasses->setChecked(true);              ui->lineEditSoilClassesFile->setText( QString( "1" ) );
    ui->checkBoxGeologyClasses->setChecked(true);           ui->lineEditGeologyClassesFile->setText( QString( "1" ) );
    ui->checkBoxMacropores->setChecked(true);               ui->lineEditMacroporesFile->setText( QString( "1" ) );
    ui->checkBoxLandCoverClasses->setChecked(true);         ui->lineEditLandCoverClassesFile->setText( QString( "1" ) );
    ui->checkBoxMeltRegions->setChecked(true);              ui->lineEditMeltRegionsFile->setText( QString( "1" ) );
    ui->checkBoxSourcesSinks->setChecked(true);             ui->lineEditSourcesSinksFile->setText( QString( "0" ) );

    ui->checkBoxInterception->setChecked(true);             ui->lineEditInterceptionFile->setText( QString( "0" ) );
    ui->checkBoxSnowCover->setChecked(true);                ui->lineEditSnowCoverFile->setText( QString( "0" ) );
    ui->checkBoxSurfaceStorage->setChecked(true);           ui->lineEditSurfaceStorageFile->setText( QString( "0" ) );
    ui->checkBoxSoilMoisture->setChecked(true);             ui->lineEditSoilMoistureFile->setText( QString( "0" ) );
    ui->checkBoxGroundwater->setChecked(true);              ui->lineEditGroundwaterFile->setText( QString( "0" ) );
    ui->checkBoxBoundaryCondition->setChecked(true);        ui->lineEditBoundaryConditionFile->setText( QString( "0" ) );

    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("AttDataFile"));

    if ( ModuleStringList.length() > 0 )
    {

        ui->checkBoxPrecipitation->setChecked(ModuleStringList.at(2).toInt());
        ui->checkBoxTemperature->setChecked(ModuleStringList.at(4).toInt());
        ui->checkBoxRelativeHumidity->setChecked(ModuleStringList.at(6).toInt());
        ui->checkBoxWindVelocity->setChecked(ModuleStringList.at(8).toInt());
        ui->checkBoxSolarRadiation->setChecked(ModuleStringList.at(10).toInt());
        ui->checkBoxVaporPressure->setChecked(ModuleStringList.at(12).toInt());

        ui->checkBoxSoilClasses->setChecked(ModuleStringList.at(14).toInt());
        ui->checkBoxGeologyClasses->setChecked(ModuleStringList.at(16).toInt());
        ui->checkBoxMacropores->setChecked(ModuleStringList.at(18).toInt());
        ui->checkBoxLandCoverClasses->setChecked(ModuleStringList.at(20).toInt());
        ui->checkBoxMeltRegions->setChecked(ModuleStringList.at(22).toInt());
        ui->checkBoxSourcesSinks->setChecked(ModuleStringList.at(24).toInt());

        ui->checkBoxInterception->setChecked(ModuleStringList.at(26).toInt());
        ui->checkBoxSnowCover->setChecked(ModuleStringList.at(28).toInt());
        ui->checkBoxSurfaceStorage->setChecked(ModuleStringList.at(30).toInt());
        ui->checkBoxSoilMoisture->setChecked(ModuleStringList.at(32).toInt());
        ui->checkBoxGroundwater->setChecked(ModuleStringList.at(34).toInt());
        ui->checkBoxBoundaryCondition->setChecked(ModuleStringList.at(36).toInt());



        ui->lineEditPrecipitationFile->setText(ModuleStringList.at(1));
        ui->lineEditTemperatureFile->setText(ModuleStringList.at(3));
        ui->lineEditRelativeHumidityFile->setText(ModuleStringList.at(5));
        ui->lineEditWindVelocityFile->setText(ModuleStringList.at(7));
        ui->lineEditSolarRadiationFile->setText(ModuleStringList.at(9));
        ui->lineEditVaporPressureFile->setText(ModuleStringList.at(11));

        ui->lineEditSoilClassesFile->setText(ModuleStringList.at(13));
        ui->lineEditGeologyClassesFile->setText(ModuleStringList.at(15));
        ui->lineEditMacroporesFile->setText(ModuleStringList.at(17));
        ui->lineEditLandCoverClassesFile->setText(ModuleStringList.at(19));
        ui->lineEditMeltRegionsFile->setText(ModuleStringList.at(21));
        ui->lineEditSourcesSinksFile->setText(ModuleStringList.at(23));

        ui->lineEditInterceptionFile->setText(ModuleStringList.at(25));
        ui->lineEditSnowCoverFile->setText(ModuleStringList.at(27));
        ui->lineEditSurfaceStorageFile->setText(ModuleStringList.at(29));
        ui->lineEditSoilMoistureFile->setText(ModuleStringList.at(31));
        ui->lineEditGroundwaterFile->setText(ModuleStringList.at(33));
        ui->lineEditBoundaryConditionFile->setText(ModuleStringList.at(35));

        ui->lineEditTINShapeLayerFile->setText(ModuleStringList.at(37));
        ui->lineEditAttDataFile->setText(ModuleStringList.at(38));



        ui->lineEditPrecipitationFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditTemperatureFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRelativeHumidityFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditWindVelocityFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSolarRadiationFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditVaporPressureFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditSoilClassesFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditGeologyClassesFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditMacroporesFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditLandCoverClassesFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditMeltRegionsFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSourcesSinksFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditInterceptionFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSnowCoverFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSurfaceStorageFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSoilMoistureFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditGroundwaterFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditBoundaryConditionFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditTINShapeLayerFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditAttDataFile->setStyleSheet("color: rgb(0, 180, 0);");
    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();

}

AttDataFile::~AttDataFile()
{
    delete ui;
}

void AttDataFile::pushButtonSetFocus()
{
    ui->pushButtonPrecipitationFile->setDefault(false);
    ui->pushButtonTemperatureFile->setDefault(false);
    ui->pushButtonRelativeHumidityFile->setDefault(false);
    ui->pushButtonWindVelocityFile->setDefault(false);
    ui->pushButtonSolarRadiationFile->setDefault(false);
    ui->pushButtonVaporPressureFile->setDefault(false);

    ui->pushButtonSoilClassesFile->setDefault(false);
    ui->pushButtonGeologyClassesFile->setDefault(false);
    ui->pushButtonMacroporesFile->setDefault(false);
    ui->pushButtonLandCoverClassesFile->setDefault(false);
    ui->pushButtonMeltRegionsFile->setDefault(false);
    ui->pushButtonSourcesSinksFile->setDefault(false);

    ui->pushButtonInterceptionFile->setDefault(false);
    ui->pushButtonSnowCoverFile->setDefault(false);
    ui->pushButtonSurfaceStorageFile->setDefault(false);
    ui->pushButtonSoilMoistureFile->setDefault(false);
    ui->pushButtonGroundwaterFile->setDefault(false);
    ui->pushButtonBoundaryConditionFile->setDefault(false);

    ui->pushButtonTINShapeLayerFile->setDefault(false);
    ui->pushButtonAttDataFile->setDefault(false);

    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditPrecipitationFile->text() == NULL)
    {
        ui->pushButtonPrecipitationFile->setDefault(true);
        ui->pushButtonPrecipitationFile->setFocus();
        return;
    }
    if (ui->lineEditTemperatureFile->text() == NULL)
    {
        ui->pushButtonTemperatureFile->setDefault(true);
        ui->pushButtonTemperatureFile->setFocus();
        return;
    }
    if (ui->lineEditRelativeHumidityFile->text() == NULL)
    {
        ui->pushButtonRelativeHumidityFile->setDefault(true);
        ui->pushButtonRelativeHumidityFile->setFocus();
        return;
    }
    if (ui->lineEditWindVelocityFile->text() == NULL)
    {
        ui->pushButtonWindVelocityFile->setDefault(true);
        ui->pushButtonWindVelocityFile->setFocus();
        return;
    }
    if (ui->lineEditSolarRadiationFile->text() == NULL)
    {
        ui->pushButtonSolarRadiationFile->setDefault(true);
        ui->pushButtonSolarRadiationFile->setFocus();
        return;
    }
    if (ui->lineEditVaporPressureFile->text() == NULL)
    {
        ui->pushButtonVaporPressureFile->setDefault(true);
        ui->pushButtonVaporPressureFile->setFocus();
        return;
    }

    if (ui->lineEditSoilClassesFile->text() == NULL)
    {
        ui->pushButtonSoilClassesFile->setDefault(true);
        ui->pushButtonSoilClassesFile->setFocus();
        return;
    }
    if (ui->lineEditGeologyClassesFile->text() == NULL)
    {
        ui->pushButtonGeologyClassesFile->setDefault(true);
        ui->pushButtonGeologyClassesFile->setFocus();
        return;
    }
    if (ui->lineEditMacroporesFile->text() == NULL)
    {
        ui->pushButtonMacroporesFile->setDefault(true);
        ui->pushButtonMacroporesFile->setFocus();
        return;
    }
    if (ui->lineEditLandCoverClassesFile->text() == NULL)
    {
        ui->pushButtonLandCoverClassesFile->setDefault(true);
        ui->pushButtonLandCoverClassesFile->setFocus();
        return;
    }
    if (ui->lineEditMeltRegionsFile->text() == NULL)
    {
        ui->pushButtonMeltRegionsFile->setDefault(true);
        ui->pushButtonMeltRegionsFile->setFocus();
        return;
    }
    if (ui->lineEditSourcesSinksFile->text() == NULL)
    {
        ui->pushButtonSourcesSinksFile->setDefault(true);
        ui->pushButtonSourcesSinksFile->setFocus();
        return;
    }

    if (ui->lineEditInterceptionFile->text() == NULL)
    {
        ui->pushButtonInterceptionFile->setDefault(true);
        ui->pushButtonInterceptionFile->setFocus();
        return;
    }
    if (ui->lineEditSnowCoverFile->text() == NULL)
    {
        ui->pushButtonSnowCoverFile->setDefault(true);
        ui->pushButtonSnowCoverFile->setFocus();
        return;
    }
    if (ui->lineEditSurfaceStorageFile->text() == NULL)
    {
        ui->pushButtonSurfaceStorageFile->setDefault(true);
        ui->pushButtonSurfaceStorageFile->setFocus();
        return;
    }
    if (ui->lineEditSoilMoistureFile->text() == NULL)
    {
        ui->pushButtonSoilMoistureFile->setDefault(true);
        ui->pushButtonSoilMoistureFile->setFocus();
        return;
    }
    if (ui->lineEditGroundwaterFile->text() == NULL)
    {
        ui->pushButtonGroundwaterFile->setDefault(true);
        ui->pushButtonGroundwaterFile->setFocus();
        return;
    }
    if (ui->lineEditBoundaryConditionFile->text() == NULL)
    {
        ui->pushButtonBoundaryConditionFile->setDefault(true);
        ui->pushButtonBoundaryConditionFile->setFocus();
        return;
    }

    if (ui->lineEditTINShapeLayerFile->text() == NULL)
    {
        ui->pushButtonTINShapeLayerFile->setDefault(true);
        ui->pushButtonTINShapeLayerFile->setFocus();
        return;
    }
    if (ui->lineEditAttDataFile->text() == NULL)
    {
        ui->pushButtonAttDataFile->setDefault(true);
        ui->pushButtonAttDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void AttDataFile::on_pushButtonPrecipitationFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Precipitation Raster", ProjectFolder, "Precipitation Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditPrecipitationFile->setStyleSheet("color: black;");
        ui->lineEditPrecipitationFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonTemperatureFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Temperature Raster", ProjectFolder, "Temperature Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditTemperatureFile->setStyleSheet("color: black;");
        ui->lineEditTemperatureFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonRelativeHumidityFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Relative Humidity Raster", ProjectFolder, "Relative Humidity Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditRelativeHumidityFile->setStyleSheet("color: black;");
        ui->lineEditRelativeHumidityFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonWindVelocityFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Wind Velocity Raster", ProjectFolder, "Wind Velocity Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditWindVelocityFile->setStyleSheet("color: black;");
        ui->lineEditWindVelocityFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonSolarRadiationFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Solar Radiation Raster", ProjectFolder, "Solar Radiation Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditSolarRadiationFile->setStyleSheet("color: black;");
        ui->lineEditSolarRadiationFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonVaporPressureFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Vapor Pressure Raster", ProjectFolder, "Vapor Pressure Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditVaporPressureFile->setStyleSheet("color: black;");
        ui->lineEditVaporPressureFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonSoilClassesFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Soil Classes Raster", ProjectFolder, "Soil Classes Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditSoilClassesFile->setStyleSheet("color: black;");
        ui->lineEditSoilClassesFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonGeologyClassesFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Geology Classes Raster", ProjectFolder, "Geology Classes Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditGeologyClassesFile->setStyleSheet("color: black;");
        ui->lineEditGeologyClassesFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonMacroporesFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Macropores Raster", ProjectFolder, "Macropores Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditMacroporesFile->setStyleSheet("color: black;");
        ui->lineEditMacroporesFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonLandCoverClassesFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Land-cover Raster", ProjectFolder, "Land-cover Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditLandCoverClassesFile->setStyleSheet("color: black;");
        ui->lineEditLandCoverClassesFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonMeltRegionsFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Melt Regions Raster", ProjectFolder, "Melt Regions Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditMeltRegionsFile->setStyleSheet("color: black;");
        ui->lineEditMeltRegionsFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonSourcesSinksFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Sources-Sinks Raster", ProjectFolder, "Sources-Sinks Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditSourcesSinksFile->setStyleSheet("color: black;");
        ui->lineEditSourcesSinksFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonInterceptionFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Interception Raster", ProjectFolder, "Interception Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditInterceptionFile->setStyleSheet("color: black;");
        ui->lineEditInterceptionFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonSnowCoverFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Snow Cover Raster", ProjectFolder, "Snow Cover Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditSnowCoverFile->setStyleSheet("color: black;");
        ui->lineEditSnowCoverFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonSurfaceStorageFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Surface-water Raster", ProjectFolder, "Surface-water Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditSurfaceStorageFile->setStyleSheet("color: black;");
        ui->lineEditSurfaceStorageFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonSoilMoistureFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Soil Moisture Raster", ProjectFolder, "Soil Moisture Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditSoilMoistureFile->setStyleSheet("color: black;");
        ui->lineEditSoilMoistureFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonGroundwaterFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Groundwater Raster", ProjectFolder, "Groundwater Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditGroundwaterFile->setStyleSheet("color: black;");
        ui->lineEditGroundwaterFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonBoundaryConditionFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "Boundary Condition Raster", ProjectFolder, "Boundary Condition Raster(*.adf *.asc)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditBoundaryConditionFile->setStyleSheet("color: black;");
        ui->lineEditBoundaryConditionFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}



void AttDataFile::on_pushButtonTINShapeLayerFile_clicked()
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


    QString RasterFileName = QFileDialog::getOpenFileName(this, "TIN Shape Layer", ProjectFolder+"/3DomainDecomposition/", "TIN Shape Layer(*.shp *.SHP)");

    if ( RasterFileName != NULL)
    {
        ui->lineEditTINShapeLayerFile->setStyleSheet("color: black;");
        ui->lineEditTINShapeLayerFile->setText(RasterFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void AttDataFile::on_pushButtonAttDataFile_clicked()
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

    QString DataFileName = QFileDialog::getSaveFileName(this, "Choose Att Data File Name", ProjectFolder+"/4DataModelLoader","Att Data File(*.att)");
    QString tempString = DataFileName;
    if ( DataFileName != NULL)
    {
        ui->lineEditAttDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".att") )
        {
            tempString.append(".att");
            DataFileName = tempString;
        }
        ui->lineEditAttDataFile->setText(DataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}


void AttDataFile::on_checkBoxPrecipitation_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelPrecipitation->setTextFormat(Qt::RichText);
        ui->textLabelPrecipitation->setText(QString("<html><head/><body><p>Precipitation <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditPrecipitationFile->setFixedWidth(100);
        ui->lineEditPrecipitationFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonPrecipitationFile->setDisabled(true);
    }
    else
    {
        ui->textLabelPrecipitation->setTextFormat(Qt::RichText);
        ui->textLabelPrecipitation->setText(QString("<html><head/><body><p>Precipitation <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditPrecipitationFile->setFixedWidth(301);
        ui->lineEditPrecipitationFile->setValidator( new QRegExpValidator );
        ui->pushButtonPrecipitationFile->setDisabled(false);
    }
    ui->lineEditPrecipitationFile->setStyleSheet("color: black;");
    ui->lineEditPrecipitationFile->setText("");
}

void AttDataFile::on_checkBoxTemperature_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelTemperature->setTextFormat(Qt::RichText);
        ui->textLabelTemperature->setText(QString("<html><head/><body><p>Temperature <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditTemperatureFile->setFixedWidth(100);
        ui->lineEditTemperatureFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonTemperatureFile->setDisabled(true);
    }
    else
    {
        ui->textLabelTemperature->setTextFormat(Qt::RichText);
        ui->textLabelTemperature->setText(QString("<html><head/><body><p>Temperature <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditTemperatureFile->setFixedWidth(301);
        ui->lineEditTemperatureFile->setValidator( new QRegExpValidator );
        ui->pushButtonTemperatureFile->setDisabled(false);
    }
    ui->lineEditTemperatureFile->setStyleSheet("color: black;");
    ui->lineEditTemperatureFile->setText("");
}

void AttDataFile::on_checkBoxRelativeHumidity_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelRelativeHumidity->setTextFormat(Qt::RichText);
        ui->textLabelRelativeHumidity->setText(QString("<html><head/><body><p>Relative Humidity <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditRelativeHumidityFile->setFixedWidth(100);
        ui->lineEditRelativeHumidityFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonRelativeHumidityFile->setDisabled(true);
    }
    else
    {
        ui->textLabelRelativeHumidity->setTextFormat(Qt::RichText);
        ui->textLabelRelativeHumidity->setText(QString("<html><head/><body><p>Relative Humidity <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditRelativeHumidityFile->setFixedWidth(301);
        ui->lineEditRelativeHumidityFile->setValidator( new QRegExpValidator );
        ui->pushButtonRelativeHumidityFile->setDisabled(false);
    }
    ui->lineEditRelativeHumidityFile->setStyleSheet("color: black;");
    ui->lineEditRelativeHumidityFile->setText("");
}

void AttDataFile::on_checkBoxWindVelocity_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelWindVelocity->setTextFormat(Qt::RichText);
        ui->textLabelWindVelocity->setText(QString("<html><head/><body><p>Wind Velocity <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditWindVelocityFile->setFixedWidth(100);
        ui->lineEditWindVelocityFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonWindVelocityFile->setDisabled(true);
    }
    else
    {
        ui->textLabelWindVelocity->setTextFormat(Qt::RichText);
        ui->textLabelWindVelocity->setText(QString("<html><head/><body><p>Wind Velocity <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditWindVelocityFile->setFixedWidth(301);
        ui->lineEditWindVelocityFile->setValidator( new QRegExpValidator );
        ui->pushButtonWindVelocityFile->setDisabled(false);
    }
    ui->lineEditWindVelocityFile->setStyleSheet("color: black;");
    ui->lineEditWindVelocityFile->setText("");
}

void AttDataFile::on_checkBoxSolarRadiation_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSolarRadiation->setTextFormat(Qt::RichText);
        ui->textLabelSolarRadiation->setText(QString("<html><head/><body><p>Solar Radiation <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditSolarRadiationFile->setFixedWidth(100);
        ui->lineEditSolarRadiationFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonSolarRadiationFile->setDisabled(true);
    }
    else
    {
        ui->textLabelSolarRadiation->setTextFormat(Qt::RichText);
        ui->textLabelSolarRadiation->setText(QString("<html><head/><body><p>Solar Radiation <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditSolarRadiationFile->setFixedWidth(301);
        ui->lineEditSolarRadiationFile->setValidator( new QRegExpValidator );
        ui->pushButtonSolarRadiationFile->setDisabled(false);
    }
    ui->lineEditSolarRadiationFile->setStyleSheet("color: black;");
    ui->lineEditSolarRadiationFile->setText("");
}

void AttDataFile::on_checkBoxVaporPressure_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelVaporPressure->setTextFormat(Qt::RichText);
        ui->textLabelVaporPressure->setText(QString("<html><head/><body><p>Vapor Pressure <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditVaporPressureFile->setFixedWidth(100);
        ui->lineEditVaporPressureFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonVaporPressureFile->setDisabled(true);
    }
    else
    {
        ui->textLabelVaporPressure->setTextFormat(Qt::RichText);
        ui->textLabelVaporPressure->setText(QString("<html><head/><body><p>Vapor Pressure <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditVaporPressureFile->setFixedWidth(301);
        ui->lineEditVaporPressureFile->setValidator( new QRegExpValidator );
        ui->pushButtonVaporPressureFile->setDisabled(false);
    }
    ui->lineEditVaporPressureFile->setStyleSheet("color: black;");
    ui->lineEditVaporPressureFile->setText("");
}

void AttDataFile::on_checkBoxSoilClasses_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSoilClasses->setTextFormat(Qt::RichText);
        ui->textLabelSoilClasses->setText(QString("<html><head/><body><p>Soil Classes <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditSoilClassesFile->setFixedWidth(100);
        ui->lineEditSoilClassesFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonSoilClassesFile->setDisabled(true);
    }
    else
    {
        ui->textLabelSoilClasses->setTextFormat(Qt::RichText);
        ui->textLabelSoilClasses->setText(QString("<html><head/><body><p>Soil Classes <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditSoilClassesFile->setFixedWidth(301);
        ui->lineEditSoilClassesFile->setValidator( new QRegExpValidator );
        ui->pushButtonSoilClassesFile->setDisabled(false);
    }
    ui->lineEditSoilClassesFile->setStyleSheet("color: black;");
    ui->lineEditSoilClassesFile->setText("");
}

void AttDataFile::on_checkBoxGeologyClasses_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelGeologyClasses->setTextFormat(Qt::RichText);
        ui->textLabelGeologyClasses->setText(QString("<html><head/><body><p>Geology Classes <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditGeologyClassesFile->setFixedWidth(100);
        ui->lineEditGeologyClassesFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonGeologyClassesFile->setDisabled(true);
    }
    else
    {
        ui->textLabelGeologyClasses->setTextFormat(Qt::RichText);
        ui->textLabelGeologyClasses->setText(QString("<html><head/><body><p>Geology Classes <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditGeologyClassesFile->setFixedWidth(301);
        ui->lineEditGeologyClassesFile->setValidator( new QRegExpValidator );
        ui->pushButtonGeologyClassesFile->setDisabled(false);
    }
    ui->lineEditGeologyClassesFile->setStyleSheet("color: black;");
    ui->lineEditGeologyClassesFile->setText("");
}

void AttDataFile::on_checkBoxMacropores_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelMacropores->setTextFormat(Qt::RichText);
        ui->textLabelMacropores->setText(QString("<html><head/><body><p>Macropores <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditMacroporesFile->setFixedWidth(100);
        ui->lineEditMacroporesFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonMacroporesFile->setDisabled(true);
    }
    else
    {
        ui->textLabelMacropores->setTextFormat(Qt::RichText);
        ui->textLabelMacropores->setText(QString("<html><head/><body><p>Macropores <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditMacroporesFile->setFixedWidth(301);
        ui->lineEditMacroporesFile->setValidator( new QRegExpValidator );
        ui->pushButtonMacroporesFile->setDisabled(false);
    }
    ui->lineEditMacroporesFile->setStyleSheet("color: black;");
    ui->lineEditMacroporesFile->setText("");
}

void AttDataFile::on_checkBoxLandCoverClasses_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelLandCoverClasses->setTextFormat(Qt::RichText);
        ui->textLabelLandCoverClasses->setText(QString("<html><head/><body><p>Land-cover Classes <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditLandCoverClassesFile->setFixedWidth(100);
        ui->lineEditLandCoverClassesFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonLandCoverClassesFile->setDisabled(true);
    }
    else
    {
        ui->textLabelLandCoverClasses->setTextFormat(Qt::RichText);
        ui->textLabelLandCoverClasses->setText(QString("<html><head/><body><p>Land-cover Classes <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditLandCoverClassesFile->setFixedWidth(301);
        ui->lineEditLandCoverClassesFile->setValidator( new QRegExpValidator );
        ui->pushButtonLandCoverClassesFile->setDisabled(false);
    }
    ui->lineEditLandCoverClassesFile->setStyleSheet("color: black;");
    ui->lineEditLandCoverClassesFile->setText("");
}

void AttDataFile::on_checkBoxMeltRegions_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelMeltRegions->setTextFormat(Qt::RichText);
        ui->textLabelMeltRegions->setText(QString("<html><head/><body><p>Melt Regions <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditMeltRegionsFile->setFixedWidth(100);
        ui->lineEditMeltRegionsFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonMeltRegionsFile->setDisabled(true);
    }
    else
    {
        ui->textLabelMeltRegions->setTextFormat(Qt::RichText);
        ui->textLabelMeltRegions->setText(QString("<html><head/><body><p>Melt Regions <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditMeltRegionsFile->setFixedWidth(301);
        ui->lineEditMeltRegionsFile->setValidator( new QRegExpValidator );
        ui->pushButtonMeltRegionsFile->setDisabled(false);
    }
    ui->lineEditMeltRegionsFile->setStyleSheet("color: black;");
    ui->lineEditMeltRegionsFile->setText("");
}

void AttDataFile::on_checkBoxSourcesSinks_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSourcesSinks->setTextFormat(Qt::RichText);
        ui->textLabelSourcesSinks->setText(QString("<html><head/><body><p>Sources-Sinks <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditSourcesSinksFile->setFixedWidth(100);
        ui->lineEditSourcesSinksFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonSourcesSinksFile->setDisabled(true);
    }
    else
    {
        ui->textLabelSourcesSinks->setTextFormat(Qt::RichText);
        ui->textLabelSourcesSinks->setText(QString("<html><head/><body><p>Sources-Sinks <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditSourcesSinksFile->setFixedWidth(301);
        ui->lineEditSourcesSinksFile->setValidator( new QRegExpValidator );
        ui->pushButtonSourcesSinksFile->setDisabled(false);
    }
    ui->lineEditSourcesSinksFile->setStyleSheet("color: black;");
    ui->lineEditSourcesSinksFile->setText("");
}

void AttDataFile::on_checkBoxInterception_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelInterception->setTextFormat(Qt::RichText);
        ui->textLabelInterception->setText(QString("<html><head/><body><p>Interception (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditInterceptionFile->setFixedWidth(100);
        ui->lineEditInterceptionFile->setValidator( new QDoubleValidator(0.0,100.0,4,this) );
        ui->pushButtonInterceptionFile->setDisabled(true);
    }
    else
    {
        ui->textLabelInterception->setTextFormat(Qt::RichText);
        ui->textLabelInterception->setText(QString("<html><head/><body><p>Interception (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditInterceptionFile->setFixedWidth(301);
        ui->lineEditInterceptionFile->setValidator( new QRegExpValidator );
        ui->pushButtonInterceptionFile->setDisabled(false);
    }
    ui->lineEditInterceptionFile->setStyleSheet("color: black;");
    ui->lineEditInterceptionFile->setText("");
}

void AttDataFile::on_checkBoxSnowCover_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSnowCover->setTextFormat(Qt::RichText);
        ui->textLabelSnowCover->setText(QString("<html><head/><body><p>Snow Cover (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditSnowCoverFile->setFixedWidth(100);
        ui->lineEditSnowCoverFile->setValidator( new QDoubleValidator(0.0,100.0,4,this) );
        ui->pushButtonSnowCoverFile->setDisabled(true);
    }
    else
    {
        ui->textLabelSnowCover->setTextFormat(Qt::RichText);
        ui->textLabelSnowCover->setText(QString("<html><head/><body><p>Snow Cover (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditSnowCoverFile->setFixedWidth(301);
        ui->lineEditSnowCoverFile->setValidator( new QRegExpValidator );
        ui->pushButtonSnowCoverFile->setDisabled(false);
    }
    ui->lineEditSnowCoverFile->setStyleSheet("color: black;");
    ui->lineEditSnowCoverFile->setText("");
}

void AttDataFile::on_checkBoxSurfaceStorage_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSurfaceStorage->setTextFormat(Qt::RichText);
        ui->textLabelSurfaceStorage->setText(QString("<html><head/><body><p>Surface water (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditSurfaceStorageFile->setFixedWidth(100);
        ui->lineEditSurfaceStorageFile->setValidator( new QDoubleValidator(0.0,100.0,4,this) );
        ui->pushButtonSurfaceStorageFile->setDisabled(true);
    }
    else
    {
        ui->textLabelSurfaceStorage->setTextFormat(Qt::RichText);
        ui->textLabelSurfaceStorage->setText(QString("<html><head/><body><p>Surface water (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditSurfaceStorageFile->setFixedWidth(301);
        ui->lineEditSurfaceStorageFile->setValidator( new QRegExpValidator );
        ui->pushButtonSurfaceStorageFile->setDisabled(false);
    }
    ui->lineEditSurfaceStorageFile->setStyleSheet("color: black;");
    ui->lineEditSurfaceStorageFile->setText("");
}

void AttDataFile::on_checkBoxSoilMoisture_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSoilMoisture->setTextFormat(Qt::RichText);
        ui->textLabelSoilMoisture->setText(QString("<html><head/><body><p>Soil Moisture (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditSoilMoistureFile->setFixedWidth(100);
        ui->lineEditSoilMoistureFile->setValidator( new QDoubleValidator(0.0,100.0,4,this) );
        ui->pushButtonSoilMoistureFile->setDisabled(true);
    }
    else
    {
        ui->textLabelSoilMoisture->setTextFormat(Qt::RichText);
        ui->textLabelSoilMoisture->setText(QString("<html><head/><body><p>Soil Moisture (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditSoilMoistureFile->setFixedWidth(301);
        ui->lineEditSoilMoistureFile->setValidator( new QRegExpValidator );
        ui->pushButtonSoilMoistureFile->setDisabled(false);
    }
    ui->lineEditSoilMoistureFile->setStyleSheet("color: black;");
    ui->lineEditSoilMoistureFile->setText("");
}

void AttDataFile::on_checkBoxGroundwater_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelGroundwater->setTextFormat(Qt::RichText);
        ui->textLabelGroundwater->setText(QString("<html><head/><body><p>Groundwater (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditGroundwaterFile->setFixedWidth(100);
        ui->lineEditGroundwaterFile->setValidator( new QDoubleValidator(0.0,100.0,4,this) );
        ui->pushButtonGroundwaterFile->setDisabled(true);
    }
    else
    {
        ui->textLabelGroundwater->setTextFormat(Qt::RichText);
        ui->textLabelGroundwater->setText(QString("<html><head/><body><p>Groundwater (m) <span style=\" vertical-align:super;\">3</span></p></body></html>"));
        ui->lineEditGroundwaterFile->setFixedWidth(301);
        ui->lineEditGroundwaterFile->setValidator( new QRegExpValidator );
        ui->pushButtonGroundwaterFile->setDisabled(false);
    }
    ui->lineEditGroundwaterFile->setStyleSheet("color: black;");
    ui->lineEditGroundwaterFile->setText("");
}

void AttDataFile::on_checkBoxBoundaryCondition_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelBoundaryCondition->setTextFormat(Qt::RichText);
        ui->textLabelBoundaryCondition->setText(QString("<html><head/><body><p>Boundary Condition <span style=\" vertical-align:super;\">1</span></p></body></html>"));
        ui->lineEditBoundaryConditionFile->setFixedWidth(100);
        ui->lineEditBoundaryConditionFile->setValidator( new QIntValidator(0,1,this) );
        ui->pushButtonBoundaryConditionFile->setDisabled(true);
    }
    else
    {
        ui->textLabelBoundaryCondition->setTextFormat(Qt::RichText);
        ui->textLabelBoundaryCondition->setText(QString("<html><head/><body><p>Boundary Condition <span style=\" vertical-align:super;\">2</span></p></body></html>"));
        ui->lineEditBoundaryConditionFile->setFixedWidth(301);
        ui->lineEditBoundaryConditionFile->setValidator( new QRegExpValidator );
        ui->pushButtonBoundaryConditionFile->setDisabled(false);
    }
    ui->lineEditBoundaryConditionFile->setStyleSheet("color: black;");
    ui->lineEditBoundaryConditionFile->setText("");
}

void AttDataFile::on_lineEditPrecipitationFile_textChanged(const QString &arg1)
{
    ui->lineEditPrecipitationFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditTemperatureFile_textChanged(const QString &arg1)
{
    ui->lineEditTemperatureFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditRelativeHumidityFile_textChanged(const QString &arg1)
{
    ui->lineEditRelativeHumidityFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditWindVelocityFile_textChanged(const QString &arg1)
{
    ui->lineEditWindVelocityFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditSolarRadiationFile_textChanged(const QString &arg1)
{
    ui->lineEditSolarRadiationFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditVaporPressureFile_textChanged(const QString &arg1)
{
    ui->lineEditVaporPressureFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditSoilClassesFile_textChanged(const QString &arg1)
{
    ui->lineEditSoilClassesFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditGeologyClassesFile_textChanged(const QString &arg1)
{
    ui->lineEditGeologyClassesFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditMacroporesFile_textChanged(const QString &arg1)
{
    ui->lineEditMacroporesFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditLandCoverClassesFile_textChanged(const QString &arg1)
{
    ui->lineEditLandCoverClassesFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditMeltRegionsFile_textChanged(const QString &arg1)
{
    ui->lineEditMeltRegionsFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditSourcesSinksFile_textChanged(const QString &arg1)
{
    ui->lineEditSourcesSinksFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditInterceptionFile_textChanged(const QString &arg1)
{
    ui->lineEditInterceptionFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditSnowCoverFile_textChanged(const QString &arg1)
{
    ui->lineEditSnowCoverFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditSurfaceStorageFile_textChanged(const QString &arg1)
{
    ui->lineEditSurfaceStorageFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditSoilMoistureFile_textChanged(const QString &arg1)
{
    ui->lineEditSoilMoistureFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditGroundwaterFile_textChanged(const QString &arg1)
{
    ui->lineEditGroundwaterFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditBoundaryConditionFile_textChanged(const QString &arg1)
{
    ui->lineEditBoundaryConditionFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditTINShapeLayerFile_textChanged(const QString &arg1)
{
    ui->lineEditTINShapeLayerFile->setStyleSheet("color: black;");
}

void AttDataFile::on_lineEditAttDataFile_textChanged(const QString &arg1)
{
    ui->lineEditAttDataFile->setStyleSheet("color: black;");
}

void AttDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Att Data File Processing Started ... <br>"));
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

    // *** TIN File Input
    if( ui->lineEditTINShapeLayerFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: TIN Shape File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditTINShapeLayerFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditTINShapeLayerFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditTINShapeLayerFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    // *** Climate Forcings : START

    if( ui->lineEditPrecipitationFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Precipitation Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxPrecipitation->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditPrecipitationFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditPrecipitationFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditPrecipitationFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditTemperatureFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Temperature Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxTemperature->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditTemperatureFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditTemperatureFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditTemperatureFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditRelativeHumidityFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Relative Humidity Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxRelativeHumidity->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditRelativeHumidityFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditRelativeHumidityFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditRelativeHumidityFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditWindVelocityFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Wind Velocity Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxWindVelocity->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditWindVelocityFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditWindVelocityFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditWindVelocityFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditSolarRadiationFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Solar Radiation Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxSolarRadiation->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSolarRadiationFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSolarRadiationFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSolarRadiationFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditVaporPressureFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Vapor Pressure Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxVaporPressure->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditVaporPressureFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditVaporPressureFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditVaporPressureFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    // *** Climate Forcings : END

    // *** Soils / Geology / Land Cover : START

    if( ui->lineEditSoilClassesFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Soil Classes Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxSoilClasses->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSoilClassesFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSoilClassesFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSoilClassesFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditGeologyClassesFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Geology Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxGeologyClasses->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditGeologyClassesFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditGeologyClassesFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditGeologyClassesFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditMacroporesFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Macropores Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxMacropores->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditMacroporesFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditMacroporesFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditMacroporesFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditLandCoverClassesFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Land-Cover Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxLandCoverClasses->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditLandCoverClassesFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditLandCoverClassesFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditLandCoverClassesFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditMeltRegionsFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Melt Regions Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxMeltRegions->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditMeltRegionsFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditMeltRegionsFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditMeltRegionsFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditSourcesSinksFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Sources-Sinks Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxSourcesSinks->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSourcesSinksFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSourcesSinksFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSourcesSinksFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    // *** Soils / Geology / Land Cover : END

    // *** Initial & Boundary Conditions : START

    if( ui->lineEditInterceptionFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Interception Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxInterception->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditInterceptionFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditInterceptionFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditInterceptionFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditSnowCoverFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Snow Cover Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxSnowCover->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSnowCoverFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSnowCoverFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSnowCoverFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditSurfaceStorageFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Surface Storage Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxSurfaceStorage->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSurfaceStorageFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSurfaceStorageFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSurfaceStorageFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditSoilMoistureFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Soil Moisture Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxSoilMoisture->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSoilMoistureFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSoilMoistureFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSoilMoistureFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditGroundwaterFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Groundwater Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxGroundwater->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditGroundwaterFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditGroundwaterFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditGroundwaterFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditBoundaryConditionFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Boundary Condition Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! ui->checkBoxBoundaryCondition->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditBoundaryConditionFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditBoundaryConditionFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditBoundaryConditionFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    // *** Initial & Boundary Conditions : END


    // *** ATT Data File
    if( ui->lineEditAttDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: ATT Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditAttDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditAttDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditAttDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if ( runFlag == 1 )
    {

        LogsString.append("Running Att Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();


        // *** ATT Function Calls
        //int att_data_file(
        //        QString PrecipitationFileName, bool PrecipitationFlag, QString TemperatureFileName,    bool TemperatureFlag,    QString RelativeHumidityFileName, bool RelativeHumidityFlag, QString WindVelocityFileName,     bool WindVelocityFlag,     QString SolarRadiationFileName, bool SolarRadiationFlag, QString VaporPressureFileName,     bool VaporPressureFlag,
        //        QString SoilClassesFileName,   bool SoilClassesFlag,   QString GeologyClassesFileName, bool GeologyClassesFlag, QString MacroporesFileName,       bool MacroporesFlag,       QString LandCoverClassesFileName, bool LandCoverClassesFlag, QString MeltRegionsFileName,    bool MeltRegionsFlag,    QString SourcesSinksFileName,      bool SourcesSinksFlag,
        //        QString InterceptionFileName,  bool InterceptionFlag,  QString SnowCoverFileFileName,  bool SnowCoverFileFlag,  QString SurfaceStorageFileName,   bool SurfaceStorageFlag,   QString SoilMoistureFileName,     bool SoilMoistureFlag,     QString GroundwaterFileName,    bool GroundwaterFlag,    QString BoundaryConditionFileName, bool BoundaryConditionFlag,
        //        QString TINShapeLayerFileName, QString AttDataFileName
        //        );
        int ErrorAtt = att_data_file(

                            ui->lineEditPrecipitationFile->text(),     ui->checkBoxPrecipitation->isChecked(),
                            ui->lineEditTemperatureFile->text(),       ui->checkBoxTemperature->isChecked(),
                            ui->lineEditRelativeHumidityFile->text(),  ui->checkBoxRelativeHumidity->isChecked(),
                            ui->lineEditWindVelocityFile->text(),      ui->checkBoxWindVelocity->isChecked(),
                            ui->lineEditSolarRadiationFile->text(),    ui->checkBoxSolarRadiation->isChecked(),
                            ui->lineEditVaporPressureFile->text(),     ui->checkBoxVaporPressure->isChecked(),

                            ui->lineEditSoilClassesFile->text(),       ui->checkBoxSoilClasses->isChecked(),
                            ui->lineEditGeologyClassesFile->text(),    ui->checkBoxGeologyClasses->isChecked(),
                            ui->lineEditMacroporesFile->text(),        ui->checkBoxMacropores->isChecked(),
                            ui->lineEditLandCoverClassesFile->text(),  ui->checkBoxLandCoverClasses->isChecked(),
                            ui->lineEditMeltRegionsFile->text(),       ui->checkBoxMeltRegions->isChecked(),
                            ui->lineEditSourcesSinksFile->text(),      ui->checkBoxSourcesSinks->isChecked(),

                            ui->lineEditInterceptionFile->text(),      ui->checkBoxInterception->isChecked(),
                            ui->lineEditSnowCoverFile->text(),         ui->checkBoxSnowCover->isChecked(),
                            ui->lineEditSurfaceStorageFile->text(),    ui->checkBoxSurfaceStorage->isChecked(),
                            ui->lineEditSoilMoistureFile->text(),      ui->checkBoxSoilMoisture->isChecked(),
                            ui->lineEditGroundwaterFile->text(),       ui->checkBoxGroundwater->isChecked(),
                            ui->lineEditBoundaryConditionFile->text(), ui->checkBoxBoundaryCondition->isChecked(),

                            ui->lineEditTINShapeLayerFile->text(), ui->lineEditAttDataFile->text()

                    );


        if( ErrorAtt != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Att Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE ATT: ... </span>")+QString::number(ErrorAtt)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        ProjectIOStringList << "AttDataFile"
                << ui->lineEditPrecipitationFile->text() <<      QString::number( (int) ui->checkBoxPrecipitation->isChecked() )
                << ui->lineEditTemperatureFile->text() <<        QString::number( (int) ui->checkBoxTemperature->isChecked() )
                << ui->lineEditRelativeHumidityFile->text() <<   QString::number( (int) ui->checkBoxRelativeHumidity->isChecked() )
                << ui->lineEditWindVelocityFile->text() <<       QString::number( (int) ui->checkBoxWindVelocity->isChecked() )
                << ui->lineEditSolarRadiationFile->text() <<     QString::number( (int) ui->checkBoxSolarRadiation->isChecked() )
                << ui->lineEditVaporPressureFile->text() <<      QString::number( (int) ui->checkBoxVaporPressure->isChecked() )

                << ui->lineEditSoilClassesFile->text() <<        QString::number( (int) ui->checkBoxSoilClasses->isChecked() )
                << ui->lineEditGeologyClassesFile->text() <<     QString::number( (int) ui->checkBoxGeologyClasses->isChecked() )
                << ui->lineEditMacroporesFile->text() <<         QString::number( (int) ui->checkBoxMacropores->isChecked() )
                << ui->lineEditLandCoverClassesFile->text() <<   QString::number( (int) ui->checkBoxLandCoverClasses->isChecked() )
                << ui->lineEditMeltRegionsFile->text() <<        QString::number( (int) ui->checkBoxMeltRegions->isChecked() )
                << ui->lineEditSourcesSinksFile->text() <<       QString::number( (int) ui->checkBoxSourcesSinks->isChecked() )

                << ui->lineEditInterceptionFile->text() <<       QString::number( (int) ui->checkBoxInterception->isChecked() )
                << ui->lineEditSnowCoverFile->text() <<          QString::number( (int) ui->checkBoxSnowCover->isChecked() )
                << ui->lineEditSurfaceStorageFile->text() <<     QString::number( (int) ui->checkBoxSurfaceStorage->isChecked() )
                << ui->lineEditSoilMoistureFile->text() <<       QString::number( (int) ui->checkBoxSoilMoisture->isChecked() )
                << ui->lineEditGroundwaterFile->text() <<        QString::number( (int) ui->checkBoxGroundwater->isChecked() )
                << ui->lineEditBoundaryConditionFile->text() <<  QString::number( (int) ui->checkBoxBoundaryCondition->isChecked() )

                << ui->lineEditTINShapeLayerFile->text() <<       ui->lineEditAttDataFile->text();

        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        LogsString.append(tr("<br><b>Att Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();

    }

}

void AttDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "RIVX";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void AttDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#att_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
