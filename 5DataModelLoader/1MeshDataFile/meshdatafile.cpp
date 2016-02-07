#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "meshdatafile.h"
#include "ui_meshdatafile.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/mesh_data_file.h"
#include "0LibsOther/interpolate_river_nodes_elev.h"

MeshDataFile::MeshDataFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MeshDataFile)
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

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditElementFile->setText( ModuleStringList.at(1) );
        ui->lineEditNodeFile->setText( ModuleStringList.at(2) );

        TempFileName = ModuleStringList.at(2);
        TempFileName.replace( QString(".1.node"), QString(".1.neigh") );
        ui->lineEditNeighbourFile->setText( TempFileName );

        TempFileName = ModuleStringList.at(3);
        TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);
        TempFileName.replace( QString(".shp"), QString(".mesh") );
        ui->lineEditMeshDataFile->setText(ProjectFolder+"/4DataModelLoader/"+TempFileName);
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MergeVectorLayers"));
    if ( ModuleStringList.length() > 0  )
        ui->lineEditRiverFile->setText( ModuleStringList.at(1) );

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("FillPits"));
    if ( ModuleStringList.length() > 0  )
        ui->lineEditSurfaceElevationFile->setText( ModuleStringList.at(2) );

    ui->checkBoxSubsurfaceThickness->setChecked(true);
    ui->lineEditSubsurfaceThickness->setText( "5" );

    // ** End: Set Defaults

    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditElementFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditNodeFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditNeighbourFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditRiverFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSurfaceElevationFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditSubsurfaceThickness->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditMeshDataFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditElementFile->setText(ModuleStringList.at(1));
        ui->lineEditNodeFile->setText(ModuleStringList.at(2));
        ui->lineEditNeighbourFile->setText(ModuleStringList.at(3));
        ui->lineEditRiverFile->setText(ModuleStringList.at(4));
        ui->lineEditSurfaceElevationFile->setText(ModuleStringList.at(5));

        ui->checkBoxSubsurfaceThickness->setChecked(ModuleStringList.at(6).toInt());
        ui->lineEditSubsurfaceThickness->setText(ModuleStringList.at(7));
        ui->lineEditMeshDataFile->setText(ModuleStringList.at(8));
    }
    // ** End: Fill Form If Module Has Been Run Previously
    pushButtonSetFocus();
}

MeshDataFile::~MeshDataFile()
{
    delete ui;
}

