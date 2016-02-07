#ifndef IMPORTPROJECT_H
#define IMPORTPROJECT_H

#include <QDialog>

namespace Ui
{
    class ImportProject;
}

class ImportProject : public QDialog
{
    Q_OBJECT

public:
    ImportProject(QWidget *parent = 0);
    ~ImportProject();
    QString LogsString;

private:
    Ui::ImportProject *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonImport_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonProject_clicked();
};

#endif // IMPORTPROJECT_H
