#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>
#include <QDir>

#include "pihmsimulation.h"
#include "ui_pihmsimulation.h"

#include "0LibsIO/IOProjectFile.h"


PIHMSimulation::PIHMSimulation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PIHMSimulation)
{

    this->setWindowTitle(tr(": :   ")+this->ModelVersion+tr("   : :"));

    ui->setupUi(this);


    ui->progressBar->setValue(0);

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

    ui->lineEditInputDataFolder->setText(ProjectFolder+"/4DataModelLoader");
    // **
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(3);
        TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);

        TempFileName.replace( QString(".shp"), QString("") );
        ui->lineEditDataKey->setText(TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditDataKey->setText(TempFileName);
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("PIHMSimulation"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditInputDataFolder->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditInputDataFolder->setText(ModuleStringList.at(1));

        ui->lineEditDataKey->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditDataKey->setText(ModuleStringList.at(2));
    }

    ui->pushButtonRun->setText("Run");
    pushButtonSetFocus();
}

PIHMSimulation::~PIHMSimulation()
{
    delete ui;
}

void PIHMSimulation::on_pushButtonInputDataFolder_clicked()
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

    QString InputDataFolder = QFileDialog::getExistingDirectory(this, "PIHM Input Data Folder", ProjectFolder+"/4DataModelLoader", 0);

    if( InputDataFolder != NULL )
    {
        ui->lineEditInputDataFolder->setStyleSheet("color: black;");
        ui->lineEditInputDataFolder->setText(InputDataFolder);

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
                if ( CheckFileAccess(ui->lineEditInputDataFolder->text()+"/"+TempFileName+".mesh", "ReadOnly") )
                {
                    ui->lineEditDataKey->setText(TempFileName);
                }

            }

            ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
            if ( ModuleStringList.length() > 0  )
            {
                TempFileName = ModuleStringList.at(9);
                if ( CheckFileAccess(ui->lineEditInputDataFolder->text()+"/"+TempFileName+".mesh", "ReadOnly") )
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

void PIHMSimulation::pushButtonSetFocus()
{
    ui->pushButtonInputDataFolder->setDefault(false);

    if (ui->lineEditInputDataFolder->text() == NULL)
    {
        ui->pushButtonInputDataFolder->setDefault(true);
        ui->pushButtonInputDataFolder->setFocus();
        return;
    }

    if (ui->lineEditDataKey->text() == NULL)
    {
        ui->lineEditDataKey->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

int PIHMSimulation::CheckInputFileAccess(QString Extension)
{
    QString FileName = ui->lineEditInputDataFolder->text() + "/" + ui->lineEditDataKey->text();

    if ( ! CheckFileAccess(FileName + Extension, "ReadOnly") )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ FileName + Extension +tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return -9;
    }
    LogsString.append(FileName + Extension + " ... <br>");
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    return 0;
}

int PIHMSimulation::CheckInputFiles()
{

    if ( this->ModelVersion == "PIHM v2.2")
    {
        if ( CheckInputFileAccess(tr(".mesh"))  != 0 ) return 2201;
        if ( CheckInputFileAccess(tr(".att"))   != 0 ) return 2202;
        if ( CheckInputFileAccess(tr(".riv"))   != 0 ) return 2203;
        if ( CheckInputFileAccess(tr(".soil"))  != 0 ) return 2204;
        if ( CheckInputFileAccess(tr(".geol"))  != 0 ) return 2205;
        if ( CheckInputFileAccess(tr(".lc"))    != 0 ) return 2206;
        if ( CheckInputFileAccess(tr(".init"))  != 0 ) return 2207;
        if ( CheckInputFileAccess(tr(".ibc"))   != 0 ) return 2208;
        if ( CheckInputFileAccess(tr(".para"))  != 0 ) return 2209;
        if ( CheckInputFileAccess(tr(".calib")) != 0 ) return 2210;
        if ( CheckInputFileAccess(tr(".forc"))  != 0 ) return 2211;
    }
    else
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PIHM Version Not Supported </span>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return 999;
    }
    return 0;
}

int PIHMSimulation::CopyInputFile( QString SimulationFolder, QString Extension )
{
    QString SrcFileName = ui->lineEditInputDataFolder->text() + "/" + ui->lineEditDataKey->text();

    if( QFile(SimulationFolder+"/"+ui->lineEditDataKey->text()+Extension).exists() )
        if ( ! QFile::remove(SimulationFolder+"/"+ui->lineEditDataKey->text()+Extension) )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to remove file </span>")+SimulationFolder+"/"+ui->lineEditDataKey->text()+Extension+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return -9;
        }
    if ( ! QFile::copy(SrcFileName+Extension,SimulationFolder+"/"+ui->lineEditDataKey->text()+Extension) )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to copy file </span>")+SrcFileName+Extension+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return -9;
    }
    return 0;
}


