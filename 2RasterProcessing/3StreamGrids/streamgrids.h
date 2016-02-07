#ifndef STREAMGRIDS_H
#define STREAMGRIDS_H

#include <QDialog>

namespace Ui {
class StreamGrids;
}

class StreamGrids : public QDialog
{
    Q_OBJECT

public:
    explicit StreamGrids(QWidget *parent = 0);
    ~StreamGrids();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonFlowAccGrids_clicked();

    void on_pushButtonStreamGrids_clicked();

    void on_pushButtonSuggestMe_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void on_lineEditThreshold_textChanged();

    void pushButtonSetFocus();

private:
    Ui::StreamGrids *ui;
};

#endif // STREAMGRIDS_H
