#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "dissolvepolygons.h"
#include "ui_dissolvepolygons.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsVector/dissolve.h"


DissolvePolygons::DissolvePolygons(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DissolvePolygons)
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

    QString InpPolygonFileName, OutPolygonFileName;

    QStringList ModuleStringList;

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("CatchmentPolygon"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditInputPolygons->setText(ModuleStringList.at(2)+";");

        OutPolygonFileName = ModuleStringList.at(2);
        OutPolygonFileName.replace(".shp","_dissolve.shp");

        ui->lineEditDissolvePolygons->setText(OutPolygonFileName+";");
        OutPolygonFileName = "";
    }


    ModuleStringList = ReadModuleLine(ProjectFileName,tr("DissolvePolygons"));
    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditInputPolygons->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditDissolvePolygons->setStyleSheet("color: rgb(0, 180, 0);");

        qDebug() << "Length = " << ModuleStringList.length();
        for (int i=1; i+1<ModuleStringList.length(); i=i+2)
        {
            qDebug() << i << " " << InpPolygonFileName << " <> " << OutPolygonFileName << "\n";
            InpPolygonFileName.append(ModuleStringList.at(i)+";");
            OutPolygonFileName.append(ModuleStringList.at(i+1)+";");
        }
        ui->lineEditInputPolygons->setText(InpPolygonFileName);
        ui->lineEditDissolvePolygons->setText(OutPolygonFileName);
    }
    // ** End: Fill Form If Module Has Been Run Previously
    pushButtonSetFocus();
}

DissolvePolygons::~DissolvePolygons()
{
    delete ui;
}

void DissolvePolygons::pushButtonSetFocus()
{
    ui->pushButtonInputPolygons->setDefault(false);
    ui->pushButtonDissolvePolygons->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditInputPolygons->text() == NULL)
    {
        ui->pushButtonInputPolygons->setDefault(true);
        ui->pushButtonInputPolygons->setFocus();
        return;
    }
    if (ui->lineEditDissolvePolygons->text() == NULL)
    {
        ui->pushButtonDissolvePolygons->setDefault(true);
        ui->pushButtonDissolvePolygons->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void DissolvePolygons::on_pushButtonInputPolygons_clicked()
{
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

    QString TempString;
    QStringList InputPolygonsFileNames = QFileDialog::getOpenFileNames(this, "Choose Shape Files", ProjectFolder+tr("/.."), "Shape File(*.shp *.SHP)");
    if ( InputPolygonsFileNames.length() > 0)
    {
        ui->lineEditInputPolygons->setStyleSheet("color: black;");

        for (int i=0; i<InputPolygonsFileNames.length(); i++)
        {
            TempString.append(InputPolygonsFileNames.at(i)+";");
        }
        ui->lineEditInputPolygons->setText(TempString);


        QString DissolvePolygonsFileNames;
        for (int i=0; i<InputPolygonsFileNames.length(); i++)
        {
            TempString = InputPolygonsFileNames.at(i);
            DissolvePolygonsFileNames.append( (TempString).replace(".shp", "_dissolve.shp")+";");
        }

        ui->lineEditDissolvePolygons->setStyleSheet("color: black;");

        ui->lineEditDissolvePolygons->setText(DissolvePolygonsFileNames);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void DissolvePolygons::on_pushButtonDissolvePolygons_clicked()
{
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

    QString TempString;
    QString DissolvePolygonsFileName = QFileDialog::getSaveFileName(this, "Choose Shape Files", ProjectFolder+tr("/.."), "Shape File(*.shp *.SHP)");
    if ( DissolvePolygonsFileName != NULL )
    {
        ui->lineEditDissolvePolygons->setStyleSheet("color: black;");

        QString InputPolygonFileName = ui->lineEditInputPolygons->text();
        QStringList InputPolygonFileNameList = InputPolygonFileName.split(";");

        if ( InputPolygonFileNameList.length() > 1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Number of Files in Input and Output Does Not Match.</span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">Using Default File Names Corresponding to Input Files</span>")+tr("<br>"));

            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();

            DissolvePolygonsFileName = "";
            for (int i=0; i<InputPolygonFileNameList.length()-1; i++)
            {
                TempString = InputPolygonFileNameList.at(i);
                DissolvePolygonsFileName.append( (TempString).replace(".shp", "_dissolve.shp")+";");
            }

            ui->lineEditDissolvePolygons->setText(DissolvePolygonsFileName);
        }
        else
        {
            TempString = DissolvePolygonsFileName;
            if( ! (TempString.toLower()).endsWith(".shp") )
            {
                TempString.append(".shp");
                DissolvePolygonsFileName = TempString;
            }
            ui->lineEditDissolvePolygons->setText(DissolvePolygonsFileName);
        }

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void DissolvePolygons::on_pushButtonRun_clicked()
{
    LogsString.append(tr("Dissolve Polygons Processing Started ... <br>"));
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

    QString InputPolygonsFileName;
    QStringList InputPolygonsFileNameList;
    if( ui->lineEditInputPolygons->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Polygon Input File(s) Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        InputPolygonsFileName = ui->lineEditInputPolygons->text();
        InputPolygonsFileNameList = InputPolygonsFileName.split(";");
        for (int i=0; i<InputPolygonsFileNameList.length(); i++)
        {
            if ( InputPolygonsFileNameList.at(i) != "" )
            {
                if ( ! CheckFileAccess(InputPolygonsFileNameList.at(i), "ReadOnly") )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+InputPolygonsFileNameList.at(i)+tr("<br>"));
                    runFlag = 0;
                }
                LogsString.append(InputPolygonsFileNameList.at(i) + " ... <br>");
            }
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    QString DissolvePolygonsFileName;
    QStringList DissolvePolygonsFileNameList;
    if( ui->lineEditDissolvePolygons->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Dissolve Polygon Output File(s) Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        DissolvePolygonsFileName = ui->lineEditDissolvePolygons->text();
        DissolvePolygonsFileNameList = DissolvePolygonsFileName.split(";");
        for (int i=0; i<DissolvePolygonsFileNameList.length(); i++)
        {
            if ( DissolvePolygonsFileNameList.at(i) != "" )
            {
                if ( ! CheckFileAccess(DissolvePolygonsFileNameList.at(i), "WriteOnly") )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+DissolvePolygonsFileNameList.at(i)+tr("<br>"));
                    runFlag = 0;
                }
                LogsString.append(DissolvePolygonsFileNameList.at(i) + " ... <br>");
            }
        }
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if ( InputPolygonsFileNameList.length() != DissolvePolygonsFileNameList.length() )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Number of Files in Input/Output Did Not Match ... </span>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        runFlag = 0;
    }

    if(runFlag == 1)
    {

        ProjectIOStringList << "DissolvePolygons";

        LogsString.append("Running Dissolve Polygons ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString InpShpFileName, InpDbfFileName;
        QString OutShpFileName, OutDbfFileName;
        for (int i=0; i<InputPolygonsFileNameList.length(); i++)
        {
            if ( InputPolygonsFileNameList.at(i) != "" )
            {
                InpShpFileName = InputPolygonsFileNameList.at(i);
                InpDbfFileName = InpShpFileName;
                InpDbfFileName.replace(QString(".shp"), QString(".dbf"));

                OutShpFileName = DissolvePolygonsFileNameList.at(i);
                OutDbfFileName = InpShpFileName;
                OutDbfFileName.replace(QString(".shp"), QString(".dbf"));

                int ErrorDis = dissolve((char *)qPrintable(InpShpFileName), (char *)qPrintable(InpDbfFileName), (char *)qPrintable(OutShpFileName), (char *)qPrintable(OutDbfFileName));
                if ( ErrorDis == 1 || ErrorDis == 3 || ErrorDis == 8 )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">Warning: Skipping Non-Polygon Layer ... </span>")+InpShpFileName+tr("<br>"));
                    ui->textBrowserLogs->setHtml(LogsString);
                    ui->textBrowserLogs->repaint();
                }
                else if ( ErrorDis != 0 )
                {
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Dissolve Polygons Processing Failed ... </span>")+tr("<br>"));
                    ui->textBrowserLogs->setHtml(LogsString);
                    ui->textBrowserLogs->repaint();
                    return;
                }
                else
                {
                    LogsString.append(tr("<span><b>Dissolving ... </span>")+InpShpFileName+tr("<br>"));
                    ui->textBrowserLogs->setHtml(LogsString);
                    ui->textBrowserLogs->repaint();

                    ProjectIOStringList << InpShpFileName << OutShpFileName;

                    if( ui->checkBoxDissolvePolygons->isChecked() == 1 )
                    {
                        LogsString.append("Loading Data in GIS ... <br>");
                        ui->textBrowserLogs->setHtml(LogsString);
                        ui->textBrowserLogs->repaint();
                    }

                    if(ui->checkBoxDissolvePolygons->isChecked() == 1)
                    {
                        if ( ! QDesktopServices::openUrl(QUrl("file://"+OutShpFileName)) )
                            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load SHP File in GIS ... </span>")+OutShpFileName+tr("<br>"));
                    }
                }
            }
        }

        if ( ProjectIOStringList.length() > 2)
            WriteModuleLine(ProjectFileName, ProjectIOStringList);


        LogsString.append(tr("<br><b>Dissolve Polygons Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void DissolvePolygons::on_pushButtonClose_clicked()
{
    close();
}

void DissolvePolygons::on_pushButtonHelp_clicked()
{
    if ( ! QDesktopServices::openUrl(QUrl("http://www.pihm.psu.edu")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
}
