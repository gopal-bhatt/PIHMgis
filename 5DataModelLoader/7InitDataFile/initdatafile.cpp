#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "initdatafile.h"
#include "ui_initdatafile.h"

#include "0LibsIO/IOProjectFile.h"


InitDataFile::InitDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InitDataFile)
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


    ui->radioButtonMeters->setChecked(false);
    ui->radioButtonPercent->setChecked(true);

    ui->lineEditInterception->setText(QString("0"));
    ui->lineEditSnow->setText(QString("0"));
    ui->lineEditSurface->setText(QString("0"));
    ui->lineEditSoilMoisture->setText(QString("40"));
    ui->lineEditGroundwater->setText(QString("40"));
    ui->lineEditRiver->setText(QString("40"));
    ui->lineEditRiverbed->setText(QString("40"));



    QStringList ModuleStringList;
    QString TempFileName;

    // ** Data Model INPUT File Name
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(3);
        TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);

        TempFileName.replace( QString(".shp"), QString(".mesh") );
        ui->lineEditMeshDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);

        TempFileName.replace( QString(".mesh"), QString(".riv") );
        ui->lineEditRivDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditMeshDataFile->setText(ModuleStringList.at(8));
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("RivDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditRivDataFile->setText(ModuleStringList.at(6));
    }

    // ** Data Model OUTPUT File Name
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(3);
        TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);
        TempFileName.replace( QString(".shp"), QString(".init") );
        ui->lineEditInitDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditInitDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".init");
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("InitDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditInterception->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSnow->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSurface->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSoilMoisture->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditGroundwater->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRiver->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRiverbed->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditMeshDataFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRivDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditInitDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        if (ModuleStringList.at(8).toInt() == 2)
        {
            ui->radioButtonMeters->setChecked(false);
            ui->radioButtonPercent->setChecked(true);
        }
        else
        {
            ui->radioButtonMeters->setChecked(true);
            ui->radioButtonPercent->setChecked(false);
        }

        ui->lineEditInterception->setText(ModuleStringList.at(1));
        ui->lineEditSnow->setText(ModuleStringList.at(2));
        ui->lineEditSurface->setText(ModuleStringList.at(3));
        ui->lineEditSoilMoisture->setText(ModuleStringList.at(4));
        ui->lineEditGroundwater->setText(ModuleStringList.at(5));
        ui->lineEditRiver->setText(ModuleStringList.at(6));
        ui->lineEditRiverbed->setText(ModuleStringList.at(7));

        ui->lineEditMeshDataFile->setText(ModuleStringList.at(9));
        ui->lineEditRivDataFile->setText(ModuleStringList.at(10));

        ui->lineEditInitDataFile->setText(ModuleStringList.at(11));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();
}

InitDataFile::~InitDataFile()
{
    delete ui;
}

