#include "riverspatial.h"
#include "ui_riverspatial.h"

#include <QFileDialog>

#include "0LibsIO/IOProjectFile.h"

#include "0LibsShape/shapefil.h"

RiverSpatial::RiverSpatial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RiverSpatial)
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

    // **
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("PIHMSimulation"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(4);
        ui->lineEditOutputDataFolder->setText(TempFileName);

        TempFileName = ModuleStringList.at(2);
        ui->lineEditDataKey->setText(TempFileName);

        if ( QFile(ui->lineEditOutputDataFolder->text()+"/"+ui->lineEditDataKey->text()+".para").exists() )
        {
            QFile TempFile(ui->lineEditOutputDataFolder->text()+"/"+ui->lineEditDataKey->text()+".para");
            TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
            QTextStream TempFileTextStream(&TempFile);
            double TempDouble;
            int Start, Stop;
            for (int i=1; i<=45; i++)
            {
                TempFileTextStream >> TempDouble;
                //qDebug() << TempDouble << "\t";
            }
            TempFileTextStream >> Start; qDebug() << "Start = " << Start << "\t";
            TempFileTextStream >> Stop;  qDebug() << "Stop  = " << Stop  << "\t";
            if      ( Stop / (60*24*365) >= 1 ) { Start = Start / (60*24*365); Stop = Stop / (60*24*365); ui->comboBoxStartStop->setCurrentIndex(5); }
            else if ( Stop / (60*24*30)  >= 1 ) { Start = Start / (60*24*30);  Stop = Stop / (60*24*30);  ui->comboBoxStartStop->setCurrentIndex(4); }
            else if ( Stop / (60*24*7)   >= 1 ) { Start = Start / (60*24*7);   Stop = Stop / (60*24*7);   ui->comboBoxStartStop->setCurrentIndex(3); }
            else if ( Stop / (60*24*1)   >= 1 ) { Start = Start / (60*24*1);   Stop = Stop / (60*24*1);   ui->comboBoxStartStop->setCurrentIndex(2); }
            else if ( Stop / (60*1*1)    >= 1 ) { Start = Start / (60*1*1);    Stop = Stop / (60*1*1);    ui->comboBoxStartStop->setCurrentIndex(1); }
            else if ( Stop / (1*1*1)     >= 1 ) { Start = Start / (1*1*1);     Stop = Stop / (1*1*1);     ui->comboBoxStartStop->setCurrentIndex(0); }

            ui->spinBoxStartTime->setValue( Start );
            ui->spinBoxStopTime->setValue( Stop );
        }
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0 )
    {
        TempFileName = ModuleStringList.at(10);
        ui->lineEditRiverShapeFile->setText(TempFileName);
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("RiverSpatial"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditOutputDataFolder->setText(ModuleStringList.at(1));
        ui->lineEditOutputDataFolder->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditDataKey->setText(ModuleStringList.at(2));
        ui->lineEditDataKey->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditRiverShapeFile->setText(ModuleStringList.at(8));
        ui->lineEditRiverShapeFile->setStyleSheet("color: rgb(0, 180, 0);");
    }

    verifyInputOutputFile();
    pushButtonSetFocus();
}

RiverSpatial::~RiverSpatial()
{
    delete ui;
}

void RiverSpatial::on_pushButtonOutputDataFolder_clicked()
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

    QString OutputDataFolder = QFileDialog::getExistingDirectory(this, "PIHM Input Data Folder", ProjectFolder+"/5PIHMSimulation", 0);

    if( OutputDataFolder != NULL )
    {
        ui->lineEditOutputDataFolder->setStyleSheet("color: black;");
        ui->lineEditOutputDataFolder->setText(OutputDataFolder);

        QStringList ModuleStringList;
        QString TempFileName;

        if( ui->lineEditDataKey->text() == NULL )
        {
            // ** Data Model INPUT File Name
            ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
            if ( ModuleStringList.length() > 0  )
            {
                TempFileName = ModuleStringList.at(3);
                TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);

                TempFileName.replace( QString(".shp"), QString("") );
                if ( QFile(ui->lineEditOutputDataFolder->text()+"/"+TempFileName+".para").exists() )
                {
                    ui->lineEditDataKey->setText(TempFileName);
                }

            }

            ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
            if ( ModuleStringList.length() > 0  )
            {
                TempFileName = ModuleStringList.at(9);
                if ( QFile(ui->lineEditOutputDataFolder->text()+"/"+TempFileName+".para").exists() )
                {
                    ui->lineEditDataKey->setText(TempFileName);
                }
            }
        }
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    pushButtonSetFocus();
}

