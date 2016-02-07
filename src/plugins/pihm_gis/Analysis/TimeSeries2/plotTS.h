#include <qwt_plot.h>


class PlotTS : public QwtPlot
{
public:
    PlotTS(const char* title = 0, const char* xtitle = 0, const char* ytitle = 0, char** legend = 0, double **xval= NULL, double **yval=NULL, int npts=0, int NumTS=1);
};