void InitDataFile::pushButtonSetFocus()
{
    ui->pushButtonMeshDataFile->setDefault(false);
    ui->pushButtonRivDataFile->setDefault(false);
    ui->pushButtonInitDataFile->setDefault(false);

    if (ui->lineEditInterception->text() == NULL )
    {
        ui->lineEditInterception->setFocus();
        return;
    }

    if (ui->lineEditSnow->text() == NULL )
    {
        ui->lineEditSnow->setFocus();
        return;
    }

    if (ui->lineEditSurface->text() == NULL )
    {
        ui->lineEditSurface->setFocus();
        return;
    }

    if (ui->lineEditSoilMoisture->text() == NULL )
    {
        ui->lineEditSoilMoisture->setFocus();
        return;
    }

    if (ui->lineEditGroundwater->text() == NULL )
    {
        ui->lineEditGroundwater->setFocus();
        return;
    }

    if (ui->lineEditMeshDataFile->text() == NULL)
    {
        ui->pushButtonMeshDataFile->setDefault(true);
        ui->pushButtonMeshDataFile->setFocus();
        return;
    }

    if (ui->lineEditRivDataFile->text() == NULL)
    {
        ui->pushButtonRivDataFile->setDefault(true);
        ui->pushButtonRivDataFile->setFocus();
        return;
    }

    if (ui->lineEditInitDataFile->text() == NULL)
    {
        ui->pushButtonInitDataFile->setDefault(true);
        ui->pushButtonInitDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void InitDataFile::on_pushButtonMeshDataFile_clicked()
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

    QString MeshDataFileName = QFileDialog::getOpenFileName(this, "Mesh Data File Name", ProjectFolder+"/4DataModelLoader","Mesh Data File(*.mesh)");

    if ( MeshDataFileName != NULL)
    {
        ui->lineEditMeshDataFile->setStyleSheet("color: black;");
        ui->lineEditMeshDataFile->setText(MeshDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void InitDataFile::on_pushButtonRivDataFile_clicked()
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

    QString RivDataFileName = QFileDialog::getOpenFileName(this, "Riv Data File Name", ProjectFolder+"/4DataModelLoader","Riv Data File(*.riv)");

    if ( RivDataFileName != NULL)
    {
        ui->lineEditRivDataFile->setStyleSheet("color: black;");
        ui->lineEditRivDataFile->setText(RivDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void InitDataFile::on_pushButtonInitDataFile_clicked()
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

    QString InitDataFileName = QFileDialog::getSaveFileName(this, "Choose Init Data File Name", ProjectFolder+"/4DataModelLoader","Init Data File(*.init)");
    QString tempString = InitDataFileName;
    if ( InitDataFileName != NULL)
    {
        ui->lineEditInitDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".init") )
        {
            tempString.append(".init");
            InitDataFileName = tempString;
        }
        ui->lineEditInitDataFile->setText(InitDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void InitDataFile::on_lineEditInterception_textChanged(const QString &arg1)
{
    ui->lineEditInterception->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_lineEditSnow_textChanged(const QString &arg1)
{
    ui->lineEditSnow->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_lineEditSurface_textChanged(const QString &arg1)
{
    ui->lineEditSurface->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_lineEditSoilMoisture_textChanged(const QString &arg1)
{
    ui->lineEditSoilMoisture->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_lineEditGroundwater_textChanged(const QString &arg1)
{
    ui->lineEditGroundwater->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_lineEditRiver_textChanged(const QString &arg1)
{
    ui->lineEditRiver->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_lineEditRiverbed_textChanged(const QString &arg1)
{
    ui->lineEditRiverbed->setStyleSheet("color: black;");
    //pushButtonSetFocus();
}

void InitDataFile::on_radioButtonMeters_toggled(bool checked)
{
    ui->lineEditSoilMoisture->setStyleSheet("color: black;");
    ui->lineEditGroundwater->setStyleSheet("color: black;");
    ui->lineEditRiver->setStyleSheet("color: black;");
    ui->lineEditRiverbed->setStyleSheet("color: black;");

    //ui->lineEditSoilMoisture->setText(QString(""));
    //ui->lineEditGroundwater->setText(QString(""));
    //ui->lineEditRiver->setText(QString(""));
    //ui->lineEditRiverbed->setText(QString(""));

    pushButtonSetFocus();
}

void InitDataFile::on_radioButtonPercent_toggled(bool checked)
{
    ui->lineEditSoilMoisture->setStyleSheet("color: black;");
    ui->lineEditGroundwater->setStyleSheet("color: black;");
    ui->lineEditRiver->setStyleSheet("color: black;");
    ui->lineEditRiverbed->setStyleSheet("color: black;");

    //ui->lineEditSoilMoisture->setText(QString(""));
    //ui->lineEditGroundwater->setText(QString(""));
    //ui->lineEditRiver->setText(QString(""));
    //ui->lineEditRiverbed->setText(QString(""));

    pushButtonSetFocus();
}

int InitDataFile::init_data_file(QString Interception, QString Snow, QString Surface, QString SoilMoisture, QString Groundwater,
                                 QString River, QString Riverbed, int MetersOrPercent,
                                 QString MeshDataFileName, QString RivDataFileName, QString InitDataFileName)
{
    QFile MeshDataFile(MeshDataFileName);
    if ( ! MeshDataFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 404;
    QTextStream MeshDataFileTextStream(&MeshDataFile);

    QFile RivDataFile(RivDataFileName);
    if ( ! RivDataFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 409;
    QTextStream RivDataFileTextStream(&RivDataFile);

    QFile InitDataFile(InitDataFileName);
    if ( ! InitDataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 414;
    QTextStream InitDataFileTextStream(&InitDataFile);

    int NumTINs, NumNodes, NumRiverSegs, NumRiverShapes;
    int TempInt;
    double TempDouble, SurfaceElevation, BedElevation;
    QString TempString;

    if ( MetersOrPercent == 2 )
    {
        MeshDataFileTextStream >> NumTINs;
        MeshDataFileTextStream >> NumNodes;

        int **TINnodes;
        TINnodes = new int*[NumTINs];
        for (int i=0; i<NumTINs; i++)
            TINnodes[i] = new int [3];


        double *NodeDepths, *TINDepths;
        NodeDepths = new double [NumNodes];
        TINDepths  = new double [NumTINs];


        for (int i=0; i<NumTINs; i++)
        {
            MeshDataFileTextStream >> TempInt;
            MeshDataFileTextStream >> TINnodes[i][0];
            MeshDataFileTextStream >> TINnodes[i][1];
            MeshDataFileTextStream >> TINnodes[i][2];
            MeshDataFileTextStream >> TempInt;
            MeshDataFileTextStream >> TempInt;
            MeshDataFileTextStream >> TempInt;
        }
        for (int i=0; i<NumNodes; i++)
        {
            MeshDataFileTextStream >> TempInt;
            MeshDataFileTextStream >> TempDouble;
            MeshDataFileTextStream >> TempDouble;

            MeshDataFileTextStream >> BedElevation;
            MeshDataFileTextStream >> SurfaceElevation;

            NodeDepths[i] = SurfaceElevation - BedElevation;

            if ( NodeDepths[i] < 0 )
                return 455;
        }

        RivDataFileTextStream >> NumRiverSegs;

        int **RiverSegNodes, *RiverSegShape;
        double *RiverDepths;

        RiverSegNodes = new int*[NumRiverSegs];
        for (int i=0; i<NumRiverSegs; i++)
            RiverSegNodes[i] = new int [2];
        RiverSegShape = new int [NumRiverSegs];

        for (int i=0; i<NumRiverSegs; i++)
        {
            RivDataFileTextStream >> TempInt;
            RivDataFileTextStream >> RiverSegNodes[i][0];
            RivDataFileTextStream >> RiverSegNodes[i][1];
            RivDataFileTextStream >> TempInt;
            RivDataFileTextStream >> TempInt; RivDataFileTextStream >> TempInt;
            RivDataFileTextStream >> TempInt; RivDataFileTextStream >> TempInt; RivDataFileTextStream >> RiverSegShape[i];
            RivDataFileTextStream >> TempInt; RivDataFileTextStream >> TempInt;
        }
        RivDataFileTextStream >> TempString;
        RivDataFileTextStream >> NumRiverShapes;

        RiverDepths = new double [NumRiverShapes];
        for (int i=0; i<NumRiverShapes; i++)
        {
            RivDataFileTextStream >> TempInt;
            RivDataFileTextStream >> RiverDepths[i];
        }

        for (int i=0; i<NumTINs; i++)
        {
            InitDataFileTextStream << Interception << "\t";
            InitDataFileTextStream << Snow << "\t";
            InitDataFileTextStream << Surface << "\t";
            InitDataFileTextStream << ( SoilMoisture.toDouble() / 100 ) * ( ( NodeDepths[ TINnodes[i][0]-1 ] + NodeDepths[ TINnodes[i][1]-1 ] + NodeDepths[ TINnodes[i][2]-1 ] ) / 3 ) << "\t";
            InitDataFileTextStream << ( Groundwater.toDouble()  / 100 ) * ( ( NodeDepths[ TINnodes[i][0]-1 ] + NodeDepths[ TINnodes[i][1]-1 ] + NodeDepths[ TINnodes[i][2]-1 ] ) / 3 ) << "\n";
        }
        for (int i=0; i<NumRiverSegs; i++)
        {
            InitDataFileTextStream << ( River.toDouble()    / 100 ) * ( RiverDepths[ RiverSegShape[i]-1 ] ) << "\t";
            InitDataFileTextStream << ( Riverbed.toDouble() / 100 ) * ( ( NodeDepths[ RiverSegNodes[i][0]-1 ] + NodeDepths[ RiverSegNodes[i][1]-1 ] ) / 2 - RiverDepths[ RiverSegShape[i]-1 ] ) << "\n";
        }

        delete [] NodeDepths;
        delete [] TINDepths;
        for (int i=0; i<NumTINs; i++)
            delete [] TINnodes[i];
        delete [] TINnodes;
        for (int i=0; i<NumRiverSegs; i++)
            delete [] RiverSegNodes[i];
        delete [] RiverSegNodes;
        delete [] RiverSegShape;
        delete [] RiverDepths;
    }
    else
    {
        MeshDataFileTextStream >> NumTINs;
        RivDataFileTextStream  >> NumRiverSegs;
        for (int i=0; i<NumTINs; i++)
        {
            InitDataFileTextStream << Interception << "\t";
            InitDataFileTextStream << Snow << "\t";
            InitDataFileTextStream << Surface << "\t";
            InitDataFileTextStream << SoilMoisture << "\t";
            InitDataFileTextStream << Groundwater << "\n";
        }
        for (int i=0; i<NumRiverSegs; i++)
        {
            InitDataFileTextStream << River << "\t";
            InitDataFileTextStream << Riverbed << "\n";
        }
    }


    MeshDataFile.close();
    RivDataFile.close();
    InitDataFile.close();

    return 0;
}

void InitDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Init Data File Processing Started ... <br>"));
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

    if( ui->lineEditInterception->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Interception Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditSnow->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Snow Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditSurface->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Surface Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditSoilMoisture->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Soil Moisture Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditGroundwater->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Groundwater Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditRiver->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: River Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditRiverbed->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Riverbed Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditMeshDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Mesh Data File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditMeshDataFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditMeshDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditMeshDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditRivDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Riv Data File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditRivDataFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditRivDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditRivDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditInitDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Init Data File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditInitDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditInitDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditInitDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if ( runFlag == 1 )
    {

        LogsString.append("Running Init Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int MetersOrPercent;
        if ( ui->radioButtonMeters->isChecked() )
            MetersOrPercent = 1;
        if ( ui->radioButtonPercent->isChecked() )
            MetersOrPercent = 2;

        int ErrorInit = init_data_file(ui->lineEditInterception->text(), ui->lineEditSnow->text(), ui->lineEditSurface->text(), ui->lineEditSoilMoisture->text(), ui->lineEditGroundwater->text(),
                                       ui->lineEditRiver->text(), ui->lineEditRiverbed->text(), MetersOrPercent,
                                       ui->lineEditMeshDataFile->text(), ui->lineEditRivDataFile->text(), ui->lineEditInitDataFile->text() );

        if( ErrorInit != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Init Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE INIT: ... </span>")+QString::number(ErrorInit)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        ProjectIOStringList << "InitDataFile"
                            << ui->lineEditInterception->text()
                            << ui->lineEditSnow->text()
                            << ui->lineEditSurface->text()
                            << ui->lineEditSoilMoisture->text()
                            << ui->lineEditGroundwater->text()

                            << ui->lineEditRiver->text()
                            << ui->lineEditRiverbed->text();

        if ( ui->radioButtonMeters->isChecked() )
            ProjectIOStringList << "1";

        if ( ui->radioButtonPercent->isChecked() )
            ProjectIOStringList << "2";

        ProjectIOStringList << ui->lineEditMeshDataFile->text() << ui->lineEditRivDataFile->text() << ui->lineEditInitDataFile->text();

        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        LogsString.append(tr("<br><b>Init Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }

}

void InitDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "IBCX";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void InitDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#init_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
