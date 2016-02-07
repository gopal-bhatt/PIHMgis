#ifndef IBCDATAFILE_H
#define IBCDATAFILE_H

#include <QDialog>

namespace Ui {
class IbcDataFile;
}

class IbcDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit IbcDataFile(QWidget *parent = 0);
    ~IbcDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonIbcDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

    int  ibc_data_file( QString );

private:
    Ui::IbcDataFile *ui;
};

#endif // IBCDATAFILE_H
