#ifndef PIHMTHREAD_H
#define PIHMTHREAD_H

#include <QThread>
#include <QProgressBar>

//#include "../1PIHM_v2.2/pihm.h"


class PIHMThread : public QThread
{
public:
    PIHMThread(QObject* parent=0);
    int i;
    char **arguments;

    QProgressBar* progressBar;
    QString logFileName;
    int* RunFlag;
    QString ModelVersion;

    void init(int, char**, QProgressBar*, QString, QString, int);
    void run();
    void kill();

signals:
    void updateProgressBar(int progress);

};

#endif
