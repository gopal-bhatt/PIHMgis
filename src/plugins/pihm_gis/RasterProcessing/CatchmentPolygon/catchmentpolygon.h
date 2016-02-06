#ifndef CATCHMENTPOLYGON
#define CATCHMENTPOLYGON

#include "ui_catchmentpolygon.h"
//??#include <qgisapp.h>

class CatchmentPolygonDlg : public QDialog, private Ui::CatchmentPolygon
{
        Q_OBJECT
public:
        CatchmentPolygonDlg(QWidget *parent = 0);

//??	void setApplicationPointer(QgisApp *);
//??	QgisApp* applicationPointer;

public slots:
        void inputBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

