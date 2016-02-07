#ifndef RUNALLRASTER_H
#define RUNALLRASTER_H

#include <QtGui/QDialog>
#include <qgisinterface.h>

namespace Ui
{
    class RunAllRaster;
}

class RunAllRaster : public QDialog
{
    Q_OBJECT

public:
    RunAllRaster(QWidget *parent = 0);
    ~RunAllRaster();
    void setApplicationPointer(QgisInterface *);
    QgisInterface* applicationPointer;

private:
    Ui::RunAllRaster *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonWatershed_clicked();
    void on_pushButtonStream_clicked();
    void on_pushButtonSuggestMe_clicked();
    void on_pushButtonDEM_clicked();
};

#endif // RUNALLRASTER_H
