#ifndef CALIBFILE_H
#define CALIBFILE_H

#include <QtGui/QDialog>

namespace Ui
{
    class CalibFile;
}

class CalibFile : public QDialog
{
    Q_OBJECT

public:
    CalibFile(QWidget *parent = 0);
    ~CalibFile();

private:
    Ui::CalibFile *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonBrowse_clicked();
    void on_pushButtonClose_clicked();
};

#endif // CALIBFILE_H
