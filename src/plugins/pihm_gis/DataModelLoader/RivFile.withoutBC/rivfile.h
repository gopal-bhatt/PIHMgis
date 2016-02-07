#ifndef RIVFILE
#define RIVFILE

#include "ui_rivfile.h"

class rivFileDlg : public QDialog, private Ui::rivfile
{
        Q_OBJECT
public:
        rivFileDlg(QWidget *parent = 0);

public slots:
	void riverBrowse();
        void eleBrowse();
	void nodeBrowse();
	void neighBrowse();
	void rivBrowse();
        void run();
	void help();
};

#endif

