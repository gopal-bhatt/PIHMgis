#ifndef SOILFILE_H
#define SOILFILE_H

#include <QtGui/QDialog>
#include <QLineEdit>
#include "ui_soilfile.h"

namespace Ui
{
    class SoilFile;
}

class SoilFile : public QDialog
{
    Q_OBJECT

public:
    SoilFile(QWidget *parent = 0);
    ~SoilFile();

private:
    Ui::SoilFile *ui;


private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonSoilFile_clicked();
    void on_pushButtonSoilTexture_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonClose_clicked();
};

#endif // SOILFILE_H
