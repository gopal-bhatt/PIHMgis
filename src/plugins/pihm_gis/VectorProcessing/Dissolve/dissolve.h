#ifndef DISSOLVE_H
#define DISSOLVE_H

#include <QDialog>
#include <qgisinterface.h>

namespace Ui {
    class Dissolve;
}

class Dissolve : public QDialog {
    Q_OBJECT
public:
    Dissolve(QWidget *parent = 0);
    ~Dissolve();
	void setApplicationPointer(QgisInterface *);
	QgisInterface* applicationPointer;

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dissolve *ui;

private slots:
    void on_pushButtonRun_clicked();
    void on_pushButtonHelp_clicked();
    void on_pushButtonClose_clicked();
    void on_pushButtonOutput_clicked();
    void on_pushButtonInput_clicked();
};

#endif // DISSOLVE_H
