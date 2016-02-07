#include <QFileDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDesktopServices>
#include <QUrl>

#include "delaunaytriangulation.h"
#include "ui_delaunaytriangulation.h"

#include "0LibsIO/IOProjectFile.h"
#include "0LibsOther/triangle_shewchuk.h"


DelaunayTriangulation::DelaunayTriangulation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelaunayTriangulation)
{
    ui->setupUi(this);

    ui->lineEditAngle->blockSignals(true);
    ui->lineEditArea->blockSignals(true);
    ui->lineEditOthers->blockSignals(true);

    ui->checkBoxAngle->setChecked(false);
    ui->checkBoxArea->setChecked(false);
    ui->checkBoxOthers->setChecked(false);

    ui->lineEditAngle->setDisabled(true);
    ui->lineEditArea->setDisabled(true);
    ui->lineEditOthers->setDisabled(true);

    ui->lineEditAngle->setValidator(new QIntValidator(1,34,this));
    ui->lineEditArea->setValidator(new QIntValidator(1,999999999,this));

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

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("ReadTopology"));
    if ( ModuleStringList.length() > 0  )
    {
        ui->lineEditPSLG->setText(ModuleStringList.at(2));
    }


    ModuleStringList = ReadModuleLine(ProjectFileName,tr("DelaunayTriangulation"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditPSLG->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditAngle->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditArea->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditOthers->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditPSLG->setText(ModuleStringList.at(1));

        if( ModuleStringList.at(2) != "" )
        {
            ui->checkBoxAngle->setChecked(true);
            ui->lineEditAngle->setText(ModuleStringList.at(2));
        }
        if( ModuleStringList.at(3) != "" )
        {
            ui->checkBoxArea->setChecked(true);
            ui->lineEditArea->setText(ModuleStringList.at(3));
        }
        if( ModuleStringList.at(4) != "" )
        {
            ui->checkBoxOthers->setChecked(true);
            ui->lineEditOthers->setText(ModuleStringList.at(4));
        }
    }

    ui->lineEditAngle->blockSignals(false);
    ui->lineEditArea->blockSignals(false);
    ui->lineEditOthers->blockSignals(false);

    // ** End: Fill Form If Module Has Been Run Previously
    pushButtonSetFocus();
}

DelaunayTriangulation::~DelaunayTriangulation()
{
    delete ui;
}

