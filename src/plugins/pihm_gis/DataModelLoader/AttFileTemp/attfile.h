#ifndef ATTFILE
#define ATTFILE

#include "ui_attfile.h"

class attFileDlg : public QDialog, private Ui::AttFileGeneration
{
        Q_OBJECT
public:
        attFileDlg(QWidget *parent = 0);

public slots:
	void tinBrowse();
        void precipBrowse();
	void tempBrowse();
	void humidBrowse();
	void windBrowse();
	void gBrowse();
	void rnBrowse();
	void pBrowse();
	void soilBrowse();
	void geolBrowse();
	void mfBrowse();
	void mpBrowse();
	void lcBrowse();
	void isICBrowse();
	void snowICBrowse();
	void overlandICBrowse();
	void unsatICBrowse();
	void satICBrowse();
	void bcBrowse();
	void sourceBrowse();
	void attBrowse();
        void run();
	void help();
};

#endif

