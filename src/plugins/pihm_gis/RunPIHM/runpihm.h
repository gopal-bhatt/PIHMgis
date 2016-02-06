#ifndef RUNPIHM
#define RUNPIHM

#include "ui_runpihm.h"
#include "../MyNewThread.h"
class runPIHMDlg : public QDialog, private Ui::runPIHM
{
	Q_OBJECT
public:
	runPIHMDlg(QWidget *parent = 0);
	MyNewThread* thread;// = new MyNewThread;
public slots:
	void folderBrowse();
	void run();
	void help();
	void cancelPIHM();
};

#endif
