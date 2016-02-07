#include <QtGui/QApplication>
#include "calibfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalibFile w;
    w.show();
    return a.exec();
}
