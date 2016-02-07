#include <QtGui/QApplication>
#include "ibcfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IbcFile w;
    w.show();
    return a.exec();
}
