#include <QApplication>

#include "runpihm.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	runPIHMDlg *dlg = new runPIHMDlg;

	dlg->show();
	return app.exec();
}
	
