#include <QtGui>

#include <iostream>
#include <fstream>
#include "timeseries.h"
#include "plotTS.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

#include "../../pihmLIBS/fileStruct.h"

#include <qwt_plot_canvas.h>
#include <qwt_magnifier.h>

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

        QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();

        int scale=(readLineNumber(qPrintable(projFile), 110)).toInt();
        int step=(readLineNumber(qPrintable(projFile), 106)).toInt();
        comboBox->setCurrentIndex(scale);
        comboBox_2->setCurrentIndex(scale);
        step= scale==0? step : scale==1? step/60 : step/1440;
        lineEditEleTime->setText(QString::number(step, 10));

        step=(readLineNumber(qPrintable(projFile), 109)).toInt();
        step= scale==0? step : scale==1? step/60 : step/1440;
        lineEditRivTime->setText(QString::number(step,10));
}

void timeSeriesDlg::browse()
{
	QString projDir, projFile;
        QFile tFile("project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        tin>>projDir;
        tin>>projFile;
        tFile.close();
        cout <<"\nTS1 "<< qPrintable(projDir) <<"\n";

        //QDir::setCurrent(projDir);
        QString folder = QFileDialog::getExistingDirectory(this, "Choose Input Directory", projDir);
	folder=folder+"/"+readLineNumber(qPrintable(projFile), 50);
	if(tabWidget->currentIndex()== ELEMENT_FEATURE)
        {
                int featureIndex = comboBoxEleFeature->currentIndex();
                if(featureIndex == 0)
			folder=folder+".is.txt";
		if(featureIndex == 1)
			folder=folder+".GW.txt";
		if(featureIndex == 2)
                        folder=folder+".unsat.txt";
		if(featureIndex == 3)
                        folder=folder+".surf.txt";
		if(featureIndex == 4)
                        folder=folder+".et0.txt";
		if(featureIndex == 5)
                        folder=folder+".et1.txt";
		if(featureIndex == 6)
                        folder=folder+".et2.txt";
		if(featureIndex == 7)
                        folder=folder+".Rech.txt";
	}
	if(tabWidget->currentIndex()== RIVER_FEATURE)
        {
                int featureIndex = comboBoxRivFeature->currentIndex();
                if(featureIndex == 0) // head
                        folder=folder+".stage.txt";
                if(featureIndex == 1) // inflow
                        folder=folder+".rivFlx0.txt";
                if(featureIndex == 2) //outflow
                        folder=folder+".rivFlx1.txt";
                if(featureIndex == 3) //baseflow
                        folder=folder+".rivFlx4.txt";
                if(featureIndex == 4) // surf flow
                        folder=folder+".rivFlx2.txt";
                if(featureIndex == 5) // base left
                        folder=folder+".rivFlx4.txt";
                if(featureIndex == 6) // base right
                        folder=folder+".rivFlx5.txt";
                if(featureIndex == 7) // surf left
                        folder=folder+".rivFlx2.txt";
                if(featureIndex == 8) // surf right
                        folder=folder+".rivFlx3.txt";
                /*
                if(featureIndex == 0)
                        folder=folder+".stage.txt";
		if(featureIndex == 1)
                        folder=folder+".rivFlx0.txt";
		if(featureIndex == 2)
                        folder=folder+".rivFlx1.txt";
		if(featureIndex == 3)
                        folder=folder+".rivFlx4.txt";
		if(featureIndex == 4)
                        folder=folder+".rivFlx2.txt";*/
	}
	//QString str = QFileDialog::getOpenFileName(this, "Choose Model Output File", "~/","Text File(*.txt *.TXT);; NetCDF File(*.nc *.NC)");

        lineEditFileName->setText(folder);
}
PlotTS *plotts;
void timeSeriesDlg::plot()
{
    QString projDir, projFile;
    QFile tFile("project.txt");
    tFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream tin(&tFile);
    tin>>projDir;
    tin>>projFile;
    tFile.close();
    cout <<"\nTS "<< qPrintable(projDir) <<"\n";
   cout<<"F Name= "<<qPrintable(projFile)<<"\n";

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
                cout<<"here 1\n";
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
                cout<<"here 2\n";
		TIME_STEP = ( lineEditEleTime->text() ).toInt();
                int scale = comboBox->currentIndex();
                TIME_STEP = scale==0? TIME_STEP : scale==1 ? TIME_STEP*60 : TIME_STEP*1440;

                cout<<"Time Step a = "<<TIME_STEP<<"\n";
		variableIndex = comboBoxEleVariable->currentIndex();
                cout<<"here 3\n" << "variableIndex = " <<variableIndex <<"\n";
		cout<<"F Name= "<<qPrintable(projFile)<<"\n";
                cout<<"4m file= "<<qPrintable(readLineNumber(qPrintable(projFile), 101))<<"\n";
                cout<<"Int= "<<(readLineNumber(qPrintable(projFile), 101)).toInt()<<"\n"; getchar(); getchar();
                if(variableIndex==0) // intercep
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 106)).toInt());
                if(variableIndex==1) // sat
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 101)).toInt());
                if(variableIndex==2) // unsat
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 107)).toInt());
                if(variableIndex==3) // surf
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 102)).toInt());
                if(variableIndex==4) // et0
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 108)).toInt());
                if(variableIndex==5) // et1
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 108)).toInt());
                if(variableIndex==6) // et2
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 108)).toInt());
                if(variableIndex==7) // precip
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 101)).toInt());
                if(variableIndex==8) // net precip
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 101)).toInt());
                if(variableIndex==9) // infil
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 101)).toInt());
                if(variableIndex==10) // recharge
                    TIME_STEP = (int) (TIME_STEP / (readLineNumber(qPrintable(projFile), 105)).toInt());
                cout<<"here 4\n";
                cout<<"Time Step b = "<<TIME_STEP<<"\n"; getchar(); getchar();

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
			cout<<"NUM_ELE= "<<NUM_ELE<<"\n";
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
                                                xVal[dataCount]=dataCount*(lineEditEleTime->text()).toInt();
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
                                                xVal[dataCount] = dataCount*(lineEditEleTime->text()).toInt();
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
                int scale = comboBox_2->currentIndex();
                TIME_STEP = scale==0? TIME_STEP : scale==1 ? TIME_STEP*60 : TIME_STEP*1440;

		variableIndex = comboBoxRivVariable->currentIndex();
                if(variableIndex == 0)
                    TIME_STEP = TIME_STEP / (readLineNumber(qPrintable(projFile), 104)).toInt();
                else
                    TIME_STEP = TIME_STEP / (readLineNumber(qPrintable(projFile), 109)).toInt();

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
                                                xVal[dataCount]=dataCount*(lineEditRivTime->text()).toInt();
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
                                                xVal[dataCount] = dataCount*(lineEditRivTime->text()).toInt();
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

