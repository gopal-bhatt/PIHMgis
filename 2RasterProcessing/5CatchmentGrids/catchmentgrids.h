#ifndef CATCHMENTGRIDS_H
#define CATCHMENTGRIDS_H

#include <QDialog>

namespace Ui {
class CatchmentGrids;
}

class CatchmentGrids : public QDialog
{
    Q_OBJECT

public:
    explicit CatchmentGrids(QWidget *parent = 0);
    ~CatchmentGrids();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonLinkGrids_clicked();

    void on_pushButtonFlowDirGrids_clicked();

    void on_pushButtonCatchmentGrids_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::CatchmentGrids *ui;
};

#endif // CATCHMENTGRIDS_H
