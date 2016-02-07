#ifndef LCFILE_H
#define LCFILE_H

#include <QtGui/QDialog>

namespace Ui
{
    class LCFile;
}

class LCFile : public QDialog
{
    Q_OBJECT

public:
    LCFile(QWidget *parent = 0);
    ~LCFile();

private:
    Ui::LCFile *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonLC_clicked();
    void on_pushButtonNLCD_clicked();
    void on_pushButtonClose_clicked();
};

#endif // LCFILE_H
