#ifndef LINKGRID
#define LINKGRID

#include "ui_linkgrid.h"
//??#include <qgisapp.h>
#include <qgisinterface.h>
class LinkGridDlg : public QDialog, private Ui::LinkGrid
{
        Q_OBJECT
public:
        LinkGridDlg(QWidget *parent = 0);
	
//??	
void setApplicationPointer(QgisInterface *);
//??	
QgisInterface* applicationPointer;

public slots:
        void inputSTRBrowse();
        void inputFDRBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

