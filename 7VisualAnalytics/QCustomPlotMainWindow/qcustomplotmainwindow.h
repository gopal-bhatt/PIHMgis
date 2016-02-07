#ifndef QCUSTOMPLOTMAINWINDOW_H
#define QCUSTOMPLOTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class QCustomPlotMainWindow;
}

class QCustomPlotMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QCustomPlotMainWindow(QWidget *parent = 0);
    ~QCustomPlotMainWindow();

private slots:
    void SaveAsPDF();

private:
    Ui::QCustomPlotMainWindow *ui;
};

#endif // QCUSTOMPLOTMAINWINDOW_H
