#ifndef FLOWGRID
#define FLOWGRID

#include "ui_flowgrid.h"
//??#include <qgisapp.h>
#include <qgisinterface.h>
class FlowGridDlg : public QDialog, private Ui::FlowGrid
{
        Q_OBJECT
public:
        FlowGridDlg(QWidget *parent = 0);

//??	
void setApplicationPointer(QgisInterface *);
//??	
QgisInterface* applicationPointer;

public slots:
        void inputBrowse();
        void outputFDRBrowse();
	void outputFAGBrowse();
        void run();
	void help();
};

#endif

