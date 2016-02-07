#include <QtGui>
#include "spatialplot.h"
#include "../../pihmLIBS/generateShape.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include "../../pihmLIBS/fileStruct.h"

#include <iostream>
#include <fstream>

#define ELEMENT_FEATURE	0
#define RIVER_FEATURE	1

using namespace std;

spatialPlotDlg::spatialPlotDlg(QDialog *parent)
{
	setupUi(this);

	connect( pushButtonEleShape, SIGNAL( clicked() ), this, SLOT( browseEleShapeFile() ) );
	connect( pushButtonRivShape, SIGNAL( clicked() ), this, SLOT( browseRivShapeFile() ) );
	connect( pushButtonFileName, SIGNAL( clicked() ), this, SLOT( browseModelFile()    ) );
	connect( pushButtonGenerate, SIGNAL( clicked() ), this, SLOT( generate()           ) );
	connect( pushButtonHelp,     SIGNAL( clicked() ), this, SLOT( help()               ) );

	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();

        int scale=(readLineNumber(qPrintable(projFile), 110)).toInt();
        int step=(readLineNumber(qPrintable(projFile), 106)).toInt();
        comboBoxEle->setCurrentIndex(scale);
        comboBoxRiv->setCurrentIndex(scale);
        step= scale==0? step : scale==1? step/60 : step/1440;
        //lineEditEleTime->setText(QString::number(step, 10));

        step=(readLineNumber(qPrintable(projFile), 109)).toInt();
        step= scale==0? step : scale==1? step/60 : step/1440;
        //lineEditRivTime->setText(QString::number(step,10));

	lineEditEleShape->setText(readLineNumber(qPrintable(projFile), 48));
	lineEditRivShape->setText(readLineNumber(qPrintable(projFile), 81));

	int start, finish;
	start = readLineNumber(qPrintable(projFile), 111).toInt();
	finish= readLineNumber(qPrintable(projFile), 112).toInt();
	start = scale==0?start : scale==1? start/60 : start/1440; start = start +1;
	finish= scale==0?finish: scale==1? finish/60: finish/1440;
	lineEditEleStart->setText(QString::number(start,10));
	lineEditEleFinish->setText(QString::number(finish,10));
	lineEditRivStart->setText(QString::number(start,10));
	lineEditRivFinish->setText(QString::number(finish,10));
}

void spatialPlotDlg::browseEleShapeFile()
{
	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();
        cout << qPrintable(projDir) <<"\n";

	QString str = QFileDialog::getOpenFileName(this, "Choose TIN Shape File", projDir+"/DomainDecomposition","Shape File(*.shp *.SHP)");
        lineEditEleShape->setText(str);
}

void spatialPlotDlg::browseRivShapeFile()
{
	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();
        cout << qPrintable(projDir) <<"\n";

	QString str = QFileDialog::getOpenFileName(this, "Choose Riv Shape File", projDir+"/VectorProcessing","Shape File(*.shp *.SHP)");
        lineEditRivShape->setText(str);
}

void spatialPlotDlg::browseModelFile()
{
	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();
        cout <<"\nSP1 "<< qPrintable(projDir) <<"\n";

	QString folder = QFileDialog::getExistingDirectory(this, "Choose Input Directory", projDir);
        folder=folder+"/"+readLineNumber(qPrintable(projFile), 50);
        if(tabWidget->currentIndex()== ELEMENT_FEATURE)
        {
                int featureIndex = comboBoxEleVariable->currentIndex();
                if(featureIndex == 0) //IS
                        folder=folder+".is.txt";
		if(featureIndex == 1) //GW
                        folder=folder+".GW.txt";
		if(featureIndex == 2) //unsat
                        folder=folder+".unsat.txt";
		if(featureIndex == 3) //surf
                        folder=folder+".surf.txt";
		if(featureIndex == 4) //ET0
                        folder=folder+".et0.txt";
		if(featureIndex == 5) //ET1
                        folder=folder+".et1.txt";
		if(featureIndex == 6) //ET2
                        folder=folder+".et2.txt";
		if(featureIndex == 7) //Precip
                        folder=folder+".prep.txt";
		if(featureIndex == 8) //NetPrecip
                        folder=folder+".nprep.txt";
		if(featureIndex == 9) //Infil
                        folder=folder+".infil.txt";
		if(featureIndex == 10) //Rech
                        folder=folder+".rech.txt";
	}
	if(tabWidget->currentIndex()== RIVER_FEATURE)
        {
                int featureIndex = comboBoxRivVariable->currentIndex();
                if(featureIndex == 0) // head
                        folder=folder+".stage.txt";
		if(featureIndex == 1) // inflow
                        folder=folder+".rivFlx0.txt";
		if(featureIndex == 2) // outflow
                        folder=folder+".rivFlx1.txt";
		if(featureIndex == 3) // baseflow tot
                        folder=folder+".rivFlx4.txt";
		if(featureIndex == 4) // surfflow tot
                        folder=folder+".rivFlx2.txt";
		if(featureIndex == 5) // base left
                        folder=folder+".rivFlx4.txt";
		if(featureIndex == 6) // base right
                        folder=folder+".rivFlx5.txt";
		if(featureIndex == 7) // surf left
                        folder=folder+".rivFlx2.txt";
		if(featureIndex == 8) // surf right
                        folder=folder+".rivFlx3.txt";
	}

	//QString str = QFileDialog::getOpenFileName(this, "Choose Model Output File", "~/","Text File(*.txt *.TXT);; NetCDF File(*.nc *.NC)");
        lineEditFileName->setText(folder);
}

