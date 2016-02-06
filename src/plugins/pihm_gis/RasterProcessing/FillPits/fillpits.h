#ifndef FILLPITS
#define FILLPITS

#include "ui_fillpits.h"
#include <qgisapp.h>
#include <qgisinterface.h>
class fillpitsDlg : public QDialog, private Ui::FillPits
{
        Q_OBJECT
public:
        fillpitsDlg(QWidget *parent = 0);

//??
	void setApplicationPointer(QgisInterface *);
//??
	QgisInterface* applicationPointer;

public slots:
        void inputBrowse();
        void outputBrowse();
        void run();
	void help();
};

#endif

