#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "mergevectorlayers.h"
#include "ui_mergevectorlayers.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsVector/merge_lines.h"

#include <stdio.h>

MergeVectorLayers::MergeVectorLayers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MergeVectorLayers)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnWidth(0,432);

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

    QString InpPolygonFileName, OutPolylineFileName;

    QStringList ModuleStringList;

    QTableWidgetItem *NewTableItem;

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("PolylineToLines"));
    if ( ModuleStringList.length() > 0  )
    {
        for (int i=1; i+1<ModuleStringList.length(); i=i+2)
        {
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());

            NewTableItem = new QTableWidgetItem(ModuleStringList.at(i+1));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,NewTableItem);
        }
    }

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MergeVectorLayers"));
    if ( ModuleStringList.length() > 0 )
    {
        //ui->tableWidget->clear();
        while( ui->tableWidget->rowCount() )
            ui->tableWidget->removeRow( ui->tableWidget->rowCount()-1 );
        ui->tableWidget->setRowCount(0);
        //ui->tableWidget->setStyleSheet("color: rgb(0, 180, 0);");

        qDebug() << "Length = " << ModuleStringList.length();
        for (int i=1; i<ModuleStringList.length()-2; i++)
        {
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());

            NewTableItem = new QTableWidgetItem(ModuleStringList.at(i));
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,NewTableItem);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextColor(QColor(0, 180, 0));
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignRight);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignVCenter);

            //qDebug() << i << " " << InpPolygonFileName << " <> " << OutPolygonFileName << "\n";
        }

    }

    int ID = 0;
    QString ID_String;
    //ID_String = QString("000");
    ID_String = QString("%1").arg(QString::number(ID),3,'0');
    while ( QFile::exists(ProjectFolder+"/2VectorProcessing/MergeVectorLayer"+ID_String+".shp") )
    {
        ID ++;
        ID_String = QString("%1").arg(QString::number(ID),3,'0');
    }
    ui->lineEditMergeLayer->setText(ProjectFolder+"/2VectorProcessing/MergeVectorLayer"+ID_String+".shp");

    pushButtonSetFocus();
}

MergeVectorLayers::~MergeVectorLayers()
{
    delete ui;
}

void MergeVectorLayers::pushButtonSetFocus()
{
    ui->pushButtonAdd->setDefault(false);
    ui->pushButtonMergeLayer->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if ( ui->tableWidget->rowCount() == 0 )
    {
        ui->pushButtonAdd->setDefault(true);
        ui->pushButtonAdd->setFocus();
        return;
    }

    if ( ui->lineEditMergeLayer->text() == "" )
    {
        ui->pushButtonMergeLayer->setDefault(true);
        ui->pushButtonMergeLayer->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void MergeVectorLayers::on_pushButtonAdd_clicked()
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
    QStringList InputLinesFileNames = QFileDialog::getOpenFileNames(this, "Choose Shape Files", ProjectFolder+tr("/2VectorProcessing"), "Shape File(*.shp *.SHP)");
    if ( InputLinesFileNames.length() > 0)
    {
        //ui->lineEditInputPolygons->setStyleSheet("color: black;");

        for (int i=0; i<InputLinesFileNames.length(); i++)
        {
            ui->tableWidget->insertRow(ui->tableWidget->rowCount());

            TempString = InputLinesFileNames.at(i);

            NewTableItem = new QTableWidgetItem(TempString);
            ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,NewTableItem);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextColor(QColor(0,0,0));
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignRight);
            ui->tableWidget->item(ui->tableWidget->rowCount()-1,0)->setTextAlignment(Qt::AlignVCenter);
        }

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void MergeVectorLayers::on_pushButtonRemove_clicked()
{
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());

    qDebug() << "Row Count = " << ui->tableWidget->rowCount();

    pushButtonSetFocus();
}

void MergeVectorLayers::on_pushButtonClear_clicked()
{
    while( ui->tableWidget->rowCount() )
        ui->tableWidget->removeRow( ui->tableWidget->rowCount()-1 );
    //ui->tableWidget->setRowCount(0);
    qDebug() << "Row Count = " << ui->tableWidget->rowCount();

    pushButtonSetFocus();
}

