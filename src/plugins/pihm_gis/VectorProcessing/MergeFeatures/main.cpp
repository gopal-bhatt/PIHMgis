#include <QApplication>

#include "mergefeaturesdialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	mergeFeaturesDialogDlg *dlg = new mergeFeaturesDialogDlg;

	dlg->show();
	return app.exec();
}
	