int PIHMSimulation::CopyInputFiles( QString SimulationFolder )
{

    if ( this->ModelVersion == "PIHM v2.2")
    {
        if ( CopyInputFile(SimulationFolder,tr(".mesh"))  != 0 ) return 2301;
        if ( CopyInputFile(SimulationFolder,tr(".att"))   != 0 ) return 2302;
        if ( CopyInputFile(SimulationFolder,tr(".riv"))   != 0 ) return 2303;
        if ( CopyInputFile(SimulationFolder,tr(".soil"))  != 0 ) return 2304;
        if ( CopyInputFile(SimulationFolder,tr(".geol"))  != 0 ) return 2305;
        if ( CopyInputFile(SimulationFolder,tr(".lc"))    != 0 ) return 2306;
        if ( CopyInputFile(SimulationFolder,tr(".init"))  != 0 ) return 2307;
        if ( CopyInputFile(SimulationFolder,tr(".ibc"))   != 0 ) return 2308;
        if ( CopyInputFile(SimulationFolder,tr(".para"))  != 0 ) return 2309;
        if ( CopyInputFile(SimulationFolder,tr(".calib")) != 0 ) return 2310;
        if ( CopyInputFile(SimulationFolder,tr(".forc"))  != 0 ) return 2311;
    }
    else
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PIHM Version Not Supported </span>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return 999;
    }
    return 0;
}

