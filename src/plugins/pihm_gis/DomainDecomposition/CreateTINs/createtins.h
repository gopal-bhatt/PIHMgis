#ifndef CREATETINS
#define CREATETINS

#include "ui_createtinsdialog.h"

class createTINsDlg : public QDialog, private Ui::CreateTINsDialog
{
        Q_OBJECT
public:
        createTINsDlg(QWidget *parent = 0);

public slots:
        void eleBrowse();
	void nodeBrowse();
	void shpBrowse();
        void run();
	void help();
};

#endif