void spatialPlotDlg::generate()
{
	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();
        cout << qPrintable(projDir) <<"\n";

	double *avgVal;
	
	int tabIndex;
	int variableIndex;
	int startTime, finishTime;
	int NUM_STEPS;
	int dataCount = 0;
	char fStr[100];
	
	int runFlag = 1;
	QString shapeFileName, outputFileName;
	ifstream inStream, inStream2;

	int NUM_ELE = 0;
	int NUM_RIV = 0;

	tabIndex = tabWidget->currentIndex();
	if(tabIndex == ELEMENT_FEATURE)
	{
		variableIndex = comboBoxEleVariable->currentIndex();
		startTime  = ( lineEditEleStart->text() ).toInt();
		finishTime = ( lineEditEleFinish->text() ).toInt();

                int units = comboBoxEle->currentIndex();
                units = units==0? 1 : units==1? 60 : 1440; // how many minutes
                int lineNum, varIndex; // choose while lineNum to read based on index
                varIndex = comboBoxEleVariable->currentIndex();
                if(varIndex==0) lineNum=106; //intercep
                if(varIndex==1) lineNum=101; //sat
		if(varIndex==2) lineNum=107; //unsat
		if(varIndex==3) lineNum=102; //surf
		if(varIndex==4) lineNum=108; //evap
		if(varIndex==5) lineNum=108; //trans
		if(varIndex==6) lineNum=108; //evap gw/sw
		if(varIndex==7) lineNum=101; //prep ??
		if(varIndex==8) lineNum=101; //nprep ??
		if(varIndex==9) lineNum=101; //infil ??
		if(varIndex==10) lineNum=105; //rech

                int steps = readLineNumber(qPrintable(projFile), lineNum).toInt();

                startTime = startTime*units / steps; cout << "Start Row= "<<startTime<<"\n";
                finishTime= finishTime*units/ steps; cout << "FinishRow= "<<finishTime<<"\n";

		shapeFileName  = lineEditEleShape->text();
		outputFileName = lineEditFileName->text();
		
		NUM_STEPS = finishTime - startTime + 1;
		cout<<"NUM_STEPS= "<<NUM_STEPS<<"\n";
		//getchar(); getchar();
		if( outputFileName.endsWith("txt", Qt::CaseInsensitive) ){
			inStream.open( qPrintable(outputFileName) );
			if(inStream == NULL){
				cout << "Couldn't Open File\n";
				//exit(1);
			}
			string str;
			getline(inStream, str);
			int pos = 0;
			while( (pos = str.find('\t', pos+1) ) != -1 ){
				NUM_ELE++;
			}
			cout << "NUM_ELE= "<<NUM_ELE<<"\n";
			inStream.close();
			inStream.open(qPrintable(outputFileName));

			avgVal = (double *)malloc(NUM_ELE * sizeof(double));
			for(int i=0; i<NUM_ELE; i++)
				avgVal[i] = 0.0;

			for(int i=1; i<startTime; i++)
				getline(inStream, str);
			if(inStream == NULL){
				qWarning("Error: File ended Prematurely!\n       Cannot parse \"Start Time\" provided.\n");
				runFlag = 0;
			}
			if(runFlag != 0){
				double temp;
				for(int i=0; i<NUM_STEPS; i++){
					if(inStream){
						for(int j=0; j<NUM_ELE; j++){
							inStream >> temp;
							avgVal[j]+=temp;
						}
						dataCount++;
					}
					else{
						dataCount--;
						break;
					}
				}
				//dataCount--;
				cout<<"Data Count= "<< dataCount <<"\n";
				if(dataCount+1 < NUM_STEPS)
					qWarning("Warning: Model does NOT have that many timestep information\n");
				for(int i=0; i<NUM_ELE; i++)
					avgVal[i]=avgVal[i]/dataCount;
			}
		}
		else if( outputFileName.endsWith("nc", Qt::CaseInsensitive) ){

		}
		else{
			runFlag = 0;
			qWarning("File Type NOT Recognised\n");
		}

		if(runFlag == 1){
			if(variableIndex == 0)
				strcpy(fStr, "IS_head");
			if(variableIndex == 1)
				strcpy(fStr, "Sat_head");
			if(variableIndex == 2)
				strcpy(fStr, "Usat_head");
			if(variableIndex == 3)
				strcpy(fStr, "Surf_head");
			if(variableIndex == 4)
				strcpy(fStr, "ET0");
			if(variableIndex == 5)
				strcpy(fStr, "ET1");
			if(variableIndex == 6)
				strcpy(fStr, "ET2");
			if(variableIndex == 7)
				strcpy(fStr, "Precip");
			if(variableIndex == 8)
				strcpy(fStr, "NetPrecip");
			if(variableIndex == 9)
				strcpy(fStr, "InfilRate");
			if(variableIndex == 10)
				strcpy(fStr, "Recharge_Rate");

			generateShape(shapeFileName, avgVal, NUM_ELE, 3, fStr);

			//??applicationPointer->addLayer(QStringList("tempShape.shp"), NULL);
		}
	}
	if(tabIndex == RIVER_FEATURE)
	{
		variableIndex = comboBoxRivVariable->currentIndex();
		startTime  = ( lineEditRivStart->text() ).toInt();
		finishTime = ( lineEditRivFinish->text() ).toInt();

		int units = comboBoxRiv->currentIndex();
                units = units==0? 1 : units==1? 60 : 1440; // how many minutes
                int lineNum, varIndex; // choose while lineNum to read based on index
                varIndex = comboBoxRivVariable->currentIndex();
                if(varIndex==0) lineNum=104; //head
                if(varIndex==1) lineNum=109; //inflow
                if(varIndex==2) lineNum=109; //outflow
                if(varIndex==3) lineNum=109; //baseflow
                if(varIndex==4) lineNum=109; //surfflow
                if(varIndex==5) lineNum=109; //base left
                if(varIndex==6) lineNum=109; //base right
                if(varIndex==7) lineNum=109; //surf left
                if(varIndex==8) lineNum=109; //surf right

                int steps = readLineNumber(qPrintable(projFile), lineNum).toInt();

                startTime = startTime*units / steps; cout << "Start Row= "<<startTime<<"\n";
                finishTime= finishTime*units/ steps; cout << "FinishRow= "<<finishTime<<"\n";

		shapeFileName  = lineEditRivShape->text();
		outputFileName = lineEditFileName->text();
		
		NUM_STEPS = finishTime - startTime + 1;
		cout<<"NUM_STEPS= "<<NUM_STEPS<<"\n";
		if( outputFileName.endsWith("txt", Qt::CaseInsensitive) ){
			inStream.open( qPrintable(outputFileName) );
			if(varIndex==3) {
				QString tempString; tempString = outputFileName; tempString.truncate(tempString.length()-5);tempString.append("5.txt");
				cout << qPrintable(tempString) << "\n";
				inStream2.open(qPrintable(tempString));
			}
			if(varIndex==4) {
				QString tempString; tempString = outputFileName; tempString.truncate(tempString.length()-5);tempString.append("3.txt");
                                cout << qPrintable(tempString) << "\n";
                                inStream2.open(qPrintable(tempString));
			}
			if(inStream == NULL){
				cout << "Couldn't Open File\n";
				//exit(1);
			}
			string str;
			getline(inStream, str);
			int pos = 0;
			while( (pos = str.find('\t', pos+1) ) != -1 ){
				NUM_RIV++;
			}
			cout << "NUM_RIV= "<<NUM_RIV<<"\n";
			inStream.close();
			inStream.open(qPrintable(outputFileName));

			avgVal = (double *)malloc(NUM_RIV * sizeof(double));
			for(int i=0; i<NUM_RIV; i++)
				avgVal[i] = 0.0;

			for(int i=1; i<startTime; i++){
				getline(inStream, str);
				if(varIndex == 3 || varIndex == 4)
					getline(inStream2, str);
			}
			if(inStream == NULL){
				qWarning("Error: File ended Prematurely!\n       Cannot parse \"Start Time\" provided.\n");
				runFlag = 0;
			}
			if(runFlag != 0){
				double temp;
				for(int i=0; i<NUM_STEPS; i++){
					if(inStream){
						for(int j=0; j<NUM_RIV; j++){
							inStream >> temp;
							avgVal[j]+=temp;
							if(varIndex == 3 || varIndex == 4){
								inStream2 >> temp;
								avgVal[j]+=temp;
							}
						}
						dataCount++;
					}
					else{
						dataCount--;
						break;
					}
				}
				//dataCount--;
				cout<<"Data Count= "<< dataCount <<"\n";
				if(dataCount+1 < NUM_STEPS)
					qWarning("Warning: Model does NOT have that many timestep information\n");
				for(int i=0; i<NUM_RIV; i++)
					avgVal[i]=avgVal[i]/dataCount;
			}
		}
		else if( outputFileName.endsWith("nc", Qt::CaseInsensitive) ){

		}
		else{
			runFlag = 0;
			qWarning("File Type NOT Recognised\n");
		}

		if(runFlag == 1){
			if(variableIndex == 0)
				strcpy(fStr, "River_head");
			if(variableIndex == 1)
				strcpy(fStr, "Inflow");
			if(variableIndex == 2)
				strcpy(fStr, "Outflow");
			if(variableIndex == 3)
				strcpy(fStr, "Baseflow");
			if(variableIndex == 4)
				strcpy(fStr, "Surfaceflow");
			if(variableIndex == 5)
				strcpy(fStr, "Baseflow_L");
			if(variableIndex == 6)
				strcpy(fStr, "BaseFlow_R");
			if(variableIndex == 7)
				strcpy(fStr, "SurfFlow_L");
			if(variableIndex == 8)
				strcpy(fStr, "SurfFlow_R");

			generateShape(shapeFileName, avgVal, NUM_RIV, 2, fStr);
			
			//??applicationPointer->addLayer(QStringList(shapeFileName), NULL);
		}
	}
	
}

