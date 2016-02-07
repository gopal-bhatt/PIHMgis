#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "flowgrids.h"
#include "ui_flowgrids.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsRaster/ADFFiletoASCFile.h"
#include "0LibsRaster/setdir.h"
#include "0LibsRaster/aread8.h"

FlowGrids::FlowGrids(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FlowGrids)
{
    ui->setupUi(this);


    // ** Start: Fill Form If Module Has Been Run Previously
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

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("FillPits"));

    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditFillPits->setText(ModuleStringList.at(2));
        ui->lineEditFlowDirGrids->setText(ProjectFolder+"/1RasterProcessing/FlowDir.asc");
        ui->lineEditFlowAccGrids->setText(ProjectFolder+"/1RasterProcessing/FlowAcc.asc");
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("FlowGrids"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditFillPits->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditFlowDirGrids->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditFlowAccGrids->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditFillPits->setText(ModuleStringList.at(1));
        ui->lineEditFlowDirGrids->setText(ModuleStringList.at(2));
        ui->lineEditFlowAccGrids->setText(ModuleStringList.at(3));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();
}

FlowGrids::~FlowGrids()
{
    delete ui;
}

void FlowGrids::pushButtonSetFocus()
{
    ui->pushButtonFillPits->setDefault(false);
    ui->pushButtonsFlowDirGrid->setDefault(false);
    ui->pushButtonFlowAccGrid->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditFillPits->text() == NULL)
    {
        ui->pushButtonFillPits->setDefault(true);
        ui->pushButtonFillPits->setFocus();
        return;
    }
    if (ui->lineEditFlowDirGrids->text() == NULL)
    {
        ui->pushButtonsFlowDirGrid->setDefault(true);
        ui->pushButtonsFlowDirGrid->setFocus();
        return;
    }
    if (ui->lineEditFlowAccGrids->text() == NULL)
    {
        ui->pushButtonFlowAccGrid->setDefault(true);
        ui->pushButtonFlowAccGrid->setFocus();
        return;
    }
    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}


