#ifndef TINSHAPELAYER_H
#define TINSHAPELAYER_H

#include <QDialog>

namespace Ui {
class TINShapeLayer;
}

class TINShapeLayer : public QDialog
{
    Q_OBJECT

public:
    explicit TINShapeLayer(QWidget *parent = 0);
    ~TINShapeLayer();

    QString LogsString;
    QStringList ProjectIOStringList;

private slots:
    void on_pushButtonElementFile_clicked();

    void on_pushButtonNodeFile_clicked();

    void on_pushButtonTINFile_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();


private:
    Ui::TINShapeLayer *ui;
};

#endif // TINSHAPELAYER_H
