#ifndef OPENPROJECT_H
#define OPENPROJECT_H

#include <QtGui/QDialog>

namespace Ui
{
    class OpenProject;
}

class OpenProject : public QDialog
{
    Q_OBJECT

public:
    OpenProject(QWidget *parent = 0);
    ~OpenProject();

private:
    Ui::OpenProject *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonOpen_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonFile_clicked();
};

#endif // OPENPROJECT_H
