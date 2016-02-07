#include <QApplication>

#include "helpdialog.h"

int main(int argc, char *argv[])
{
        QApplication app(argc, argv);
        helpDialog *dlg = new helpDialog;

        dlg->show();
        return app.exec();
}

