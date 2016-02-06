#ifndef CATCHMENTGRID
#define CATCHMENTGRID

#include "ui_catchmentgrid.h"
//??#include <qgisapp.h>
#include <qgisinterface.h>
class CatchmentGridDlg : public QDialog, private Ui::CatchmentGrid
{
        Q_OBJECT
public:
        CatchmentGridDlg(QWidget *parent = 0);

//??	
void setApplicationPointer(QgisInterface *);
//??	
QgisInterface* applicationPointer;

public slots:
        void inputLNKBrowse();
        void inputFDRBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

