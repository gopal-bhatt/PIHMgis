#ifndef DEFINEPROJECT_H
#define DEFINEPROJECT_H

#include <QtGui/QDialog>

namespace Ui
{
    class DefineProject;
}

class DefineProject : public QDialog
{
    Q_OBJECT

public:
    DefineProject(QWidget *parent = 0);
    ~DefineProject();

private:
    Ui::DefineProject *ui;

private slots:
    void on_pushButtonSave_clicked();
    void on_pushButtonHelp_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonFile_clicked();
};

#endif // DEFINEPROJECT_H
