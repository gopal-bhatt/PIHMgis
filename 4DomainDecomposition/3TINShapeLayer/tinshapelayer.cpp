#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "tinshapelayer.h"
#include "ui_tinshapelayer.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsVector/tin_shape.h"


TINShapeLayer::TINShapeLayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TINShapeLayer)
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
    QString TempFileName;

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("DelaunayTriangulation"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(1);
        TempFileName.replace( QString(".poly"), QString(".1.ele") );
        ui->lineEditElementFile->setText( TempFileName );

        TempFileName.replace( QString(".1.ele"), QString(".1.node") );
        ui->lineEditNodeFile->setText( TempFileName );
    }

    TempFileName.replace( QString(".1.node"), QString("") );

    if ( ModuleStringList.at(2) != "" )
        TempFileName.append( QString("_q") + ModuleStringList.at(2) );

    if ( ModuleStringList.at(3) != "" )
        TempFileName.append( QString("_a") + ModuleStringList.at(3) );

    TempFileName.append(".shp");
    ui->lineEditTINFile->setText(TempFileName);


    ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditElementFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditNodeFile->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditTINFile->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditElementFile->setText(ModuleStringList.at(1));
        ui->lineEditNodeFile->setText(ModuleStringList.at(2));
        ui->lineEditTINFile->setText(ModuleStringList.at(3));
    }

    // ** End: Fill Form If Module Has Been Run Previously
    pushButtonSetFocus();
}

TINShapeLayer::~TINShapeLayer()
{
    delete ui;
}

void TINShapeLayer::pushButtonSetFocus()
{
    ui->pushButtonElementFile->setDefault(false);
    ui->pushButtonNodeFile->setDefault(false);
    ui->pushButtonTINFile->setDefault(false);
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

    if (ui->lineEditTINFile->text() == NULL)
    {
        ui->pushButtonTINFile->setDefault(true);
        ui->pushButtonTINFile->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void TINShapeLayer::on_pushButtonElementFile_clicked()
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

void TINShapeLayer::on_pushButtonNodeFile_clicked()
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

void TINShapeLayer::on_pushButtonTINFile_clicked()
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

    QString TINShapeFileName = QFileDialog::getSaveFileName(this, "Choose TIN Shape File Name", ProjectFolder+"/3DomainDecomposition","Shape File(*.shp)");
    QString tempString = TINShapeFileName;
    if ( TINShapeFileName != NULL)
    {
        ui->lineEditTINFile->setStyleSheet("color: black;");

        if( ! (tempString.toLower()).endsWith(".shp") )
        {
            tempString.append(".shp");
            TINShapeFileName = tempString;
        }
        ui->lineEditTINFile->setText(TINShapeFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void TINShapeLayer::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("TIN Shape Layer Processing Started ... <br>"));
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


    if( ui->lineEditTINFile->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: TIN Shape Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditTINFile->text(), "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+ui->lineEditTINFile->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditTINFile->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();



    if(runFlag == 1)
    {

        LogsString.append("Running TIN Shape Layer ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString TINShpFileName, TINDbfFileName;
        TINShpFileName = ui->lineEditTINFile->text();
        TINDbfFileName = TINShpFileName;
        TINDbfFileName.replace( QString(".shp"), QString(".dbf") );

        int ErrorTIN = tin_shape((char *)qPrintable(ui->lineEditElementFile->text()), (char *)qPrintable(ui->lineEditNodeFile->text()), (char *)qPrintable(TINShpFileName), (char *)qPrintable(TINDbfFileName), &LogsString);
        if( ErrorTIN != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: TIN Shape Layer Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorTIN)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }

        ProjectIOStringList << "TINShapeLayer" << ui->lineEditElementFile->text() << ui->lineEditNodeFile->text() << ui->lineEditTINFile->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        if( ui->checkBoxTINFile->isChecked() == 1 )
        {
            LogsString.append("Loading Data in GIS ... <br>");
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
        }

        if(ui->checkBoxTINFile->isChecked() == 1)
        {
            if ( ! QDesktopServices::openUrl(QUrl("file://"+TINShpFileName)) )
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load SHP File in GIS ... </span>")+TINShpFileName+tr("<br>"));
        }


        LogsString.append(tr("<br><b>TIN Shape Layer Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void TINShapeLayer::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW5" << "WORKFLOW8";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void TINShapeLayer::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#TIN_Shape_Layer")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
