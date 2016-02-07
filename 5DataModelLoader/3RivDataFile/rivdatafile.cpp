#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "rivdatafile.h"
#include "ui_rivdatafile.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/riv_data_file.h"

RivDataFile::RivDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RivDataFile)
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
        TempFileName.replace( QString(".shp"), QString(".riv") );
        ui->lineEditRivDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(9);
        ui->lineEditRivDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName+".riv");
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditElementFile->setText( ModuleStringList.at(1) );
        ui->lineEditNodeFile->setText( ModuleStringList.at(2) );

        TempFileName = ModuleStringList.at(2);
        TempFileName.replace( QString(".1.node"), QString(".1.neigh") );
        ui->lineEditNeighbourFile->setText( TempFileName );
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MergeVectorLayers"));
    if ( ModuleStringList.length() > 0  )
        ui->lineEditRiverFile->setText( ModuleStringList.at(1) );

    ui->radioButtonZeroDepth->setChecked(true);
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("RivDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditElementFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditNodeFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditNeighbourFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRiverFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRivDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditElementFile->setText(ModuleStringList.at(1));
        ui->lineEditNodeFile->setText(ModuleStringList.at(2));
        ui->lineEditNeighbourFile->setText(ModuleStringList.at(3));
        ui->lineEditRiverFile->setText(ModuleStringList.at(4));

        if ( ModuleStringList.at(5).toInt() == -1 ) ui->radioButtonDirichlet->setChecked(true);
        if ( ModuleStringList.at(5).toInt() == -2 ) ui->radioButtonNeumann->setChecked(true);
        if ( ModuleStringList.at(5).toInt() == -3 ) ui->radioButtonZeroDepth->setChecked(true);
        if ( ModuleStringList.at(5).toInt() == -4 ) ui->radioButtonCriticalDepth->setChecked(true);

        ui->lineEditRivDataFile->setText(ModuleStringList.at(6));
    }
    // ** End: Fill Form If Module Has Been Run Previously


    pushButtonSetFocus();
}

RivDataFile::~RivDataFile()
{
    delete ui;
}

