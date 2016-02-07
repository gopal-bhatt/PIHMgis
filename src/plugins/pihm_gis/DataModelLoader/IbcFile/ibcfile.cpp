#include "ibcfile.h"
#include "ui_ibcfile.h"

#include <fstream>
#include <QFileDialog>

#include "../../pihmLIBS/fileStruct.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

using namespace std;

IbcFile::IbcFile(QWidget *parent)
    : QDialog(parent), ui(new Ui::IbcFile)
{
    ui->setupUi(this);

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
        tFile.close();
        cout << qPrintable(projDir);

        QString tempStr=readLineNumber(qPrintable(projFile), 49); tempStr.truncate(tempStr.length()-4);
        ui->lineEdit->setText(tempStr+"ibc");
}

IbcFile::~IbcFile()
{
    delete ui;
}

void IbcFile::on_pushButtonBrowse_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
        tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Choose IBC File Name", projDir+"/DataModel", "IBC file (*.ibc)");
    if(!s.endsWith(".ibc"))
        s.append(".ibc");
    ui->lineEdit->setText(s);

}

void IbcFile::on_pushButtonClose_clicked()
{
    close();
}

void IbcFile::on_pushButtonRun_clicked()
{
	QDir dir = QDir::home();
        QString home = dir.homePath();
        QString logFileName(home+"/log.html");
        ofstream log;
        log.open(qPrintable(logFileName), ios::out);
        log<<"<html><body><br><font size=3 color=black><p> Running... ";//</p></font></body></html>";
        log.close();
        ui->textBrowser->setSource(logFileName);
        ui->textBrowser->setFocus();
        ui->textBrowser->setModified(TRUE);
	
	//////
	fstream file;
	file.open(qPrintable(ui->lineEdit->text()), ios::out);
	file <<"0\t0\n0";
	file.close();
	//////

	log.open(qPrintable(logFileName), ios::app);
        log<<" Done!";
        log.close();
        ui->textBrowser->reload();
        QApplication::processEvents();
}

void IbcFile::on_pushButtonHelp_clicked()
{
	helpDialog* hlpDlg = new helpDialog(this, "IBC File", 1, "helpFiles/ibcfile.html", "Help :: IBC File");
        hlpDlg->show();
}