void MergeVectorLayers::on_pushButtonMergeLayer_clicked()
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

    QString MergeVectorFileName = QFileDialog::getSaveFileName(this, "Choose Merge Layer", ProjectFolder+"/2VectorProcessing","Merge Vector File(*.shp)");
    QString tempString = MergeVectorFileName;
    if ( MergeVectorFileName != NULL)
    {
        ui->lineEditMergeLayer->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".shp") )
        {
            tempString.append(".shp");
            MergeVectorFileName = tempString;
        }
        ui->lineEditMergeLayer->setText(MergeVectorFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void MergeVectorLayers::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Merge Vector Split Lines Processing Started ... <br>"));
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

    if( ui->tableWidget->rowCount() == 0 )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Split Line Input File(s) Missing </span>")+tr("<br>"));
        pushButtonSetFocus();
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
        }

        if ( ! CheckFileAccess(ui->lineEditMergeLayer->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditMergeLayer->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditMergeLayer->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();



    if(runFlag == 1)
    {

        ProjectIOStringList << "MergeVectorLayers";

        LogsString.append("Running Merge Vector Split Lines ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString InpShpFileName, InpDbfFileName;
        QString OutShpFileName, OutDbfFileName;

        OutShpFileName = ui->lineEditMergeLayer->text();
        OutDbfFileName = OutShpFileName;
        OutDbfFileName.replace(QString(".shp"), QString(".dbf"));

        qDebug() << "OutFileName: " << OutShpFileName << " # " << OutDbfFileName;


        const char **shpFileNamesChar = new const char*[ui->tableWidget->rowCount()];
        const char **dbfFileNamesChar = new const char*[ui->tableWidget->rowCount()];

        for (int i=0; i<ui->tableWidget->rowCount(); i++)
        {
            InpShpFileName = ui->tableWidget->item(i,0)->text();
            InpDbfFileName = InpShpFileName;
            InpDbfFileName.replace(QString(".shp"), QString(".dbf"));

            qDebug() << InpShpFileName << " # " << InpDbfFileName;

            shpFileNamesChar[i] = new char[InpShpFileName.length()+1];
            dbfFileNamesChar[i] = new char[InpDbfFileName.length()+1];

            sprintf( (char *)shpFileNamesChar[i],"%s", qPrintable(InpShpFileName) );
            sprintf( (char *)dbfFileNamesChar[i],"%s", qPrintable(InpDbfFileName) );

            qDebug () << shpFileNamesChar[i];

            ProjectIOStringList << InpShpFileName;
        }

        ProjectIOStringList << OutShpFileName;

        int ErrorMrg = merge_lines( shpFileNamesChar, dbfFileNamesChar, ui->tableWidget->rowCount(), (char *)qPrintable(OutShpFileName), (char *)qPrintable(OutDbfFileName) );
        if ( ErrorMrg == 1 || ErrorMrg == 5 || ErrorMrg == 8 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">Warning: Non-Arc Layer ... </span>")+InpShpFileName+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }
        else if ( ErrorMrg != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Merge Vector Split Lines Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorMrg)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }
        else
        {
            if ( ProjectIOStringList.length() > 2)
                WriteModuleLine(ProjectFileName, ProjectIOStringList);
            ProjectIOStringList.clear();

            QString MergeFileNameInVector = ui->lineEditMergeLayer->text();
            QString MergeFileNameInDomainDecomposition = MergeFileNameInVector;
            MergeFileNameInDomainDecomposition.replace("2VectorProcessing","3DomainDecomposition");

            ProjectIOStringList << "MergeVectorDomainDecomposition" << MergeFileNameInVector << MergeFileNameInDomainDecomposition;
            WriteModuleLine(ProjectFileName, ProjectIOStringList);
            ProjectIOStringList.clear();

            QFile::remove(MergeFileNameInDomainDecomposition);
            QFile::copy(MergeFileNameInVector,MergeFileNameInDomainDecomposition);

            MergeFileNameInVector.replace(".shp",".shx");
            MergeFileNameInDomainDecomposition.replace(".shp",".shx");
            QFile::remove(MergeFileNameInDomainDecomposition);
            QFile::copy(MergeFileNameInVector,MergeFileNameInDomainDecomposition);

            MergeFileNameInVector.replace(".shx",".dbf");
            MergeFileNameInDomainDecomposition.replace(".shx",".dbf");
            QFile::remove(MergeFileNameInDomainDecomposition);
            QFile::copy(MergeFileNameInVector,MergeFileNameInDomainDecomposition);

            MergeFileNameInDomainDecomposition.replace(".dbf",".shp");

            if( ui->checkBoxMergeLayer->isChecked() == 1 )
            {
                LogsString.append("Loading Data in GIS ... <br>");
                ui->textBrowserLogs->setHtml(LogsString);
                ui->textBrowserLogs->repaint();
            }

            if(ui->checkBoxMergeLayer->isChecked() == 1)
            {
                if ( ! QDesktopServices::openUrl(QUrl("file://"+MergeFileNameInDomainDecomposition)) )
                    LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load SHP File in GIS ... </span>")+OutShpFileName+tr("<br>"));
            }
        }


        LogsString.append(tr("<br><b>Merge Vector Split Lines Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void MergeVectorLayers::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW4" << "WORKFLOW8";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void MergeVectorLayers::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Merge_Vector_Layers")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
