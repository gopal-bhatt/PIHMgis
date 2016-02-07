#ifndef IBCFILE_H
#define IBCFILE_H

#include <QtGui/QDialog>

namespace Ui
{
    class IbcFile;
}

class IbcFile : public QDialog
{
    Q_OBJECT

public:
    IbcFile(QWidget *parent = 0);
    ~IbcFile();

private:
    Ui::IbcFile *ui;

private slots:


private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonBrowse_clicked();
};

#endif // IBCFILE_H
