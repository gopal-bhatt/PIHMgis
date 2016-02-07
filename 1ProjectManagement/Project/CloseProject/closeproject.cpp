#include "closeproject.h"
#include "ui_closeproject.h"

#include <QtGui>
#include "../../pihmLIBS/fileStruct.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"


CloseProject::CloseProject(QWidget *parent)
    : QDialog(parent), ui(new Ui::CloseProject)
{
    ui->setupUi(this);

	QString projDir, projFile;
    	QFile tFile(QDir::homePath()+"/project.txt");
    	tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    	QTextStream tin(&tFile);
    	projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
	
	projFile=projFile.mid(1 + projFile.lastIndexOf("/", -1));
	cout << qPrintable(projFile) <<"\n";
	ui->label_3->setText(projFile);
}

CloseProject::~CloseProject()
{
    delete ui;
}

void CloseProject::on_pushButtonClose_clicked()
{
    close();
}

void CloseProject::on_pushButtonOpen_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();

	QFile file(QDir::homePath()+"/project.txt");
	bool flag = file.remove();

	if(flag == 1){
		QMessageBox::information(this,tr("Close Project"),tr("Project Successfully Closed.\nClick OK to close the dialog!"),QMessageBox::Ok);
		close();
	}
}

void CloseProject::on_pushButtonHelp_clicked()
{
            helpDialog* hlpDlg = new helpDialog(this, "Close Project", 1, "helpFiles/closeproject.html", "Help :: Close Project");
            hlpDlg->show();
}
