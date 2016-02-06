#include <QApplication>

#include "polygontopolylinedialog.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	polygonToPolyLineDialogDlg *dlg = new polygonToPolyLineDialogDlg;

	dlg->show();
	return app.exec();
}
	
