#ifndef RUNPIHM
#define RUNPIHM

#include "ui_runpihm.h"

class runPIHMDlg : public QDialog, private Ui::runPIHM
{
	Q_OBJECT
public:
	runPIHMDlg(QWidget *parent = 0);

public slots:
	void folderBrowse();
	void run();
	void help();
};

#endif