void RiverSpatial::on_lineEditOutputDataFolder_textChanged(const QString &arg1)
{
    ui->lineEditOutputDataFolder->setStyleSheet("color: rgb(0, 0, 0);");
    verifyInputOutputFile();
}

void RiverSpatial::on_lineEditDataKey_textChanged(const QString &arg1)
{
    ui->lineEditDataKey->setStyleSheet("color: rgb(0, 0, 0);");
    verifyInputOutputFile();
}

void RiverSpatial::on_lineEditRiverShapeFile_textChanged(const QString &arg1)
{
    ui->lineEditRiverShapeFile->setStyleSheet("color: rgb(0, 0, 0);");
}

void RiverSpatial::on_comboBoxPlotVariable_currentIndexChanged(int index)
{
    verifyInputOutputFile();
}

void RiverSpatial::verifyInputOutputFile()
{
    LogsString = tr("");
    if ( ! QDir(ui->lineEditOutputDataFolder->text()).exists() )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Folder Does Not Exist ... </span>")+ui->lineEditOutputDataFolder->text()+tr("<br>"));
    }
    else
    {
        LogsString.append(tr("Output Folder Exists ... ")+ui->lineEditOutputDataFolder->text()+tr("<br>"));
    }


    QString FileName, Extension;

    FileName = ui->lineEditOutputDataFolder->text() + "/" + ui->lineEditDataKey->text();
    Extension = tr(".para");

    if ( ! QFile(FileName + Extension).exists() )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Para File Does Not Exist ... </span>")+ FileName + Extension +tr("<br>"));
    }
    else
    {
        LogsString.append(tr("Para File Exists ... ")+ FileName + Extension +tr("<br>"));
    }

    QStringList Extensions;
    if (ui->comboBoxPlotVariable->currentIndex() ==  0) Extensions << ".surf.dat";  //surface storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  1) Extensions << ".unsat.dat"; //soil moisture storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  2) Extensions << ".gw.dat";    //groundwater storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) Extensions << ".is.dat";    //interception strorage
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) Extensions << ".snow.dat";  //snowpack storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et0.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et1.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et2.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  6) Extensions << ".et0.dat";   //interception loss
    if (ui->comboBoxPlotVariable->currentIndex() ==  7) Extensions << ".et1.dat";   //transpiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  8) Extensions << ".et2.dat";   //evaporation
    if (ui->comboBoxPlotVariable->currentIndex() ==  9) Extensions << ".infil.dat"; //infiltration
    if (ui->comboBoxPlotVariable->currentIndex() == 10) Extensions << ".rech.dat";  //recharge

    for( int i=0; i < Extensions.length(); i++)
    {
        if ( ! QFile(FileName + Extensions.at(i)).exists() )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Output File Does Not Exist ... </span>")+ FileName + Extensions.at(i) +tr("<br>"));
        }
        else
        {
            LogsString.append(tr("Output File Exists ... ")+ FileName + Extensions.at(i) +tr("<br>"));
        }
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    //pushButtonSetFocus();
}

