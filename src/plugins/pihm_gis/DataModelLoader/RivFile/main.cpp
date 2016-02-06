#include <QApplication>

#include "rivfile.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	rivFileDlg *dlg = new rivFileDlg;

	dlg->show();
	return app.exec();
}
	
