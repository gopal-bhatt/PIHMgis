#include "lcfile.h"
#include "ui_lcfile.h"

#include <fstream>
#include <QFileDialog>

#include "../../pihmLIBS/fileStruct.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

using namespace std;

LCFile::LCFile(QWidget *parent)
    : QDialog(parent), ui(new Ui::LCFile)
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
	ui->lineEditLC->setText(tempStr+"lc");
}

LCFile::~LCFile()
{
    delete ui;
}

void LCFile::on_pushButtonClose_clicked()
{
    this->close();
}

void LCFile::on_pushButtonNLCD_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getOpenFileName(this, "Choose NLCD Class File", projDir, "NLCD Class (*.txt *.TXT)");
    ui->lineEditNLCD->setText(s);
}

void LCFile::on_pushButtonLC_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Choose LC File Name", projDir+"/DataModel", "LC file (*.lc)");
    if(!s.endsWith(".lc"))
        s.append(".lc");
    ui->lineEditLC->setText(s);
}

void LCFile::on_pushButtonRun_clicked()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

	writeLineNumber(qPrintable(projFile), 91, qPrintable(ui->lineEditNLCD->text()));
	writeLineNumber(qPrintable(projFile), 92, qPrintable(ui->lineEditLC->text()));

    int RunFlag=1;
    ifstream inFile;
    ofstream outFile;
    inFile.open((ui->lineEditNLCD->text()).toAscii());
    outFile.open((ui->lineEditLC->text()).toAscii());

    ofstream logFile;
	QDir dir = QDir::home();
        QString home = dir.homePath();
    QString logFileName(home+"/log.html");
    logFile.open(qPrintable(logFileName));
    logFile<<"<html><body><font size=3 color=black> Verifying Files...<br>";
    logFile.close();
    ui->textBrowser->setSource(logFileName);
    ui->textBrowser->setFocus();
    ui->textBrowser->setModified(TRUE);

    logFile.open(qPrintable(logFileName), ios::app);
    logFile<<"Checking NLCD Texture File... ";
    if (inFile == NULL){
        logFile<<"could NOT open file.  ERROR<br>";
        RunFlag = 0;
    }
    else
        logFile<<"Done!<br>";
    logFile<<"Checking .lc File... ";
    if (outFile == NULL){
        logFile<<"could NOT open file to write.  ERROR<br>";
        RunFlag = 0;
    }
    else
        logFile<<"Done!<br>";
    logFile.close();
    ui->textBrowser->reload();

    if(RunFlag == 1){

        logFile.open(qPrintable(logFileName), ios::app);
        logFile<<"Generating LC file... ";

        int count = 0;
        int inClass[1000];
        while(inFile)
            inFile >> inClass[count++];
        count--;

        double UMD[][7] = {
            // http://glcf.umiacs.umd.edu/data/landcover/
            //Index	LAImax          Rmin            Rsref           Albedo          VegFrac         Roughness
            { 0,	0.00000000,	0.00202546,	13477995.31968,	0.13500000,	0.0000000,	4.050926E-07}, //Water
            { 1,	10.7600000,	0.00202546,	2592000.00000,	0.18200000,	0.8000000,	8.101852E-07}, //Evergreen Needleleaf
            { 2,	5.11700000,	0.00173611,	8301077.28317,	0.21300000,	0.9000000,	8.101852E-07}, //Evergreen Broadleaf
            { 3,	10.7600000,	0.00202546,	2592000.00000,	0.18200000,	0.8000000,	8.101852E-07}, //Deciduous Needleleaf
            { 4,	7.17300000,	0.00202546,	6221002.34189,	0.23600000,	0.8000000,	8.101852E-07}, //Deciduous Broadleaf
            { 5,	8.83300000,	0.00202546,	4541564.40278,	0.20250000,	0.7950000,	6.944444E-07}, //Mixed Forest
            { 6,	8.54004400,	0.00200822,	4837950.80122,	0.21128590,	0.7998630,	6.944444E-07}, //Woodland
            { 7,	6.23951310,	0.00195775,	7165420.00157,	0.25245035,	0.8018370,	5.787037E-07}, //Wooded Grassland
            { 8,	2.55359750,	0.00202546,	10894496.20704,	0.24958510,	0.6250050,	5.208333E-07}, //Closed Shrubland
            { 9,	1.16688270,	0.00207025,	12297448.88352,	0.26652016,	0.2181750,	5.208333E-07}, //Open Shrubland
            {10,	4.78200000,	0.00190972,	8640000.00000,	0.28802000,	0.7255200,	4.629630E-07}, //Grassland
            {11,	4.78200000,	0.00135542,	8640000.00000,	0.24991620,	0.8353665,	4.629630E-07}, //Cropland
            {12,	0.00100000,	0.00202546,	13476983.61024,	0.23214958,	0.0748900,	4.050926E-07}, //Bare Ground
            {13,	5.02122910,	0.00179213,	8397969.62227,	0.24649654,	0.7436000,	1.157407E-07}, //Urban and Build
        };

        // http://www.epa.gov/mrlc/definitions.html#2001
        double NLCD[100][4] = { {0, 0.00, 0, 0.00}, //00
                              {0, 0.00, 0, 0.00}, //01
                              {0, 0.00, 0, 0.00}, //02
                              {0, 0.00, 0, 0.00}, //03
                              {0, 0.00, 0, 0.00}, //04
                              {0, 0.00, 0, 0.00}, //05
                              {0, 0.00, 0, 0.00}, //06
                              {0, 0.00, 0, 0.00}, //07
                              {0, 0.00, 0, 0.00}, //08
                              {0, 0.00, 0, 0.00}, //09
                              {0, 1.00, 0, 0.00}, //10
                              {0, 0.90, 6, 0.10}, //11
                              {0, 0.20, 6, 0.80}, //12
                              {0, 0.00, 0, 0.00}, //13
                              {0, 0.00, 0, 0.00}, //14
                              {0, 0.00, 0, 0.00}, //15
                              {0, 0.00, 0, 0.00}, //16
                              {0, 0.00, 0, 0.00}, //17
                              {0, 0.00, 0, 0.00}, //18
                              {0, 0.00, 0, 0.00}, //19
                              {13, 0.65, 0, 0.00}, //20
                              {13, 0.10, 10, 0.90}, //21
                              {13, 0.35, 10, 0.65}, //22
                              {13, 0.65, 10, 0.35}, //23
                              {13, 0.90, 10, 0.10}, //24
                              {0, 0.00, 0, 0.00}, //25
                              {0, 0.00, 0, 0.00}, //26
                              {0, 0.00, 0, 0.00}, //27
                              {0, 0.00, 0, 0.00}, //28
                              {0, 0.00, 0, 0.00}, //29
                              {12, 1.00, 0, 0.00}, //30
                              {12, 0.92, 9, 0.08}, //31
                              {12, 1.00, 9, 0.00}, //32
                              {0, 0.00, 0, 0.00}, //33
                              {0, 0.00, 0, 0.00}, //34
                              {0, 0.00, 0, 0.00}, //35
                              {0, 0.00, 0, 0.00}, //36
                              {0, 0.00, 0, 0.00}, //37
                              {0, 0.00, 0, 0.00}, //38
                              {0, 0.00, 0, 0.00}, //39
                              {6, 0.65, 0, 0.00}, //40
                              {4, 0.60, 10, 0.40}, //41
                              {2, 0.60, 10, 0.40}, //42
                              {5, 0.60, 10, 0.40}, //43
                              {0, 0.00, 0, 0.00}, //44
                              {0, 0.00, 0, 0.00}, //45
                              {0, 0.00, 0, 0.00}, //46
                              {0, 0.00, 0, 0.00}, //47
                              {0, 0.00, 0, 0.00}, //48
                              {0, 0.00, 0, 0.00}, //49
                              {8, 1.00, 0, 0.00}, //50
                              {9, 0.60, 0, 0.00}, //51
                              {8, 0.60, 0, 0.00}, //52
                              {0, 0.00, 0, 0.00}, //53
                              {0, 0.00, 0, 0.00}, //54
                              {0, 0.00, 0, 0.00}, //55
                              {0, 0.00, 0, 0.00}, //56
                              {0, 0.00, 0, 0.00}, //57
                              {0, 0.00, 0, 0.00}, //58
                              {0, 0.00, 0, 0.00}, //59
                              {0, 0.00, 0, 0.00}, //60
                              {0, 0.00, 0, 0.00}, //61
                              {0, 0.00, 0, 0.00}, //62
                              {0, 0.00, 0, 0.00}, //63
                              {0, 0.00, 0, 0.00}, //64
                              {0, 0.00, 0, 0.00}, //65
                              {0, 0.00, 0, 0.00}, //66
                              {0, 0.00, 0, 0.00}, //67
                              {0, 0.00, 0, 0.00}, //68
                              {0, 0.00, 0, 0.00}, //69
                              {10, 0.85, 0, 0.00}, //70
                              {10, 0.90, 0, 0.00}, //71
                              {10, 0.90, 0, 0.00}, //72
                              {10, 0.90, 0, 0.00}, //73
                              {10, 0.90, 0, 0.00}, //74
                              {0, 0.00, 0, 0.00}, //75
                              {0, 0.00, 0, 0.00}, //76
                              {0, 0.00, 0, 0.00}, //77
                              {0, 0.00, 0, 0.00}, //78
                              {0, 0.00, 0, 0.00}, //79
                              {10, 0.90, 0, 0.00}, //80
                              {11, 0.60, 0, 0.00}, //81
                              {11, 0.60, 0, 0.00}, //82
                              {0, 0.00, 0, 0.00}, //83
                              {0, 0.00, 0, 0.00}, //84
                              {0, 0.00, 0, 0.00}, //85
                              {0, 0.00, 0, 0.00}, //86
                              {0, 0.00, 0, 0.00}, //87
                              {0, 0.00, 0, 0.00}, //88
                              {0, 0.00, 0, 0.00}, //89
                              {8, 0.60, 12, 0.40}, //90
                              {6, 0.60, 0, 0.00}, //91
                              {7, 0.60, 0, 0.00}, //92
                              {6, 0.60, 0, 0.00}, //93
                              {7, 0.60, 0, 0.00}, //94
                              {9, 0.60, 12, 0.40}, //95
                              {10, 0.80, 2, 0.20}, //96
                              {10, 0.80, 4, 0.20}, //97
                              {10, 0.20, 0, 0.80}, //98
                              {10, 0.20, 0, 0.80}, //99
                          };

        int nlcd, umd1, umd2;
        double frac1, frac2;
        outFile << count << "\n";
        for(int i=0; i<count; i++){
            nlcd = inClass[i];
            umd1  = NLCD[nlcd][0];
            frac1 = NLCD[nlcd][1];
            umd2  = NLCD[nlcd][2];
            frac2 = NLCD[nlcd][3];

            outFile << i+1 << "\t";
            for(int j=1; j<7; j++){
                outFile << frac1*UMD[umd1][j] + frac2*UMD[umd2][j] <<"\t";
            }
            outFile << "0.6\n";
        }


        logFile<<"Done!<br>";
        logFile<<"Generate LC File Module - COMPLETE";
        logFile.close();
        ui->textBrowser->reload();
    }
}

void LCFile::on_pushButtonHelp_clicked()
{
helpDialog* hlpDlg = new helpDialog(this, "LC File", 1, "helpFiles/lcfile.html", "Help :: LC File");
        hlpDlg->show();
}
