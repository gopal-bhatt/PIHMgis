/********************************************************************************
** Form generated from reading ui file 'qgslinestyledialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLINESTYLEDIALOGBASE_H
#define UI_QGSLINESTYLEDIALOGBASE_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsLineStyleDialogBase
{
public:
    QGridLayout *gridLayout;
    Q3ButtonGroup *buttonGroup1;
    QGridLayout *gridLayout1;
    QPushButton *dot;
    QPushButton *nopen;
    QPushButton *dashdotdot;
    QPushButton *dashdot;
    QPushButton *dash;
    QPushButton *solid;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QPushButton *okbutton;
    QPushButton *cancelbutton;

    void setupUi(QDialog *QgsLineStyleDialogBase)
    {
    if (QgsLineStyleDialogBase->objectName().isEmpty())
        QgsLineStyleDialogBase->setObjectName(QString::fromUtf8("QgsLineStyleDialogBase"));
    QgsLineStyleDialogBase->resize(240, 261);
    QgsLineStyleDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsLineStyleDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonGroup1 = new Q3ButtonGroup(QgsLineStyleDialogBase);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setOrientation(Qt::Vertical);
    buttonGroup1->setExclusive(true);
    buttonGroup1->setColumnLayout(0, Qt::Vertical);
    buttonGroup1->layout()->setSpacing(6);
    buttonGroup1->layout()->setMargin(10);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(buttonGroup1->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    dot = new QPushButton(buttonGroup1);
    dot->setObjectName(QString::fromUtf8("dot"));
    dot->setMaximumSize(QSize(60, 30));
    dot->setCheckable(true);

    gridLayout1->addWidget(dot, 2, 0, 1, 1);

    nopen = new QPushButton(buttonGroup1);
    nopen->setObjectName(QString::fromUtf8("nopen"));
    nopen->setMaximumSize(QSize(60, 30));
    nopen->setCheckable(true);

    gridLayout1->addWidget(nopen, 2, 1, 1, 1);

    dashdotdot = new QPushButton(buttonGroup1);
    dashdotdot->setObjectName(QString::fromUtf8("dashdotdot"));
    dashdotdot->setMaximumSize(QSize(60, 30));
    dashdotdot->setCheckable(true);

    gridLayout1->addWidget(dashdotdot, 1, 1, 1, 1);

    dashdot = new QPushButton(buttonGroup1);
    dashdot->setObjectName(QString::fromUtf8("dashdot"));
    dashdot->setMaximumSize(QSize(60, 30));
    dashdot->setCheckable(true);

    gridLayout1->addWidget(dashdot, 0, 1, 1, 1);

    dash = new QPushButton(buttonGroup1);
    dash->setObjectName(QString::fromUtf8("dash"));
    dash->setMaximumSize(QSize(60, 30));
    dash->setCheckable(true);

    gridLayout1->addWidget(dash, 1, 0, 1, 1);

    solid = new QPushButton(buttonGroup1);
    solid->setObjectName(QString::fromUtf8("solid"));
    solid->setMaximumSize(QSize(60, 30));
    solid->setCheckable(true);

    gridLayout1->addWidget(solid, 0, 0, 1, 1);


    gridLayout->addWidget(buttonGroup1, 0, 0, 1, 4);

    spacerItem = new QSpacerItem(81, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 3, 1, 1);

    spacerItem1 = new QSpacerItem(81, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 1, 0, 1, 1);

    okbutton = new QPushButton(QgsLineStyleDialogBase);
    okbutton->setObjectName(QString::fromUtf8("okbutton"));

    gridLayout->addWidget(okbutton, 1, 1, 1, 1);

    cancelbutton = new QPushButton(QgsLineStyleDialogBase);
    cancelbutton->setObjectName(QString::fromUtf8("cancelbutton"));

    gridLayout->addWidget(cancelbutton, 1, 2, 1, 1);

    QWidget::setTabOrder(solid, dashdot);
    QWidget::setTabOrder(dashdot, dash);
    QWidget::setTabOrder(dash, dashdotdot);
    QWidget::setTabOrder(dashdotdot, dot);
    QWidget::setTabOrder(dot, nopen);
    QWidget::setTabOrder(nopen, okbutton);
    QWidget::setTabOrder(okbutton, cancelbutton);

    retranslateUi(QgsLineStyleDialogBase);

    QMetaObject::connectSlotsByName(QgsLineStyleDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLineStyleDialogBase)
    {
    QgsLineStyleDialogBase->setWindowTitle(QApplication::translate("QgsLineStyleDialogBase", "Select a line style", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("QgsLineStyleDialogBase", "Styles", 0, QApplication::UnicodeUTF8));
    dot->setText(QString());
    nopen->setText(QString());
    dashdotdot->setText(QString());
    dashdot->setText(QString());
    dash->setText(QString());
    solid->setText(QString());
    okbutton->setText(QApplication::translate("QgsLineStyleDialogBase", "Ok", 0, QApplication::UnicodeUTF8));
    cancelbutton->setText(QApplication::translate("QgsLineStyleDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLineStyleDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLineStyleDialogBase: public Ui_QgsLineStyleDialogBase {};
} // namespace Ui

#endif // UI_QGSLINESTYLEDIALOGBASE_H
