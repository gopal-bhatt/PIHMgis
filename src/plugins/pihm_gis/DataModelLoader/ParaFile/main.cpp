#include <QApplication>

#include "parafile.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	paraFileDlg *dlg = new paraFileDlg;

	dlg->show();
	return app.exec();
}
	
