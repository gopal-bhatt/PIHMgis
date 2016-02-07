#include <QtGui>
#include "simplifylinedialog.h"
#include "../../pihmLIBS/helpDialog/helpdialog.h"
#include "../../pihmLIBS/simplifyPolySHP.h"
#include "../../pihmLIBS/shapefil.h"

#include "../../pihmLIBS/fileStruct.h"

#include <fstream>
using namespace std;

simplifyLineDialogDlg::simplifyLineDialogDlg(QWidget *parent)
{
	setupUi(this);
	connect(inputPolylineButton, SIGNAL(clicked()), this, SLOT(inputBrowse()));
	connect(addFileButton, SIGNAL(clicked()), this, SLOT(addBrowse()));
	connect(removeFileButton, SIGNAL(clicked()), this, SLOT(removeBrowse()));
	connect(removeAllButton, SIGNAL(clicked()), this, SLOT(removeAllBrowse()));
	connect(editToleranceButton, SIGNAL(clicked()), this, SLOT(editTolerance()));
	connect(okButton, SIGNAL(clicked()), this, SLOT(run()));
	connect(helpButton, SIGNAL(clicked()), this, SLOT(help()));
	connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));

	QStringList labels;
        labels << "Input Polylines" <<"Tolerance (m)" << "Output Polylines";
        inputOutputTable->setColumnLabels(labels);

	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

        QString tempStr; tempStr=readLineNumber(qPrintable(projFile), 25);
	QString tempThresh; tempThresh=readLineNumber(qPrintable(projFile), 100);
	int tempThreshInt = 2*tempThresh.toInt();
	tempThresh = QString::number(tempThreshInt, 10);
        if(tempStr.length()>1){
                int rows = inputOutputTable->numRows();
                inputOutputTable->insertRows(rows);
                Q3TableItem *tempItem;
                tempItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tempStr);
                inputOutputTable->setItem(rows, 0, tempItem);
		tempItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tempThresh);
		inputOutputTable->setItem(rows, 1, tempItem);
                tempStr.truncate(tempStr.length()-4); tempStr.append("_Simp"); tempStr.append(tempThresh); tempStr.append(".shp");
                tempItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tempStr);
                inputOutputTable->setItem(rows, 2, tempItem);
	}

	tempStr=readLineNumber(qPrintable(projFile), 16);
        tempThresh=readLineNumber(qPrintable(projFile), 100);
        //int tempThreshInt = 2*tempThresh.toInt();
        //tempThresh = QString::number(tempThreshInt, 10);
	if(tempStr.length()>1){
		int rows = inputOutputTable->numRows();
                inputOutputTable->insertRows(rows);
                Q3TableItem *tempItem;
		tempItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tempStr);
                inputOutputTable->setItem(rows, 0, tempItem);
                tempItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tempThresh);
                inputOutputTable->setItem(rows, 1, tempItem);
                tempStr.truncate(tempStr.length()-4); tempStr.append("_Simp"); tempStr.append(tempThresh); tempStr.append(".shp");
                tempItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tempStr);
                inputOutputTable->setItem(rows, 2, tempItem);
        }
	toleranceEdit->setText(tempThresh);
	
}

void simplifyLineDialogDlg::inputBrowse()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);

        QStringList temp = QFileDialog::getOpenFileNames(this, "Choose File", projDir+"/VectorProcessing","Unsimplified Polyline File(*.shp *.SHP)");
	//QStringList shpFilesInputDialog::externalBoundsFiles = temp;
        //QString* str = new QString();
        QString str = "";
        for(unsigned int i=0; i< temp.count();i++)
        {
        	str.append(temp[i]);
                str.append(";");
        }
        InputPolylineEdit->setText(str);
}

void simplifyLineDialogDlg::addBrowse()
{
	QString fileNames(InputPolylineEdit->text());
	QString tolerance(toleranceEdit->text());
	int count=0;
	int index=0;
	while(fileNames.indexOf(';',index)!=-1){
        	count++;
                index=fileNames.indexOf(';',index)+1;
   	}
   	int row=inputOutputTable->numRows();
   	for(int i=0;i<count;i++){
        	QString fileName = fileNames.section(';',i,i);
                QString simpFileName(fileName);
                simpFileName.truncate(simpFileName.length()-4);
                simpFileName.append("_Simp"); simpFileName.append(tolerance); simpFileName.append(".shp");
                inputOutputTable->insertRows(row+i);
                Q3TableItem* tmpItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, fileName );
                inputOutputTable->setItem(row+i,0,tmpItem);
                tmpItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, tolerance );
                inputOutputTable->setItem(row+i,1,tmpItem);
                tmpItem = new Q3TableItem(inputOutputTable, Q3TableItem::Always, simpFileName );
                inputOutputTable->setItem(row+i,2,tmpItem);
   	}
}

void simplifyLineDialogDlg::removeBrowse()
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

void simplifyLineDialogDlg::removeAllBrowse()
{
	int tmp = inputOutputTable->numRows();
        for(int i=0; i<= tmp;i++){
	        inputOutputTable->removeRow(0);
        }
}

void simplifyLineDialogDlg::editTolerance()
{
	qWarning( "simplifyLineDialog::handleEditToleranceButton(): Not implemented yet" );
}


