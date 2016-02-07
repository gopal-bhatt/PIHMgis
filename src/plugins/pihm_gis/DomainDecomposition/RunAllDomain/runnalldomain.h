#ifndef RUNNALLDOMAIN_H
#define RUNNALLDOMAIN_H

#include <QtGui/QDialog>

namespace Ui
{
    class RunnAllDomain;
}

class RunnAllDomain : public QDialog
{
    Q_OBJECT

public:
    RunnAllDomain(QWidget *parent = 0);
    ~RunnAllDomain();

private:
    Ui::RunnAllDomain *ui;

private slots:
    void on_pushButtonHelp_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonRun_clicked();
    void on_pushButtonMesh_clicked();
    void on_pushButtonConstrain_clicked();
};

#endif // RUNNALLDOMAIN_H
