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

/*
class PlotTS : public QwtPlot
{
public:
    PlotTS(const char*, const char*, const char*, const char*, double *, double *, int);
};
*/

PlotTS::PlotTS(const char *plotTitle, const char *xTitle, const char *yTitle, const char *legend, double *xVal, double *yVal, int nPts)
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
    QwtPlotCurve *cSin = new QwtPlotCurve(legend);
#if QT_VERSION >= 0x040000
    cSin->setRenderHint(QwtPlotItem::RenderAntialiased);
#endif
    cSin->setPen(QPen(Qt::blue));
    cSin->attach(this);

    // Create sin and cos data
    //const int nPoints = 100;
    //cSin->setData(SimpleData(::sin, nPoints));
    //cCos->setData(SimpleData(::cos, nPoints));

	cSin->setData(xVal, yVal, nPts);

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

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    PlotTS plot;
#if QT_VERSION < 0x040000
    a.setMainWidget(&plot);
#endif
    plot.resize(600,400);
    plot.show();
    return a.exec(); 
}

