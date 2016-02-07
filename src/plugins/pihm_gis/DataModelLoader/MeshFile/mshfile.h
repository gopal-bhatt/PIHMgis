#ifndef MSHFILE
#define MSHFILE

#include "ui_mshfile.h"

class mshFileDlg : public QDialog, private Ui::MshFileGeneration
{
        Q_OBJECT
public:
        mshFileDlg(QWidget *parent = 0);

public slots:
        void eleBrowse();
	void nodeBrowse();
	void neighBrowse();
	void sEleBrowse();
	void bEleBrowse();
	void mshBrowse();
        void run();
	void help();

private slots:
    void on_rivFileButton_clicked();
};

#endif

