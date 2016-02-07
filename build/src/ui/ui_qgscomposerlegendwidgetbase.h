/********************************************************************************
** Form generated from reading ui file 'qgscomposerlegendwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLEGENDWIDGETBASE_H
#define UI_QGSCOMPOSERLEGENDWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

class Ui_QgsComposerLegendWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mGeneralGroupBox;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *mTitleLabel;
    QLineEdit *mTitleLineEdit;
    QHBoxLayout *hboxLayout1;
    QLabel *mFontLabel;
    QPushButton *mTitleFontButton;
    QPushButton *mLayerFontButton;
    QPushButton *mItemFontButton;
    QGridLayout *gridLayout2;
    QLabel *mSymbolWidthLabel;
    QDoubleSpinBox *mSymbolWidthSpinBox;
    QLabel *mSymbolHeightLabel;
    QDoubleSpinBox *mSymbolHeightSpinBox;
    QLabel *mLayerSpaceLabel;
    QDoubleSpinBox *mLayerSpaceSpinBox;
    QLabel *mSymbolSpaceLabel;
    QDoubleSpinBox *mSymbolSpaceSpinBox;
    QHBoxLayout *hboxLayout2;
    QLabel *mIconLabelSpaceLabel;
    QDoubleSpinBox *mIconLabelSpaceSpinBox;
    QLabel *mBoxSpaceLabel;
    QDoubleSpinBox *mBoxSpaceSpinBox;
    QGroupBox *mLegendItemsGroupBox;
    QGridLayout *gridLayout3;
    QPushButton *mMoveDownPushButton;
    QPushButton *mMoveUpPushButton;
    QPushButton *mRemovePushButton;
    QPushButton *mEditPushButton;
    QPushButton *mUpdatePushButton;
    QPushButton *mUpdateAllPushButton;
    QTreeView *mItemTreeView;

    void setupUi(QWidget *QgsComposerLegendWidgetBase)
    {
    if (QgsComposerLegendWidgetBase->objectName().isEmpty())
        QgsComposerLegendWidgetBase->setObjectName(QString::fromUtf8("QgsComposerLegendWidgetBase"));
    QgsComposerLegendWidgetBase->resize(560, 537);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerLegendWidgetBase->sizePolicy().hasHeightForWidth());
    QgsComposerLegendWidgetBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerLegendWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mGeneralGroupBox = new QGroupBox(QgsComposerLegendWidgetBase);
    mGeneralGroupBox->setObjectName(QString::fromUtf8("mGeneralGroupBox"));
    gridLayout1 = new QGridLayout(mGeneralGroupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    mTitleLabel = new QLabel(mGeneralGroupBox);
    mTitleLabel->setObjectName(QString::fromUtf8("mTitleLabel"));

    hboxLayout->addWidget(mTitleLabel);

    mTitleLineEdit = new QLineEdit(mGeneralGroupBox);
    mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

    hboxLayout->addWidget(mTitleLineEdit);


    gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    mFontLabel = new QLabel(mGeneralGroupBox);
    mFontLabel->setObjectName(QString::fromUtf8("mFontLabel"));

    hboxLayout1->addWidget(mFontLabel);

    mTitleFontButton = new QPushButton(mGeneralGroupBox);
    mTitleFontButton->setObjectName(QString::fromUtf8("mTitleFontButton"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mTitleFontButton->sizePolicy().hasHeightForWidth());
    mTitleFontButton->setSizePolicy(sizePolicy1);

    hboxLayout1->addWidget(mTitleFontButton);

    mLayerFontButton = new QPushButton(mGeneralGroupBox);
    mLayerFontButton->setObjectName(QString::fromUtf8("mLayerFontButton"));

    hboxLayout1->addWidget(mLayerFontButton);

    mItemFontButton = new QPushButton(mGeneralGroupBox);
    mItemFontButton->setObjectName(QString::fromUtf8("mItemFontButton"));

    hboxLayout1->addWidget(mItemFontButton);


    gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 1);

    gridLayout2 = new QGridLayout();
    gridLayout2->setSpacing(6);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    mSymbolWidthLabel = new QLabel(mGeneralGroupBox);
    mSymbolWidthLabel->setObjectName(QString::fromUtf8("mSymbolWidthLabel"));

    gridLayout2->addWidget(mSymbolWidthLabel, 0, 0, 1, 2);

    mSymbolWidthSpinBox = new QDoubleSpinBox(mGeneralGroupBox);
    mSymbolWidthSpinBox->setObjectName(QString::fromUtf8("mSymbolWidthSpinBox"));

    gridLayout2->addWidget(mSymbolWidthSpinBox, 0, 2, 1, 1);

    mSymbolHeightLabel = new QLabel(mGeneralGroupBox);
    mSymbolHeightLabel->setObjectName(QString::fromUtf8("mSymbolHeightLabel"));

    gridLayout2->addWidget(mSymbolHeightLabel, 0, 3, 1, 2);

    mSymbolHeightSpinBox = new QDoubleSpinBox(mGeneralGroupBox);
    mSymbolHeightSpinBox->setObjectName(QString::fromUtf8("mSymbolHeightSpinBox"));

    gridLayout2->addWidget(mSymbolHeightSpinBox, 0, 5, 1, 1);

    mLayerSpaceLabel = new QLabel(mGeneralGroupBox);
    mLayerSpaceLabel->setObjectName(QString::fromUtf8("mLayerSpaceLabel"));

    gridLayout2->addWidget(mLayerSpaceLabel, 1, 0, 1, 1);

    mLayerSpaceSpinBox = new QDoubleSpinBox(mGeneralGroupBox);
    mLayerSpaceSpinBox->setObjectName(QString::fromUtf8("mLayerSpaceSpinBox"));

    gridLayout2->addWidget(mLayerSpaceSpinBox, 1, 1, 1, 2);

    mSymbolSpaceLabel = new QLabel(mGeneralGroupBox);
    mSymbolSpaceLabel->setObjectName(QString::fromUtf8("mSymbolSpaceLabel"));

    gridLayout2->addWidget(mSymbolSpaceLabel, 1, 3, 1, 1);

    mSymbolSpaceSpinBox = new QDoubleSpinBox(mGeneralGroupBox);
    mSymbolSpaceSpinBox->setObjectName(QString::fromUtf8("mSymbolSpaceSpinBox"));

    gridLayout2->addWidget(mSymbolSpaceSpinBox, 1, 4, 1, 2);


    gridLayout1->addLayout(gridLayout2, 2, 0, 1, 1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    mIconLabelSpaceLabel = new QLabel(mGeneralGroupBox);
    mIconLabelSpaceLabel->setObjectName(QString::fromUtf8("mIconLabelSpaceLabel"));

    hboxLayout2->addWidget(mIconLabelSpaceLabel);

    mIconLabelSpaceSpinBox = new QDoubleSpinBox(mGeneralGroupBox);
    mIconLabelSpaceSpinBox->setObjectName(QString::fromUtf8("mIconLabelSpaceSpinBox"));

    hboxLayout2->addWidget(mIconLabelSpaceSpinBox);

    mBoxSpaceLabel = new QLabel(mGeneralGroupBox);
    mBoxSpaceLabel->setObjectName(QString::fromUtf8("mBoxSpaceLabel"));

    hboxLayout2->addWidget(mBoxSpaceLabel);

    mBoxSpaceSpinBox = new QDoubleSpinBox(mGeneralGroupBox);
    mBoxSpaceSpinBox->setObjectName(QString::fromUtf8("mBoxSpaceSpinBox"));

    hboxLayout2->addWidget(mBoxSpaceSpinBox);


    gridLayout1->addLayout(hboxLayout2, 3, 0, 1, 1);


    gridLayout->addWidget(mGeneralGroupBox, 0, 0, 1, 1);

    mLegendItemsGroupBox = new QGroupBox(QgsComposerLegendWidgetBase);
    mLegendItemsGroupBox->setObjectName(QString::fromUtf8("mLegendItemsGroupBox"));
    gridLayout3 = new QGridLayout(mLegendItemsGroupBox);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    mMoveDownPushButton = new QPushButton(mLegendItemsGroupBox);
    mMoveDownPushButton->setObjectName(QString::fromUtf8("mMoveDownPushButton"));

    gridLayout3->addWidget(mMoveDownPushButton, 0, 0, 1, 1);

    mMoveUpPushButton = new QPushButton(mLegendItemsGroupBox);
    mMoveUpPushButton->setObjectName(QString::fromUtf8("mMoveUpPushButton"));

    gridLayout3->addWidget(mMoveUpPushButton, 0, 1, 1, 1);

    mRemovePushButton = new QPushButton(mLegendItemsGroupBox);
    mRemovePushButton->setObjectName(QString::fromUtf8("mRemovePushButton"));

    gridLayout3->addWidget(mRemovePushButton, 0, 2, 1, 1);

    mEditPushButton = new QPushButton(mLegendItemsGroupBox);
    mEditPushButton->setObjectName(QString::fromUtf8("mEditPushButton"));

    gridLayout3->addWidget(mEditPushButton, 0, 3, 1, 1);

    mUpdatePushButton = new QPushButton(mLegendItemsGroupBox);
    mUpdatePushButton->setObjectName(QString::fromUtf8("mUpdatePushButton"));

    gridLayout3->addWidget(mUpdatePushButton, 0, 4, 1, 1);

    mUpdateAllPushButton = new QPushButton(mLegendItemsGroupBox);
    mUpdateAllPushButton->setObjectName(QString::fromUtf8("mUpdateAllPushButton"));

    gridLayout3->addWidget(mUpdateAllPushButton, 0, 5, 1, 1);

    mItemTreeView = new QTreeView(mLegendItemsGroupBox);
    mItemTreeView->setObjectName(QString::fromUtf8("mItemTreeView"));
    mItemTreeView->setProperty("headerHidden", QVariant(true));

    gridLayout3->addWidget(mItemTreeView, 1, 0, 1, 6);


    gridLayout->addWidget(mLegendItemsGroupBox, 1, 0, 1, 1);


    retranslateUi(QgsComposerLegendWidgetBase);

    QMetaObject::connectSlotsByName(QgsComposerLegendWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLegendWidgetBase)
    {
    QgsComposerLegendWidgetBase->setWindowTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Barscale Options", 0, QApplication::UnicodeUTF8));
    mGeneralGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "General", 0, QApplication::UnicodeUTF8));
    mTitleLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Title:", 0, QApplication::UnicodeUTF8));
    mFontLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Font:", 0, QApplication::UnicodeUTF8));
    mTitleFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Title...", 0, QApplication::UnicodeUTF8));
    mLayerFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Layer...", 0, QApplication::UnicodeUTF8));
    mItemFontButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Item...", 0, QApplication::UnicodeUTF8));
    mSymbolWidthLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol width: ", 0, QApplication::UnicodeUTF8));
    mSymbolHeightLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol height:", 0, QApplication::UnicodeUTF8));
    mLayerSpaceLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Layer space: ", 0, QApplication::UnicodeUTF8));
    mSymbolSpaceLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Symbol space:", 0, QApplication::UnicodeUTF8));
    mIconLabelSpaceLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Icon label space:", 0, QApplication::UnicodeUTF8));
    mBoxSpaceLabel->setText(QApplication::translate("QgsComposerLegendWidgetBase", "Box space:", 0, QApplication::UnicodeUTF8));
    mLegendItemsGroupBox->setTitle(QApplication::translate("QgsComposerLegendWidgetBase", "Legend items", 0, QApplication::UnicodeUTF8));
    mMoveDownPushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "down", 0, QApplication::UnicodeUTF8));
    mMoveUpPushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "up", 0, QApplication::UnicodeUTF8));
    mRemovePushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "remove", 0, QApplication::UnicodeUTF8));
    mEditPushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "edit...", 0, QApplication::UnicodeUTF8));
    mUpdatePushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "update", 0, QApplication::UnicodeUTF8));
    mUpdateAllPushButton->setText(QApplication::translate("QgsComposerLegendWidgetBase", "update all", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerLegendWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLegendWidgetBase: public Ui_QgsComposerLegendWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERLEGENDWIDGETBASE_H
