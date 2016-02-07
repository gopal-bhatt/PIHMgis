#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "dissolvepolygons.h"
#include "ui_dissolvepolygons.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsVector/dissolve.h"
#include "0LibsVector/dissolve_ogr.h"


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

    QTableWidgetItem *NewTableItem;

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("CatchmentRasterVector"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());

        NewTableItem = new QTableWidgetItem(ModuleStringList.at(2));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,NewTableItem);

        OutPolygonFileName = ModuleStringList.at(2);
        OutPolygonFileName.replace(".shp","_dis.shp");

        NewTableItem = new QTableWidgetItem(OutPolygonFileName);
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,NewTableItem);

        OutPolygonFileName = "";
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("DissolvePolygons"));
    if ( ModuleStringList.length() > 0 )
    {
        //ui->tableWidget->clear();
        while( ui->tableWidget->rowCount() )
            ui->tableWidget->removeRow( ui->tableWidget->rowCount()-1 );
        ui->tableWidget->setRowCount(0);
        //ui->tableWidget->setStyleSheet("color: rgb(0, 180, 0);");

        qDebug() << "Length = " << ModuleStringList.length();
        for (int i=1; i+1<ModuleStringList.length(); i=i+2)
        {
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());

            NewTableItem = new QTableWidgetItem(ModuleStringList.at(i));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,NewTableItem);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextColor(QColor(0, 180, 0));
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignRight);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignVCenter);

            NewTableItem = new QTableWidgetItem(ModuleStringList.at(i+1));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,NewTableItem);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,1)->setTextColor(QColor(0, 180, 0));
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,1)->setTextAlignment(Qt::AlignRight);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,1)->setTextAlignment(Qt::AlignVCenter);

            //qDebug() << i << " " << InpPolygonFileName << " <> " << OutPolygonFileName << "\n";
        }

    }

    pushButtonSetFocus();

}

DissolvePolygons::~DissolvePolygons()
{
    delete ui;
}

void DissolvePolygons::pushButtonSetFocus()
{
    ui->pushButtonAdd->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if ( ui->tableWidget->rowCount() == 0 )
    {
        ui->pushButtonAdd->setDefault(true);
        ui->pushButtonAdd->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}


void DissolvePolygons::on_pushButtonAdd_clicked()
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

    QTableWidgetItem *NewTableItem;
    QString TempString;
    QStringList InputPolygonsFileNames = QFileDialog::getOpenFileNames(this, "Choose Shape Files", ProjectFolder+tr("/2VectorProcessing"), "Shape File(*.shp *.SHP)");
    if ( InputPolygonsFileNames.length() > 0)
    {
        //ui->lineEditInputPolygons->setStyleSheet("color: black;");

        for (int i=0; i<InputPolygonsFileNames.length(); i++)
        {
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());

            TempString = InputPolygonsFileNames.at(i);

            NewTableItem = new QTableWidgetItem(TempString);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,NewTableItem);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextColor(QColor(0,0,0));
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignRight);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignVCenter);

            NewTableItem = new QTableWidgetItem(TempString.replace(".shp","_dis.shp"));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,NewTableItem);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,1)->setTextColor(QColor(0,0,0));
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,1)->setTextAlignment(Qt::AlignRight);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,1)->setTextAlignment(Qt::AlignVCenter);
        }

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void DissolvePolygons::on_pushButtonRemove_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());

    qDebug() << "Row Count = " << ui->tableWidget->rowCount();

    pushButtonSetFocus();
}

void DissolvePolygons::on_pushButtonClear_clicked()
{
    while( ui->tableWidget->rowCount() )
        ui->tableWidget->removeRow( ui->tableWidget->rowCount()-1 );
    //ui->tableWidget->setRowCount(0);
    qDebug() << "Row Count = " << ui->tableWidget->rowCount();

    pushButtonSetFocus();
}