void timeSeriesDlg::on_comboBoxEleVariable_currentIndexChanged(int index)
{
    QString folder = lineEditFileName->text();
    folder.truncate(folder.lastIndexOf(".",folder.length()-5));
    if(index == 0)
            folder=folder+".is.txt";
    if(index == 1)
            folder=folder+".GW.txt";
    if(index == 2)
            folder=folder+".unsat.txt";
    if(index == 3)
            folder=folder+".surf.txt";
    if(index == 4)
            folder=folder+".et0.txt";
    if(index == 5)
            folder=folder+".et1.txt";
    if(index == 6)
            folder=folder+".et2.txt";
    if(index == 7)
            folder=folder+".Rech.txt";
        lineEditFileName->setText(folder);
}

void timeSeriesDlg::on_comboBoxRivVariable_currentIndexChanged(int index)
{
    QString folder = lineEditFileName->text();
    folder.truncate(folder.lastIndexOf(".",folder.length()-5));
    if(index == 0) // head
            folder=folder+".stage.txt";
    if(index == 1) // inflow
            folder=folder+".rivFlx0.txt";
    if(index == 2) //outflow
            folder=folder+".rivFlx1.txt";
    if(index == 3) //baseflow
            folder=folder+".rivFlx4.txt";
    if(index == 4) // surf flow
            folder=folder+".rivFlx2.txt";
    if(index == 5) // base left
            folder=folder+".rivFlx4.txt";
    if(index == 6) // base right
            folder=folder+".rivFlx5.txt";
    if(index == 7) // surf left
            folder=folder+".rivFlx2.txt";
    if(index == 8) // surf right
            folder=folder+".rivFlx3.txt";

    lineEditFileName->setText(folder);
}
