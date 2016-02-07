#include "PIHMThread.h"

#include <QDebug>

#include "6PIHMSimulation/PIHMSrc/PIHM_v2.2/pihm.h"


PIHMThread::PIHMThread(QObject * parent)
{
	setParent(parent);
	setTerminationEnabled(1);
}
void PIHMThread::init(int _i, char **_arguments, QProgressBar* _progressBar, QString _logFileName, QString _ModelVersion, int _RunFlag)
{
    i            = _i;
    arguments    = _arguments;
    progressBar  = _progressBar;
    logFileName  = _logFileName;
    ModelVersion = _ModelVersion;

    RunFlag  = new int[1];
    *RunFlag = _RunFlag;
}

void PIHMThread::run()
{
    qDebug() << "\nNew Thread Started from PIHMThread::run\n";
    //this->RunFlag = new int[1];

    //*RunFlag = 1;
    qDebug() << "Run Flag = " << *RunFlag << "\n";
    qDebug() << "Calling PIHM now ... \n";

    if (ModelVersion == "PIHM v2.2")
    {
        PIHM_v2_2(i, arguments, this->progressBar, logFileName, this->RunFlag, this);
    }
    //exec();
    return;
}

void PIHMThread::kill()
{
    qDebug() << "PIHM Thread KILL invoked...\n";
    *RunFlag = 0; // Forces PIHM Simulation to Stop
    qDebug() << "RunFlag set to "<< *RunFlag << "\n";
    qDebug() << "Waiting for PIHM to clear...\n";
    //wait(20);
    wait();
    //terminate();
}

void PIHMThread::updateProgressBar(int progress)
{
    qDebug() << "From SIGNAL PIHMThread::updateProgressBar " << progress;
    QMetaObject::invokeMethod(parent(),"updateProgressBarValue",Q_ARG(int,progress));
    //this->progressBar->setValue(progress);

}
