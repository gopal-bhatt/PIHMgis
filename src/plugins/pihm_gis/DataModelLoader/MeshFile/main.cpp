#include <QApplication>

#include "mshfile.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	mshFileDlg *dlg = new mshFileDlg;

	dlg->show();
	return app.exec();
}
	
