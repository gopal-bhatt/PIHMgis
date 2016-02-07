/********************************************************************************
** Form generated from reading ui file 'qgscompositionbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSITIONBASE_H
#define UI_QGSCOMPOSITIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_QgsCompositionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QComboBox *mPaperOrientationComboBox;
    QLineEdit *mPaperHeightLineEdit;
    QLineEdit *mPaperWidthLineEdit;
    QComboBox *mPaperUnitsComboBox;
    QComboBox *mPaperSizeComboBox;
    QLabel *textLabel7;
    QLabel *textLabel6;
    QLabel *textLabel4;
    QLabel *textLabel5;
    QLabel *textLabel3;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *QgsCompositionBase)
    {
    if (QgsCompositionBase->objectName().isEmpty())
        QgsCompositionBase->setObjectName(QString::fromUtf8("QgsCompositionBase"));
    QgsCompositionBase->resize(243, 422);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsCompositionBase->sizePolicy().hasHeightForWidth());
    QgsCompositionBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsCompositionBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    groupBox = new QGroupBox(QgsCompositionBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    mPaperOrientationComboBox = new QComboBox(groupBox);
    mPaperOrientationComboBox->setObjectName(QString::fromUtf8("mPaperOrientationComboBox"));
    mPaperOrientationComboBox->setEnabled(true);
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mPaperOrientationComboBox->sizePolicy().hasHeightForWidth());
    mPaperOrientationComboBox->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(mPaperOrientationComboBox, 4, 1, 1, 1);

    mPaperHeightLineEdit = new QLineEdit(groupBox);
    mPaperHeightLineEdit->setObjectName(QString::fromUtf8("mPaperHeightLineEdit"));

    gridLayout1->addWidget(mPaperHeightLineEdit, 3, 1, 1, 1);

    mPaperWidthLineEdit = new QLineEdit(groupBox);
    mPaperWidthLineEdit->setObjectName(QString::fromUtf8("mPaperWidthLineEdit"));

    gridLayout1->addWidget(mPaperWidthLineEdit, 2, 1, 1, 1);

    mPaperUnitsComboBox = new QComboBox(groupBox);
    mPaperUnitsComboBox->setObjectName(QString::fromUtf8("mPaperUnitsComboBox"));
    mPaperUnitsComboBox->setEnabled(false);
    sizePolicy1.setHeightForWidth(mPaperUnitsComboBox->sizePolicy().hasHeightForWidth());
    mPaperUnitsComboBox->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(mPaperUnitsComboBox, 1, 1, 1, 1);

    mPaperSizeComboBox = new QComboBox(groupBox);
    mPaperSizeComboBox->setObjectName(QString::fromUtf8("mPaperSizeComboBox"));
    mPaperSizeComboBox->setEnabled(true);
    sizePolicy1.setHeightForWidth(mPaperSizeComboBox->sizePolicy().hasHeightForWidth());
    mPaperSizeComboBox->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(mPaperSizeComboBox, 0, 1, 1, 1);

    textLabel7 = new QLabel(groupBox);
    textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel7->sizePolicy().hasHeightForWidth());
    textLabel7->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(textLabel7, 4, 0, 1, 1);

    textLabel6 = new QLabel(groupBox);
    textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
    sizePolicy2.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
    textLabel6->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(textLabel6, 3, 0, 1, 1);

    textLabel4 = new QLabel(groupBox);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    sizePolicy2.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(textLabel4, 2, 0, 1, 1);

    textLabel5 = new QLabel(groupBox);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    sizePolicy2.setHeightForWidth(textLabel5->sizePolicy().hasHeightForWidth());
    textLabel5->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(textLabel5, 1, 0, 1, 1);

    textLabel3 = new QLabel(groupBox);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    sizePolicy2.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(textLabel3, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox, 0, 0, 1, 2);

    spacerItem = new QSpacerItem(223, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 1, 0, 2, 2);

    textLabel7->setBuddy(mPaperOrientationComboBox);
    textLabel6->setBuddy(mPaperHeightLineEdit);
    textLabel4->setBuddy(mPaperWidthLineEdit);
    textLabel5->setBuddy(mPaperUnitsComboBox);
    textLabel3->setBuddy(mPaperSizeComboBox);

    retranslateUi(QgsCompositionBase);

    QMetaObject::connectSlotsByName(QgsCompositionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompositionBase)
    {
    QgsCompositionBase->setWindowTitle(QApplication::translate("QgsCompositionBase", "Composition", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsCompositionBase", "Paper", 0, QApplication::UnicodeUTF8));
    textLabel7->setText(QApplication::translate("QgsCompositionBase", "Orientation", 0, QApplication::UnicodeUTF8));
    textLabel6->setText(QApplication::translate("QgsCompositionBase", "Height", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsCompositionBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsCompositionBase", "Units", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsCompositionBase", "Size", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsCompositionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCompositionBase: public Ui_QgsCompositionBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSITIONBASE_H
