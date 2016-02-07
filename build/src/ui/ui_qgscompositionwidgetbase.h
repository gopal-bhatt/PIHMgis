/********************************************************************************
** Form generated from reading ui file 'qgscompositionwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSITIONWIDGETBASE_H
#define UI_QGSCOMPOSITIONWIDGETBASE_H

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

class Ui_QgsCompositionWidgetBase
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
    QLabel *mResolutionLabel;
    QLineEdit *mResolutionLineEdit;

    void setupUi(QWidget *QgsCompositionWidgetBase)
    {
    if (QgsCompositionWidgetBase->objectName().isEmpty())
        QgsCompositionWidgetBase->setObjectName(QString::fromUtf8("QgsCompositionWidgetBase"));
    QgsCompositionWidgetBase->resize(243, 422);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsCompositionWidgetBase->sizePolicy().hasHeightForWidth());
    QgsCompositionWidgetBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsCompositionWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    groupBox = new QGroupBox(QgsCompositionWidgetBase);
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

    gridLayout->addItem(spacerItem, 2, 0, 1, 2);

    mResolutionLabel = new QLabel(QgsCompositionWidgetBase);
    mResolutionLabel->setObjectName(QString::fromUtf8("mResolutionLabel"));
    sizePolicy2.setHeightForWidth(mResolutionLabel->sizePolicy().hasHeightForWidth());
    mResolutionLabel->setSizePolicy(sizePolicy2);

    gridLayout->addWidget(mResolutionLabel, 1, 0, 1, 1);

    mResolutionLineEdit = new QLineEdit(QgsCompositionWidgetBase);
    mResolutionLineEdit->setObjectName(QString::fromUtf8("mResolutionLineEdit"));

    gridLayout->addWidget(mResolutionLineEdit, 1, 1, 1, 1);

    textLabel7->setBuddy(mPaperOrientationComboBox);
    textLabel6->setBuddy(mPaperHeightLineEdit);
    textLabel4->setBuddy(mPaperWidthLineEdit);
    textLabel5->setBuddy(mPaperUnitsComboBox);
    textLabel3->setBuddy(mPaperSizeComboBox);
    mResolutionLabel->setBuddy(mResolutionLineEdit);

    retranslateUi(QgsCompositionWidgetBase);

    QMetaObject::connectSlotsByName(QgsCompositionWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompositionWidgetBase)
    {
    QgsCompositionWidgetBase->setWindowTitle(QApplication::translate("QgsCompositionWidgetBase", "Composition", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsCompositionWidgetBase", "Paper", 0, QApplication::UnicodeUTF8));
    textLabel7->setText(QApplication::translate("QgsCompositionWidgetBase", "Orientation", 0, QApplication::UnicodeUTF8));
    textLabel6->setText(QApplication::translate("QgsCompositionWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsCompositionWidgetBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsCompositionWidgetBase", "Units", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsCompositionWidgetBase", "Size", 0, QApplication::UnicodeUTF8));
    mResolutionLabel->setText(QApplication::translate("QgsCompositionWidgetBase", "Print quality (dpi)", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsCompositionWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCompositionWidgetBase: public Ui_QgsCompositionWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSITIONWIDGETBASE_H
