#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QDialog>
#include <QDate>

namespace Ui
{
    class NewProject;
}

class NewProject : public QDialog
{
    Q_OBJECT

public:
    NewProject(QWidget *parent = 0);
    ~NewProject();
    QDateTime ProjectDateTime;
    QString LogsString;

private:
    Ui::NewProject *ui;

private slots:
    void on_pushButtonCreate_clicked();
    void on_pushButtonHelp_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonFile_clicked();
};

#endif
