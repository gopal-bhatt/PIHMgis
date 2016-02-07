#ifndef GEOLDATAFILE_H
#define GEOLDATAFILE_H

#include <QDialog>

namespace Ui {
class GeolDataFile;
}

class GeolDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit GeolDataFile(QWidget *parent = 0);
    ~GeolDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonGeolTextureFile_clicked();

    void on_pushButtonGeolDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();


private:
    Ui::GeolDataFile *ui;
};

#endif // GEOLDATAFILE_H
