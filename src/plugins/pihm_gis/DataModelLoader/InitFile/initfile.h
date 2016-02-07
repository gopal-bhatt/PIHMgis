#ifndef INITFILE_H
#define INITFILE_H

#include <QtGui/QDialog>

namespace Ui
{
    class InitFile;
}

class InitFile : public QDialog
{
    Q_OBJECT

public:
    InitFile(QWidget *parent = 0);
    ~InitFile();

private:
    Ui::InitFile *ui;

private slots:
    void on_pushButton_Help_clicked();
    void on_pushButton_Run_clicked();
    void on_pushButton_Close_clicked();
    void on_pushButton_InitFile_clicked();
    void on_pushButton_RivFile_clicked();
    void on_pushButton_MeshFile_clicked();
};

#endif // INITFILE_H
