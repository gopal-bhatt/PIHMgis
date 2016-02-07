#ifndef CATCHMENTPOLYGON_H
#define CATCHMENTPOLYGON_H

#include <QDialog>

namespace Ui {
class CatchmentPolygon;
}

class CatchmentPolygon : public QDialog
{
    Q_OBJECT

public:
    explicit CatchmentPolygon(QWidget *parent = 0);
    ~CatchmentPolygon();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonCatchmentGrids_clicked();

    void on_pushButtonCatchmentPolygon_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::CatchmentPolygon *ui;
};

#endif // CATCHMENTPOLYGON_H
