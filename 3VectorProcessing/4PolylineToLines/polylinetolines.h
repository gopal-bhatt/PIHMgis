#ifndef POLYLINETOLINES_H
#define POLYLINETOLINES_H

#include <QDialog>

namespace Ui {
class PolylineToLines;
}

class PolylineToLines : public QDialog
{
    Q_OBJECT

public:
    explicit PolylineToLines(QWidget *parent = 0);
    ~PolylineToLines();

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
    Ui::PolylineToLines *ui;
};

#endif // POLYLINETOLINES_H