void RiverSpatial::pushButtonSetFocus()
{
    ui->pushButtonOutputDataFolder->setDefault(false);

    if (ui->lineEditOutputDataFolder->text() == NULL)
    {
        ui->pushButtonOutputDataFolder->setDefault(true);
        ui->pushButtonOutputDataFolder->setFocus();
        return;
    }

    if (ui->lineEditDataKey->text() == NULL)
    {
        ui->lineEditDataKey->setFocus();
        return;
    }

    ui->pushButtonRiverShapeFile->setDefault(false);
    if (ui->lineEditRiverShapeFile->text() == NULL)
    {
        ui->pushButtonRiverShapeFile->setDefault(true);
        ui->pushButtonRiverShapeFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void RiverSpatial::on_comboBoxStartStop_currentIndexChanged(int index)
{
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

    QStringList ModuleStringList;

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("PIHMSimulation"));
    if ( ModuleStringList.length() > 0  )
    {
        if ( QFile(ui->lineEditOutputDataFolder->text()+"/"+ui->lineEditDataKey->text()+".para").exists() )
        {
            QFile TempFile(ui->lineEditOutputDataFolder->text()+"/"+ui->lineEditDataKey->text()+".para");
            TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
            QTextStream TempFileTextStream(&TempFile);
            double TempDouble;
            int Start, Stop;
            for (int i=1; i<=45; i++)
            {
                TempFileTextStream >> TempDouble;
                //qDebug() << TempDouble << "\t";
            }
            TempFileTextStream >> Start; qDebug() << "Start = " << Start << "\t";
            TempFileTextStream >> Stop;  qDebug() << "Stop  = " << Stop  << "\t";
            if ( index == 5 ) { Start = Start / (60*24*365); Stop = Stop / (60*24*365); }
            if ( index == 4 ) { Start = Start / (60*24*30);  Stop = Stop / (60*24*30);  }
            if ( index == 3 ) { Start = Start / (60*24*7);   Stop = Stop / (60*24*7);   }
            if ( index == 2 ) { Start = Start / (60*24*1);   Stop = Stop / (60*24*1);   }
            if ( index == 1 ) { Start = Start / (60*1*1);    Stop = Stop / (60*1*1);    }
            if ( index == 0 ) { Start = Start / (1*1*1);     Stop = Stop / (1*1*1);     }

            ui->spinBoxStartTime->setValue( Start );
            ui->spinBoxStopTime->setValue( Stop );
        }
    }
}

void RiverSpatial::on_pushButtonRiverShapeFile_clicked()
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

    QString RiverShapeFile = QFileDialog::getOpenFileName(this, "River Shape File", ProjectFolder+"/2VectorProcessing", "River Shape File(*.shp)");

    if( RiverShapeFile != NULL )
    {
        ui->lineEditRiverShapeFile->setStyleSheet("color: black;");
        ui->lineEditRiverShapeFile->setText(RiverShapeFile);
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    pushButtonSetFocus();
}

void RiverSpatial::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("River Spatial Analysis Processing Started ... <br>"));
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

    QStringList Extensions;
    if (ui->comboBoxPlotVariable->currentIndex() ==  0) Extensions << ".rivFlx01.dat"; //outflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  1) Extensions << ".rivFlx00.dat"; //inflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  2) Extensions << ".stage.dat";    //storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) Extensions << ".rivFlx02.dat"; //surfaceflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) Extensions << ".rivFlx03.dat"; //surfaceflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) Extensions << ".rivFlx04.dat"; //baseflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) Extensions << ".rivFlx05.dat"; //baseflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".rivFlx02.dat"; //surfaceflow left
    if (ui->comboBoxPlotVariable->currentIndex() ==  6) Extensions << ".rivFlx03.dat"; //surfaceflow right
    if (ui->comboBoxPlotVariable->currentIndex() ==  7) Extensions << ".rivFlx04.dat"; //baseflow left
    if (ui->comboBoxPlotVariable->currentIndex() ==  8) Extensions << ".rivFlx05.dat"; //baseflow right
    if (ui->comboBoxPlotVariable->currentIndex() ==  9) Extensions << ".rivFlx06.dat"; //seepage bed
    if (ui->comboBoxPlotVariable->currentIndex() == 10) Extensions << ".rivFlx09.dat"; //bed outflow
    if (ui->comboBoxPlotVariable->currentIndex() == 11) Extensions << ".rivFlx10.dat"; //bed inflow
    if (ui->comboBoxPlotVariable->currentIndex() == 12) Extensions << ".rbed.dat";     //bed storage
    if (ui->comboBoxPlotVariable->currentIndex() == 13) Extensions << ".rivFlx07.dat"; //bed baseflow
    if (ui->comboBoxPlotVariable->currentIndex() == 13) Extensions << ".rivFlx08.dat"; //bed baseflow
    if (ui->comboBoxPlotVariable->currentIndex() == 14) Extensions << ".rivFlx07.dat"; //bed baseflow left
    if (ui->comboBoxPlotVariable->currentIndex() == 15) Extensions << ".rivFlx08.dat"; //bed baseflow right

    QString PlotParameter;
    if (ui->comboBoxPlotVariable->currentIndex() ==  0) PlotParameter = "outq";    //outflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  1) PlotParameter = "inq";     //inflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  2) PlotParameter = "store";   //storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) PlotParameter = "surfq";    //surfaceflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) PlotParameter = "baseq";    //baseflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) PlotParameter = "surfql";   //surfaceflow left
    if (ui->comboBoxPlotVariable->currentIndex() ==  6) PlotParameter = "surfqr";   //surfaceflow right
    if (ui->comboBoxPlotVariable->currentIndex() ==  7) PlotParameter = "baseql";   //baseflow left
    if (ui->comboBoxPlotVariable->currentIndex() ==  8) PlotParameter = "baseqr";   //baseflow right
    if (ui->comboBoxPlotVariable->currentIndex() ==  9) PlotParameter = "seep";    //seepage bed
    if (ui->comboBoxPlotVariable->currentIndex() == 10) PlotParameter = "rboutq";   //bed outflow
    if (ui->comboBoxPlotVariable->currentIndex() == 11) PlotParameter = "rbinq";    //bed inflow
    if (ui->comboBoxPlotVariable->currentIndex() == 12) PlotParameter = "rbstore"; //bed storage
    if (ui->comboBoxPlotVariable->currentIndex() == 13) PlotParameter = "rbbase";  //bed baseflow
    if (ui->comboBoxPlotVariable->currentIndex() == 14) PlotParameter = "rbbasel"; //bed baseflow left
    if (ui->comboBoxPlotVariable->currentIndex() == 15) PlotParameter = "rbbaser"; //bed baseflow right



    QString OutputFileName;
    int NUMELEMENTS, NUMRIVERS;
    int STARTTIME, STOPTIME;
    int SKIPTIMESTEPS;
    int TIMESTEP;
    int NTIMESTEPS;
    int NBREAKS, BREAKSTEPS;


    NTIMESTEPS = 999999999;
    if( ui->lineEditOutputDataFolder->text() == NULL || ui->lineEditDataKey->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Input Folder and/or Data Key Input(s) Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else if( ui->spinBoxStopTime->value() - ui->spinBoxStartTime->value() <= 0 )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Inconsitent Start - Stop Time </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        OutputFileName = ui->lineEditOutputDataFolder->text() + "/" + ui->lineEditDataKey->text();

        if ( ! CheckFileAccess(OutputFileName+".mesh", "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+OutputFileName+".mesh"+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(OutputFileName+".mesh" + " ... <br>");

        if ( ! CheckFileAccess(OutputFileName+".riv", "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+OutputFileName+".riv"+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(OutputFileName+".riv" + " ... <br>");

        for (int i=0; i<Extensions.length(); i++)
        {
            if ( ! CheckFileAccess(OutputFileName+Extensions.at(i), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+OutputFileName+Extensions.at(i)+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(OutputFileName+Extensions.at(i) + " ... <br>");
        }

        if ( ! CheckFileAccess(ui->lineEditRiverShapeFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditRiverShapeFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditRiverShapeFile->text() + " ... <br>");

        QFile TempFile;
        QTextStream TempFileTextStream;

        TempFile.setFileName(OutputFileName+".mesh");
        TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
        TempFileTextStream.setDevice(&TempFile);
        TempFileTextStream >> NUMELEMENTS;
        TempFile.close();
        LogsString.append(tr("Number of Elements = ")+QString::number(NUMELEMENTS)+tr("<br>"));
        if ( NUMELEMENTS < 1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Number of Elements Less Than One... </span>")+QString::number(NUMELEMENTS)+tr("<br>"));
            runFlag = 0;
        }

        TempFile.setFileName(OutputFileName+".riv");
        TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
        TempFileTextStream.setDevice(&TempFile);
        TempFileTextStream >> NUMRIVERS;
        TempFile.close();
        LogsString.append(tr("Number of River Segments = ")+QString::number(NUMRIVERS)+tr("<br>"));
        if ( NUMRIVERS < 1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">WARNING: Number of River Segments Less Than One... </span>")+QString::number(NUMRIVERS)+tr("<br>"));
            //runFlag = 0;
        }

        int TIMESTEP1, TIMESTEP2;
        double TempDouble;
        QString TempQString;
        TempFile.setFileName(OutputFileName+Extensions.at(0));
        TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
        TempFileTextStream.setDevice(&TempFile);

        TempFileTextStream >> TIMESTEP1;
        qDebug() << "Time Step1 = " << TIMESTEP1 << "\n";
        for (int i=0; i<NUMRIVERS+1; i++)
        {
            TempFileTextStream >> TempDouble;
            qDebug() << TempDouble << ", ";
        }
        TempFileTextStream >> TIMESTEP2;
        qDebug() << "\nTime Step2 = " << TIMESTEP2 << "\n";
        TempFile.close();

        TIMESTEP = TIMESTEP2 - TIMESTEP1;
        qDebug() << "Time Step = " << TIMESTEP << "\n";

        int timeunitfactor;
        if ( ui->comboBoxStartStop->currentIndex() == 0 ) timeunitfactor = 1;
        if ( ui->comboBoxStartStop->currentIndex() == 1 ) timeunitfactor = 60;
        if ( ui->comboBoxStartStop->currentIndex() == 2 ) timeunitfactor = 60*24;
        if ( ui->comboBoxStartStop->currentIndex() == 3 ) timeunitfactor = 60*24*7;
        if ( ui->comboBoxStartStop->currentIndex() == 4 ) timeunitfactor = 60*24*30;
        if ( ui->comboBoxStartStop->currentIndex() == 5 ) timeunitfactor = 60*24*365;

        STARTTIME = ui->spinBoxStartTime->value() * timeunitfactor;
        STOPTIME  = ui->spinBoxStopTime->value()  * timeunitfactor;

        qDebug() << "Start Time = " << STARTTIME << "\n";
        qDebug() << "Stop Time  = " << STOPTIME  << "\n";

        SKIPTIMESTEPS = ( STARTTIME + TIMESTEP - TIMESTEP1 ) / TIMESTEP;
        NTIMESTEPS    = ( STOPTIME  - STARTTIME ) / TIMESTEP;
        NBREAKS       = ui->spinBoxNumBreaks->value();
        BREAKSTEPS    = NTIMESTEPS / NBREAKS;

        qDebug() << "SKIP TIME STEPS = " << SKIPTIMESTEPS << "\n";
        qDebug() << "N TIME STEPS    = " << NTIMESTEPS << "\n";
        qDebug() << "BREAKSTEPS      = " << BREAKSTEPS << "\n";

        if ( BREAKSTEPS < 1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: SKIP TIME STEPS = ")+QString::number(SKIPTIMESTEPS)+tr(" N TIME STEPS = ")+QString::number(NTIMESTEPS)+tr(" NBREAKS = ")+QString::number(BREAKSTEPS)+tr("</span>")+tr("<br>"));
            runFlag = 0;
        }
    }

    if ( QFile(ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".shp").exists() )
        if ( ! QFile::remove(ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".shp") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to delete file... </span>")+ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".shp"+tr("<br>"));
            runFlag = 0;
        }
    if ( QFile(ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".shx").exists() )
        if ( ! QFile::remove(ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".shx") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to delete file... </span>")+ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".shx"+tr("<br>"));
            runFlag = 0;
        }
    if ( QFile(ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".dbf").exists() )
        if ( ! QFile::remove(ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".dbf") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to delete file... </span>")+ProjectFolder+"/6VisualAnalytics/Spatial_"+PlotParameter+".dbf"+tr("<br>"));
            runFlag = 0;
        }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if (runFlag == 1)
    {
        ui->pushButtonRun->setText("Running");

        QVector<QString> Legends(NBREAKS);
        QVector<QVector<double>> datax(NBREAKS), datay(NBREAKS);
        for (int j=0; j<NBREAKS; j++)
        {
            datax[j].resize(NUMRIVERS);
            datay[j].resize(NUMRIVERS);
        }

        QString TempString;
        if(NBREAKS > 1)
            for (int i=0; i<NBREAKS; i++)
                Legends[i] = PlotParameter + TempString.sprintf("_%03d",i+1);
        else
            Legends[0] = PlotParameter;


        //** READ DATA
        QFile DataFile;
        QTextStream DataFileTextStream;
        QString DataString;
        QStringList Data;
        for (int i=0; i<Extensions.length(); i++)
        {
            DataFile.setFileName(OutputFileName+Extensions.at(i));
            DataFile.open(QIODevice::ReadOnly | QIODevice::Text);
            DataFileTextStream.setDevice(&DataFile);
            int nline  = 1;
            int nbreak = 1;
            while ( nline <= SKIPTIMESTEPS )
            {
                if( DataFileTextStream.atEnd() )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Reached End of File... </span>")+OutputFileName+Extensions.at(i)+tr("<br>"));
                    ui->textBrowserLogs->setHtml(LogsString);
                    ui->textBrowserLogs->repaint();
                    ui->pushButtonRun->setText("Run");
                    return;
                }
                DataString = DataFileTextStream.readLine();
                qDebug() << "A Line Number = " << nline << "\n";
                nline ++;
            }
            while ( nline <= SKIPTIMESTEPS+NTIMESTEPS )
            {
                if( DataFileTextStream.atEnd() )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Reached End of File... </span>")+OutputFileName+Extensions.at(i)+tr("<br>"));
                    ui->textBrowserLogs->setHtml(LogsString);
                    ui->textBrowserLogs->repaint();
                    ui->pushButtonRun->setText("Run");
                    return;
                }
                DataString = DataFileTextStream.readLine();
                if ( nline > SKIPTIMESTEPS + nbreak*BREAKSTEPS ) nbreak++;
                qDebug() << "B Line Number = " << nline << "\n";
                nline++;

                Data = DataString.split(QRegExp("\\s+"),QString::SkipEmptyParts);
                for (int j=0; j<NUMRIVERS; j++)
                {
                    datax[nbreak-1][j] = Data.at(0).toDouble();
                    datay[nbreak-1][j] = datay[nbreak-1][j] + Data.at(j+1).toDouble()/BREAKSTEPS;
                    qDebug() << i << "," << j << "," << nbreak << "," << datax[nbreak-1][j] << "," << datay[nbreak-1][j] << "\n";
                }
            }
            DataFile.close();
        }

        /*for (int i=0; i<NUMELEMENTS; i++)
        {
            for (int j=0; j<NBREAKS; j++)
            {
                qDebug() << datay[j][i] << "\t";
            }
            qDebug() << "\n";
        }*/



        TempString = ui->lineEditRiverShapeFile->text();
        TempString.replace(".shp",".shp");
        QFile::copy(TempString,ProjectFolder+"/6VisualAnalytics/spatial_"+PlotParameter+".shp");
        TempString.replace(".shp",".shx");
        QFile::copy(TempString,ProjectFolder+"/6VisualAnalytics/spatial_"+PlotParameter+".shx");
        //TempString.replace(".shx",".dbf");
        //QFile::copy(TempString,ProjectFolder+"/6VisualAnalytics/spatial_"+PlotParameter+".dbf");

        QString dbfFileName = ProjectFolder+"/6VisualAnalytics/spatial_"+PlotParameter+".dbf";
        DBFHandle DBF;
        DBF = DBFCreate((char *)qPrintable(dbfFileName));
        //DBF = DBFOpen((char *)qPrintable(dbfFileName), "rb+");
        if ( DBF == NULL )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable To Open DBF File... </span>")+dbfFileName+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            ui->pushButtonRun->setText("Run");
            return;
        }

        int tempInt;
        char fieldName[11];
        QVector<int> fields(NBREAKS+1);
        fields[0] = DBFAddField(DBF, "Riv", FTInteger, 9, 0);
        if ( fields[0] == -1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable To Add New Attribute Riv To DBF File... </span>")+dbfFileName+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            ui->pushButtonRun->setText("Run");
            return;
        }
        for (int i=0; i<NBREAKS; i++)
        {
            //qDebug() << Legends[i];
            sprintf(fieldName,"%s",qPrintable(Legends[i]));
            qDebug() << Legends[i] << fieldName;
            //fields[i+1] = DBFAddField(DBF, "Ele", FTInteger, 9, 0);
            fields[i+1] = DBFAddField(DBF, fieldName, FTDouble, 16, 8);
            if ( fields[i+1] == -1 )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable To Add New Attribute To DBF File... </span>")+dbfFileName+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
                ui->pushButtonRun->setText("Run");
                return;
            }
            else
            {
                LogsString.append(tr("Added New Attribute #")+QString::number(fields[i+1])+ tr(" ")+Legends[i]+tr(" To DBF File... </span>")+dbfFileName+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
            }
        }

        for(int j=0; j<NUMRIVERS; j++)
        {
            tempInt = DBFWriteIntegerAttribute(DBF, j, fields[0], j+1);
            if ( tempInt == 0 )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable To Write Attribute To DBF File... </span>")+dbfFileName+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
                return;
            }
        }

        for (int i=0; i<NBREAKS; i++)
        {
            //out<<"Field Ele_ID with Field number: "<<temp<<" added to .dbf file\n";
            for(int j=0; j<NUMRIVERS; j++)
            {
                tempInt = DBFWriteDoubleAttribute(DBF, j, fields[i+1], datay[i][j]);
                if ( tempInt == 0 )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable To Write Attribute To DBF File... </span>")+dbfFileName+tr("<br>"));
                    ui->textBrowserLogs->setHtml(LogsString);
                    ui->textBrowserLogs->repaint();
                    return;
                }
            }
        }
        DBFClose(DBF);

        dbfFileName.replace(".dbf",".shp");
        if ( ! QDesktopServices::openUrl(QUrl("file://"+dbfFileName)) )
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load SHP File in GIS ... </span>")+dbfFileName+tr("<br>"));

        ProjectIOStringList << "RiverSpatial" << ui->lineEditOutputDataFolder->text() << ui->lineEditDataKey->text();
        ProjectIOStringList << QString::number(ui->comboBoxPlotVariable->currentIndex());
        ProjectIOStringList << QString::number(ui->spinBoxStartTime->value()) << QString::number(ui->spinBoxStopTime->value()) << QString::number(ui->comboBoxStartStop->currentIndex()) << QString::number(ui->spinBoxNumBreaks->value());
        ProjectIOStringList << ui->lineEditRiverShapeFile->text();
        ProjectIOStringList << dbfFileName;
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        LogsString.append(tr("<br><b>Mesh Spatial Analysis Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setText("Run");

        //pushButtonSetFocus();
        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void RiverSpatial::on_pushButtonClose_clicked()
{
    close();
}

void RiverSpatial::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Spatial_Analysis:_River_Elements")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
