#include <QtGui/QApplication>
#include "initfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InitFile w;
    w.show();
    return a.exec();
}
