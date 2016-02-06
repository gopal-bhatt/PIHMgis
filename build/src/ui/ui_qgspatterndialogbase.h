/********************************************************************************
** Form generated from reading ui file 'qgspatterndialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPATTERNDIALOGBASE_H
#define UI_QGSPATTERNDIALOGBASE_H

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

class Ui_QgsPatternDialogBase
{
public:
    QGridLayout *gridLayout;
    Q3ButtonGroup *buttonGroup1;
    QGridLayout *gridLayout1;
    QPushButton *solid;
    QPushButton *fdiag;
    QPushButton *dense4;
    QPushButton *horizontal;
    QPushButton *dense5;
    QPushButton *diagcross;
    QPushButton *dense1;
    QPushButton *dense6;
    QPushButton *vertical;
    QPushButton *cross;
    QPushButton *dense2;
    QPushButton *bdiag;
    QPushButton *dense3;
    QPushButton *dense7;
    QPushButton *nopen;
    QPushButton *cancelbutton;
    QPushButton *okbutton;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QgsPatternDialogBase)
    {
    if (QgsPatternDialogBase->objectName().isEmpty())
        QgsPatternDialogBase->setObjectName(QString::fromUtf8("QgsPatternDialogBase"));
    QgsPatternDialogBase->resize(411, 326);
    QgsPatternDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsPatternDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonGroup1 = new Q3ButtonGroup(QgsPatternDialogBase);
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
    solid = new QPushButton(buttonGroup1);
    solid->setObjectName(QString::fromUtf8("solid"));
    solid->setCheckable(true);
    solid->setDefault(false);

    gridLayout1->addWidget(solid, 0, 0, 1, 1);

    fdiag = new QPushButton(buttonGroup1);
    fdiag->setObjectName(QString::fromUtf8("fdiag"));
    fdiag->setCheckable(true);

    gridLayout1->addWidget(fdiag, 0, 1, 1, 1);

    dense4 = new QPushButton(buttonGroup1);
    dense4->setObjectName(QString::fromUtf8("dense4"));
    dense4->setCheckable(true);

    gridLayout1->addWidget(dense4, 0, 2, 1, 1);

    horizontal = new QPushButton(buttonGroup1);
    horizontal->setObjectName(QString::fromUtf8("horizontal"));
    horizontal->setCheckable(true);

    gridLayout1->addWidget(horizontal, 1, 0, 1, 1);

    dense5 = new QPushButton(buttonGroup1);
    dense5->setObjectName(QString::fromUtf8("dense5"));
    dense5->setCheckable(true);

    gridLayout1->addWidget(dense5, 1, 2, 1, 1);

    diagcross = new QPushButton(buttonGroup1);
    diagcross->setObjectName(QString::fromUtf8("diagcross"));
    diagcross->setCheckable(true);

    gridLayout1->addWidget(diagcross, 1, 1, 1, 1);

    dense1 = new QPushButton(buttonGroup1);
    dense1->setObjectName(QString::fromUtf8("dense1"));
    dense1->setCheckable(true);

    gridLayout1->addWidget(dense1, 2, 1, 1, 1);

    dense6 = new QPushButton(buttonGroup1);
    dense6->setObjectName(QString::fromUtf8("dense6"));
    dense6->setCheckable(true);

    gridLayout1->addWidget(dense6, 2, 2, 1, 1);

    vertical = new QPushButton(buttonGroup1);
    vertical->setObjectName(QString::fromUtf8("vertical"));
    vertical->setCheckable(true);

    gridLayout1->addWidget(vertical, 2, 0, 1, 1);

    cross = new QPushButton(buttonGroup1);
    cross->setObjectName(QString::fromUtf8("cross"));
    cross->setCheckable(true);

    gridLayout1->addWidget(cross, 3, 0, 1, 1);

    dense2 = new QPushButton(buttonGroup1);
    dense2->setObjectName(QString::fromUtf8("dense2"));
    dense2->setCheckable(true);

    gridLayout1->addWidget(dense2, 3, 1, 1, 1);

    bdiag = new QPushButton(buttonGroup1);
    bdiag->setObjectName(QString::fromUtf8("bdiag"));
    bdiag->setCheckable(true);

    gridLayout1->addWidget(bdiag, 4, 0, 1, 1);

    dense3 = new QPushButton(buttonGroup1);
    dense3->setObjectName(QString::fromUtf8("dense3"));
    dense3->setCheckable(true);

    gridLayout1->addWidget(dense3, 4, 1, 1, 1);

    dense7 = new QPushButton(buttonGroup1);
    dense7->setObjectName(QString::fromUtf8("dense7"));
    dense7->setCheckable(true);

    gridLayout1->addWidget(dense7, 3, 2, 1, 1);

    nopen = new QPushButton(buttonGroup1);
    nopen->setObjectName(QString::fromUtf8("nopen"));
    nopen->setCheckable(true);

    gridLayout1->addWidget(nopen, 4, 2, 1, 1);


    gridLayout->addWidget(buttonGroup1, 0, 0, 1, 4);

    cancelbutton = new QPushButton(QgsPatternDialogBase);
    cancelbutton->setObjectName(QString::fromUtf8("cancelbutton"));

    gridLayout->addWidget(cancelbutton, 1, 2, 1, 1);

    okbutton = new QPushButton(QgsPatternDialogBase);
    okbutton->setObjectName(QString::fromUtf8("okbutton"));
    okbutton->setDefault(true);

    gridLayout->addWidget(okbutton, 1, 1, 1, 1);

    spacerItem = new QSpacerItem(41, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 3, 1, 1);

    spacerItem1 = new QSpacerItem(41, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 1, 0, 1, 1);

    QWidget::setTabOrder(solid, fdiag);
    QWidget::setTabOrder(fdiag, dense4);
    QWidget::setTabOrder(dense4, horizontal);
    QWidget::setTabOrder(horizontal, diagcross);
    QWidget::setTabOrder(diagcross, dense5);
    QWidget::setTabOrder(dense5, vertical);
    QWidget::setTabOrder(vertical, dense1);
    QWidget::setTabOrder(dense1, dense6);
    QWidget::setTabOrder(dense6, cross);
    QWidget::setTabOrder(cross, dense2);
    QWidget::setTabOrder(dense2, dense7);
    QWidget::setTabOrder(dense7, bdiag);
    QWidget::setTabOrder(bdiag, dense3);
    QWidget::setTabOrder(dense3, okbutton);
    QWidget::setTabOrder(okbutton, cancelbutton);

    retranslateUi(QgsPatternDialogBase);

    QMetaObject::connectSlotsByName(QgsPatternDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPatternDialogBase)
    {
    QgsPatternDialogBase->setWindowTitle(QApplication::translate("QgsPatternDialogBase", "Select a fill pattern", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QString());
    solid->setText(QString());
    fdiag->setText(QString());
    dense4->setText(QString());
    horizontal->setText(QString());
    dense5->setText(QString());
    diagcross->setText(QString());
    dense1->setText(QString());
    dense6->setText(QString());
    vertical->setText(QString());
    cross->setText(QString());
    dense2->setText(QString());
    bdiag->setText(QString());
    dense3->setText(QString());
    dense7->setText(QString());
    nopen->setToolTip(QApplication::translate("QgsPatternDialogBase", "No Fill", 0, QApplication::UnicodeUTF8));
    nopen->setText(QString());
    cancelbutton->setText(QApplication::translate("QgsPatternDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    okbutton->setText(QApplication::translate("QgsPatternDialogBase", "Ok", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPatternDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPatternDialogBase: public Ui_QgsPatternDialogBase {};
} // namespace Ui

#endif // UI_QGSPATTERNDIALOGBASE_H
