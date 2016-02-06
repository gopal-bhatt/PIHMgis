#include <QtGui>
#include "rivfile.h"

#include <iomanip>

#include <fstream>
using namespace std;

#include "../../pihmLIBS/extractRiver4mTIN.h"
#include "../../pihmLIBS/addFID.h"
#include "../../pihmLIBS/addToFromNode.h"
#include "../../pihmLIBS/addSOrder.h"
#include "../../pihmLIBS/calDownSegment.h"

#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/shapefil.h"

rivFileDlg::rivFileDlg(QWidget *parent)
{
	setupUi(this);
	connect(riverFileButton, SIGNAL(clicked()), this, SLOT(riverBrowse()));
	connect(eleFileButton, SIGNAL(clicked()), this, SLOT(eleBrowse()));
	connect(nodeFileButton, SIGNAL(clicked()), this, SLOT(nodeBrowse()));
	connect(neighFileButton, SIGNAL(clicked()), this, SLOT(neighBrowse()));
	connect(rivFileButton, SIGNAL(clicked()), this, SLOT(rivBrowse()));
	connect(runButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

void rivFileDlg::riverBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","shp File(*.shp *.SHP)");
        riverLineEdit->setText(str);
}


void rivFileDlg::eleBrowse()
{
	QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","ele File(*.ele *.ELE)");
	eleLineEdit->setText(str);
}

void rivFileDlg::nodeBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","node File(*.node *.NODE)");
        nodeLineEdit->setText(str);
}

void rivFileDlg::neighBrowse()
{
        QString str = QFileDialog::getOpenFileName(this, "Choose File", "~/","neigh File(*.neigh *.NEIGH)");
        neighLineEdit->setText(str);
}


void rivFileDlg::rivBrowse()
{
	QString temp = QFileDialog::getSaveFileName(this, "Choose File", "~/", "riv File(*.riv *RIV)");
        QString tmp  = temp;
        if(!(tmp.toLower()).endsWith(".riv")){
                tmp.append(".riv");
                temp = tmp;
        }
        rivLineEdit->setText(temp);
}

