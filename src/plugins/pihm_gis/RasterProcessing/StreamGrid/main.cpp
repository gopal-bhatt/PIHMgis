#include <QApplication>

#include "streamgrid.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	StreamGridDlg *dlg = new StreamGridDlg;

	dlg->show();
	return app.exec();
}
	
