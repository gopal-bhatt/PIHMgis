#ifndef TIMESERIES
#define TIMESERIES

#include "ui_timeseries.h"

class timeSeriesDlg : public QDialog, private Ui::timeSeriesDialog
{
	Q_OBJECT

public:
	timeSeriesDlg();

public slots:
	void browse();
	void plot();
	void savePlot();
	void help();


private slots:
    void on_comboBoxRivFeature_currentIndexChanged(int index);
    void on_comboBoxEleFeature_currentIndexChanged(int index);
    void on_comboBoxRivVariable_currentIndexChanged(int index);
    void on_comboBoxEleVariable_currentIndexChanged(int index);
};

#endif
