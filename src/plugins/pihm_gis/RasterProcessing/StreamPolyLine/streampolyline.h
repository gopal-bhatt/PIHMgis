#ifndef STREAMPOLYLINE
#define STREAMPOLYLINE

#include "ui_streampolyline.h"
//??#include <qgisapp.h>

class StreamPolyLineDlg : public QDialog, private Ui::StreamPolyLine
{
        Q_OBJECT
public:
        StreamPolyLineDlg(QWidget *parent = 0);

//??	void setApplicationPointer(QgisApp *);
//??	QgisApp* applicationPointer;

public slots:
        void inputSTRBrowse();
        void inputFDRBrowse();
	void outputBrowse();
        void run();
	void help();
};

#endif

