#include <qapplication.h>
#include <qwt_plot.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_curve.h>
#include <qwt_legend.h>
#include <qwt_data.h>
#include <qwt_text.h>
#include <math.h>
#include <qdialog.h>
#include <qcolor.h>
#include "plotTS.h"
#include <iostream>

using namespace std;
/*
class PlotTS : public QwtPlot
{
public:
    PlotTS(const char*, const char*, const char*, const char*, double *, double *, int);
};
*/

PlotTS::PlotTS(const char *plotTitle, const char *xTitle, const char *yTitle, char **legend, double **xVal, double **yVal, int nPts, int NumTS)
{
	//qWarning("class\n");
	QColor color(255, 255, 255);
	setCanvasBackground(color);
    setTitle(plotTitle);
    insertLegend(new QwtLegend(), QwtPlot::RightLegend);

    // Set axis titles
    setAxisTitle(xBottom, xTitle);
    setAxisTitle(yLeft, yTitle);
    
    // Insert new curves
	QwtPlotCurve **cSin; int* lineColor; QColor* qColor;
	cSin = (QwtPlotCurve **)malloc(NumTS*sizeof(QwtPlotCurve *));
	lineColor = (int *)malloc(NumTS*sizeof(int));
	qColor = (QColor *)malloc(NumTS*sizeof(QColor));
	for (int i=0; i<NumTS; i++){
    cSin[i] = new QwtPlotCurve(legend[i]);
#if QT_VERSION >= 0x040000
    cSin[i]->setRenderHint(QwtPlotItem::RenderAntialiased);
#endif
	//getchar(); getchar();
	lineColor[i] = qrand() % 17 + 2;
	qColor[i] = QColor::fromRgb((int) qrand()%255, (int) qrand()%255, (int) qrand()%255, 255);

	cout << "color = " << lineColor[i] << "\n";
    //cSin[i]->setPen(QPen(QColor(lineColor[i])));
	cSin[i]->setPen(QPen(qColor[i]));
    //cSin[i]->setPen(QPen(qrand() % 17 + 2));
    cSin[i]->attach(this);

    // Create sin and cos data
    //const int nPoints = 100;
    //cSin->setData(SimpleData(::sin, nPoints));
    //cCos->setData(SimpleData(::cos, nPoints));

	cSin[i]->setData(xVal[i], yVal[i], nPts);
}
    // Insert markers
   /* 
    //  ...a horizontal line at y = 0...
    QwtPlotMarker *mY = new QwtPlotMarker();
    mY->setLabel(QString::fromLatin1("y = 0"));
    mY->setLabelAlignment(Qt::AlignRight|Qt::AlignTop);
    mY->setLineStyle(QwtPlotMarker::HLine);
    mY->setYValue(0.0);
    mY->attach(this);

    //  ...a vertical line at x = 2 * pi
    QwtPlotMarker *mX = new QwtPlotMarker();
    mX->setLabel(QString::fromLatin1("x = 2 pi"));
    mX->setLabelAlignment(Qt::AlignRight|Qt::AlignTop);
    mX->setLineStyle(QwtPlotMarker::VLine);
    mX->setXValue(6.284);
    mX->attach(this);
*/
	//parent->show();
	//qWarning("Done\n");
}
/*
int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    Plot plot;
#if QT_VERSION < 0x040000
    a.setMainWidget(&plot);
#endif
    plot.resize(600,400);
    plot.show();
    return a.exec(); 
}
*/
