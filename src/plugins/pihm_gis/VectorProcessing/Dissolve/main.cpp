#include <QtGui/QApplication>
#include "dissolve.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dissolve w;
    w.show();
    return a.exec();
}
