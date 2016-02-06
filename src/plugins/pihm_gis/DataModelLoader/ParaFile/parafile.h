#ifndef PARAMFILE
#define PARAMFILE

#include "ui_parafile.h"

class paraFileDlg : public QDialog, private Ui::paraFile
{
        Q_OBJECT
public:
        paraFileDlg(QWidget *parent = 0);

public slots:
        void paraBrowse();
        void run();
	void help();
};

#endif

