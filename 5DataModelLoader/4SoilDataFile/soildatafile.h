#ifndef SOILDATAFILE_H
#define SOILDATAFILE_H

#include <QDialog>

namespace Ui {
class SoilDataFile;
}

class SoilDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit SoilDataFile(QWidget *parent = 0);
    ~SoilDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonSoilTextureFile_clicked();

    void on_pushButtonSoilDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();


private:
    Ui::SoilDataFile *ui;
};

#endif // SOILDATAFILE_H
