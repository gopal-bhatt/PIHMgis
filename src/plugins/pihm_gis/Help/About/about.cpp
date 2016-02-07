#include <QtGui>
#include "about.h"

AboutDlg::AboutDlg(QWidget *parent)
{
	setupUi(this);
}

void AboutDlg::on_label_11_linkActivated(QString link)
{
    this->label_11->setOpenExternalLinks(true);
}
