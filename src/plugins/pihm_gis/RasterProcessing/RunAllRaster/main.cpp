#include <QtGui/QApplication>
#include "runallraster.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RunAllRaster w;
    w.show();
    return a.exec();
}
