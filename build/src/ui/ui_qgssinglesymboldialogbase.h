/********************************************************************************
** Form generated from reading ui file 'qgssinglesymboldialogbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSINGLESYMBOLDIALOGBASE_H
#define UI_QGSSINGLESYMBOLDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>
#include "qgscolorbutton.h"

class Ui_QgsSingleSymbolDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *mLabel;
    QLineEdit *mLabelEdit;
    QGroupBox *mGroupPoint;
    QGridLayout *gridLayout1;
    QListWidget *lstSymbols;
    QLabel *textLabel1_3;
    QLabel *textLabel9;
    QLabel *textLabel1_2;
    QComboBox *mRotationClassificationComboBox;
    QComboBox *mScaleClassificationComboBox;
    QDoubleSpinBox *mPointSizeSpinBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout2;
    QLabel *outlinecolorlabel_2;
    QComboBox *cboOutlineStyle;
    QLabel *outlinecolorlabel;
    QgsColorButton *btnOutlineColor;
    QLabel *outlinewidthlabel;
    QDoubleSpinBox *outlinewidthspinbox;
    QLabel *fillcolorlabel;
    QgsColorButton *btnFillColor;
    QLabel *fillcolorlabel_2;
    QHBoxLayout *hboxLayout1;
    QComboBox *cboFillStyle;
    QToolButton *toolSelectTexture;

    void setupUi(QDialog *QgsSingleSymbolDialogBase)
    {
    if (QgsSingleSymbolDialogBase->objectName().isEmpty())
        QgsSingleSymbolDialogBase->setObjectName(QString::fromUtf8("QgsSingleSymbolDialogBase"));
    QgsSingleSymbolDialogBase->resize(486, 529);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsSingleSymbolDialogBase->sizePolicy().hasHeightForWidth());
    QgsSingleSymbolDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsSingleSymbolDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setVerticalSpacing(6);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(11, 0, 11, 0);
    mLabel = new QLabel(QgsSingleSymbolDialogBase);
    mLabel->setObjectName(QString::fromUtf8("mLabel"));
    mLabel->setMinimumSize(QSize(0, 22));

    hboxLayout->addWidget(mLabel);

    mLabelEdit = new QLineEdit(QgsSingleSymbolDialogBase);
    mLabelEdit->setObjectName(QString::fromUtf8("mLabelEdit"));
    mLabelEdit->setMinimumSize(QSize(0, 22));

    hboxLayout->addWidget(mLabelEdit);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

    mGroupPoint = new QGroupBox(QgsSingleSymbolDialogBase);
    mGroupPoint->setObjectName(QString::fromUtf8("mGroupPoint"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mGroupPoint->sizePolicy().hasHeightForWidth());
    mGroupPoint->setSizePolicy(sizePolicy1);
    gridLayout1 = new QGridLayout(mGroupPoint);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    lstSymbols = new QListWidget(mGroupPoint);
    lstSymbols->setObjectName(QString::fromUtf8("lstSymbols"));
    lstSymbols->setDragDropMode(QAbstractItemView::DragDrop);
    lstSymbols->setAlternatingRowColors(false);
    lstSymbols->setIconSize(QSize(0, -1));
    lstSymbols->setResizeMode(QListView::Adjust);
    lstSymbols->setViewMode(QListView::IconMode);
    lstSymbols->setUniformItemSizes(true);
    lstSymbols->setWordWrap(false);

    gridLayout1->addWidget(lstSymbols, 0, 0, 1, 3);

    textLabel1_3 = new QLabel(mGroupPoint);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout1->addWidget(textLabel1_3, 1, 0, 1, 1);

    textLabel9 = new QLabel(mGroupPoint);
    textLabel9->setObjectName(QString::fromUtf8("textLabel9"));

    gridLayout1->addWidget(textLabel9, 1, 1, 1, 1);

    textLabel1_2 = new QLabel(mGroupPoint);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout1->addWidget(textLabel1_2, 1, 2, 1, 1);

    mRotationClassificationComboBox = new QComboBox(mGroupPoint);
    mRotationClassificationComboBox->setObjectName(QString::fromUtf8("mRotationClassificationComboBox"));
    mRotationClassificationComboBox->setMinimumSize(QSize(0, 20));

    gridLayout1->addWidget(mRotationClassificationComboBox, 2, 0, 1, 1);

    mScaleClassificationComboBox = new QComboBox(mGroupPoint);
    mScaleClassificationComboBox->setObjectName(QString::fromUtf8("mScaleClassificationComboBox"));
    mScaleClassificationComboBox->setMinimumSize(QSize(0, 20));

    gridLayout1->addWidget(mScaleClassificationComboBox, 2, 1, 1, 1);

    mPointSizeSpinBox = new QDoubleSpinBox(mGroupPoint);
    mPointSizeSpinBox->setObjectName(QString::fromUtf8("mPointSizeSpinBox"));
    mPointSizeSpinBox->setSingleStep(0.1);
    mPointSizeSpinBox->setValue(1);

    gridLayout1->addWidget(mPointSizeSpinBox, 2, 2, 1, 1);


    gridLayout->addWidget(mGroupPoint, 1, 0, 1, 1);

    groupBox_3 = new QGroupBox(QgsSingleSymbolDialogBase);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    sizePolicy1.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
    groupBox_3->setSizePolicy(sizePolicy1);
    gridLayout2 = new QGridLayout(groupBox_3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    outlinecolorlabel_2 = new QLabel(groupBox_3);
    outlinecolorlabel_2->setObjectName(QString::fromUtf8("outlinecolorlabel_2"));

    gridLayout2->addWidget(outlinecolorlabel_2, 0, 0, 1, 1);

    cboOutlineStyle = new QComboBox(groupBox_3);
    cboOutlineStyle->setObjectName(QString::fromUtf8("cboOutlineStyle"));
    sizePolicy1.setHeightForWidth(cboOutlineStyle->sizePolicy().hasHeightForWidth());
    cboOutlineStyle->setSizePolicy(sizePolicy1);
    cboOutlineStyle->setMinimumSize(QSize(0, 20));
    cboOutlineStyle->setMaximumSize(QSize(172, 16777215));

    gridLayout2->addWidget(cboOutlineStyle, 0, 1, 1, 1);

    outlinecolorlabel = new QLabel(groupBox_3);
    outlinecolorlabel->setObjectName(QString::fromUtf8("outlinecolorlabel"));

    gridLayout2->addWidget(outlinecolorlabel, 1, 0, 1, 1);

    btnOutlineColor = new QgsColorButton(groupBox_3);
    btnOutlineColor->setObjectName(QString::fromUtf8("btnOutlineColor"));
    sizePolicy1.setHeightForWidth(btnOutlineColor->sizePolicy().hasHeightForWidth());
    btnOutlineColor->setSizePolicy(sizePolicy1);
    btnOutlineColor->setMinimumSize(QSize(172, 20));
    btnOutlineColor->setMaximumSize(QSize(136, 16777215));

    gridLayout2->addWidget(btnOutlineColor, 1, 1, 1, 1);

    outlinewidthlabel = new QLabel(groupBox_3);
    outlinewidthlabel->setObjectName(QString::fromUtf8("outlinewidthlabel"));

    gridLayout2->addWidget(outlinewidthlabel, 2, 0, 1, 1);

    outlinewidthspinbox = new QDoubleSpinBox(groupBox_3);
    outlinewidthspinbox->setObjectName(QString::fromUtf8("outlinewidthspinbox"));
    outlinewidthspinbox->setMinimumSize(QSize(0, 20));
    outlinewidthspinbox->setMaximumSize(QSize(172, 16777215));
    outlinewidthspinbox->setSingleStep(0.1);

    gridLayout2->addWidget(outlinewidthspinbox, 2, 1, 1, 1);

    fillcolorlabel = new QLabel(groupBox_3);
    fillcolorlabel->setObjectName(QString::fromUtf8("fillcolorlabel"));

    gridLayout2->addWidget(fillcolorlabel, 3, 0, 1, 1);

    btnFillColor = new QgsColorButton(groupBox_3);
    btnFillColor->setObjectName(QString::fromUtf8("btnFillColor"));
    sizePolicy1.setHeightForWidth(btnFillColor->sizePolicy().hasHeightForWidth());
    btnFillColor->setSizePolicy(sizePolicy1);
    btnFillColor->setMinimumSize(QSize(100, 20));
    btnFillColor->setMaximumSize(QSize(172, 16777215));

    gridLayout2->addWidget(btnFillColor, 3, 1, 1, 1);

    fillcolorlabel_2 = new QLabel(groupBox_3);
    fillcolorlabel_2->setObjectName(QString::fromUtf8("fillcolorlabel_2"));

    gridLayout2->addWidget(fillcolorlabel_2, 4, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    cboFillStyle = new QComboBox(groupBox_3);
    cboFillStyle->setObjectName(QString::fromUtf8("cboFillStyle"));
    cboFillStyle->setMinimumSize(QSize(0, 20));
    cboFillStyle->setMaximumSize(QSize(142, 16777215));

    hboxLayout1->addWidget(cboFillStyle);

    toolSelectTexture = new QToolButton(groupBox_3);
    toolSelectTexture->setObjectName(QString::fromUtf8("toolSelectTexture"));

    hboxLayout1->addWidget(toolSelectTexture);


    gridLayout2->addLayout(hboxLayout1, 4, 1, 1, 1);


    gridLayout->addWidget(groupBox_3, 2, 0, 1, 1);

    mLabel->setBuddy(mLabelEdit);
    textLabel1_3->setBuddy(mRotationClassificationComboBox);
    textLabel9->setBuddy(mScaleClassificationComboBox);
    outlinecolorlabel_2->setBuddy(cboOutlineStyle);
    outlinecolorlabel->setBuddy(btnOutlineColor);
    fillcolorlabel->setBuddy(btnFillColor);
    fillcolorlabel_2->setBuddy(cboFillStyle);
    QWidget::setTabOrder(mLabelEdit, lstSymbols);
    QWidget::setTabOrder(lstSymbols, mRotationClassificationComboBox);
    QWidget::setTabOrder(mRotationClassificationComboBox, mScaleClassificationComboBox);
    QWidget::setTabOrder(mScaleClassificationComboBox, mPointSizeSpinBox);
    QWidget::setTabOrder(mPointSizeSpinBox, cboOutlineStyle);
    QWidget::setTabOrder(cboOutlineStyle, btnOutlineColor);
    QWidget::setTabOrder(btnOutlineColor, outlinewidthspinbox);
    QWidget::setTabOrder(outlinewidthspinbox, btnFillColor);
    QWidget::setTabOrder(btnFillColor, cboFillStyle);
    QWidget::setTabOrder(cboFillStyle, toolSelectTexture);

    retranslateUi(QgsSingleSymbolDialogBase);

    QMetaObject::connectSlotsByName(QgsSingleSymbolDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSingleSymbolDialogBase)
    {
    QgsSingleSymbolDialogBase->setWindowTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Single Symbol", 0, QApplication::UnicodeUTF8));
    mLabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Label", 0, QApplication::UnicodeUTF8));
    mGroupPoint->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Point Symbol", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Rotation field", 0, QApplication::UnicodeUTF8));
    textLabel9->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Area scale field", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Size", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Style Options", 0, QApplication::UnicodeUTF8));
    outlinecolorlabel_2->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Outline style", 0, QApplication::UnicodeUTF8));
    outlinecolorlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Outline color", 0, QApplication::UnicodeUTF8));
    btnOutlineColor->setText(QString());
    outlinewidthlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Outline width", 0, QApplication::UnicodeUTF8));
    fillcolorlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Fill color", 0, QApplication::UnicodeUTF8));
    btnFillColor->setText(QString());
    fillcolorlabel_2->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Fill style", 0, QApplication::UnicodeUTF8));
    toolSelectTexture->setText(QApplication::translate("QgsSingleSymbolDialogBase", "...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsSingleSymbolDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSingleSymbolDialogBase: public Ui_QgsSingleSymbolDialogBase {};
} // namespace Ui

#endif // UI_QGSSINGLESYMBOLDIALOGBASE_H
