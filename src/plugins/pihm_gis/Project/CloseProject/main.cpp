#include <QtGui/QApplication>
#include "closeproject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CloseProject w;
    w.show();
    return a.exec();
}
