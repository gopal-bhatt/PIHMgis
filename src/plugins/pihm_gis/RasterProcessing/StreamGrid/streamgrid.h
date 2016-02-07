#ifndef STREAMGRID
#define STREAMGRID

#include "ui_streamgrid.h"
//??#include <qgisapp.h>
#include <qgisinterface.h>
class StreamGridDlg : public QDialog, private Ui::StreamGrid
{
        Q_OBJECT
public:
        StreamGridDlg(QWidget *parent = 0);

//??	
void setApplicationPointer(QgisInterface *);
//??	
QgisInterface* applicationPointer;

public slots:
        void inputBrowse();
	void outputBrowse();
	void suggestMe();
        void run();
	void help();
};

#endif

