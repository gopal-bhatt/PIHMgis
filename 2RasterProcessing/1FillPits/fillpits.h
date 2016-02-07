#ifndef FILLPITS_H
#define FILLPITS_H

#include <QDialog>

namespace Ui {
class FillPits;
}

class FillPits : public QDialog
{
    Q_OBJECT

public:
    explicit FillPits(QWidget *parent = 0);
    ~FillPits();
    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonDEM_clicked();

    void on_pushButtonFillPits_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::FillPits *ui;
};

#endif // FILLPITS_H
