#include <QtGui>
#include "defineproject.h"
#include "ui_defineproject.h"
#include <iostream>

#include "../../pihmLIBS/helpDialog/helpdialog.h"

using namespace std;

DefineProject::DefineProject(QWidget *parent)
    : QDialog(parent), ui(new Ui::DefineProject)
{
    ui->setupUi(this);
}

DefineProject::~DefineProject()
{
    delete ui;
}
QString dateStamp;
void DefineProject::on_pushButtonFile_clicked()
{
    //QString str = QFileDialog::getSaveFolderName(this, "Save Project File", "~/", "Project File (*.pihmgis)");
    QString str = QFileDialog::getExistingDirectory(this, "Project Home Folder", "~/", 0);
    /*if(!(str.toLower()).endsWith(".pihmgis")){
        str.append(".pihmgis");
    }*/
    ui->lineEditFile->setText(str);
        QDateTime time;
        QString  month, dd, yyyy, hh, mm, folder;
        dateStamp=time.currentDateTime().toString(); cout<<"System Time#= "<<qPrintable(dateStamp)<<"\n";
        month=dateStamp.mid(4,3);
        dd   =dateStamp.mid(8,2);
	if(dd.toInt() > 9){
        	yyyy =dateStamp.mid(20,4); 
        	hh   =dateStamp.mid(11,2);
        	mm   =dateStamp.mid(14,2);
	}
	else{
		dd="0"+QString::number(dd.toInt(), 10);
		yyyy =dateStamp.mid(19,4);
                hh   =dateStamp.mid(10,2);
                mm   =dateStamp.mid(13,2);
	}
        folder=month+dd+yyyy+hh+mm;
        //out<<folder<<"\n";
    ui->lineEditFolder->setText(str+"/"+folder);
    ui->lineEditFile2->setText(str+"/"+folder+"/"+folder+".pihmgis");
    //ui->lineEditFolder->setText(str.left(str.lastIndexOf("/",-1)+1));//polyStr.right(polyStr.length()-polyStr.lastIndexOf("/",-1));
}

void DefineProject::on_pushButtonClose_clicked()
{
    close();
}

void DefineProject::on_pushButtonHelp_clicked()
{
            helpDialog* hlpDlg = new helpDialog(this, "New Project", 1, "helpFiles/newproject.html", "Help :: New Project");
            hlpDlg->show();
}

/* This is a very elementary implementation of Project management
   I need to extend it further with option to SAVE and OPEN a project
   Idea: Use a tempProgress file while working on different modules --
       store all the information that are being provided by the user.
       When prompted with SAVE project: copy the tempProgress file to
       existing project file.
       When prompted with OPEN project: (1) copy the project file to tempProgress
       (2) When earlier executed modules are opened - auto populate the fields
       */
void DefineProject::on_pushButtonSave_clicked()
{
    /*QString temp; temp="cd "+ui->lineEditFolder->text()+";";
    QString raster=temp+"mkdir RasterProcessing";
    QString vector=temp+"mkdir VectorProcessing";
    QString domain=temp+"mkdir DomainDecomposition";
    QString data=temp+  "mkdir DataModel";
    QString analysis=temp+"mkdir Analysis";
    system(qPrintable(raster));
    system(qPrintable(vector));
    system(qPrintable(domain));
    system(qPrintable(data));
    system(qPrintable(analysis));*/

    QString temp; temp=ui->lineEditFile->text();
    QDir dir; dir.cd(temp);
    temp=ui->lineEditFolder->text();
    dir.mkdir(temp.right(temp.length()-temp.lastIndexOf("/",-1)-1));
    cout<<qPrintable(temp.right(temp.length()-temp.lastIndexOf("/",-1)-1));
    dir.cd(temp);
    dir.mkdir("RasterProcessing");
    dir.mkdir("VectorProcessing");
    dir.mkdir("DomainDecomposition");
    dir.mkdir("DataModel");
    dir.mkdir("InfoViz");

    QFile file(ui->lineEditFile2->text());
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)){
        qWarning("File couldn't be saved! Try Again!");
	QMessageBox::information(this,tr("New Project"),tr("Can Not Access File.\nClick OK to close the dialog!"),QMessageBox::Ok);
        return;
    }
    else{
        QTextStream out(&file);
        /*QDateTime time;
        QString dateStamp, month, dd, yyyy, hh, mm, folder;
        dateStamp=time.currentDateTime().toString();
        month=dateStamp.mid(4,3);
        dd   =dateStamp.mid(8,2);
        yyyy =dateStamp.mid(20.4);
        hh   =dateStamp.mid(11,2);
        mm   =dateStamp.mid(14,2);
        folder=month+dd+yyyy+hh+mm;
        out<<folder<<"\n";*/
        //out<<">"<<month<<"<>"<<dd<<"<>"<<yyyy<<"<>"<<hh<<"<>"<<mm<<"<\n";
        out<<"Created on: "<<dateStamp<<"\n";
        out<<ui->lineEditFolder->text()<<"\n";
	out<<ui->lineEditFile2->text()<<"\n";

        //QFile tFile("project.txt");
	QFile tFile(QDir::homePath()+"/project.txt");
	cout << "here "<<"\n";
	cout << "Proj File= " <<qPrintable(QDir::homePath()+"/project.txt") << "\n";
        tFile.open(QIODevice::WriteOnly | QIODevice::Text);
	
        QTextStream tout(&tFile);
        tout<<ui->lineEditFolder->text()<<"\n";
        tout<<ui->lineEditFile2->text()<<"\n";
	QMessageBox::information(this,tr("Import Project"),tr("Project Created Successfully.\nClick OK to close the dialog!"),QMessageBox::Ok);
        close();
    }
}
