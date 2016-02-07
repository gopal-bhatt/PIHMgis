#ifndef DELAUNAYTRIANGULATION_H
#define DELAUNAYTRIANGULATION_H

#include <QDialog>

namespace Ui {
class DelaunayTriangulation;
}

class DelaunayTriangulation : public QDialog
{
    Q_OBJECT

public:
    explicit DelaunayTriangulation(QWidget *parent = 0);
    ~DelaunayTriangulation();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonPSLG_clicked();

    void on_checkBoxAngle_toggled(bool checked);

    void on_checkBoxArea_toggled(bool checked);

    void on_checkBoxOthers_toggled(bool checked);

    void on_lineEditAngle_textChanged(const QString &arg1);

    void on_lineEditArea_textChanged(const QString &arg1);

    void on_lineEditOthers_textChanged(const QString &arg1);

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();


private:
    Ui::DelaunayTriangulation *ui;
};

#endif // DELAUNAYTRIANGULATION_H
