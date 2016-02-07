#include "runnalldomain.h"
#include "ui_runnalldomain.h"
#include <QtGui>

#include "../../pihmLIBS/generatePolyFile.h"
#include "../RunTriangle/triangle.h"
#include "../../pihmLIBS/createTinShapeFile.h"

#include "../../pihmLIBS/fileStruct.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

//QString projDir = "/Users/bhattgopal/Documents";

RunnAllDomain::RunnAllDomain(QWidget *parent)
    : QDialog(parent), ui(new Ui::RunnAllDomain)
{
    ui->setupUi(this);
    ui->lineEditAngle->hide();
    ui->lineEditArea->hide();
    ui->lineEditOthers->hide();
}

RunnAllDomain::~RunnAllDomain()
{
    delete ui;
}

void RunnAllDomain::on_pushButtonConstrain_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    //tout<<ui->lineEditFolder->text()<<"\n";
    //tout<<ui->lineEditFile->text()<<"\n";

    QString s = QFileDialog::getOpenFileName(this, "Choose Constrain Shape File File", projDir, "Shape (*.shp *.SHP)");
    ui->lineEditConstrain->setText(s);

    QString mesh=projDir+"/DomainDecomposition/mesh.shp";
    ui->lineEditMesh->setText(mesh);
}

void RunnAllDomain::on_pushButtonMesh_clicked()
{
    QString projDir, projFile;
    QFile tFile(QDir::homePath()+"/project.txt");
    tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
    cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Save Mesh File to...", projDir, "Shape file (*.shp)");
    if(!s.endsWith(".shp"))
        s.append(".shp");
    ui->lineEditMesh->setText(s);
}

void RunnAllDomain::on_pushButtonRun_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    //TODO
    //QString cmd = "cd "+projDir+";"+"mkdir DomainDecomposition";
    //system(qPrintable(cmd));
    QString polyStr = ui->lineEditConstrain->text();
    cout<<"here: "<<qPrintable(polyStr)<<"\n";
    polyStr=polyStr.right(polyStr.length()-polyStr.lastIndexOf("/",-1));
    polyStr.truncate(polyStr.length()-4);
    cout<<"here: >"<<qPrintable(polyStr)<<"<\n";
    QString polyFile = projDir+"/DomainDecomposition/"+polyStr+".poly";
	QDir dir = QDir::home();
        QString home = dir.homePath();
        QString logFileName(qPrintable(home+"/log.html"));
    generatePolyFile(qPrintable(ui->lineEditConstrain->text()), qPrintable(polyFile), qPrintable(logFileName));

	writeLineNumber(qPrintable(projFile), 40, qPrintable(ui->lineEditConstrain->text()));
	writeLineNumber(qPrintable(projFile), 41, qPrintable(polyFile));

    QString exeString;  exeString = "triangle";
    QString optString;  optString = "-nV";
    QString fileString; fileString= polyFile;
    if(ui->checkBoxAngle->isChecked()){optString.append("q"); optString.append(ui->lineEditAngle->text());}
    if(ui->checkBoxArea->isChecked()){optString.append("a"); optString.append(ui->lineEditArea->text());}
    if(ui->checkBoxOthers->isChecked()){optString.append(ui->lineEditOthers->text());}
    int arg1=0;
    char **arg2;
    arg2 = (char **)malloc(3 * sizeof (char *));
    for(int ii=0; ii<3; ii++)
        arg2[ii]=(char *)malloc(1000*sizeof(char));
    arg2[0]=(char *)qPrintable(exeString);
    arg1++;
    if(optString.length()!=0){
        arg2[1]=(char *)qPrintable(optString);
        arg1++;
        arg2[2]=(char *)qPrintable(fileString);
        arg1++;
    }
    else{
        arg2[1]=(char *)qPrintable(fileString);
        arg1++;
    }
    ShewchukTRIANGLE(arg1, arg2);

	writeLineNumber(qPrintable(projFile), 42, qPrintable(polyFile));
        writeLineNumber(qPrintable(projFile), 43, qPrintable(ui->lineEditAngle->text()));
        writeLineNumber(qPrintable(projFile), 44, qPrintable(ui->lineEditArea->text()));
        writeLineNumber(qPrintable(projFile), 45, qPrintable(ui->lineEditOthers->text()));

    QString eleFile;  eleFile  = projDir+"/DomainDecomposition/"+polyStr+".1.ele";
    QString nodeFile; nodeFile = projDir+"/DomainDecomposition/"+polyStr+".1.node";
    QString meshFileShp; meshFileShp = ui->lineEditMesh->text();
    QString meshFileDbf; meshFileDbf = meshFileShp;
    meshFileDbf.truncate(meshFileDbf.length()-3);
    meshFileDbf.append("dbf");
    createTinShapeFile(qPrintable(eleFile), qPrintable(nodeFile), qPrintable(meshFileShp), qPrintable(meshFileDbf), qPrintable(logFileName));

	writeLineNumber(qPrintable(projFile), 46, qPrintable(eleFile));
        writeLineNumber(qPrintable(projFile), 47, qPrintable(nodeFile));
        writeLineNumber(qPrintable(projFile), 48, qPrintable(meshFileShp));
}

void RunnAllDomain::on_pushButtonClose_clicked()
{
    close();
}

void RunnAllDomain::on_pushButtonHelp_clicked()
{
    helpDialog* hlpDlg = new helpDialog(this, "Run All DomainDecomposition", 1, "helpFiles/runalldomain.html", "Help :: Run All Domain Decomposition");
            hlpDlg->show();
}
