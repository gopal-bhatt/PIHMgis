#ifndef LINKGRIDS_H
#define LINKGRIDS_H

#include <QDialog>

namespace Ui {
class LinkGrids;
}

class LinkGrids : public QDialog
{
    Q_OBJECT

public:
    explicit LinkGrids(QWidget *parent = 0);
    ~LinkGrids();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonStreamGrids_clicked();

    void on_pushButtonFlowDirGrids_clicked();

    void on_pushButtonLinkGrids_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::LinkGrids *ui;
};

#endif // LINKGRIDS_H
