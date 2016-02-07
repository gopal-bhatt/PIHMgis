#ifndef RIVDATAFILE_H
#define RIVDATAFILE_H

#include <QDialog>

namespace Ui {
class RivDataFile;
}

class RivDataFile : public QDialog
{
    Q_OBJECT

public:
    explicit RivDataFile(QWidget *parent = 0);
    ~RivDataFile();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonElementFile_clicked();

    void on_pushButtonNodeFile_clicked();

    void on_pushButtonNeighbourFile_clicked();

    void on_pushButtonRiverFile_clicked();

    void on_pushButtonRivDataFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::RivDataFile *ui;
};

#endif // RIVDATAFILE_H
