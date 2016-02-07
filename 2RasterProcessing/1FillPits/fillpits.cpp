#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "fillpits.h"
#include "ui_fillpits.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsRaster/ADFFiletoASCFile.h"
#include "0LibsRaster/flood.h"

FillPits::FillPits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FillPits)
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
    ProjectFileTextStream.readLine();
    QString ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();

    QStringList ModuleStringList = ReadModuleLine(ProjectFileName,tr("FillPits"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditDEM->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditFillPits->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditDEM->setText(ModuleStringList.at(1));
        ui->lineEditFillPits->setText(ModuleStringList.at(2));

    }
    // ** End: Fill Form If Module Has Been Run Previously

    pushButtonSetFocus();
}

FillPits::~FillPits()
{
    delete ui;
}

void FillPits::pushButtonSetFocus()
{
    ui->pushButtonDEM->setDefault(false);
    ui->pushButtonFillPits->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditDEM->text() == NULL)
    {
        ui->pushButtonDEM->setDefault(true);
        ui->pushButtonDEM->setFocus();
        return;
    }
    if (ui->lineEditFillPits->text() == NULL)
    {
        ui->pushButtonFillPits->setDefault(true);
        ui->pushButtonFillPits->setFocus();
        return;
    }
    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void FillPits::on_pushButtonDEM_clicked()
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

    QString DEMFileName = QFileDialog::getOpenFileName(this, "Choose DEM File", ProjectFolder+tr("/.."), "DEM Grid File(*.adf *.asc *.ASC)");
    if ( DEMFileName != NULL)
    {
        ui->lineEditDEM->setStyleSheet("color: black;");

        ui->lineEditDEM->setText(DEMFileName);

        if( ui->lineEditFillPits->text() == NULL )
        {
            ui->lineEditFillPits->setStyleSheet("color: black;");
            ui->lineEditFillPits->setText(ProjectFolder+"/1RasterProcessing/FillPits.asc");
        }

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void FillPits::on_pushButtonFillPits_clicked()
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

    QString FillPitFileName = QFileDialog::getSaveFileName(this, "Choose Fill Pit Grid", ProjectFolder+"/1RasterProcessing","Fill Pit Grid File(*.asc)");
    QString tempString = FillPitFileName;
    if ( FillPitFileName != NULL)
    {
        ui->lineEditFillPits->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".asc") )
        {
            tempString.append(".asc");
            FillPitFileName = tempString;
        }
        ui->lineEditFillPits->setText(FillPitFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void FillPits::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Fill Pits Processing Started ... <br>"));
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

    if( ui->lineEditDEM->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: DEM Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditDEM->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditDEM->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditDEM->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if( ui->lineEditFillPits->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Fill Pit Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditFillPits->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditFillPits->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditFillPits->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();




    if(runFlag == 1)
    {

        QString DEMFileName = ui->lineEditDEM->text();

        QString ASCFileName = DEMFileName;

        if((DEMFileName.toLower()).endsWith(".adf"))
        {
            ASCFileName.truncate(ASCFileName.length()-3);
            ASCFileName.append("asc");

            LogsString.append("Converting Arc Binary File to ASC File ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            ADFFiletoASCFile(DEMFileName, ASCFileName);
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

        LogsString.append("Running Fill Pits ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        int ErrorFill = flood( (char *)qPrintable(ASCFileName), "dummy", (char *)qPrintable(ui->lineEditFillPits->text()) );
        if( ErrorFill != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Fill Pits Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorFill)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        ProjectIOStringList << "FillPits" << ui->lineEditDEM->text() << ui->lineEditFillPits->text() << QString::number(DEMResolution);
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        if( ui->showPF_DFrame->isChecked() == 1 )
        {
            LogsString.append("Loading Data in GIS ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }

        if(ui->showPF_DFrame->isChecked() == 1)
        {
            if ( ! QDesktopServices::openUrl(QUrl("file://"+ASCFileName)) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load ASC File in GIS ... </span>")+ASCFileName+tr("<br>"));
            if ( ! QDesktopServices::openUrl(QUrl("file://"+ui->lineEditFillPits->text())) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load ASC File in GIS ... </span>")+ui->lineEditFillPits->text()+tr("<br>"));
        }

        LogsString.append(tr("<br><b>Fill Pits Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }



}

void FillPits::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW2" << "FLOWGRIDS";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void FillPits::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Fill_Pits")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
