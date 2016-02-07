#include <QtGui/QApplication>
#include "lcfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LCFile w;
    w.show();
    return a.exec();
}
