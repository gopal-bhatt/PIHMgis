#include <QApplication>
#include <QPalette>

#include "spatialplot.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

//QPalette palette;
//palette.setColor(QPalette::Background, Qt::white);
//app.setPalette(palette);

	app.setStyle("plastique");
	spatialPlotDlg *dlg = new spatialPlotDlg;
	dlg->show();
/*
	double xval[5] = {1, 2, 3, 4, 5};
        double yval[5] = {1, 2, 3, 4, 5};
        int npts = 5;
        qWarning("hello\n");
        PlotTS plotts("Title", "X", "Y", "test", xval, yval, npts);
        plotts.resize(600, 400);
        plotts.show();
*/	
	return app.exec();
}
