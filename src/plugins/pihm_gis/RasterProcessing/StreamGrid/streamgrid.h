#ifndef STREAMGRID
#define STREAMGRID

#include "ui_streamgrid.h"
//??#include <qgisapp.h>

class StreamGridDlg : public QDialog, private Ui::StreamGrid
{
        Q_OBJECT
public:
        StreamGridDlg(QWidget *parent = 0);

//??	void setApplicationPointer(QgisApp *);
//??	QgisApp* applicationPointer;

public slots:
        void inputBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

