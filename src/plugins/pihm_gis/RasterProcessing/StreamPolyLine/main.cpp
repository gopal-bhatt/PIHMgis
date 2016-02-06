#include <QApplication>

#include "streampolyline.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	StreamPolyLineDlg *dlg = new StreamPolyLineDlg;

	dlg->show();
	return app.exec();
}
	
