#ifndef PIHM_V22_H
#define PIHM_V22_H

#include <QDialog>

namespace Ui {
class PIHM_v22;
}

class PIHM_v22 : public QDialog
{
    Q_OBJECT

public:
    explicit PIHM_v22(QWidget *parent = 0);
    ~PIHM_v22();

private:
    Ui::PIHM_v22 *ui;
};

#endif // PIHM_V22_H
