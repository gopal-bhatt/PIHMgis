#include <QtGui>

#include <iostream>
#include <fstream>
#include "timeseries.h"
#include "plotTS.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include <qwt_plot_canvas.h>

#define ELEMENT_FEATURE	0
#define RIVER_FEATURE	1

using namespace std;

timeSeriesDlg::timeSeriesDlg()
{

	setupUi(this);

	QValidator *validator = new QIntValidator(this);
	lineEditEleID->setValidator(validator);
	lineEditRivID->setValidator(validator);
	lineEditEleTime->setValidator(validator);
	lineEditRivTime->setValidator(validator);

	connect( pushButtonBrowse, SIGNAL( clicked() ), this, SLOT( browse() ) );
	connect( pushButtonPlot,   SIGNAL( clicked() ), this, SLOT( plot()   ) );
	connect( pushButtonHelp,   SIGNAL( clicked() ), this, SLOT( help()   ) );
	connect( pushButtonSavePlot, SIGNAL( clicked() ), this, SLOT( savePlot() ) );
}

void timeSeriesDlg::browse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose Model Output File", "~/","Text File(*.txt *.TXT);; NetCDF File(*.nc *.NC)");
        lineEditFileName->setText(str);
}
PlotTS *plotts;
void timeSeriesDlg::plot()
{
	double *xVal, *yVal;
	int dataCount;
	char plotTitle[100], xTitle[100], yTitle[100], legend[100];
 
	int METHOD =  0;	
	int TIME_STEP;
	int NUM_STEPS = 0;
	int id = 0;
	int featureIndex;
	int tabIndex;
	int variableIndex;
	QString fileName;
	ifstream inStream;

	int NUM_ELE = 0;
	int NUM_RIV = 0;

	tabIndex = tabWidget->currentIndex();	
	if(tabIndex == ELEMENT_FEATURE)
	{
		featureIndex = comboBoxEleFeature->currentIndex();
		if(featureIndex == 0){
			METHOD = 1;
			QString idString = lineEditEleID->text();
			id = idString.toInt();
		}
		if(featureIndex == 1){
			METHOD = 2;
		}
		if(featureIndex == 2){
			METHOD = 3;
		}

		TIME_STEP = ( lineEditEleTime->text() ).toInt();
		variableIndex = comboBoxEleVariable->currentIndex();
		fileName = lineEditFileName->text();

		if( fileName.endsWith("txt", Qt::CaseInsensitive) ){
			inStream.open(qPrintable(fileName));
			if(inStream == NULL){
				printf("Couldn't open File\n");
				exit(1);
			}
			string str;
			getline(inStream, str);
			//QString tmpStr = new QString((char *)str);
			//qWarning(qPrintable(str));
			int pos = 0;
			while( (pos = str.find('\t', pos+1)) != -1 ){
				NUM_ELE++;
			}
			cout<<NUM_ELE<<"\n";
			inStream.seekg(0, ios::beg);
			
			while(getline(inStream, str, '\n'))
				NUM_STEPS++;

			//inStream.seekg(0, ios::beg);			
			inStream.close();
			inStream.open(qPrintable(fileName));
			NUM_STEPS = NUM_STEPS / TIME_STEP + 1;
			
			cout<<"steps= "<<NUM_STEPS<<"\n";
			
			xVal = (double *)malloc((NUM_STEPS) * sizeof(double));
			yVal = (double *)malloc((NUM_STEPS) * sizeof(double));

			for(int i=0; i<NUM_STEPS; i++)
				yVal[i]=0.0;			
			dataCount=0;
			cout<<"Method= "<<METHOD<<"\n";
			int tmpCount=0;
			if(METHOD == 1){
				double temp;
				while(inStream){
					tmpCount++;
					for(int i=0; i<NUM_ELE; i++){
						inStream >> temp;
						if(i+1 == id){
							yVal[dataCount]+=temp/TIME_STEP;
						}
					}
					//cout<<tmpCount<<"\t"<<TIME_STEP<<"\t"<<tmpCount%TIME_STEP<<"\n";
					if(tmpCount%TIME_STEP == 0){
						xVal[dataCount]=dataCount;
						dataCount++;
						//cout<<"dataC= "<<dataCount<<"\n";
						tmpCount=0;
					}
				}
				dataCount--;
				char tempStr[50];
				sprintf(tempStr, "EleID = %d", id);
				if(variableIndex == 0){
					strcpy(plotTitle, "Interception Storage");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Head (meters)");
					strcpy(legend, tempStr);
				}
				if(variableIndex == 1){
					strcpy(plotTitle, "Saturated Zone");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Head (meters)");
					strcpy(legend, tempStr);
				}
				if(variableIndex == 2){
                                        strcpy(plotTitle, "Unsaturated Zone");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Head (meters)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 3){
                                        strcpy(plotTitle, "Surface Water");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Head (meters)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 4){
                                        strcpy(plotTitle, "Evaporation from Canopy");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean ET0");
                                }
				if(variableIndex == 5){
                                        strcpy(plotTitle, "ET1");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 6){
                                        strcpy(plotTitle, "ET2");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 7){
                                        strcpy(plotTitle, "Precipitation");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 8){
                                        strcpy(plotTitle, "Net Precipitation");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 9){
                                        strcpy(plotTitle, "Infiltration");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 10){
                                        strcpy(plotTitle, "Groundwater Recharge");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, tempStr);
                                }
			}
			else if(METHOD == 2){
				double temp;
				while(inStream){
					tmpCount++;
					for(int i=0; i<NUM_ELE; i++){
						inStream >> temp;
						yVal[dataCount]+=temp/(TIME_STEP*NUM_ELE);
					}
					if(tmpCount%TIME_STEP ==0){
						xVal[dataCount] = dataCount;
						dataCount++;
						tmpCount=0;
					}
				}
				dataCount--;
				if(variableIndex == 0){
					strcpy(plotTitle, "Interception Storage");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Head (meters)");
					strcpy(legend, "Mean Interception");
				}
				if(variableIndex == 1){
					strcpy(plotTitle, "Saturated Zone");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Head (meters)");
					strcpy(legend, "Mean");
				}
				if(variableIndex == 2){
                                        strcpy(plotTitle, "Unsaturated Zone");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Head (meters)");
                                        strcpy(legend, "Mean");
                                }
				if(variableIndex == 3){
                                        strcpy(plotTitle, "Surface Water");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Head (meters)");
                                        strcpy(legend, "Mean");
                                }
				if(variableIndex == 4){
                                        strcpy(plotTitle, "Evaporation from Canopy");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean ET0");
                                }
				if(variableIndex == 5){
                                        strcpy(plotTitle, "ET1");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean ET1");
                                }
				if(variableIndex == 6){
                                        strcpy(plotTitle, "ET2");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean ET2");
                                }
				if(variableIndex == 7){
                                        strcpy(plotTitle, "Precipitation");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean Precip");
                                }
				if(variableIndex == 8){
                                        strcpy(plotTitle, "Net Precipitation");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean Net Precip");
                                }
				if(variableIndex == 9){
                                        strcpy(plotTitle, "Infiltration");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean Infil");
                                }
				if(variableIndex == 10){
                                        strcpy(plotTitle, "Groundwater Recharge");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters/day)");
                                        strcpy(legend, "Mean Recharge");
                                }
			}
			else{
			
			}
		}
		else if( fileName.endsWith("nc", Qt::CaseInsensitive) ){

		}
		else{
			qWarning("File Type NOT Recognised\n");
		}
	}
	if(tabIndex == RIVER_FEATURE)
	{
		/*
		featureIndex = comboBoxRivFeature->currentIndex();
		if(featureIndex == 0){
			METHOD = 1;
			QString idString = lineEditRivID->text();
			id = idString.toInt();
		}
		if(featureIndex == 1){
			METHOD = 2;

		}
		if(featureIndex == 2){
			METHOD = 3;

		}
		*/
		featureIndex = comboBoxRivFeature->currentIndex();
		if(featureIndex == 0){
			METHOD = 1;
			QString idString = lineEditRivID->text();
			id = idString.toInt();
		}
		if(featureIndex == 1){
			METHOD = 2;
		}
		if(featureIndex == 2){
			METHOD = 3;
		}

		TIME_STEP = ( lineEditRivTime->text() ).toInt();
		variableIndex = comboBoxRivVariable->currentIndex();
		fileName = lineEditFileName->text();

		if( fileName.endsWith("txt", Qt::CaseInsensitive) ){
			inStream.open(qPrintable(fileName));
			if(inStream == NULL){
				printf("Couldn't open File\n");
				exit(1);
			}
			string str;
			getline(inStream, str);
			//QString tmpStr = new QString((char *)str);
			//qWarning(qPrintable(str));
			int pos = 0;
			while( (pos = str.find('\t', pos+1)) != -1 ){
				NUM_RIV++;
			}
			cout<<"NumRiv= "<<NUM_RIV<<"\n";
			inStream.seekg(0, ios::beg);
			
			while(getline(inStream, str, '\n'))
				NUM_STEPS++;

			//inStream.seekg(0, ios::beg);			
			inStream.close();
			inStream.open(qPrintable(fileName));
			NUM_STEPS = NUM_STEPS / TIME_STEP + 1;
			
			cout<<"steps= "<<NUM_STEPS<<"\n";
			
			xVal = (double *)malloc((NUM_STEPS) * sizeof(double));
			yVal = (double *)malloc((NUM_STEPS) * sizeof(double));

			for(int i=0; i<NUM_STEPS; i++)
				yVal[i]=0.0;			
			dataCount=0;
			cout<<"Method= "<<METHOD<<"\n";
			int tmpCount=0;
			if(METHOD == 1){
				double temp;
				while(inStream){
					tmpCount++;
					for(int i=0; i<NUM_RIV; i++){
						inStream >> temp;
						if(i+1 == id){
							yVal[dataCount]+=temp/TIME_STEP;
						}
					}
					//cout<<tmpCount<<"\t"<<TIME_STEP<<"\t"<<tmpCount%TIME_STEP<<"\n";
					if(tmpCount%TIME_STEP == 0){
						xVal[dataCount]=dataCount;
						dataCount++;
						//cout<<"dataC= "<<dataCount<<"\n";
						tmpCount=0;
					}
				}
				dataCount--;
				char tempStr[50];
				sprintf(tempStr, "RivID = %d", id);
				if(variableIndex == 0){
					strcpy(plotTitle, "Water Table");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Head (meters)");
					strcpy(legend, tempStr);
				}
				if(variableIndex == 1){
					strcpy(plotTitle, "Stream Inflow");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Rate (meters^3/day)");
					strcpy(legend, tempStr);
				}
				if(variableIndex == 2){
                                        strcpy(plotTitle, "Stream Outflow");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 3){
                                        strcpy(plotTitle, "Stream Baseflow");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 4){
                                        strcpy(plotTitle, "Stream Surface flux");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 5){
                                        strcpy(plotTitle, "Stream Baseflow Left");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 6){
                                        strcpy(plotTitle, "Stream Baseflow Right");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 7){
                                        strcpy(plotTitle, "Stream Surface flux Left");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
				if(variableIndex == 8){
                                        strcpy(plotTitle, "Stream Surface flux Right");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, tempStr);
                                }
			}
			else if(METHOD == 2){
				double temp;
				while(inStream){
					tmpCount++;
					for(int i=0; i<NUM_RIV; i++){
						inStream >> temp;
						yVal[dataCount]+=temp/(TIME_STEP*NUM_RIV);
					}
					if(tmpCount%TIME_STEP ==0){
						xVal[dataCount] = dataCount;
						dataCount++;
						tmpCount=0;
					}
				}
				dataCount--;
				if(variableIndex == 0){
					strcpy(plotTitle, "Water Table");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Head (meters)");
					strcpy(legend, "Mean Head");
				}
				if(variableIndex == 1){
					strcpy(plotTitle, "Stream Inflow");
					strcpy(xTitle, "Time");
					strcpy(yTitle, "Rate (meters^3/day)");
					strcpy(legend, "Mean Inflow");
				}
				if(variableIndex == 2){
                                        strcpy(plotTitle, "Stream Outflow");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean Outflow");
                                }
				if(variableIndex == 3){
                                        strcpy(plotTitle, "Stream Baseflow");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean Baseflow");
                                }
				if(variableIndex == 4){
                                        strcpy(plotTitle, "Stream Surface flux");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean Surface flux");
                                }
				if(variableIndex == 5){
                                        strcpy(plotTitle, "Stream Baseflow Left");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean flow");
                                }
				if(variableIndex == 6){
                                        strcpy(plotTitle, "Stream Baseflow Right");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean flow");
                                }
				if(variableIndex == 7){
                                        strcpy(plotTitle, "Stream Surface flux Left");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean flow");
                                }
				if(variableIndex == 8){
                                        strcpy(plotTitle, "Stream Surface flux Right");
                                        strcpy(xTitle, "Time");
                                        strcpy(yTitle, "Rate (meters^3/day)");
                                        strcpy(legend, "Mean flow");
                                }
			}
			else{
			
			}
		}
		else if( fileName.endsWith("nc", Qt::CaseInsensitive) ){

		}
		else{
			qWarning("File Type NOT Recognised\n");
		}
	}
/***********************************************************************************/
	//cout<<"dataCount= "<<dataCount<<"\n";
	plotts = new PlotTS(plotTitle, xTitle, yTitle, legend, xVal, yVal, dataCount);	
	QPalette palette;
	palette.setColor(QPalette::Background, Qt::white);
	plotts->setPalette(palette);

	plotts->resize(600, 400);
	plotts->show();
/***********************************************************************************/
}

void timeSeriesDlg::savePlot()
{
	//QPalette palette;
        //palette.setColor(QPalette::Background, Qt::blue);
        //plotts->setPalette(palette);
	QPixmap *image;
	QwtPlotCanvas *canvas;
	canvas = (QwtPlotCanvas *) plotts->canvas();
	image = canvas->paintCache();
	image->save("test.jpg", "JPG");
	

}

void timeSeriesDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this);
        hlpDlg->show();
}
