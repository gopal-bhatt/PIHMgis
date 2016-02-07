#ifndef LcDATAFILE_H
#define LcDATAFILE_H

#include <QDialog>

namespace Ui {
class LcDataFile;
}

class LcDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit LcDataFile(QWidget *parent = 0);
    ~LcDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonLcClassFile_clicked();

    void on_pushButtonLcDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::LcDataFile *ui;
};

#endif // LcDATAFILE_H
