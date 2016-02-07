#include <QtGui/QApplication>
#include "importproject.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImportProject w;
    w.show();
    return a.exec();
}
