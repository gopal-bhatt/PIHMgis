#include "PIHMThread.h"

#include <QDebug>


PIHMThread::PIHMThread(QObject * parent)
{
	setParent(parent);
	setTerminationEnabled(1);
}
void PIHMThread::init(int _i, char **_nfile, QProgressBar* _progressBar, QString _logFileName)
{
        i           = _i;
        nfile       = _nfile;
        progressBar = _progressBar;
        logFileName = _logFileName;
}

void PIHMThread::run()
{
    qDebug() << "New Thread Started : From run\n";
	RunFlag=(int *)malloc(sizeof(int));
	*RunFlag=1;
    qDebug() << "Run Flag = "<<*RunFlag<<"\n";
    qDebug() << "Calling pihm now...\n";
    //pihm(i, nfile, progressBar, logFileName, RunFlag);
    exec();
}

void PIHMThread::kill()
{
    qDebug() << "PIHM Thread KILL invoked...\n";
    *RunFlag = 0;
    qDebug() << "RunFlag set to "<< *RunFlag << "\n";
	wait(20);
	//terminate();
}
