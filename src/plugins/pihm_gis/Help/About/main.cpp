#include <QApplication>

#include "about.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	AboutDlg *dlg = new AboutDlg;

	dlg->show();
	return app.exec();
}
	