void PIHMSimulation::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("PIHM Simulation Processing ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();

    ui->progressBar->setValue(0);

    if(ui->pushButtonRun->text() == "Run")
    {
        ui->pushButtonRun->setText("Stop");

        LogsString.append(tr("Verifying Data Files ... <br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int runFlag = 1;

        if( ui->lineEditInputDataFolder->text() == NULL )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PIHM Input Data Folder Missing </span>")+tr("<br>"));
            runFlag = 0;
        }
        else
        {
            if ( ! QDir(ui->lineEditInputDataFolder->text()).exists() )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Folder Does Not Exist ... </span>")+ui->lineEditInputDataFolder->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditInputDataFolder->text() + " ... <br>");
        }
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();


        if( ui->lineEditDataKey->text() == NULL )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PIHM Input Data Key Missing </span>")+tr("<br>"));
            runFlag = 0;
        }
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();


        int ErrorPIHM = 0;

        ErrorPIHM = CheckInputFiles();

        if ( ErrorPIHM != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PIHM Input File(s) Missing </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorPIHM)+tr("<br>"));
            runFlag = 0;
        }
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString SimulationFolder;
        if ( runFlag == 1 )
        {
            SimulationFolder = ProjectFolder + "/5PIHMSimulation";
            int SimulationCount = 1;
            QString SimulationCountString;
            if ( ui->checkBoxArchive->isChecked() )
            {
                while ( QDir(SimulationFolder+"/"+SimulationCountString.sprintf("Simul%03d",SimulationCount)).exists() )
                    SimulationCount++;
                SimulationFolder = SimulationFolder+"/"+SimulationCountString.sprintf("Simul%03d",SimulationCount);
            }
            QDir qdir;
            if ( qdir.mkpath(SimulationFolder) )
            {
                LogsString.append(tr("Created Simulation Folder: ")+SimulationFolder+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
            }
            else
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Create Folder: </span>")+SimulationFolder+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
                return;
            }

            if ( CopyInputFiles( SimulationFolder ) != 0 )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">Unable to Copy Input Files</span>")+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
                return;
            }

            ProjectIOStringList << "PIHMSimulation" << ui->lineEditInputDataFolder->text();
            ProjectIOStringList << ui->lineEditDataKey->text();
            ProjectIOStringList << QString::number(ui->checkBoxArchive->isChecked());
            ProjectIOStringList << SimulationFolder;
            WriteModuleLine(ProjectFileName, ProjectIOStringList);
            ProjectIOStringList.clear();


            MyPIHMThread = new PIHMThread(this);

            char **arguments;
            arguments    = (char **) malloc(2 * sizeof(char*));
            arguments[0] = (char * ) malloc(400*sizeof(char) );
            arguments[1] = (char * ) malloc(400*sizeof(char) );

            arguments[0] = "2 ";
            //arguments[1] = (char *) qPrintable(SimulationFolder+"/"+ui->lineEditDataKey->text());
            sprintf(arguments[1],"%s",qPrintable(SimulationFolder+"/"+ui->lineEditDataKey->text()));
            qDebug() << arguments[1];

            MyPIHMThread->init(2,arguments,ui->progressBar,LogsString,this->ModelVersion,1);

            LogsString.append(tr("Running PIHM ...")+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();

            connect(MyPIHMThread,SIGNAL(finished()),this,SLOT(PIHMThreadFinished()));
            //connect(MyPIHMThread,SIGNAL(updateProgressBar(int)),this,SLOT(updateProgressBarValue(int)),Qt::DirectConnection);
            //ui->progressBar->connect(MyPIHMThread,SIGNAL(MyPIHMThread->updateProgressBar(int)),SLOT(updateProgressBarValue(int)),Qt::DirectConnection);

            this->moveToThread(MyPIHMThread);
            MyPIHMThread->start();


        }
        else
        {
            ui->pushButtonRun->setText("Run");
        }
    }
    else
    {
        // TODO: If simulation is running stop it
        ui->pushButtonRun->setText("Stoping...");

        if( MyPIHMThread != NULL )
        {
            MyPIHMThread->kill();
            //MyPIHMThread->wait();

                //thread->wait();
        //??done(0);
        }

        // TODO Call Stop Thread
        LogsString.append(tr("<span style=\"color:#FF0000\">Simulation has been stopped.</span>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        ui->progressBar->setValue(0);
        ui->pushButtonRun->setText("Run");

    }

    pushButtonSetFocus();
}


void PIHMSimulation::on_pushButtonClose_clicked()
{
    ui->pushButtonClose->setText("Closing...");
    // TODO: If simulation is running -- stop first before closing
    if( MyPIHMThread != NULL )
    {
        MyPIHMThread->kill();//?? TEST IF THIS IS REQUIRED?
            //thread->wait();
        //done(0);
    }
//    while () // Wait for thread to close/terminate

    QStringList default_params; default_params << "WORKFLOW7" << "WORKFLOW8";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void PIHMSimulation::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#PIHM_Simulation")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    pushButtonSetFocus();
}

void PIHMSimulation::on_progressBar_valueChanged(int value)
{
    if ( value == 100 )
        ui->pushButtonRun->setText("Finished");
}


void PIHMSimulation::updateProgressBarValue(int value)
{
    qDebug() << "From SLOT PIHMSimulation::updateProgressBarValue";
    ui->progressBar->setValue(value);
    //QApplication::processEvents();
}

void PIHMSimulation::PIHMThreadFinished()
{
    LogsString.append(tr("<b>PIHM Simulation Complete.</b>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    ui->pushButtonRun->setText("Run");

    ui->pushButtonRun->setDefault(false);
    ui->pushButtonClose->setDefault(true);
    ui->pushButtonClose->setFocus();
}

void PIHMSimulation::on_lineEditInputDataFolder_textChanged(const QString &arg1)
{
    ui->lineEditInputDataFolder->setStyleSheet("color: rgb(0, 0, 0);");
    verifyInputOutputFile();
}

void PIHMSimulation::on_lineEditDataKey_textChanged(const QString &arg1)
{
    ui->lineEditDataKey->setStyleSheet("color: rgb(0, 0, 0);");
    verifyInputOutputFile();
}

void PIHMSimulation::verifyInputOutputFile()
{
    LogsString = tr("");
    if ( ! QDir(ui->lineEditInputDataFolder->text()).exists() )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Folder Does Not Exist ... </span>")+ui->lineEditInputDataFolder->text()+tr("<br>"));
    }
    else
    {
        LogsString.append(tr("Output Folder Exists ... ")+ui->lineEditInputDataFolder->text()+tr("<br>"));

    }


    QString FileName;
    FileName = ui->lineEditInputDataFolder->text() + "/" + ui->lineEditDataKey->text();

    QStringList Extensions;
    Extensions << ".mesh";
    Extensions << ".att";
    Extensions << ".riv";
    Extensions << ".soil";
    Extensions << ".geol";
    Extensions << ".lc";
    Extensions << ".init";
    Extensions << ".ibc";
    Extensions << ".para";
    Extensions << ".calib";
    Extensions << ".forc";

    for( int i=0; i < Extensions.length(); i++)
    {
        if ( ! QFile(FileName + Extensions.at(i)).exists() )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Input File Does Not Exist ... </span>")+ FileName + Extensions.at(i) +tr("<br>"));
        }
        else
        {
            LogsString.append(tr("Input File Exists ... ")+ FileName + Extensions.at(i) +tr("<br>"));
        }
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    //pushButtonSetFocus();
}
