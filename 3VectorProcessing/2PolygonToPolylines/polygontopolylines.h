#ifndef POLYGONTOPOLYLINES_H
#define POLYGONTOPOLYLINES_H

#include <QDialog>

namespace Ui {
class PolygonToPolylines;
}

class PolygonToPolylines : public QDialog
{
    Q_OBJECT

public:
    explicit PolygonToPolylines(QWidget *parent = 0);
    ~PolygonToPolylines();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:

    void on_pushButtonAdd_clicked();

    void on_pushButtonRemove_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::PolygonToPolylines *ui;
};

#endif // POLYGONTOPOLYLINES_H
