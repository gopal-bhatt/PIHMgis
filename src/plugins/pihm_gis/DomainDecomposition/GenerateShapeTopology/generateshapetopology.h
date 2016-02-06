#ifndef GENERATESHAPETOPOLOGY
#define GENERATESHAPETOPOLOGY

#include "ui_generateshapetopology.h"

class generateShapeTopologyDlg : public QDialog, private Ui::GenerateShapeTopology
{
        Q_OBJECT
public:
        generateShapeTopologyDlg(QWidget *parent = 0);

public slots:
        void inputBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

