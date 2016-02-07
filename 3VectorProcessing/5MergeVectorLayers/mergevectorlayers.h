#ifndef MERGEVECTORLAYERS_H
#define MERGEVECTORLAYERS_H

#include <QDialog>

namespace Ui {
class MergeVectorLayers;
}

class MergeVectorLayers : public QDialog
{
    Q_OBJECT

public:
    explicit MergeVectorLayers(QWidget *parent = 0);
    ~MergeVectorLayers();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonRemove_clicked();

    void on_pushButtonClear_clicked();

    void on_pushButtonMergeLayer_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::MergeVectorLayers *ui;
};

#endif // MERGEVECTORLAYERS_H