void FlowGrids::on_pushButtonFillPits_clicked()
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

    QString FillPitsFileName = QFileDialog::getOpenFileName(this, "Choose DEM File", ProjectFolder+tr("/.."), "DEM Grid File(*.adf *.asc *.ASC)");
    if ( FillPitsFileName != NULL)
    {
        ui->lineEditFillPits->setStyleSheet("color: black;");

        ui->lineEditFillPits->setText(FillPitsFileName);

        if( ui->lineEditFlowDirGrids->text() == NULL )
        {
            ui->lineEditFlowDirGrids->setStyleSheet("color: black;");
            ui->lineEditFlowDirGrids->setText(ProjectFolder+"/1RasterProcessing/FlowDir.asc");
        }
        if( ui->lineEditFlowAccGrids->text() == NULL )
        {
            ui->lineEditFlowAccGrids->setStyleSheet("color: black;");
            ui->lineEditFlowAccGrids->setText(ProjectFolder+"/1RasterProcessing/FlowAcc.asc");
        }

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void FlowGrids::on_pushButtonsFlowDirGrid_clicked()
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

    QString FlowDirFileName = QFileDialog::getSaveFileName(this, "Choose Flow Dir Grid", ProjectFolder+"/1RasterProcessing","Flow Dir Grid File(*.asc)");
    QString tempString = FlowDirFileName;
    if ( FlowDirFileName != NULL)
    {
        ui->lineEditFlowDirGrids->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".asc") )
        {
            tempString.append(".asc");
            FlowDirFileName = tempString;
        }
        ui->lineEditFlowDirGrids->setText(FlowDirFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void FlowGrids::on_pushButtonFlowAccGrid_clicked()
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

    QString FlowAccFileName = QFileDialog::getSaveFileName(this, "Choose Flow Acc Grid", ProjectFolder+"/1RasterProcessing","Flwo Acc Grid File(*.asc)");
    QString tempString = FlowAccFileName;
    if ( FlowAccFileName != NULL)
    {
        ui->lineEditFlowAccGrids->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".asc") )
        {
            tempString.append(".asc");
            FlowAccFileName = tempString;
        }
        ui->lineEditFlowAccGrids->setText(FlowAccFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void FlowGrids::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Flow Grids Processing Started ... <br>"));
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
    QFile IOTestFile;

    if( ui->lineEditFillPits->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Fill Pits Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditFillPits->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditFillPits->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditFillPits->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditFlowDirGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Flow Dir Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditFlowDirGrids->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditFlowDirGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditFlowDirGrids->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditFlowAccGrids->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Flow Acc Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditFlowAccGrids->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditFlowAccGrids->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditFlowAccGrids->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();




    if(runFlag == 1)
    {

        QString FillPitsFileName = ui->lineEditFillPits->text();

        QString ASCFileName = FillPitsFileName;

        if((FillPitsFileName.toLower()).endsWith(".adf"))
        {
            ASCFileName.truncate(ASCFileName.length()-3);
            ASCFileName.append("asc");

            LogsString.append("Converting Arc Binary File to ASC File ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            ADFFiletoASCFile(FillPitsFileName, ASCFileName);
        }

        int DEMResolution;
        QFile ASCFile(ASCFileName);
        ASCFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream ASCFileTextStream(&ASCFile);

        QString TempString;
        ASCFileTextStream>>TempString;ASCFileTextStream>>TempString;ASCFileTextStream>>TempString;ASCFileTextStream>>TempString;
        ASCFileTextStream>>TempString;ASCFileTextStream>>TempString;ASCFileTextStream>>TempString;ASCFileTextStream>>TempString;
        ASCFileTextStream>>TempString;

        ASCFileTextStream >> DEMResolution;
        qDebug() << "DEM Resolution (Integer) = "<<DEMResolution<<"\n";
        ASCFile.close();

        LogsString.append("Running Flow Dir Grids ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString SlopeFileName = ui->lineEditFlowDirGrids->text();
        SlopeFileName.truncate(SlopeFileName.length()-4);
        SlopeFileName.append("Slope.asc");
        qDebug() << "Slope File Name: " << SlopeFileName;

        //int ErrorFDir = setdird8( (char *)qPrintable(ASCFileName), (char *)qPrintable(ui->lineEditFlowDirGrids->text()), "dummy" );
        int ErrorFDir = setdird8( (char *)qPrintable(ASCFileName), (char *)qPrintable(ui->lineEditFlowDirGrids->text()), (char *)qPrintable(SlopeFileName) );
        if( ErrorFDir != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Flow Direction Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorFDir)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        LogsString.append("Running Flow Acc Grids ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorAcc = aread8( (char *)qPrintable(ui->lineEditFlowDirGrids->text()), (char *)qPrintable(ui->lineEditFlowAccGrids->text()), 0.0, 0.0, 1 );
        if( ErrorAcc != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Flow Accumulation Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorAcc)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        ProjectIOStringList << "FlowGrids" << ui->lineEditFillPits->text() << ui->lineEditFlowDirGrids->text() << ui->lineEditFlowAccGrids->text() << QString::number(DEMResolution);
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        if( ui->checkBoxFlowDirGrid->isChecked() == 1 || ui->checkBoxFlowAccGrid->isChecked() == 1 )
        {
            LogsString.append("Loading Data in GIS ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }

        if(ui->checkBoxFlowDirGrid->isChecked() == 1)
        {
            if ( ! QDesktopServices::openUrl(QUrl("file://"+ui->lineEditFlowDirGrids->text())) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load ASC File in GIS ... </span>")+ui->lineEditFlowDirGrids->text()+tr("<br>"));
        }
        if(ui->checkBoxFlowAccGrid->isChecked() == 1)
        {
            if ( ! QDesktopServices::openUrl(QUrl("file://"+ui->lineEditFlowAccGrids->text())) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load ASC File in GIS ... </span>")+ui->lineEditFlowAccGrids->text()+tr("<br>"));
        }

        LogsString.append(tr("<br><b>Flow Grids Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }


}

void FlowGrids::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "STRGRIDS";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void FlowGrids::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Flow_Grids")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
