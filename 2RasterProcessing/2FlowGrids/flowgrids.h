#ifndef FLOWGRIDS_H
#define FLOWGRIDS_H

#include <QDialog>

namespace Ui {
class FlowGrids;
}

class FlowGrids : public QDialog
{
    Q_OBJECT

public:
    explicit FlowGrids(QWidget *parent = 0);
    ~FlowGrids();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonFillPits_clicked();

    void on_pushButtonsFlowDirGrid_clicked();

    void on_pushButtonFlowAccGrid_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::FlowGrids *ui;
};

#endif // FLOWGRIDS_H
