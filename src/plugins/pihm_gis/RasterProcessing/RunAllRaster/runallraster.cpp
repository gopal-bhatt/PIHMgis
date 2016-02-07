#include "runallraster.h"
#include "ui_runallraster.h"

#include <iostream>

#include <fstream>
#include "../../pihmRasterLIBS/flood.h"
#include "../../pihmRasterLIBS/bin2ascii.h"
#include "../../pihmRasterLIBS/setdir.h"
#include "../../pihmRasterLIBS/aread8.h"
#include "../../pihmRasterLIBS/streamSegmentation.h"
#include "../../pihmRasterLIBS/streamDefinition.h"
#include "../../pihmRasterLIBS/streamSegmentationShp.h"
#include "../../pihmRasterLIBS/catProcessing.h"
#include "../../pihmRasterLIBS/lsm.h"
#include "../../pihmRasterLIBS/catPoly.h"

#include "../../pihmLIBS/fileStruct.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include <QtGui>

using namespace std;

//QString projDir = "/Users/bhattgopal/Documents";

RunAllRaster::RunAllRaster(QWidget *parent)
    : QDialog(parent), ui(new Ui::RunAllRaster)
{
    ui->setupUi(this);
}

RunAllRaster::~RunAllRaster()
{
    delete ui;
}

void RunAllRaster::on_pushButtonDEM_clicked()
{
    QString projDir, projFile;
    QFile tFile(QDir::homePath()+"/project.txt");
    tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
    cout << qPrintable(projDir);

    QString str = QFileDialog::getOpenFileName(this, "Choose DEM File", projDir, "DEM Grid File (*.adf *.asc)");
    ui->lineEditDEM->setText(str);
}

void RunAllRaster::on_pushButtonSuggestMe_clicked()
{

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    cout<<qPrintable(projDir);
    //QString temp; temp="cd "+projDir+";" "mkdir RasterProcessing";
    //system(qPrintable(temp));
    //exec(qPrintable(temp));
    QString fill= projDir + "/RasterProcessing"+"/fill.asc";
    QString fdr = projDir + "/RasterProcessing"+"/fdr.asc";
    QString fac = projDir + "/RasterProcessing"+"/fac.asc";
    //QString str = projDir + "/RasterProcessing"+"/str"+ui->lineEditThreshold->text()+".asc";

    //double thresh;
    //thresh = (ui->lineEditThreshold->text()).toDouble();

    QString tmp = ui->lineEditDEM->text();
    QString inputAsciiFileName = ui->lineEditDEM->text();
    QString inputFileName = inputAsciiFileName;
    if((tmp.toLower()).endsWith(".adf")){
        inputAsciiFileName.truncate(inputAsciiFileName.length()-3);
        inputAsciiFileName.append("asc");
        bin2ascii((char *)qPrintable(inputFileName), (char *)qPrintable(inputAsciiFileName));
    }
    int err;
    err = flood((char *)qPrintable(inputAsciiFileName), "dummy", (char *)qPrintable(fill));
    err = setdird8((char *)qPrintable(fill), (char *)qPrintable(fdr), "dummy");
    err = aread8((char *)qPrintable(fdr), (char *)qPrintable(fac), 0.0, 0.0, 1);
	
	writeLineNumber(qPrintable(projFile), 3, qPrintable(inputFileName));
	writeLineNumber(qPrintable(projFile), 4, qPrintable(fill));
	writeLineNumber(qPrintable(projFile), 5, qPrintable(fill));
	writeLineNumber(qPrintable(projFile), 6, qPrintable(fdr));
	writeLineNumber(qPrintable(projFile), 7, qPrintable(fac));

    char tempChar[100];
    int tempInt, Rows, Cols, NoData, suggestedThreshold;
    double tempDouble;
    int *sortedData, count=0;
    int flag =1;
    fstream inFile;
    inFile.open(qPrintable(fac));
    inFile >> tempChar; inFile>>Cols;
    inFile >> tempChar; inFile>>Rows;
    inFile >> tempChar; inFile>>tempDouble;
    inFile >> tempChar; inFile>>tempDouble;
    inFile >> tempChar; inFile >> tempDouble;
    inFile >> tempChar; inFile >> NoData;
	cout <<"Rows= " <<Rows<<" Cols= "<<Cols<<" ND= "<<NoData<<"\n";

    sortedData = (int *)malloc(Rows*Cols*sizeof(int));
    for(int i=0; i<Rows*Cols; i++){
        inFile >> tempInt;
        if(tempInt >=0){
            sortedData[i]=tempInt;
            count++;
        }
    }
	cout<<"Count= " <<count<<"\n";
    char strThresh[100];
    sprintf(strThresh, "%d", (int)(count*0.02));
	cout<<"Thresh = "<<strThresh << "\n";
    QString qstrThresh(strThresh);
	cout<<"Thresh = "<<qPrintable(qstrThresh) << "\n";
    ui->lineEditThreshold->setText(strThresh);

    ui->lineEditStream->setText(projDir+"/RasterProcessing"+"/str"+ui->lineEditThreshold->text()+".shp");
    ui->lineEditWatershed->setText(projDir+"/RasterProcessing"+"/cat"+ui->lineEditThreshold->text()+".shp");

    inFile.close();
    //err = streamDefinition((char *)qPrintable(fac), "dummy", (char *)qPrintable(str), 1, thresh);
}

