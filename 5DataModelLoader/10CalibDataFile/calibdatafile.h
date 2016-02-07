#ifndef CALIBDATAFILE_H
#define CALIBDATAFILE_H

#include <QDialog>

namespace Ui {
class CalibDataFile;
}

class CalibDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit CalibDataFile(QWidget *parent = 0);
    ~CalibDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonCalibDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

    int calib_data_file();

private:
    Ui::CalibDataFile *ui;
};

#endif // CALIBDATAFILE_H
