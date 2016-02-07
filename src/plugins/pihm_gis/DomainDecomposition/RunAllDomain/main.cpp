#include <QtGui/QApplication>
#include "runnalldomain.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RunnAllDomain w;
    w.show();
    return a.exec();
}