void MeshDataFile::pushButtonSetFocus()
{
    ui->pushButtonElementFile->setDefault(false);
    ui->pushButtonNodeFile->setDefault(false);
    ui->pushButtonNeighbourFile->setDefault(false);
    ui->pushButtonRiverFile->setDefault(false);
    ui->pushButtonSurfaceElevationFile->setDefault(false);
    ui->pushButtonSubsurfaceThickness->setDefault(false);
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

    if (ui->lineEditSurfaceElevationFile->text() == NULL)
    {
        ui->pushButtonSurfaceElevationFile->setDefault(true);
        ui->pushButtonSurfaceElevationFile->setFocus();
        return;
    }

    if (ui->lineEditSubsurfaceThickness->text() == NULL)
    {
        ui->pushButtonSubsurfaceThickness->setDefault(true);
        ui->pushButtonSubsurfaceThickness->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void MeshDataFile::on_pushButtonElementFile_clicked()
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

void MeshDataFile::on_pushButtonNodeFile_clicked()
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

void MeshDataFile::on_pushButtonNeighbourFile_clicked()
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

void MeshDataFile::on_pushButtonRiverFile_clicked()
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

void MeshDataFile::on_pushButtonSurfaceElevationFile_clicked()
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

    QString SurfaceElevationFileName = QFileDialog::getOpenFileName(this, "Surface Elevation Raster", ProjectFolder+tr("/1RasterProcessing"), "Surface Elevation Raster(*.adf *.asc)");

    if ( SurfaceElevationFileName != NULL)
    {
        ui->lineEditSurfaceElevationFile->setStyleSheet("color: black;");
        ui->lineEditSurfaceElevationFile->setText(SurfaceElevationFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void MeshDataFile::on_pushButtonSubsurfaceThickness_clicked()
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

    QStringList ModuleStringList = ReadModuleLine(ProjectFileName,tr("FillPits"));

    QString SubsurfaceElevationFileName;
    if ( ModuleStringList.length() > 0 )
    {
        QString TempFolder;
        TempFolder = ModuleStringList.at(1);
        TempFolder.truncate(TempFolder.lastIndexOf("/"));
        TempFolder.truncate(TempFolder.lastIndexOf("/")+1);
        SubsurfaceElevationFileName = QFileDialog::getOpenFileName(this, "Sub-surface Elevation Raster", TempFolder, "Sub-surface Elevation Raster(*.adf *.asc)");
    }
    else
        SubsurfaceElevationFileName = QFileDialog::getOpenFileName(this, "Sub-surface Elevation Raster", ProjectFolder, "Sub-surface Elevation Raster(*.adf *.asc)");

    if ( SubsurfaceElevationFileName != NULL)
    {
        ui->checkBoxSubsurfaceThickness->setChecked(false);
        ui->lineEditSubsurfaceThickness->setStyleSheet("color: black;");
        ui->lineEditSubsurfaceThickness->setText(SubsurfaceElevationFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void MeshDataFile::on_pushButtonMeshDataFile_clicked()
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

    QString MeshDataFileName = QFileDialog::getSaveFileName(this, "Choose Mesh Data File Name", ProjectFolder+"/4DataModelLoader","Mesh Data File(*.mesh)");
    QString tempString = MeshDataFileName;
    if ( MeshDataFileName != NULL)
    {
        ui->lineEditMeshDataFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".mesh") )
        {
            tempString.append(".mesh");
            MeshDataFileName = tempString;
        }
        ui->lineEditMeshDataFile->setText(MeshDataFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void MeshDataFile::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Mesh Data File Processing Started ... <br>"));
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


    if( ui->lineEditSurfaceElevationFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Surface Elevation Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditSurfaceElevationFile->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSurfaceElevationFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditSurfaceElevationFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditSubsurfaceThickness->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Sub-surface Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ui->checkBoxSubsurfaceThickness->isChecked() )
        {
            if ( ! CheckFileAccess(ui->lineEditSurfaceElevationFile->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditSurfaceElevationFile->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->lineEditSurfaceElevationFile->text() + " ... <br>");
        }
        else
        {
            LogsString.append("Sub-surface Thickness = " + ui->lineEditSurfaceElevationFile->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->lineEditMeshDataFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Mesh Data Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditMeshDataFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditMeshDataFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditMeshDataFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();



    if(runFlag == 1)
    {

        LogsString.append("Running Mesh Data File ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();



        int ErrorMesh = mesh_data_file(ui->lineEditSurfaceElevationFile->text(), ui->lineEditSubsurfaceThickness->text(), ui->lineEditElementFile->text(), ui->lineEditNodeFile->text(), ui->lineEditNeighbourFile->text(), ui->lineEditMeshDataFile->text(), ui->checkBoxSubsurfaceThickness->isChecked());
        if( ErrorMesh != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Mesh Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE MESH: ... </span>")+QString::number(ErrorMesh)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        QString RiverFileNameShp, RiverFileNameDbf;
        RiverFileNameShp = ui->lineEditRiverFile->text();
        RiverFileNameDbf = RiverFileNameShp;
        RiverFileNameDbf.replace( QString(".shp"), QString(".dbf") );

        QString MshRiverFileNameShp, MshRiverFileNameDbf;
        MshRiverFileNameShp = ui->lineEditRiverFile->text();
        MshRiverFileNameShp.replace( QString(".shp"), QString("_msh.shp") );

        MshRiverFileNameDbf = MshRiverFileNameShp;
        MshRiverFileNameDbf.replace( QString("_msh.shp"), QString("_msh.dbf") );

        QString OldMeshFileName, NewMeshFileName;
        NewMeshFileName = ui->lineEditMeshDataFile->text();
        OldMeshFileName = NewMeshFileName;
        OldMeshFileName.replace( QString(".mesh"), QString(".mesh.0") );

        QFile::remove(OldMeshFileName);
        QFile::rename(NewMeshFileName, OldMeshFileName);

        int ErrorInterp = interpolate_river_nodes_elev( RiverFileNameShp, RiverFileNameDbf, ui->lineEditElementFile->text(), ui->lineEditNodeFile->text(), ui->lineEditNeighbourFile->text(), OldMeshFileName, NewMeshFileName, MshRiverFileNameShp, MshRiverFileNameDbf );
        if( ErrorInterp != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Mesh Data File Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE INTERP: ... </span>")+QString::number(ErrorInterp)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        QString ProjectID;
        ProjectID = ui->lineEditMeshDataFile->text();
        ProjectID = ProjectID.right( ProjectID.length() - ProjectID.lastIndexOf("/") - 1);
        ProjectID.chop(5);
        qDebug() << "Project ID = " << ProjectID << "\n";
        ProjectIOStringList << "MeshDataFile" << ui->lineEditElementFile->text() << ui->lineEditNodeFile->text() << ui->lineEditNeighbourFile->text() << ui->lineEditRiverFile->text() << ui->lineEditSurfaceElevationFile->text() << QString::number(ui->checkBoxSubsurfaceThickness->isChecked()) << ui->lineEditSubsurfaceThickness->text() << ui->lineEditMeshDataFile->text() << ProjectID << MshRiverFileNameShp;
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();



        if ( ! QDesktopServices::openUrl(QUrl("file://"+RiverFileNameShp)) )
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load SHP File in GIS ... </span>")+RiverFileNameShp+tr("<br>"));

        if ( ! QDesktopServices::openUrl(QUrl("file://"+MshRiverFileNameShp)) )
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load SHP File in GIS ... </span>")+MshRiverFileNameShp+tr("<br>"));



        LogsString.append(tr("<br><b>Mesh Data File Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void MeshDataFile::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "ATTX";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    this->close();
}

void MeshDataFile::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#mesh_Data_File")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void MeshDataFile::on_checkBoxSubsurfaceThickness_toggled(bool checked)
{
    if ( checked == true )
    {
        ui->textLabelSubsurface->setText(QString("Subsurface\nThickness (m)"));
        ui->lineEditSubsurfaceThickness->setFixedWidth(100);
        ui->lineEditSubsurfaceThickness->setValidator( new QIntValidator(0,999,this) );
        ui->pushButtonSubsurfaceThickness->setDisabled(true);
    }
    else
    {
        ui->textLabelSubsurface->setText(QString("Subsurface\nElevation File"));
        ui->lineEditSubsurfaceThickness->setFixedWidth(325);
        ui->lineEditSubsurfaceThickness->setValidator( new QRegExpValidator );
        ui->pushButtonSubsurfaceThickness->setDisabled(false);
    }
    ui->lineEditSubsurfaceThickness->setText("");
}
