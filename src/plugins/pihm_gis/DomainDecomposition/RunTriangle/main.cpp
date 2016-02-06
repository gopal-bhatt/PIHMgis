#include <QApplication>

#include "runtriangle.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	runTriangleDlg *dlg = new runTriangleDlg;

	dlg->show();
	return app.exec();
}
	
