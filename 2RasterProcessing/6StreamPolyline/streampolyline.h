#ifndef STREAMPOLYLINE_H
#define STREAMPOLYLINE_H

#include <QDialog>

namespace Ui {
class StreamPolyline;
}

class StreamPolyline : public QDialog
{
    Q_OBJECT

public:
    explicit StreamPolyline(QWidget *parent = 0);
    ~StreamPolyline();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonStreamGrids_clicked();

    void on_pushButtonFlowDirGrids_clicked();

    void on_pushButtonStreamPolyline_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::StreamPolyline *ui;
};

#endif // STREAMPOLYLINE_H
