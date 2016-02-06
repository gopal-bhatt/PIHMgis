#include <QtGui>
#include "attfile.h"

#include <iomanip>
#include <fstream>
using namespace std;

#include "../../pihmLIBS/pickGridValue.h"
#include "../../pihmLIBS/shapefil.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"

attFileDlg::attFileDlg(QWidget *parent)
{
	setupUi(this);
	connect(TINPushButton, SIGNAL(clicked()), this, SLOT(tinBrowse()));
	connect(PrecipPushButton, SIGNAL(clicked()), this, SLOT(precipBrowse()));
	connect(TempPushButton, SIGNAL(clicked()), this, SLOT(tempBrowse()));
	connect(HumidPushButton, SIGNAL(clicked()), this, SLOT(humidBrowse()));
	connect(WindPushButton, SIGNAL(clicked()), this, SLOT(windBrowse()));
	connect(GPushButton, SIGNAL(clicked()), this, SLOT(gBrowse()));
	connect(RnPushButton, SIGNAL(clicked()), this, SLOT(rnBrowse()));
	connect(PPushButton, SIGNAL(clicked()), this, SLOT(pBrowse()));
	connect(SoilPushButton, SIGNAL(clicked()), this, SLOT(soilBrowse()));
	connect(GeolPushButton, SIGNAL(clicked()), this, SLOT(geolBrowse()));
	connect(MFPushButton, SIGNAL(clicked()), this, SLOT(mfBrowse()));
        connect(MPPushButton, SIGNAL(clicked()), this, SLOT(mpBrowse()));
	connect(LCPushButton, SIGNAL(clicked()), this, SLOT(lcBrowse()));
	connect(ISICPushButton, SIGNAL(clicked()), this, SLOT(isICBrowse()));
	connect(SnowICPushButton, SIGNAL(clicked()), this, SLOT(snowICBrowse()));
	connect(OverlandICPushButton, SIGNAL(clicked()), this, SLOT(overlandICBrowse()));
	connect(UnSatICPushButton, SIGNAL(clicked()), this, SLOT(unsatICBrowse()));
	connect(SatICPushButton, SIGNAL(clicked()), this, SLOT(satICBrowse()));
	connect(BCPushButton, SIGNAL(clicked()), this, SLOT(bcBrowse()));
	connect(SourcePushButton, SIGNAL(clicked()), this, SLOT(sourceBrowse()));
	connect(attFilePushButton, SIGNAL(clicked()), this, SLOT(attBrowse()));

	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

void attFileDlg::tinBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","Shape File(*.shp *.SHP)");
        TINLineEdit->setText(str);
}

void attFileDlg::precipBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        PrecipLineEdit->setText(str);
}

void attFileDlg::tempBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        TempLineEdit->setText(str);
}

void attFileDlg::humidBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        HumidLineEdit->setText(str);
}

void attFileDlg::windBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        WindLineEdit->setText(str);
}

void attFileDlg::gBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        GLineEdit->setText(str);
}

void attFileDlg::rnBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        RnLineEdit->setText(str);
}

void attFileDlg::pBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        PLineEdit->setText(str);
}

void attFileDlg::soilBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        SoilLineEdit->setText(str);
}

void attFileDlg::geolBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        GeolLineEdit->setText(str);
}

void attFileDlg::mfBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        MFLineEdit->setText(str);
}


void attFileDlg::mpBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        MPLineEdit->setText(str);
}

void attFileDlg::lcBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        LCLineEdit->setText(str);
}

void attFileDlg::isICBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        ISICLineEdit->setText(str);
}

void attFileDlg::snowICBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        SnowICLineEdit->setText(str);
}

void attFileDlg::overlandICBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        OverlandICLineEdit->setText(str);
}

void attFileDlg::unsatICBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        UnSatICLineEdit->setText(str);
}

void attFileDlg::satICBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        SatICLineEdit->setText(str);
}

void attFileDlg::bcBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        BCLineEdit->setText(str);
}

void attFileDlg::sourceBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","File(*.adf *.ADF)");
        SourceLineEdit->setText(str);
}

void attFileDlg::attBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/","att File(*.att *.ATT)");
	QString tmp = temp;
	if(!(tmp.toLower()).endsWith(".att")){
        	tmp.append(".att");
        	temp = tmp;
        }
	attFileLineEdit->setText(temp);	
}

