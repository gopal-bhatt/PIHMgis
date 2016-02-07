#include <QtGui/QApplication>
#include "defineproject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DefineProject w;
    w.show();
    return a.exec();
}
