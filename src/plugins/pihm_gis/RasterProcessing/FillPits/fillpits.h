#ifndef FILLPITS
#define FILLPITS

#include "ui_fillpits.h"
//??#include <qgisapp.h>
class fillpitsDlg : public QDialog, private Ui::FillPits
{
        Q_OBJECT
public:
        fillpitsDlg(QWidget *parent = 0);

//??	void setApplicationPointer(QgisApp *);
//??	QgisApp* applicationPointer;

public slots:
        void inputBrowse();
        void outputBrowse();
        void run();
	void help();
};

#endif

