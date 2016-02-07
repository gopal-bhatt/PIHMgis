#ifndef MESHSPATIAL_H
#define MESHSPATIAL_H

#include <QDialog>

namespace Ui {
class MeshSpatial;
}

class MeshSpatial : public QDialog
{
    Q_OBJECT

public:
    explicit MeshSpatial(QWidget *parent = 0);
    ~MeshSpatial();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonOutputDataFolder_clicked();

//    void on_comboBoxModelSegments_currentIndexChanged(int index);

    void on_lineEditOutputDataFolder_textChanged(const QString &arg1);

    void on_lineEditDataKey_textChanged(const QString &arg1);

    void on_comboBoxPlotVariable_currentIndexChanged(int index);

    void verifyInputOutputFile();

    void pushButtonSetFocus();

    void on_comboBoxStartStop_currentIndexChanged(int index);

    void on_pushButtonMeshShapeFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void on_lineEditMeshShapeFile_textChanged(const QString &arg1);

private:
    Ui::MeshSpatial *ui;
};

#endif // MESHSPATIAL_H
