#include <QApplication>

#include "attfile.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	attFileDlg *dlg = new attFileDlg;

	dlg->show();
	return app.exec();
}
	
