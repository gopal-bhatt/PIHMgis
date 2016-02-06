#ifndef RUNTRIANGLE
#define RUNTRIANGLE

#include "ui_runtriangle.h"

class runTriangleDlg : public QDialog, private Ui::runTriangle
{
        Q_OBJECT
public:
        runTriangleDlg(QWidget *parent = 0);

public slots:
        void inputBrowse();
        void options();
	void run();
	void help();
};

#endif

