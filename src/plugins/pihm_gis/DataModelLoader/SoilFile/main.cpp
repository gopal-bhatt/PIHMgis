#include <QtGui/QApplication>
#include "soilfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SoilFile w;
    w.show();
    return a.exec();
}
