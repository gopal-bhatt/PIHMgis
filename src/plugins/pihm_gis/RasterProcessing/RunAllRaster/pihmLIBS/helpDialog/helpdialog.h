#ifndef HELPDIALOG
#define HELPDIALOG

#include "ui_helpdialog.h"

class helpDialog : public QDialog, private Ui::helpDialog
{
        Q_OBJECT
public:
        helpDialog(QWidget *parent = 0,  const char* name = 0, bool modal = FALSE, const QString& helpFileName=NULL,const QString& captionText=NULL);

};

#endif