void RunAllRaster::on_pushButtonStream_clicked()
{
    QString projDir, projFile;
    QFile tFile(QDir::homePath()+"/project.txt");
    tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine(); 
    cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Save Stream File to...", projDir+"/RasterProcessing", "Shape file (*.shp)");
    if(!s.endsWith(".shp"))
        s.append(".shp");
    ui->lineEditStream->setText(s);
}

void RunAllRaster::on_pushButtonWatershed_clicked()
{
    QString projDir, projFile;
    QFile tFile(QDir::homePath()+"/project.txt");
    tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tin(&tFile);
	projDir  = tin.readLine();
        projFile = tin.readLine();
    cout << qPrintable(projDir);

    QString s = QFileDialog::getSaveFileName(this, "Save Catchment File to...", projDir+"/RasterProcessing", "Shape file (*.shp)");
    if(!s.endsWith(".shp"))
        s.append(".shp");
    ui->lineEditWatershed->setText(s);
}

void RunAllRaster::on_pushButtonRun_clicked()
{
    //QString projDir = "/Users/bhattgopal/Documents";
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

    QString fill= projDir + "/RasterProcessing"+"/fill.asc";
    QString fdr = projDir + "/RasterProcessing"+"/fdr.asc";
    QString fac = projDir + "/RasterProcessing"+"/fac.asc";
    QString str = projDir + "/RasterProcessing"+"/str"+ui->lineEditThreshold->text()+".asc";
    QString lnk = projDir + "/RasterProcessing"+"/lnk"+ui->lineEditThreshold->text()+".asc";
    QString strShp = ui->lineEditStream->text();
    QString strDbf = ui->lineEditStream->text();strDbf.truncate(strDbf.length()-3); strDbf.append("dbf");
    QString strShx = ui->lineEditStream->text();strShx.truncate(strShx.length()-3); strShx.append("shx");
    QString ids  = strShp; ids.truncate(ids.length()-4); ids=ids.right(ids.length()-ids.lastIndexOf("/",-1)-1);
    QString shpFiles = projDir+"/VectorProcessing/"+ids+".shp";
    QString dbfFiles = projDir+"/VectorProcessing/"+ids+".dbf";
    QString shxFiles = projDir+"/VectorProcessing/"+ids+".shx";

    QString cat = projDir + "/RasterProcessing"+"/cat"+ui->lineEditThreshold->text()+".asc";
    QString catShp = ui->lineEditWatershed->text();
    QString catDbf = ui->lineEditWatershed->text();catDbf.truncate(catDbf.length()-3); catDbf.append("dbf");
    QString catShx = ui->lineEditWatershed->text();catShx.truncate(catShx.length()-3); catShx.append("shx");
    QString idc  = catShp; idc.truncate(idc.length()-4); idc=idc.right(idc.length()-idc.lastIndexOf("/",-1)-1);
    QString shpFilec = projDir+"/VectorProcessing/"+idc+".shp";
    QString dbfFilec = projDir+"/VectorProcessing/"+idc+".dbf";
    QString shxFilec = projDir+"/VectorProcessing/"+idc+".shx";


    double thresh;
    thresh = (ui->lineEditThreshold->text()).toDouble();
    int err;

    err = streamDefinition((char *)qPrintable(fac), "dummy", (char *)qPrintable(str), 1, thresh);
    err = streamSegmentation((char *)qPrintable(str), (char *)qPrintable(fdr), (char *)qPrintable(lnk), "node.dat");
    err = streamSegmentationShp((char *)qPrintable(str), (char *)qPrintable(fdr), (char *)qPrintable(strShp), (char *)qPrintable(strDbf));
    err = catchmentGrid((char *)qPrintable(lnk), (char *)qPrintable(fdr), (char *)qPrintable(cat));
    err = catchmentPoly((char *)qPrintable(cat), "dummy", (char *)qPrintable(catShp), (char *)qPrintable(catDbf));

	QFile::copy(strShp, shpFiles);
        QFile::copy(strDbf, dbfFiles);
        QFile::copy(strShx, shxFiles);
	QFile::copy(catShp, shpFilec);
        QFile::copy(catDbf, dbfFilec);
        QFile::copy(catShx, shxFilec);

	writeLineNumber(qPrintable(projFile), 8, qPrintable(fac));
	writeLineNumber(qPrintable(projFile), 9, qPrintable(str));
	writeLineNumber(qPrintable(projFile), 10, qPrintable(ui->lineEditThreshold->text()));
	writeLineNumber(qPrintable(projFile), 11, qPrintable(str));
	writeLineNumber(qPrintable(projFile), 12, qPrintable(fdr));
	writeLineNumber(qPrintable(projFile), 13, qPrintable(lnk));
	writeLineNumber(qPrintable(projFile), 14, qPrintable(str));
	writeLineNumber(qPrintable(projFile), 15, qPrintable(fdr));
	writeLineNumber(qPrintable(projFile), 16, qPrintable(shpFiles));
	writeLineNumber(qPrintable(projFile), 17, qPrintable(lnk));
	writeLineNumber(qPrintable(projFile), 18, qPrintable(fdr));
	writeLineNumber(qPrintable(projFile), 19, qPrintable(cat));
	writeLineNumber(qPrintable(projFile), 20, qPrintable(cat));
	writeLineNumber(qPrintable(projFile), 21, qPrintable(shpFilec));

    if(ui->checkBoxRaster->isChecked() == 1){
        applicationPointer->addRasterLayer(fill);
        applicationPointer->addRasterLayer(fdr);
        applicationPointer->addRasterLayer(fac);
        applicationPointer->addRasterLayer(str);
        applicationPointer->addRasterLayer(lnk);
        applicationPointer->addRasterLayer(cat);
    }
    if(ui->checkBoxVector->isChecked()==1){
        QString myFileNameQString1 = catShp;
        QFileInfo myFileInfo1(myFileNameQString1);
        QString myBaseNameQString1 = myFileInfo1.baseName();
        QString provider1 = "OGR";
        applicationPointer->addVectorLayer(myFileNameQString1, myBaseNameQString1, "ogr");

        QString myFileNameQString2 = strShp;
        QFileInfo myFileInfo2(myFileNameQString2);
        QString myBaseNameQString2 = myFileInfo2.baseName();
        QString provider2 = "OGR";
        applicationPointer->addVectorLayer(myFileNameQString2, myBaseNameQString2, "ogr");
    }
}

void RunAllRaster::on_pushButtonClose_clicked()
{
    close();
}

void RunAllRaster::on_pushButtonHelp_clicked()
{
    helpDialog* hlpDlg = new helpDialog(this, "Run All Raster", 1, "helpFiles/runallraster.html", "Help :: Run All Raster");
            hlpDlg->show();
}

void RunAllRaster::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
}
