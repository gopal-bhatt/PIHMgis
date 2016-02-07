#ifndef RIVERSPATIAL_H
#define RIVERSPATIAL_H

#include <QDialog>

namespace Ui {
class RiverSpatial;
}

class RiverSpatial : public QDialog
{
    Q_OBJECT

public:
    explicit RiverSpatial(QWidget *parent = 0);
    ~RiverSpatial();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonOutputDataFolder_clicked();

    void on_lineEditOutputDataFolder_textChanged(const QString &arg1);

    void on_lineEditDataKey_textChanged(const QString &arg1);

    void on_comboBoxPlotVariable_currentIndexChanged(int index);

    void verifyInputOutputFile();

    void pushButtonSetFocus();

    void on_comboBoxStartStop_currentIndexChanged(int index);

    void on_pushButtonRiverShapeFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void on_lineEditRiverShapeFile_textChanged(const QString &arg1);

private:
    Ui::RiverSpatial *ui;
};

#endif // RIVERSPATIAL_H
