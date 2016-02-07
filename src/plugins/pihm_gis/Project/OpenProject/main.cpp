#include <QtGui/QApplication>
#include "openproject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OpenProject w;
    w.show();
    return a.exec();
}
