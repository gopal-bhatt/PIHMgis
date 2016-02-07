#ifndef MERGEFEATURESDIALOG
#define MERGEFEATURESDIALOG

#include "ui_mergefeaturesdialog.h"
#include <qgisinterface.h>

class mergeFeaturesDialogDlg : public QDialog, private Ui::mergeFeaturesDialog
{
        Q_OBJECT
public:
        mergeFeaturesDialogDlg(QWidget *parent = 0);
	void setApplicationPointer(QgisInterface *);
	QgisInterface* applicationPointer;

public slots:
        void addBrowse();
        void removeBrowse();
	void removeAllBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

