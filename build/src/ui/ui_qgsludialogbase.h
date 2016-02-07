/********************************************************************************
** Form generated from reading ui file 'qgsludialogbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLUDIALOGBASE_H
#define UI_QGSLUDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>

class Ui_QgsLUDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mLowerLabel;
    QSpacerItem *spacerItem;
    QLabel *mUpperLabel;
    QLineEdit *mLowerEdit;
    QLabel *mBetweenLabel;
    QLineEdit *mUpperEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsLUDialogBase)
    {
    if (QgsLUDialogBase->objectName().isEmpty())
        QgsLUDialogBase->setObjectName(QString::fromUtf8("QgsLUDialogBase"));
    QgsLUDialogBase->resize(324, 133);
    QgsLUDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsLUDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(-1);
    gridLayout->setVerticalSpacing(-1);
    gridLayout->setContentsMargins(4, 4, 4, 4);
    mLowerLabel = new QLabel(QgsLUDialogBase);
    mLowerLabel->setObjectName(QString::fromUtf8("mLowerLabel"));

    gridLayout->addWidget(mLowerLabel, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(16, 49, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 1, 1, 1);

    mUpperLabel = new QLabel(QgsLUDialogBase);
    mUpperLabel->setObjectName(QString::fromUtf8("mUpperLabel"));

    gridLayout->addWidget(mUpperLabel, 0, 2, 1, 1);

    mLowerEdit = new QLineEdit(QgsLUDialogBase);
    mLowerEdit->setObjectName(QString::fromUtf8("mLowerEdit"));

    gridLayout->addWidget(mLowerEdit, 1, 0, 1, 1);

    mBetweenLabel = new QLabel(QgsLUDialogBase);
    mBetweenLabel->setObjectName(QString::fromUtf8("mBetweenLabel"));
    mBetweenLabel->setTextFormat(Qt::AutoText);

    gridLayout->addWidget(mBetweenLabel, 1, 1, 1, 1);

    mUpperEdit = new QLineEdit(QgsLUDialogBase);
    mUpperEdit->setObjectName(QString::fromUtf8("mUpperEdit"));

    gridLayout->addWidget(mUpperEdit, 1, 2, 1, 1);

    buttonBox = new QDialogButtonBox(QgsLUDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 3);

    mLowerLabel->setBuddy(mLowerEdit);
    mUpperLabel->setBuddy(mUpperEdit);

    retranslateUi(QgsLUDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsLUDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsLUDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsLUDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLUDialogBase)
    {
    QgsLUDialogBase->setWindowTitle(QApplication::translate("QgsLUDialogBase", "Enter class bounds", 0, QApplication::UnicodeUTF8));
    mLowerLabel->setText(QApplication::translate("QgsLUDialogBase", "Lower value", 0, QApplication::UnicodeUTF8));
    mUpperLabel->setText(QApplication::translate("QgsLUDialogBase", "Upper value", 0, QApplication::UnicodeUTF8));
    mBetweenLabel->setText(QApplication::translate("QgsLUDialogBase", "-", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLUDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLUDialogBase: public Ui_QgsLUDialogBase {};
} // namespace Ui

#endif // UI_QGSLUDIALOGBASE_H
