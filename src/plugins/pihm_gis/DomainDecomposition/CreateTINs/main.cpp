#include <QApplication>

#include "createtins.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	createTINsDlg *dlg = new createTINsDlg;

	dlg->show();
	return app.exec();
}
	
