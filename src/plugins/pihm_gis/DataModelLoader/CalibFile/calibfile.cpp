#include "calibfile.h"
#include "ui_calibfile.h"

#include <QErrorMessage>
#include <QFileDialog>
#include <fstream>

#include <QMessageBox>
#include <QPushButton>

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/fileStruct.h"

using namespace std;

CalibFile::CalibFile(QWidget *parent)
    : QDialog(parent), ui(new Ui::CalibFile)
{
    ui->setupUi(this);
    ui->calibFile->setFocus(Qt::OtherFocusReason);
	
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	QString tempStr=readLineNumber(qPrintable(projFile), 49); tempStr.truncate(tempStr.length()-4);
	ui->calibFile->setText(tempStr+"calib");
}

CalibFile::~CalibFile()
{
    delete ui;
}

void CalibFile::on_pushButtonClose_clicked()
{
    this->close();
}

void CalibFile::on_pushButtonBrowse_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Choose CALIB File Name", projDir+"/DataModel", "CALIB file (*.calib)");
    if(!s.endsWith(".calib"))
        s.append(".calib");
    ui->calibFile->setText(s);
}

void CalibFile::on_pushButtonRun_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 93, qPrintable(ui->calibFile->text()));

    ofstream outFile;
    outFile.open((ui->calibFile->text()).toAscii());
    int RunFlag = 1;

    if(outFile == NULL){
        RunFlag = 0;
        ::qErrnoWarning("Error: Output .calib file not present or accessible");
        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Critical);
        msgBox.critical(0, "Error", "Error: Output .calib file not present or accessible", QMessageBox::Close);
    }

    if(RunFlag == 1){
        outFile << ui->geolKsatH->text().toFloat() << "\t";outFile<<ui->geolKsatV->text().toFloat()<<"\t";outFile<<ui->soilKsatV->text().toFloat()<<"\t";outFile<<ui->macKsatH->text().toFloat()<<"\t";outFile<<ui->macKsatV->text().toFloat()<<"\n";
        outFile << ui->infD->text().toFloat() << "\t";outFile << ui->RzD->text().toFloat() << "\t";outFile << ui->macD->text().toFloat() << "\n";
        outFile << ui->lineEditPorosity->text().toFloat() << "\t";outFile << ui->lineEditAlpha->text().toFloat() << "\t";outFile << ui->lineEditBeta->text().toFloat() << "\n";
        outFile << ui->vAreaF->text().toFloat() << "\t";outFile << ui->hAreaf->text().toFloat() << "\n";
        outFile << ui->VegFrac->text().toFloat() << "\t";outFile << ui->Albedo->text().toFloat() << "\t";outFile << ui->Rough->text().toFloat() << "\n";
        outFile << ui->Precep->text().toFloat() << "\t";outFile << ui->Temp->text().toFloat() << "\n";
        outFile << ui->Et0->text().toFloat() << "\t";outFile << ui->Et1->text().toFloat() << "\t";outFile << ui->Et2->text().toFloat() << "\n";
        outFile << ui->rivRough->text().toFloat() << "\t";outFile << ui->rivKsatH->text().toFloat() << "\t";outFile << ui->rivKsatV->text().toFloat() << "\t";outFile << ui->rivBedThickness->text().toFloat() << "\n";
        outFile << ui->rivDepth->text().toFloat() << "\t";outFile << ui->rivWidCoeff->text().toFloat() << "\n   ";

        QMessageBox msgBox;
        msgBox.setIcon(QMessageBox::Information);
	QMessageBox::information(this,tr("Calib File"),tr("Calib file created successfully\nClick OK to close the dialog!"),QMessageBox::Ok);
        //msgBox.information(0, "Success", "Done !", QMessageBox::Close);
    }
}

void CalibFile::on_pushButtonHelp_clicked()
{
            helpDialog* hlpDlg = new helpDialog(this, "Fill Pits", 1, "helpFiles/calibfile.html", "Help :: Fill Pits");
            hlpDlg->show();
}
