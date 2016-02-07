#include "MyNewthread.h"
#include "RunPIHM/runpihm.h"
#include <iostream>
using namespace std;

MyNewThread::MyNewThread(QObject * parent){
	setParent(parent);
	setTerminationEnabled(1);
}
void MyNewThread::init(int _i, char **_nfile, QProgressBar* _progressBar, QString _logFileName)
{
        i= _i;
        nfile = _nfile;
        progressBar = _progressBar;
        logFileName = _logFileName;
}
void MyNewThread::run()
{
        //runPIHMDlg* Dlg = new runPIHMDlg;
        //Dlg->show();
	cout<<"New Thread Started : From run\n";
	RunFlag=(int *)malloc(sizeof(int));
	*RunFlag=1;
	cout<<"Run Flag = "<<*RunFlag<<"\n";
	cout<<"Calling pihm now...\n";
        pihm(i, nfile, progressBar, logFileName, RunFlag);
        exec();
}
void MyNewThread::kill()
{
	cout<<"thread KILL invoked...\n";
	*RunFlag=0;
	cout<<"RunFlag set to "<<*RunFlag<<"\n";
	wait(20);
	//terminate();
}
