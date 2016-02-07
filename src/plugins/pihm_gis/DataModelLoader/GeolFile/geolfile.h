#ifndef GEOLFILE_H
#define GEOLFILE_H

#include <QtGui/QDialog>

namespace Ui
{
    class GeolFile;
}

class GeolFile : public QDialog
{
    Q_OBJECT

public:
    GeolFile(QWidget *parent = 0);
    ~GeolFile();

private:
    Ui::GeolFile *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonGeolFile_clicked();
    void on_pushButtonGeolTexture_clicked();
    void on_pushButtonClose_clicked();
};

#endif // GEOLFILE_H
