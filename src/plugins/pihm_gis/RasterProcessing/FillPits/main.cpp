#include <QApplication>

#include "fillpits.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	fillpitsDlg *dlg = new fillpitsDlg;

	dlg->show();
	return app.exec();
}
	
