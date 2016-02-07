#include <QtGui/QApplication>
#include "geolfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GeolFile w;
    w.show();
    return a.exec();
}
