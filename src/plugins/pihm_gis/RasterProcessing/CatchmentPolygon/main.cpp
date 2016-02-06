#include <QApplication>

#include "catchmentpolygon.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	CatchmentPolygonDlg *dlg = new CatchmentPolygonDlg;

	dlg->show();
	return app.exec();
}
	
