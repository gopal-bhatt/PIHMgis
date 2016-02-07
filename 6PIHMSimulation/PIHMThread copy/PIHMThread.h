#ifndef PIHMTHREAD_H
#define PIHMTHREAD_H

#include <QThread>
#include <QProgressBar>

#include "../1PIHM_v2.2/pihm_v22.h"

class PIHMThread : public QThread
{
public:
    PIHMThread(QObject* parent=0);
    int i;
    char **nfile;
    QProgressBar* progressBar;
    QString logFileName;
    int* RunFlag;
    int* ModelVersion;

    void init(int, char**, QProgressBar*, QString);
    void run();
    void kill();
};

#endif
