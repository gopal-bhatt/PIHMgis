#ifndef ABOUT
#define ABOUT

#include "ui_about.h"

class AboutDlg : public QDialog, private Ui::About
{
	Q_OBJECT

public:
	AboutDlg(QWidget *parent = 0);

};

#endif
