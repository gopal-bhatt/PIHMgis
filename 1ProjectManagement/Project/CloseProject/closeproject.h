#ifndef CLOSEPROJECT_H
#define CLOSEPROJECT_H

#include <QtGui/QDialog>

namespace Ui
{
    class CloseProject;
}

class CloseProject : public QDialog
{
    Q_OBJECT

public:
    CloseProject(QWidget *parent = 0);
    ~CloseProject();

private:
    Ui::CloseProject *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonOpen_clicked();
    void on_pushButtonClose_clicked();
};

#endif // CLOSEPROJECT_H
