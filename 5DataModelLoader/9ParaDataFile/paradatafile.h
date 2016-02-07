#ifndef PARADATAFILE_H
#define PARADATAFILE_H

#include <QDialog>

namespace Ui {
class ParaDataFile;
}

class ParaDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit ParaDataFile(QWidget *parent = 0);
    ~ParaDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonParaDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

    int para_data_file();


private:
    Ui::ParaDataFile *ui;

};

#endif // PARADATAFILE_H
