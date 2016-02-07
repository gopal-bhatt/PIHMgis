#ifndef DISSOLVEPOLYGONS_H
#define DISSOLVEPOLYGONS_H

#include <QDialog>

namespace Ui {
class DissolvePolygons;
}

class DissolvePolygons : public QDialog
{
    Q_OBJECT

public:
    explicit DissolvePolygons(QWidget *parent = 0);
    ~DissolvePolygons();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonInputPolygons_clicked();

    void on_pushButtonDissolvePolygons_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

private:
    Ui::DissolvePolygons *ui;
};

#endif // DISSOLVEPOLYGONS_H
