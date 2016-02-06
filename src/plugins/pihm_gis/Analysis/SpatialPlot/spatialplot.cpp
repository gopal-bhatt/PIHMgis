#include <QtGui>
#include "spatialplot.h"
#include "../../pihmLIBS/generateShape.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

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
}

void spatialPlotDlg::browseEleShapeFile()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose TIN Shape File", "~/","Shape File(*.shp *.SHP)");
        lineEditEleShape->setText(str);
}

void spatialPlotDlg::browseRivShapeFile()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose Riv Shape File", "~/","Shape File(*.shp *.SHP)");
        lineEditRivShape->setText(str);
}

void spatialPlotDlg::browseModelFile()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose Model Output File", "~/","Text File(*.txt *.TXT);; NetCDF File(*.nc *.NC)");
        lineEditFileName->setText(str);
}

void spatialPlotDlg::generate()
{
	double *avgVal;
	
	int tabIndex;
	int variableIndex;
	int startTime, finishTime;
	int NUM_STEPS;
	int dataCount = 0;
	char fStr[100];
	
	int runFlag = 1;
	QString shapeFileName, outputFileName;
	ifstream inStream;

	int NUM_ELE = 0;
	int NUM_RIV = 0;

	tabIndex = tabWidget->currentIndex();
	if(tabIndex == ELEMENT_FEATURE)
	{
		variableIndex = comboBoxEleVariable->currentIndex();
		startTime  = ( lineEditEleStart->text() ).toInt();
		finishTime = ( lineEditEleFinish->text() ).toInt();
		shapeFileName  = lineEditEleShape->text();
		outputFileName = lineEditFileName->text();
		
		NUM_STEPS = finishTime - startTime + 1;
		cout<<"NUM_STEPS= "<<NUM_STEPS<<"\n";
		if( outputFileName.endsWith("txt", Qt::CaseInsensitive) ){
			inStream.open( qPrintable(outputFileName) );
			if(inStream == NULL){
				cout << "Couldn't Open File\n";
				exit(1);
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

			for(int i=0; i<startTime; i++)
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
		shapeFileName  = lineEditRivShape->text();
		outputFileName = lineEditFileName->text();
		
		NUM_STEPS = finishTime - startTime + 1;
		cout<<"NUM_STEPS= "<<NUM_STEPS<<"\n";
		if( outputFileName.endsWith("txt", Qt::CaseInsensitive) ){
			inStream.open( qPrintable(outputFileName) );
			if(inStream == NULL){
				cout << "Couldn't Open File\n";
				exit(1);
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

			for(int i=0; i<startTime; i++)
				getline(inStream, str);
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