void attFileDlg::run()
{

	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        textBrowser11->setSource(logFileName);
        textBrowser11->setFocus();
        textBrowser11->setModified(TRUE);

	ifstream inFile;
        ofstream outFile;

        outFile.open(qPrintable((attFileLineEdit->text())), ios::out);

	int runFlag = 1;

	inFile.open(qPrintable((TINLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((TINLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input TIN Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((TINLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();
        


	inFile.open(qPrintable((PrecipLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((PrecipLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Precip. Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((PrecipLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((TempLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((TempLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Temp. Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((TempLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((HumidLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((HumidLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Humid. Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((HumidLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((WindLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((WindLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Wind Vel. Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((WindLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((GLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((GLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input G Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((GLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((RnLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((RnLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Rn Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((RnLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((PLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((PLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input P Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((PLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((SoilLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((SoilLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Soil Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((SoilLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


        inFile.open(qPrintable((GeolLineEdit->text())));
        log.open(qPrintable(logFileName), ios::app);
        if((GeolLineEdit->text()).length()==0){
                log<<"<p><font size=3 color=red> Error! Please input Geology Input File</p>";
                runFlag = 0;
        }
        else{
                log<<"<p>Checking... "<<qPrintable((GeolLineEdit->text()))<<"... ";
                if(inFile == NULL){
                        log<<"<font size=3 color=red> Error!</p>";
                        //qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
                        runFlag = 0;
                }
                else
                        log<<"Done!</p>";
        }
        log.close();
        textBrowser11->reload();
        QApplication::processEvents();
        inFile.close();


	inFile.open(qPrintable((MFLineEdit->text())));
        log.open(qPrintable(logFileName), ios::app);
        if((MFLineEdit->text()).length()==0){
                log<<"<p><font size=3 color=red> Error! Please input Melt Factor Input File</p>";
                runFlag = 0;
        }
        else{
                log<<"<p>Checking... "<<qPrintable((MFLineEdit->text()))<<"... ";
                if(inFile == NULL){
                        log<<"<font size=3 color=red> Error!</p>";
                        //qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
                        runFlag = 0;
                }
                else
                        log<<"Done!</p>";
        }
        log.close();
        textBrowser11->reload();
        QApplication::processEvents();
        inFile.close();


        inFile.open(qPrintable((MPLineEdit->text())));
        log.open(qPrintable(logFileName), ios::app);
        if((MPLineEdit->text()).length()==0){
                log<<"<p><font size=3 color=red> Error! Please input Macropore Input File</p>";
                runFlag = 0;
        }
        else{
                log<<"<p>Checking... "<<qPrintable((MPLineEdit->text()))<<"... ";
                if(inFile == NULL){
                        log<<"<font size=3 color=red> Error!</p>";
                        //qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
                        runFlag = 0;
                }
                else
                        log<<"Done!</p>";
        }
        log.close();
        textBrowser11->reload();
        QApplication::processEvents();
        inFile.close();


	inFile.open(qPrintable((LCLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((LCLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input LC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((LCLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((ISICLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((ISICLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Interception IC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((ISICLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((SnowICLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((SnowICLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Snow IC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((SnowICLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((OverlandICLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((OverlandICLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Overland IC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((OverlandICLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((UnSatICLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((UnSatICLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input UnSat IC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((UnSatICLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((SatICLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((SatICLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Sat IC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((SatICLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((BCLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((BCLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input BC Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((BCLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	inFile.open(qPrintable((SourceLineEdit->text())));
	log.open(qPrintable(logFileName), ios::app);
	if((SourceLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Source Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((SourceLineEdit->text()))<<"... ";
		if(inFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();
	inFile.close();


	log.open(qPrintable(logFileName), ios::app);
	if((attFileLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .att Output File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((attFileLineEdit->text()))<<"... ";
		if(outFile == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			qWarning("\nCan not open output file name");
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	textBrowser11->reload();
	QApplication::processEvents();


/*
	file.open((TINLineEdit->text()).ascii(), ios::in);
	if(file==NULL){
        	qWarning("\n%s doesn't exist!", (TINLineEdit->text()).ascii());
	        runFlag=0;
        }
	file.close();

	file.open((PrecipLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (PrecipLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((TempLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (TempLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((HumidLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (HumidLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((WindLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (WindLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((GLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (GLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((RnLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (RnLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((PLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (PLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((SoilLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (SoilLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

        file.open((GeolLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (GeolLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((MFLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (MFLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

        file.open((MPLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (MPLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((LCLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (LCLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((ISICLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (ISICLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((SnowICLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (SnowICLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((OverlandICLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (OverlandICLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((UnSatICLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (UnSatICLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((SatICLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (SatICLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((BCLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (BCLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

	file.open((SourceLineEdit->text()).ascii(), ios::in);
        if(file==NULL){
                qWarning("\n%s doesn't exist!", (SourceLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();

        if(att==NULL){
                qWarning("\n%s doesn't exist!", (attFileLineEdit->text()).ascii());
                runFlag=0;
        }
        file.close();
*/


	
	if(runFlag == 1){

		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Running...";
		log.close();
		textBrowser11->reload();
		QApplication::processEvents();

		SHPHandle shp = SHPOpen(qPrintable((TINLineEdit->text())), "rb");
                QString dbfFile(TINLineEdit->text());
                //int slashPos = dbfFile.findRev(".");
                //dbfFile.truncate(slashPos);
		dbfFile=dbfFile.section('.', 0, -2);
                dbfFile.append(".dbf");
                DBFHandle dbf = DBFOpen(qPrintable(dbfFile), "rb");
                int recordCount = DBFGetRecordCount(dbf);
                SHPObject *obj;
                ofstream att;
                att.open(qPrintable((attFileLineEdit->text())), ios::out);

                GDALDataset *precip, *temp, *humidity, *wind, *G, *Rn, *pressure, *soil, *geol, *mf, *mp, *LAI, *ISIC, *SnowIC, *OverlandIC, *UnSatIC, *SatIC, *BC, *source;
                double precipRanges[6], tempRanges[6], humidityRanges[6], windRanges[6], GRanges[6], RnRanges[6], pressureRanges[6], soilRanges[6], geolRanges[6], mfRanges[6], mpRanges[6], LAIRanges[6], ISICRanges[6], SnowICRanges[6], OverlandICRanges[6], UnSatICRanges[6], SatICRanges[6], BCRanges[6], sourceRanges[6];

                GDALAllRegister();
                precip     = (GDALDataset *)GDALOpen(qPrintable((PrecipLineEdit->text())), GA_ReadOnly);
                temp       = (GDALDataset *)GDALOpen(qPrintable((TempLineEdit->text())), GA_ReadOnly);
                humidity   = (GDALDataset *)GDALOpen(qPrintable((HumidLineEdit->text())), GA_ReadOnly);
                wind       = (GDALDataset *)GDALOpen(qPrintable((WindLineEdit->text())), GA_ReadOnly);
                G          = (GDALDataset *)GDALOpen(qPrintable((GLineEdit->text())), GA_ReadOnly);
                Rn         = (GDALDataset *)GDALOpen(qPrintable((RnLineEdit->text())), GA_ReadOnly);
                pressure   = (GDALDataset *)GDALOpen(qPrintable((PLineEdit->text())), GA_ReadOnly);
                soil       = (GDALDataset *)GDALOpen(qPrintable((SoilLineEdit->text())), GA_ReadOnly);
		geol       = (GDALDataset *)GDALOpen(qPrintable((GeolLineEdit->text())), GA_ReadOnly);
		mf         = (GDALDataset *)GDALOpen(qPrintable((MFLineEdit->text())), GA_ReadOnly);
		mp         = (GDALDataset *)GDALOpen(qPrintable((MPLineEdit->text())), GA_ReadOnly);
                LAI        = (GDALDataset *)GDALOpen(qPrintable((LCLineEdit->text())), GA_ReadOnly);
                ISIC       = (GDALDataset *)GDALOpen(qPrintable((ISICLineEdit->text())), GA_ReadOnly);
		SnowIC     = (GDALDataset *)GDALOpen(qPrintable((SnowICLineEdit->text())), GA_ReadOnly);
		OverlandIC = (GDALDataset *)GDALOpen(qPrintable((OverlandICLineEdit->text())), GA_ReadOnly);
		UnSatIC    = (GDALDataset *)GDALOpen(qPrintable((UnSatICLineEdit->text())), GA_ReadOnly);
		SatIC      = (GDALDataset *)GDALOpen(qPrintable((SatICLineEdit->text())), GA_ReadOnly);
                BC         = (GDALDataset *)GDALOpen(qPrintable((BCLineEdit->text())), GA_ReadOnly);
                source     = (GDALDataset *)GDALOpen(qPrintable((SourceLineEdit->text())), GA_ReadOnly);

                getExtent(precip, precipRanges);
                getExtent(temp, tempRanges);
                getExtent(humidity, humidityRanges);
                getExtent(wind, windRanges);
                getExtent(G, GRanges);
                getExtent(Rn, RnRanges);
                getExtent(pressure, pressureRanges);
                getExtent(soil, soilRanges);
		getExtent(geol, geolRanges);
		getExtent(mf,   mfRanges);
		getExtent(mp,   mpRanges);
                getExtent(LAI,  LAIRanges);
                getExtent(ISIC, ISICRanges);
		getExtent(SnowIC, SnowICRanges);
		getExtent(OverlandIC, OverlandICRanges);
		getExtent(UnSatIC, UnSatICRanges);
		getExtent(SatIC, SatICRanges);
                getExtent(BC, BCRanges);
                getExtent(source, sourceRanges);

		double X, Y;
                int val;
                double valD;
                if(CentroidRadioButton->isChecked() == TRUE){
                        for(int i=0; i<recordCount; i++){
                                obj = SHPReadObject(shp, i);

                                X = (obj->padfX[0]+obj->padfX[1]+obj->padfX[2])/3;
                                Y = (obj->padfY[0]+obj->padfY[1]+obj->padfY[2])/3;

                                att<<i+1<<"\t";
                                val = (int) getRasterValue(soil,     1, X, Y, soilRanges);
                                att<<val<<"\t";
				val = (int) getRasterValue(geol,     1, X, Y, geolRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(LAI,      1, X, Y, LAIRanges);
                                att<<val<<"\t";
                                valD =  getRasterValue(ISIC,       1, X, Y, ISICRanges);
                                att<<valD<<"\t";
				valD =  getRasterValue(SnowIC,       1, X, Y, SnowICRanges);
                                att<<valD<<"\t";
				valD =  getRasterValue(OverlandIC,       1, X, Y, OverlandICRanges);
                                att<<valD<<"\t";
				valD =  getRasterValue(UnSatIC,       1, X, Y, UnSatICRanges);
                                att<<valD<<"\t";
				valD =  getRasterValue(SatIC,       1, X, Y, SatICRanges);
                                att<<valD<<"\t";
                                //val = (int) getRasterValue(BC,       1, X, Y, BCRanges); //TODO: How to Deal BC
                                //val = 0; // TODO: to be replaced
                                //val = (int) getRasterValue(BC,       1, X, Y, BCRanges); //TODO: How to Deal BC
                                //att<<val<<"\t";
                                val = (int) getRasterValue(precip,   1, X, Y, precipRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(temp,     1, X, Y, tempRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(humidity, 1, X, Y, humidityRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(wind,     1, X, Y, windRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(Rn,       1, X, Y, RnRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(G,        1, X, Y, GRanges);
                                att<<val<<"\t";
                                val = (int) getRasterValue(pressure, 1, X, Y, pressureRanges);
                                att<<val<<"\t";
				//val = (int) getRasterValue(source,   1, X, Y, sourceRanges); //TODO: DEAL TWO CASES: SHARED WITH TRIANGLES & INSIDE A TRIANGLE
                                                //TODO : USE SHAPE FILE FOR SOURCE/SINK INFORMATION - DETERMINE IN WHICH TRIANGLE THAT SOURCE/SINK POINT LIES
                                val = 0; // TODO: to be replaced
                                att<<val<<"\t";
				val = (int) getRasterValue(mf, 1, X, Y, mfRanges);
                                att<<val<<"\t";
				val = 0;
				att<<val<<"\t"; //BC1  TODO : FIGURE OUT WAY TO TRANSFER INFORMATION ABOUT BOUNDARY CONDITION ACROSS THE EDGE
				att<<val<<"\t"; //BC2
				att<<val<<"\t";	//BC3
                                val = (int) getRasterValue(mp,   1, X, Y, mpRanges);
                                att<<val<<"\n";
                        }

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		textBrowser11->reload();
		QApplication::processEvents();


                }
                else if(OrthoRadioButton->isChecked() == TRUE){

			log.open(qPrintable(logFileName), ios::app);
			log<<"</p><p><font size=3 color=red>Caution: Not yet implemented!</p>";
			log.close();
			textBrowser11->reload();
			QApplication::processEvents();	

                        qWarning("Ortho Radio Button: Not yet implemented\n");
                }
		else if(EleRadioButton->isChecked() == TRUE){

			log.open(qPrintable(logFileName), ios::app);
			log<<"</p><p><font size=3 color=red>Caution: Not yet implemented!</p>";
			log.close();
			textBrowser11->reload();
			QApplication::processEvents();

                        qWarning("Ele Radio Button: Not yet implimented\n");
                }

        }
}
			
void attFileDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Att File", 1, "helpFiles/attfile.html", "Help :: Att File");
	hlpDlg->show();	
}
