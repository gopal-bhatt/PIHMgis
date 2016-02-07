#include <QApplication>

#include "splitlinedialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	splitLineDialogDlg *dlg = new splitLineDialogDlg;

	dlg->show();
	return app.exec();
}
	