void simplifyLineDialogDlg::run()
{
	QString projDir, projFile;
        QFile tFile(QDir::homePath()+"/project.txt");
        tFile.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream tin(&tFile);
        projDir  = tin.readLine();
        projFile = tin.readLine();
	tFile.close();
        cout << qPrintable(projDir);
	
	writeLineNumber(qPrintable(projFile), 26, qPrintable(inputOutputTable->text(0,0)));
	writeLineNumber(qPrintable(projFile), 27, qPrintable(inputOutputTable->text(0,2)));
	writeLineNumber(qPrintable(projFile), 28, qPrintable(inputOutputTable->text(0,1)));
	if(inputOutputTable->numRows()>0){
		writeLineNumber(qPrintable(projFile), 29, qPrintable(inputOutputTable->text(1,0)));
		writeLineNumber(qPrintable(projFile), 30, qPrintable(inputOutputTable->text(1,2)));
		writeLineNumber(qPrintable(projFile), 31, qPrintable(inputOutputTable->text(1,1)));
	}

	QDir dir = QDir::home();
        QString home = dir.homePath();
	QString logFileName(qPrintable(home+"/log.html"));
	ofstream log;
	log.open(qPrintable(logFileName));
	log<<"<html><body><font size=3 color=black><p> Verifying Files...</p></font></body></html>";
        log.close();
        MessageLog->setSource(logFileName);
        MessageLog->setFocus();
        MessageLog->setModified(TRUE);
	
	if(inputOutputTable->numRows() < 1){
		log.open(qPrintable(logFileName), ios::app);
		log<<"<p><font size=3 color=red> First Please input Files</p>";
		log.close();
		MessageLog->reload();
		QApplication::processEvents();
	}
	else{
		int rows = inputOutputTable->numRows();
   		QString shpFileName, dbfFileName, shpFileNameSimp, dbfFileNameSimp;
   		double tol;
  		for(int i=0; i<rows; i++){
        		shpFileName = inputOutputTable->text(i, 0);
                	dbfFileName = shpFileName;
                	dbfFileName.truncate(dbfFileName.length()-3);
                	dbfFileName.append("dbf");

                	tol = (inputOutputTable->text(i, 1)).toDouble();

                	shpFileNameSimp = inputOutputTable->text(i, 2);
                	dbfFileNameSimp = shpFileNameSimp;
                	dbfFileNameSimp.truncate(dbfFileNameSimp.length()-3);
                	dbfFileNameSimp.append("dbf");

			ifstream in;
	                in.open(qPrintable(shpFileName));
			ofstream out;
			out.open(qPrintable(shpFileNameSimp));

			int runFlag = 1;
			log.open(qPrintable(logFileName), ios::app);
			log<<"<p>Checking... "<<qPrintable(shpFileName)<<"... ";
			if(in == NULL){
				log<<"<font size=3 color=red> Error!</p>";
				runFlag = 0;
				qWarning("\n %s doesn't exist!", qPrintable(shpFileName));
			}
			else
				log<<"Done!</p>";


			log<<"<p>Checking... "<<qPrintable(shpFileNameSimp)<<"... ";		
			if(out == NULL){
				log<<"<font size=3 color=red> Error!</p>";
				runFlag = 0;
				qWarning("\n %s doesn't exist!", qPrintable(shpFileNameSimp));
			}
			else
				log<<"Done!</p>";
			log.close();
			MessageLog->reload();
			QApplication::processEvents();

			if((inputOutputTable->text(i, 1)).length() == 0 || tol < 0){
				runFlag = 0;
				log.open(qPrintable(logFileName), ios::app);
				log<<"<font size=3 color=red> Error! Please input a valid threshold value</p>";
				log.close();
				MessageLog->reload();
				QApplication::processEvents();
			}
	
			
			if(runFlag == 1){
				log.open(qPrintable(logFileName), ios::app);
				log<<"<p>Simplifying "<<qPrintable(shpFileName)<<" to "<<qPrintable(shpFileNameSimp)<<" using "<<tol<<" unit tolerance...";
				log.close();
				MessageLog->reload();
				QApplication::processEvents();

                		simplifyPolySHP(qPrintable(shpFileName), qPrintable(dbfFileName), qPrintable(shpFileNameSimp), qPrintable(dbfFileNameSimp), tol);

			QString myFileNameQString = shpFileNameSimp;
                        QFileInfo myFileInfo(myFileNameQString);
                        QString myBaseNameQString = myFileInfo.baseName();
                        QString provider = "OGR";
                        applicationPointer->addVectorLayer(myFileNameQString, myBaseNameQString, "ogr");

                		qWarning("Simplifying %s to %s using %f\n", qPrintable(shpFileName), qPrintable(shpFileNameSimp), tol);

				log.open(qPrintable(logFileName), ios::app);
				log<<" Done!</p>";
				log.close();
				MessageLog->reload();
				QApplication::processEvents();
			}
        	}
	}
}

void simplifyLineDialogDlg::help()
{
	helpDialog* hlpDlg = new helpDialog(this, "Simplify Line", 1, "helpFiles/simplifyPolyLineDialog.html", "Help :: Simplify Line");
	hlpDlg->show();	
}

void simplifyLineDialogDlg::setApplicationPointer(QgisInterface* appPtr){
    applicationPointer = appPtr;
}
