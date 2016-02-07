#ifndef SPLITLINEDIALOG
#define SPLITLINEDIALOG

#include "ui_splitlinedialog.h"
#include <qgisinterface.h>

class splitLineDialogDlg : public QDialog, private Ui::splitLineDialog
{
        Q_OBJECT
public:
        splitLineDialogDlg(QWidget *parent = 0);
	void setApplicationPointer(QgisInterface *);
	QgisInterface* applicationPointer;

public slots:
        void addBrowse();
        void removeBrowse();
	void removeAllBrowse();
        void run();
	void help();
};

#endif

