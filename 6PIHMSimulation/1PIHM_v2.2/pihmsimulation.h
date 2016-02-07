#ifndef PIHMSimulation_H
#define PIHMSimulation_H

#include <QDialog>

#include "6PIHMSimulation/PIHMThread/PIHMThread.h"

namespace Ui {
class PIHMSimulation;
}

class PIHMSimulation : public QDialog
{
    Q_OBJECT

public:
    explicit PIHMSimulation(QWidget *parent = 0);
    ~PIHMSimulation();

    QString ModelVersion;

    QString LogsString;
    QStringList ProjectIOStringList;
    PIHMThread* MyPIHMThread;

private slots:
    void on_pushButtonInputDataFolder_clicked();

    void on_pushButtonRun_clicked();

    void on_pushButtonClose_clicked();

    void on_pushButtonHelp_clicked();

    void pushButtonSetFocus();

    int CheckInputFiles();

    int CheckInputFileAccess(QString);

    int CopyInputFiles(QString);

    int CopyInputFile(QString, QString);



    void on_progressBar_valueChanged(int value);
    void updateProgressBarValue(int value);
    void PIHMThreadFinished();

    void on_lineEditInputDataFolder_textChanged(const QString &arg1);

    void on_lineEditDataKey_textChanged(const QString &arg1);

    void verifyInputOutputFile();

private:
    Ui::PIHMSimulation *ui;
};

#endif // PIHMSimulation_H
