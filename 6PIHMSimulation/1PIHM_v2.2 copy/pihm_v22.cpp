#include "pihm_v22.h"
#include "ui_pihm_v22.h"

PIHM_v22::PIHM_v22(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PIHM_v22)
{
    ui->setupUi(this);
}

PIHM_v22::~PIHM_v22()
{
    delete ui;
}
