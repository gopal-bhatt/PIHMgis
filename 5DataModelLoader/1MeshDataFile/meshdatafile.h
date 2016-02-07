#ifndef MESHDATAFILE_H
#define MESHDATAFILE_H

#include <QDialog>

namespace Ui {
class MeshDataFile;
}

class MeshDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit MeshDataFile(QWidget *parent = 0);
    ~MeshDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonElementFile_clicked();

    void on_pushButtonNodeFile_clicked();

    void on_pushButtonNeighbourFile_clicked();

    void on_pushButtonRiverFile_clicked();

    void on_pushButtonSurfaceElevationFile_clicked();

    void on_pushButtonSubsurfaceThickness_clicked();

    void on_pushButtonMeshDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();


    void on_checkBoxSubsurfaceThickness_toggled(bool checked);

private:
    Ui::MeshDataFile *ui;
};

#endif // MESHDATAFILE_H
