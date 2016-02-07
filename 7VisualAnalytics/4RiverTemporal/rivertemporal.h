#ifndef RIVERTEMPORAL_H
#define RIVERTEMPORAL_H

#include <QDialog>

namespace Ui {
class RiverTemporal;
}

class RiverTemporal : public QDialog
{
    Q_OBJECT

public:
    explicit RiverTemporal(QWidget *parent = 0);
    ~RiverTemporal();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonOutputDataFolder_clicked();

    void on_pushButtonHelp_clicked();

    void on_comboBoxModelSegments_currentIndexChanged(int index);

    void on_lineEditOutputDataFolder_textChanged(const QString &arg1);

    void on_lineEditDataKey_textChanged(const QString &arg1);

    void verifyInputOutputFile();

    void pushButtonSetFocus();

    void on_comboBoxPlotVariable_currentIndexChanged(int index);

    void on_lineEditModelSegments_textChanged(const QString &arg1);

private:
    Ui::RiverTemporal *ui;
};

#endif // RIVERTEMPORAL_H