void RivDataFile::pushButtonSetFocus()
{
    ui->pushButtonElementFile->setDefault(false);
    ui->pushButtonNodeFile->setDefault(false);
    ui->pushButtonNeighbourFile->setDefault(false);
    ui->pushButtonRiverFile->setDefault(false);
    ui->pushButtonRivDataFile->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditElementFile->text() == NULL)
    {
        ui->pushButtonElementFile->setDefault(true);
        ui->pushButtonElementFile->setFocus();
        return;
    }

    if (ui->lineEditNodeFile->text() == NULL)
    {
        ui->pushButtonNodeFile->setDefault(true);
        ui->pushButtonNodeFile->setFocus();
        return;
    }

    if (ui->lineEditNeighbourFile->text() == NULL)
    {
        ui->pushButtonNeighbourFile->setDefault(true);
        ui->pushButtonNeighbourFile->setFocus();
        return;
    }

    if (ui->lineEditRiverFile->text() == NULL)
    {
        ui->pushButtonRiverFile->setDefault(true);
        ui->pushButtonRiverFile->setFocus();
        return;
    }

    if (ui->lineEditRivDataFile->text() == NULL)
    {
        ui->pushButtonRivDataFile->setDefault(true);
        ui->pushButtonRivDataFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void RivDataFile::on_pushButtonElementFile_clicked()
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

    QString EleFileName = QFileDialog::getOpenFileName(this, "Ele (.1.ele) File", ProjectFolder+tr("/3DomainDecomposition"), "Ele File(*.ele)");
    if ( EleFileName != NULL)
    {
        ui->lineEditElementFile->setStyleSheet("color: black;");
        ui->lineEditElementFile->setText(EleFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void RivDataFile::on_pushButtonNodeFile_clicked()
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

    QString NodeFileName = QFileDialog::getOpenFileName(this, "Node (.1.node) File", ProjectFolder+tr("/3DomainDecomposition"), "Node File(*.node)");
    if ( NodeFileName != NULL)
    {
        ui->lineEditNodeFile->setStyleSheet("color: black;");
        ui->lineEditNodeFile->setText(NodeFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void RivDataFile::on_pushButtonNeighbourFile_clicked()
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

    QString NeighFileName = QFileDialog::getOpenFileName(this, "Neighbor (.1.Neigh) File", ProjectFolder+tr("/3DomainDecomposition"), "Neigh File(*.neigh)");
    if ( NeighFileName != NULL)
    {
        ui->lineEditNeighbourFile->setStyleSheet("color: black;");
        ui->lineEditNeighbourFile->setText(NeighFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void RivDataFile::on_pushButtonRiverFile_clicked()
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

    QString RiverFileName = QFileDialog::getOpenFileName(this, "River Split ShapeFile", ProjectFolder+tr("/2VectorProcessing"), "River Split ShapeFile(*.shp)");
    if ( RiverFileName != NULL)
    {
        ui->lineEditRiverFile->setStyleSheet("color: black;");
        ui->lineEditRiverFile->setText(RiverFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void RivDataFile::on_pushButtonRivDataFile_clicked()
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

    QString RivDataFileName = QFileDialog::getSaveFileName(this, "Choose Riv Data File Name", ProjectFolder+"/4DataModelLoader","Riv Data File(*.riv)");
    QString tempString = RivDataFileName;
    if ( RivDataFileName != NULL)
    {
        ui->lineEditRivDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".riv") )
        {
            tempString.append(".riv");
            RivDataFileName = tempString;
        }
        ui->lineEditRivDataFile->setText(RivDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void RivDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Riv Data File Processing Started ... <br>"));
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

    if( ui->lineEditElementFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Element (.1.ele) Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditElementFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditElementFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditElementFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditNodeFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Node (.1.node) Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditNodeFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditNodeFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditNodeFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditNeighbourFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Neighbour (.1.neigh) Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditNeighbourFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditNeighbourFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditNeighbourFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditRiverFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Split River Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditRiverFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditRiverFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditRiverFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditRivDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Riv Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditRivDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditRivDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditRivDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if(runFlag == 1)
    {

        LogsString.append("Running Riv Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();


        QString RiverShpFileName, RiverDbfFileName, xRiverShpFileName, xRiverDbfFileName, BoundaryCondition;

        RiverShpFileName = ui->lineEditRiverFile->text();
        RiverDbfFileName = RiverShpFileName;
        RiverDbfFileName = RiverDbfFileName.replace( QString(".shp"), QString(".dbf") );

        xRiverShpFileName = RiverShpFileName;
        xRiverShpFileName = xRiverShpFileName.replace( QString(".shp"), QString("_riv.shp") );
        xRiverDbfFileName = xRiverShpFileName;
        xRiverDbfFileName = xRiverDbfFileName.replace( QString(".shp"), QString(".dbf") );

        if ( ui->radioButtonDirichlet->isChecked() )        BoundaryCondition = QString("-1");
        if ( ui->radioButtonNeumann->isChecked() )          BoundaryCondition = QString("-2");
        if ( ui->radioButtonZeroDepth->isChecked() )        BoundaryCondition = QString("-3");
        if ( ui->radioButtonCriticalDepth->isChecked() )    BoundaryCondition = QString("-4");

        int ErrorRiv = riv_data_file( ui->lineEditElementFile->text(), ui->lineEditNodeFile->text(), ui->lineEditNeighbourFile->text(),
                                      RiverShpFileName, RiverDbfFileName,
                                      xRiverShpFileName, xRiverDbfFileName,
                                      BoundaryCondition,
                                      ui->lineEditRivDataFile->text()
                                      );
        if( ErrorRiv != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Riv Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE RIV: ... </span>")+QString::number(ErrorRiv)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }



        ProjectIOStringList << "RivDataFile" << ui->lineEditElementFile->text() << ui->lineEditNodeFile->text() << ui->lineEditNeighbourFile->text() << ui->lineEditRiverFile->text() << BoundaryCondition << ui->lineEditRivDataFile->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();


        LogsString.append(tr("<br><b>Riv Data File Processing Complete.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void RivDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "SOIL";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void RivDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#riv_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