void spatialPlotDlg::help()
{
	//helpDialog(QWidget *parent, const char* name , bool modal, const QString& helpFileName,const QString& captionText)
        helpDialog* hlpDlg = new helpDialog(this, "Spatial Plot", 1, "helpFiles/spatialplot.html", "Help :: Spatial Plot");
	hlpDlg->show();
}
/*??
void spatialPlotDlg::setApplicationPointer(QgisApp* appPtr){
    applicationPointer = appPtr;
}*/

void spatialPlotDlg::on_comboBoxEleVariable_currentIndexChanged(int index)
{
	QString folder = lineEditFileName->text();
	folder.truncate(folder.lastIndexOf(".",folder.length()-5));

	int featureIndex = index; //comboBoxEleVariable->currentIndex();
                if(featureIndex == 0) //IS
                        folder=folder+".is.txt";
                if(featureIndex == 1) //GW
                        folder=folder+".GW.txt";
                if(featureIndex == 2) //unsat
                        folder=folder+".unsat.txt";
                if(featureIndex == 3) //surf
                        folder=folder+".surf.txt";
                if(featureIndex == 4) //ET0
                        folder=folder+".et0.txt";
                if(featureIndex == 5) //ET1
                        folder=folder+".et1.txt";
                if(featureIndex == 6) //ET2
                        folder=folder+".et2.txt";
                if(featureIndex == 7) //Precip
                        folder=folder+".prep.txt";
                if(featureIndex == 8) //NetPrecip
                        folder=folder+".nprep.txt";
                if(featureIndex == 9) //Infil
                        folder=folder+".infil.txt";
                if(featureIndex == 10) //Rech
                        folder=folder+".rech.txt";
        lineEditFileName->setText(folder);
}

void spatialPlotDlg::on_comboBoxRivVariable_currentIndexChanged(int index)
{
	QString folder = lineEditFileName->text();
        folder.truncate(folder.lastIndexOf(".",folder.length()-5));

	int featureIndex = index; //comboBoxRivVariable->currentIndex();
                if(featureIndex == 0) // head
                        folder=folder+".stage.txt";
                if(featureIndex == 1) // inflow
                        folder=folder+".rivFlx0.txt";
                if(featureIndex == 2) // outflow
                        folder=folder+".rivFlx1.txt";
                if(featureIndex == 3) // baseflow tot
                        folder=folder+".rivFlx4.txt";
                if(featureIndex == 4) // surfflow tot
                        folder=folder+".rivFlx2.txt";
                if(featureIndex == 5) // base left
                        folder=folder+".rivFlx4.txt";
                if(featureIndex == 6) // base right
                        folder=folder+".rivFlx5.txt";
                if(featureIndex == 7) // surf left
                        folder=folder+".rivFlx2.txt";
                if(featureIndex == 8) // surf right
                        folder=folder+".rivFlx3.txt";
        lineEditFileName->setText(folder);
}
