#include <QApplication>

#include "catchmentgrid.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	CatchmentGridDlg *dlg = new CatchmentGridDlg;

	dlg->show();
	return app.exec();
}
	
