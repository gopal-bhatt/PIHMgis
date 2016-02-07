/********************************************************************************
** Form generated from reading ui file 'qgsattributedialogbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEDIALOGBASE_H
#define UI_QGSATTRIBUTEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>

class Ui_QgsAttributeDialogBase
{
public:
    QGridLayout *gridLayout;
    QFrame *mFrame;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAttributeDialogBase)
    {
    if (QgsAttributeDialogBase->objectName().isEmpty())
        QgsAttributeDialogBase->setObjectName(QString::fromUtf8("QgsAttributeDialogBase"));
    QgsAttributeDialogBase->resize(447, 343);
    gridLayout = new QGridLayout(QgsAttributeDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mFrame = new QFrame(QgsAttributeDialogBase);
    mFrame->setObjectName(QString::fromUtf8("mFrame"));
    mFrame->setFrameShape(QFrame::StyledPanel);
    mFrame->setFrameShadow(QFrame::Raised);

    gridLayout->addWidget(mFrame, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsAttributeDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


    retranslateUi(QgsAttributeDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsAttributeDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsAttributeDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeDialogBase)
    {
    QgsAttributeDialogBase->setWindowTitle(QApplication::translate("QgsAttributeDialogBase", "Enter Attribute Values", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAttributeDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeDialogBase: public Ui_QgsAttributeDialogBase {};
} // namespace Ui

#endif // UI_QGSATTRIBUTEDIALOGBASE_H
