#include <QApplication>

#include "flowgrid.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	FlowGridDlg *dlg = new FlowGridDlg;

	dlg->show();
	return app.exec();
}
	
