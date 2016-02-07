#ifndef MESHTEMPORAL_H
#define MESHTEMPORAL_H

#include <QDialog>

namespace Ui {
class MeshTemporal;
}

class MeshTemporal : public QDialog
{
    Q_OBJECT

public:
    explicit MeshTemporal(QWidget *parent = 0);
    ~MeshTemporal();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonOutputDataFolder_clicked();

    void on_comboBoxModelSegments_currentIndexChanged(int index);

    void on_lineEditOutputDataFolder_textChanged(const QString &arg1);

    void on_lineEditDataKey_textChanged(const QString &arg1);

    void on_comboBoxPlotVariable_currentIndexChanged(int index);

    void verifyInputOutputFile();

    void pushButtonSetFocus();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void on_lineEditModelSegments_textChanged(const QString &arg1);

private:
    Ui::MeshTemporal *ui;
};

#endif // MESHTEMPORAL_H