void DissolvePolygons::on_pushButtonRun_clicked()
{
    LogsString = tr("");
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
    if( ui->tableWidget->rowCount() == 0 )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Polygon Input File(s) Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        for (int i=0; i<ui->tableWidget->rowCount(); i++)
        {
            if ( ! CheckFileAccess(ui->tableWidget->item(i,0)->text(), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->tableWidget->item(i,0)->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->tableWidget->item(i,0)->text() + " ... <br>");

            if ( ! CheckFileAccess(ui->tableWidget->item(i,1)->text(), "WriteOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->tableWidget->item(i,1)->text()+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(ui->tableWidget->item(i,1)->text() + " ... <br>");
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();



    if(runFlag == 1)
    {

        ProjectIOStringList << "DissolvePolygons";

        LogsString.append("Running Dissolve Polygons ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString InpShpFileName, InpDbfFileName;
        QString OutShpFileName, OutDbfFileName, OutShxFileName;

        for (int i=0; i<ui->tableWidget->rowCount(); i++)
        {
            InpShpFileName = ui->tableWidget->item(i,0)->text();
            InpDbfFileName = InpShpFileName;
            InpDbfFileName.replace(QString(".shp"), QString(".dbf"));

            OutShpFileName = ui->tableWidget->item(i,1)->text();
            OutDbfFileName = OutShpFileName;
            OutDbfFileName.replace(QString(".shp"), QString(".dbf"));
            OutShxFileName = OutShpFileName;
            OutShxFileName.replace(QString(".shp"), QString(".shx"));

            qDebug() << InpShpFileName << " # " << InpDbfFileName;
            qDebug() << OutShpFileName << " # " << OutDbfFileName;

            // *** DISSOLVE METHOD 1 : START
            //int ErrorDis = dissolve((char *)qPrintable(InpShpFileName), (char *)qPrintable(InpDbfFileName), (char *)qPrintable(OutShpFileName), (char *)qPrintable(OutDbfFileName));
            // *** DISSOLVE METHOD 1 : FINISH

            // *** DISSOLVE METHOD 2 : START
            int my_argc = 5;
            char **my_argv;
            my_argv = (char ** ) malloc(my_argc*sizeof(char *));
            for ( int j=0; j<my_argc; j++ )
            {
                my_argv[j] = (char *) malloc(100*sizeof(char));
            }

            sprintf(my_argv[0],"%s",qPrintable("dummy") );
            sprintf(my_argv[1],"%s",qPrintable("-a") );
            sprintf(my_argv[2],"%s",qPrintable("Watershed") );
            sprintf(my_argv[3],"%s",qPrintable(InpShpFileName) );
            sprintf(my_argv[4],"%s",qPrintable(QDir::homePath()+"/.PIHMgis") );

            //strcpy( my_argv[0], "dummy" );
            //strcpy( my_argv[1], qPrintable(InpShpFileName) );
            //strcpy( my_argv[2], qPrintable(OutShpFileName) );

            qDebug() << "my_argv";
            qDebug() <<  my_argv[0] << my_argv[1] << my_argv[2] << my_argv[3] << my_argv[4];

            QFile::remove( QDir::homePath()+"/.PIHMgis/new_layer.shp" );
            QFile::remove( QDir::homePath()+"/.PIHMgis/new_layer.shx" );
            QFile::remove( QDir::homePath()+"/.PIHMgis/new_layer.dbf" );

            int ErrorDis = dissolve_ogr(my_argc, my_argv);

            QFile::remove( OutShpFileName );
            QFile::remove( OutShxFileName );
            QFile::remove( OutDbfFileName );

            QFile::copy( QDir::homePath()+"/.PIHMgis/new_layer.shp", OutShpFileName );
            QFile::copy( QDir::homePath()+"/.PIHMgis/new_layer.shx", OutShxFileName );
            QFile::copy( QDir::homePath()+"/.PIHMgis/new_layer.dbf", OutDbfFileName );

            // *** DISSOLVE METHOD 2 : FINISH

            if ( ErrorDis == 1 || ErrorDis == 3 || ErrorDis == 8 )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">Warning: Skipping Non-Polygon Layer ... </span>")+InpShpFileName+tr("<br>"));
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
            }
            else if ( ErrorDis != 0 )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Dissolve Polygons Processing Failed ... </span>")+tr("<br>"));
                LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorDis)+tr("<br>"));
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

        if ( ProjectIOStringList.length() > 2)
            WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();


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
    QStringList default_params; default_params << "WORKFLOW3" << "POLYGON";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void DissolvePolygons::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Dissolve_Polygon")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}


