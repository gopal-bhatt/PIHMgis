#ifndef READTOPOLOGY_H
#define READTOPOLOGY_H

#include <QDialog>

namespace Ui {
class ReadTopology;
}

class ReadTopology : public QDialog
{
    Q_OBJECT

public:
    explicit ReadTopology(QWidget *parent = 0);
    ~ReadTopology();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonMerge_clicked();

    void on_pushButtonPSLG_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();


private:
    Ui::ReadTopology *ui;
};

#endif // READTOPOLOGY_H
