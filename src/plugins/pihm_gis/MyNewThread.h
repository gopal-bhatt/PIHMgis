#ifndef MYNEWTHREAD
#define MYNEWTHREAD

#include <QThread>
#include "./PIHM_v2.0/pihm.h"
class MyNewThread : public QThread
{
        public:
		MyNewThread(QObject* parent=0);
		int i;
		char **nfile;
		QProgressBar* progressBar;
		QString logFileName;
		int* RunFlag;
		void init(int, char**, QProgressBar*, QString);
                void run();
		void kill();
};
/*
void MyNewThread::init(int _i, char **_nfile, QProgressBar* _progressBar, QString _logFileName)
{
	i= _i;
	nfile = _nfile;
	progressBar = _progressBar;
	logFileName = _logFileName;
	setTerminationEnabled(1);
}
void MyNewThread::run()
{
        //runPIHMDlg* Dlg = new runPIHMDlg;
        //Dlg->show();
	pihm(i, nfile, progressBar, logFileName);
        exec();
}
*/
#endif
