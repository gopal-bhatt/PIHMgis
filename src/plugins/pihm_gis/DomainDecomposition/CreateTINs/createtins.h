#ifndef CREATETINS
#define CREATETINS

#include <qgisinterface.h>
#include "ui_createtinsdialog.h"

class createTINsDlg : public QDialog, private Ui::CreateTINsDialog
{
        Q_OBJECT
public:
        createTINsDlg(QWidget *parent = 0);
void setApplicationPointer(QgisInterface *);
QgisInterface* applicationPointer;

public slots:
        void eleBrowse();
	void nodeBrowse();
	void shpBrowse();
        void run();
	void help();
};

#endif