void rivFileDlg::run()
{

	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        messageLog->setSource(logFileName);
        messageLog->setFocus();
        messageLog->setModified(TRUE);

	ifstream ele, node, neigh, river;
        ofstream riv;

        ele.open(qPrintable((eleLineEdit->text())));
        node.open(qPrintable((nodeLineEdit->text())));
        neigh.open(qPrintable((neighLineEdit->text())));
        river.open(qPrintable((riverLineEdit->text())));

        riv.open(qPrintable((rivLineEdit->text())), ios::out);

	int runFlag = 1;

	log.open(qPrintable(logFileName), ios::app);
	if((eleLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .ele Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((eleLineEdit->text()))<<"... ";
		if(ele == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	if((nodeLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .node Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((nodeLineEdit->text()))<<"... ";
		if(node == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

	
	log.open(qPrintable(logFileName), ios::app);
	if((neighLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .neigh Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((neighLineEdit->text()))<<"... ";
		if(neigh == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	if((riverLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Split River File File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((riverLineEdit->text()))<<"... ";
		if(river == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\n%s doesn't exist!", (inputFileLineEdit->text()).ascii());
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();


	log.open(qPrintable(logFileName), ios::app);
	if((rivLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Output River File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<qPrintable((rivLineEdit->text()))<<"... ";
		if(riv == NULL){
			log<<"<font size=3 color=red> Error!</p>";
			//qWarning("\nCan not open output file name");
			runFlag = 0;
		}
		else
			log<<"Done!</p>";
	}
	log.close();
	messageLog->reload();
	QApplication::processEvents();

/*
        if(ele==NULL){
        	qWarning("\n%s doesn't exist!", (eleLineEdit->text()).ascii());
	        runFlag=0;
        }
	if(node==NULL){
                qWarning("\n%s doesn't exist!", (nodeLineEdit->text()).ascii());
                runFlag=0;
        }
	if(neigh==NULL){
                qWarning("\n%s doesn't exist!", (neighLineEdit->text()).ascii());
                runFlag=0;
        }
	if(river==NULL){
                qWarning("\n%s doesn't exist!", (riverLineEdit->text()).ascii());
                runFlag=0;
        }
	if(riv==NULL){
                qWarning("\nPlease Enter .riv file name");
                runFlag=0;
        }
*/
	if(runFlag == 1){

				


		QString shpFileName(qPrintable((riverLineEdit->text())));
	        QString dbfFileName(shpFileName);
        	        dbfFileName.truncate(dbfFileName.length()-3);
                	dbfFileName.append("dbf");
      		
		QString newshp(shpFileName);
		QString newdbf(shpFileName);
	
  		//int slashPos = newshp.findRev("/");
		//newshp.truncate(slashPos);
		//newdbf.truncate(slashPos);
		newshp=newshp.section('/',0,-2);
		newdbf=newdbf.section('/',0,-2);
		
		newshp.append("/temp.shp");
		newdbf.append("/temp.dbf");

		qWarning("\n%s", qPrintable(newshp));
		qWarning("\n%s", qPrintable(newdbf)); 	
	
		QString eleFileName(qPrintable((eleLineEdit->text())));
        	QString nodeFileName(qPrintable((nodeLineEdit->text())));
        	QString neighFileName(qPrintable((neighLineEdit->text())));
		
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Extracting River from TIN (MESH)...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();
		
        	extractRiver4mTIN(qPrintable(shpFileName),qPrintable(dbfFileName),qPrintable(eleFileName),qPrintable(nodeFileName),qPrintable(neighFileName), qPrintable(newshp), qPrintable(newdbf));
		
		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();


		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Adding FID...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();
 
        	addFID(qPrintable(newdbf));

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Computing To and From Node information...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

        	addToFromNode(qPrintable(newdbf), qPrintable(newshp));
        	
		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Computing Stream Order...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		addSOrder(qPrintable(newdbf), qPrintable(newshp));

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Calculating Down Segments...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

        	calDownSegment(qPrintable(newdbf));

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(qPrintable(logFileName), ios::app);
		log<<"<p>Writing .riv file...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();


		DBFHandle dbf = DBFOpen(qPrintable(newdbf), "rb");

		int fid         = DBFGetFieldIndex(dbf, "FID");
		int fromTriNode = DBFGetFieldIndex(dbf, "FromTriNode");
		int toTriNode   = DBFGetFieldIndex(dbf, "ToTriNode");
		int downSeg     = DBFGetFieldIndex(dbf, "DownSegmt");
		int leftEle     = DBFGetFieldIndex(dbf, "LeftEle");
		int rightEle    = DBFGetFieldIndex(dbf, "RightEle");
		int order       = DBFGetFieldIndex(dbf, "S_Order");

		int totCount = DBFGetRecordCount(dbf);
		riv<<totCount<<"\n";
		int orderVal;
		int maxOrder = -1;
		for (int c=0; c<totCount; c++){
			riv<<DBFReadIntegerAttribute(dbf, c, fid)        <<"\t";
			riv<<DBFReadIntegerAttribute(dbf, c, fromTriNode)<<"\t";
			riv<<DBFReadIntegerAttribute(dbf, c, toTriNode)  <<"\t";
			riv<<DBFReadIntegerAttribute(dbf, c, downSeg)    <<"\t";
			riv<<DBFReadIntegerAttribute(dbf, c, leftEle)    <<"\t";
			riv<<DBFReadIntegerAttribute(dbf, c, rightEle)   <<"\t";
			orderVal = DBFReadIntegerAttribute(dbf, c, order);
			riv<<orderVal                                    <<"\t"; //Shape
			riv<<orderVal                                    <<"\t"; //Material
			riv<<orderVal                                    <<"\t"; //IC
			riv<<"0"                                         <<"\t"; //BC
			riv<<"0"                                         <<"\n"; //Res
			
			if(maxOrder < orderVal)
				maxOrder = orderVal;
		}
		riv<<"Shape\t"   <<maxOrder<<"\n";
		riv<<"Material\t"<<maxOrder<<"\n";
		riv<<"IC\t"      <<maxOrder<<"\n";
		riv<<"BC\t"      <<"0"     <<"\n";
		riv<<"RES\t"     <<"0"     <<"\n";
		

		log.open(qPrintable(logFileName), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

	}
	riv.close();

	log.open(qPrintable(logFileName), ios::app);
	log<<"<p><font size=3 color=red>Note: Please add SHAPE, MATERIAL, INITIAL AND BOUNDARY CONDITION at the end of the .riv file MANUALLY</p>";
	log.close();
	messageLog->reload();
	QApplication::processEvents();

}
			
void rivFileDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Riv File", 1, "helpFiles/rivfile.html", "Help :: Riv File");
	hlpDlg->show();	
}
