#include <QApplication>

#include "linkgrid.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	LinkGridDlg *dlg = new LinkGridDlg;

	dlg->show();
	return app.exec();
}
	
