#include <QApplication>

#include "simplifylinedialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	simplifyLineDialogDlg *dlg = new simplifyLineDialogDlg;

	dlg->show();
	return app.exec();
}
	
