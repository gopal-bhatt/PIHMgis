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
        if(!(tmp.lower()).endsWith(".riv")){
                tmp.append(".riv");
                temp = tmp;
        }
        rivLineEdit->setText(temp);
}

void rivFileDlg::run()
{

	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(logFileName.ascii());
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        messageLog->setSource(logFileName);
        messageLog->setFocus();
        messageLog->setModified(TRUE);

	ifstream ele, node, neigh, river;
        ofstream riv;

        ele.open((eleLineEdit->text()).ascii());
        node.open((nodeLineEdit->text()).ascii());
        neigh.open((neighLineEdit->text()).ascii());
        river.open((riverLineEdit->text()).ascii());

        riv.open((rivLineEdit->text()).ascii(), ios::out);

	int runFlag = 1;

	log.open(logFileName.ascii(), ios::app);
	if((eleLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .ele Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<(eleLineEdit->text()).ascii()<<"... ";
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


	log.open(logFileName.ascii(), ios::app);
	if((nodeLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .node Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<(nodeLineEdit->text()).ascii()<<"... ";
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

	
	log.open(logFileName.ascii(), ios::app);
	if((neighLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input .neigh Input File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<(neighLineEdit->text()).ascii()<<"... ";
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


	log.open(logFileName.ascii(), ios::app);
	if((riverLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Split River File File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<(riverLineEdit->text()).ascii()<<"... ";
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


	log.open(logFileName.ascii(), ios::app);
	if((rivLineEdit->text()).length()==0){
		log<<"<p><font size=3 color=red> Error! Please input Output River File</p>";
		runFlag = 0;
	}
	else{
		log<<"<p>Checking... "<<(rivLineEdit->text()).ascii()<<"... ";
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

				


		QString shpFileName((riverLineEdit->text()).ascii());
	        QString dbfFileName(shpFileName);
        	        dbfFileName.truncate(dbfFileName.length()-3);
                	dbfFileName.append("dbf");
      		
		QString newshp(shpFileName);
		QString newdbf(shpFileName);
	
  		int slashPos = newshp.findRev("/");
		newshp.truncate(slashPos);
		newdbf.truncate(slashPos);
		
		newshp.append("/temp.shp");
		newdbf.append("/temp.dbf");

		qWarning("\n%s", newshp.ascii());
		qWarning("\n%s", newdbf.ascii()); 	
	
		QString eleFileName((eleLineEdit->text()).ascii());
        	QString nodeFileName((nodeLineEdit->text()).ascii());
        	QString neighFileName((neighLineEdit->text()).ascii());
		
		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Extracting River from TIN (MESH)...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();
		
        	extractRiver4mTIN(shpFileName.ascii(),dbfFileName.ascii(),eleFileName.ascii(),nodeFileName.ascii(),neighFileName.ascii(), newshp.ascii(), newdbf.ascii());
		
		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();


		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Adding FID...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();
 
        	addFID(newdbf.ascii());

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Computing To and From Node information...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

        	addToFromNode(newdbf.ascii(), newshp.ascii());
        	
		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Computing Stream Order...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

		addSOrder(newdbf.ascii(), newshp.ascii());

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Calculating Down Segments...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

        	calDownSegment(newdbf.ascii());

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();



		log.open(logFileName.ascii(), ios::app);
		log<<"<p>Writing .riv file...";
		log.close();
		messageLog->reload();
		QApplication::processEvents();


		DBFHandle dbf = DBFOpen(newdbf.ascii(), "rb");

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
		

		log.open(logFileName.ascii(), ios::app);
		log<<" Done!</p>";
		log.close();
		messageLog->reload();
		QApplication::processEvents();

	}
	riv.close();

	log.open(logFileName.ascii(), ios::app);
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
