#ifndef POLYGONTOPOLYLINEDIALOG
#define POLYGONTOPOLYLINEDIALOG

#include "ui_polygontopolylinedialog.h"
#include <qgisinterface.h>

class polygonToPolyLineDialogDlg : public QDialog, private Ui::polygonToPolyLineDialog
{
        Q_OBJECT
public:
        polygonToPolyLineDialogDlg(QWidget *parent = 0);

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

