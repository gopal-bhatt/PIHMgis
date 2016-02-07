#include <QtGui>
#include "polygontopolylinedialog.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/polygonToPolyline.h"
#include "../../pihmLIBS/shapefil.h"

#include <fstream>
using namespace std;

polygonToPolyLineDialogDlg::polygonToPolyLineDialogDlg(QWidget *parent)
{
	setupUi(this);
	connect(addFileButton, SIGNAL(clicked()), this, SLOT(addBrowse()));
	connect(removeFileButton, SIGNAL(clicked()), this, SLOT(removeBrowse()));
	connect(removeAllButton, SIGNAL(clicked()), this, SLOT(removeAllBrowse()));
	connect(okButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));
}

void polygonToPolyLineDialogDlg::addBrowse()
{
	QStringList temp = QFileDialog::getOpenFileNames(this, "Choose File", "~/","Internal Bounds File(*.shp *.SHP)");
        QString str = "";
        QString str1 = "";

        unsigned int i;

        int rows = inputOutputTable->numRows();

        for(i=0; i< temp.count();i++)
        {
                        //std::cout<<"\n"<<qPrintable(temp[i]);
                        str = temp[i];
                        str1 = temp[i];
                        str1.truncate(str1.length()-4);
                        str1.append("_PolyLine.shp");
                        inputOutputTable->insertRows(rows + i);
                        Q3TableItem *tmpItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, str );
                        inputOutputTable->setItem(rows+i,0,tmpItem);
                        tmpItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, str1 );
                        inputOutputTable->setItem(rows+i,1,tmpItem);
	}
}

void polygonToPolyLineDialogDlg::removeBrowse()
{
	int tmp = inputOutputTable->numRows();
                //qWarning("\n %d",tmp);
        Q3MemArray <int> rowArray(tmp);
        int j=0;
        for(int i=0; i<tmp;i++){ 
		if(inputOutputTable->isRowSelected(i))
		{ 
			rowArray[j]=i; 
			qWarning("\n %d",rowArray[j]); 
			j++;
		}
	}
        rowArray.truncate(j);
        inputOutputTable->removeRows(rowArray);
}

void polygonToPolyLineDialogDlg::removeAllBrowse()
{
	int tmp = inputOutputTable->numRows();
        for(int i=0; i<= tmp;i++){
	        inputOutputTable->removeRow(0);
        }
}


void polygonToPolyLineDialogDlg::run()
{

	QString logFileName("/tmp/log.html");
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        MessageLog->setSource(logFileName);
        MessageLog->setFocus();
        MessageLog->setModified(TRUE);	

	QString polygonFileShp, polygonFileDbf, polyLineFileShp, polyLineFileDbf;
	
	if(inputOutputTable->numRows() < 1){
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p><font size=3 color=red> First Please input Files</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();
	}
	else{
        	for(int i=0; i<inputOutputTable->numRows();i++){
			polygonFileShp = inputOutputTable->text(i,0);
	                polygonFileDbf = inputOutputTable->text(i,0);
        	        polygonFileDbf.truncate(polygonFileDbf.length()-3);
	                polygonFileDbf.append("dbf");

        	        polyLineFileShp = inputOutputTable->text(i,1);
	                polyLineFileDbf = inputOutputTable->text(i,1);
        	        polyLineFileDbf.truncate(polyLineFileDbf.length()-3);
	                polyLineFileDbf.append("dbf");

			ifstream in;
	                in.open(qPrintable(polygonFileShp));
			ofstream out;
			out.open(qPrintable(polyLineFileShp));
			
			int runFlag = 1;
			log.open(qPrintable(logFileName), ios::app);
			log<<"<p>Checking... "<<qPrintable(polygonFileShp)<<"... ";
			if(in == NULL){
				log<<"<font size=3 color=red> Error!</p>";
				runFlag = 0;
				qWarning("\n %s doesn't exist!", qPrintable(polygonFileShp));
			}
			else
				log<<"Done!</p>";

			log<<"<p>Checking... "<<qPrintable(polyLineFileShp)<<"... ";		
			if(out == NULL){
				log<<"<font size=3 color=red> Error!</p>";
				runFlag = 0;
				qWarning("\n %s doesn't exist!", qPrintable(polygonFileShp));
			}
			else
				log<<"Done!</p>";
			log.close();
			MessageLog->reload();
			QApplication::processEvents();
				
			if(runFlag == 1){
								
        	                int entities[1], type[1];
                	        double minbound[10], maxbound[10];
	                        SHPHandle tempHandle = SHPOpen(qPrintable(polygonFileShp), "rb");
	                        SHPGetInfo(tempHandle, entities, type, minbound, maxbound);
        	                std::cout<<"type= "<<type[0]<<"\n";
	                        if(type[0] != 5){
					log.open(qPrintable(logFileName), ios::app);
					log<<"<p><font size=3 color=red>"<<qPrintable(polygonFileShp)<<" is not a polygon type </p>";
        	                        qWarning("\n %s is NOT a POLYGON file", qPrintable(polygonFileShp));
					log.close();
					MessageLog->reload();
					QApplication::processEvents();
				}
                	        else{
					log.open(qPrintable(logFileName), ios::app);
					log<<"<p>Running...";
					log.close();
					MessageLog->reload();
					QApplication::processEvents();

	                                polygonToPolyline(qPrintable(polygonFileShp), qPrintable(polygonFileDbf), qPrintable(polyLineFileShp), qPrintable(polyLineFileDbf));

					log.open(qPrintable(logFileName), ios::app);
					log<<" Done!</p>";
					log.close();
					MessageLog->reload();
					QApplication::processEvents();	
        	                }
	                }
		}
	}
}

void polygonToPolyLineDialogDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Polygon To Polyline", 1, "helpFiles/polygonToPolyLineDialog.html", "Help :: Polygon To Polyline");
	hlpDlg->show();	
}
