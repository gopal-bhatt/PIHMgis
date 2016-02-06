#include <QApplication>

#include "generateshapetopology.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	generateShapeTopologyDlg *dlg = new generateShapeTopologyDlg;

	dlg->show();
	return app.exec();
}
	
