#ifndef CATCHMENTGRID
#define CATCHMENTGRID

#include "ui_catchmentgrid.h"
//??#include <qgisapp.h>

class CatchmentGridDlg : public QDialog, private Ui::CatchmentGrid
{
        Q_OBJECT
public:
        CatchmentGridDlg(QWidget *parent = 0);

//??	void setApplicationPointer(QgisApp *);
//??	QgisApp* applicationPointer;

public slots:
        void inputLNKBrowse();
        void inputFDRBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

