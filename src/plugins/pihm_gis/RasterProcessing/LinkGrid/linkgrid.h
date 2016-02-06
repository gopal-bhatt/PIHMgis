#ifndef LINKGRID
#define LINKGRID

#include "ui_linkgrid.h"
//??#include <qgisapp.h>

class LinkGridDlg : public QDialog, private Ui::LinkGrid
{
        Q_OBJECT
public:
        LinkGridDlg(QWidget *parent = 0);
	
//??	void setApplicationPointer(QgisApp *);
//??	QgisApp* applicationPointer;

public slots:
        void inputSTRBrowse();
        void inputFDRBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