void DelaunayTriangulation::pushButtonSetFocus()
{
    ui->pushButtonPSLG->setDefault(false);
    ui->pushButtonRun->setDefault(false);

    if (ui->lineEditPSLG->text() == NULL)
    {
        ui->pushButtonPSLG->setDefault(true);
        ui->pushButtonPSLG->setFocus();
        return;
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void DelaunayTriangulation::on_pushButtonPSLG_clicked()
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

    QString PSLGFileName = QFileDialog::getOpenFileName(this, "PSLG (.poly) File", ProjectFolder+tr("/3DomainDecomposition"), "PSLG File(*.poly *.POLY)");
    if ( PSLGFileName != NULL)
    {
        ui->lineEditPSLG->setStyleSheet("color: black;");
        ui->lineEditPSLG->setText(PSLGFileName);

        pushButtonSetFocus();
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}

void DelaunayTriangulation::on_checkBoxAngle_toggled(bool checked)
{
    if ( checked )
        ui->lineEditAngle->setDisabled(false);
    else
        ui->lineEditAngle->setDisabled(true);
}

void DelaunayTriangulation::on_checkBoxArea_toggled(bool checked)
{
    if ( checked )
        ui->lineEditArea->setDisabled(false);
    else
        ui->lineEditArea->setDisabled(true);
}

void DelaunayTriangulation::on_checkBoxOthers_toggled(bool checked)
{
    if ( checked )
        ui->lineEditOthers->setDisabled(false);
    else
        ui->lineEditOthers->setDisabled(true);
}

void DelaunayTriangulation::on_lineEditAngle_textChanged(const QString &arg1)
{
    ui->lineEditAngle->setStyleSheet("color: rgb(0, 0, 0);");
}

void DelaunayTriangulation::on_lineEditArea_textChanged(const QString &arg1)
{
    ui->lineEditArea->setStyleSheet("color: rgb(0, 0, 0);");
}

void DelaunayTriangulation::on_lineEditOthers_textChanged(const QString &arg1)
{
    ui->lineEditOthers->setStyleSheet("color: rgb(0, 0, 0);");
}

void DelaunayTriangulation::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Delaunay Triangulation Processing Started ... <br>"));
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

    if( ui->lineEditPSLG->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Planar Straight Line Graph (PSLG) Input File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        if ( ! CheckFileAccess(ui->lineEditPSLG->text(), "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+ui->lineEditPSLG->text()+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(ui->lineEditPSLG->text() + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( 0 )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: PSLG Output File Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        QString TempFileName = ui->lineEditPSLG->text();
        TempFileName.replace( QString(".poly"), QString(".1.poly") );
        if ( ! CheckFileAccess(TempFileName, "WriteOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Write Access ... </span>")+TempFileName+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(TempFileName + " ... <br>");
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();


    if( ui->checkBoxAngle->isChecked() && ui->lineEditAngle->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Missing Angle Quality Constraint ... </span>")+tr("<br>"));
        runFlag = 0;
    }

    if( ui->checkBoxArea->isChecked() && ui->lineEditArea->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Missing Area Quality Constraint ... </span>")+tr("<br>"));
        runFlag = 0;
    }

    if( ui->checkBoxOthers->isChecked() && ui->lineEditOthers->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Missing Other Options ... </span>")+tr("<br>"));
        runFlag = 0;
    }

    if(runFlag == 1)
    {

        LogsString.append("Running Delaunay Triangulation ... <br>");
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        QString ExecString, OptsString, NameString;
        ExecString = "TRIANGLE";
        OptsString = "-nV";

        if( ui->checkBoxAngle->isChecked() )
            OptsString.append(tr("q")+ui->lineEditAngle->text());
        if( ui->checkBoxArea->isChecked() )
            OptsString.append(tr("a")+ui->lineEditArea->text());
        if( ui->checkBoxOthers->isChecked() )
            OptsString.append(ui->lineEditOthers->text());

        NameString = ui->lineEditPSLG->text();

        int my_argc = 3;
        char **my_argv;
        my_argv = (char **) malloc( 3 * sizeof (char *) );

        my_argv[0] = (char *) malloc( ( 1+ExecString.length() ) * sizeof (char) );
        my_argv[1] = (char *) malloc( ( 1+OptsString.length() ) * sizeof (char) );
        my_argv[2] = (char *) malloc( ( 1+NameString.length() ) * sizeof (char) );

        //my_argv[0] = (char *)qPrintable(ExecString);
        //my_argv[1] = (char *)qPrintable(OptsString);
        //my_argv[2] = (char *)qPrintable(NameString);

        sprintf(my_argv[0],"%s",qPrintable(ExecString));
        sprintf(my_argv[1],"%s",qPrintable(OptsString));
        sprintf(my_argv[2],"%s",qPrintable(NameString));

        qDebug() << "my_argv0 = " << my_argv[0];
        qDebug() << "my_argv1 = " << my_argv[1];
        qDebug() << "my_argv2 = " << my_argv[2];

        int ErrorTri = TRIANGLE(my_argc, my_argv);
        if( ErrorTri != 0 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Delaunay Triangulation Processing Failed ... </span>")+tr("<br>"));
            LogsString.append(tr("<span style=\"color:#FF0000\">RETURN CODE: ... </span>")+QString::number(ErrorTri)+tr("<br>"));
            ui->textBrowserLogs->setHtml(LogsString);
            ui->textBrowserLogs->repaint();
            return;
        }


        ProjectIOStringList << "DelaunayTriangulation" << ui->lineEditPSLG->text();
        if( ui->checkBoxAngle->isChecked() )
            ProjectIOStringList << ui->lineEditAngle->text();
        else
            ProjectIOStringList << "";
        if( ui->checkBoxArea->isChecked() )
            ProjectIOStringList << ui->lineEditArea->text();
        else
            ProjectIOStringList << "";
        if( ui->checkBoxOthers->isChecked() )
            ProjectIOStringList << ui->lineEditOthers->text();
        else
            ProjectIOStringList << "";
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        // *** READ THE NUMBER OF TRIANGLES FROM .1.ELE FILE AND PRINT ON THE LOG
        int NumTINs;
        QString EleFileName;
        EleFileName = ui->lineEditPSLG->text();
        EleFileName.replace(QString(".poly"), QString(".1.ele"));
        QFile EleFile(EleFileName);
        EleFile.open(QIODevice::ReadOnly | QIODevice::Text);

        QTextStream EleFileTextStream(&EleFile);
        EleFileTextStream >> NumTINs;
        EleFile.close();
        LogsString.append(tr("<br><b>Total Number of Triangular Elements: ")+QString::number(NumTINs)+tr("</b><br>"));


        LogsString.append(tr("<br><b>Delaunay Triangulation Processing Completed.</b>")+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();

        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();
    }
}

void DelaunayTriangulation::on_pushButtonClose_clicked()
{
    QStringList default_params; default_params << "WORKFLOW4" << "TINSHP";
    QMetaObject::invokeMethod(parent(),"set_defaults",Q_ARG(QStringList,default_params));
    close();
}

void DelaunayTriangulation::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Triangulation")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
