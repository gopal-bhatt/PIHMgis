/********************************************************************************
** Form generated from reading ui file 'qgssinglesymboldialogbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSINGLESYMBOLDIALOGBASE_H
#define UI_QGSSINGLESYMBOLDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
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
    QSpacerItem *spacerItem;
    QComboBox *mPointSymbolComboBox;
    QLabel *textLabel1_2;
    QSpinBox *mPointSizeSpinBox;
    QLabel *textLabel1;
    QGroupBox *grpPattern;
    QGridLayout *gridLayout2;
    QToolButton *dense5;
    QToolButton *dense4;
    QToolButton *solid;
    QToolButton *fdiag;
    QToolButton *horizontal;
    QToolButton *diagcross;
    QToolButton *bdiag;
    QToolButton *cross;
    QToolButton *vertical;
    QToolButton *dense1;
    QToolButton *dense3;
    QToolButton *dense2;
    QToolButton *nopen;
    QToolButton *dense6;
    QToolButton *dense7;
    QLineEdit *textureFilePath;
    QPushButton *textureSelect;
    QToolButton *texture;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QToolButton *pbnLineDashDot;
    QToolButton *pbnLineDashDotDot;
    QToolButton *pbnLineSolid;
    QToolButton *pbnLineDash;
    QToolButton *pbnLineDot;
    QToolButton *pbnLineNoPen;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout4;
    QSpacerItem *spacerItem1;
    QSpinBox *outlinewidthspinbox;
    QLabel *outlinewidthlabel;
    QgsColorButton *btnOutlineColor;
    QgsColorButton *btnFillColor;
    QSpacerItem *spacerItem2;
    QLabel *fillcolorlabel;
    QLabel *outlinecolorlabel;
    QSpacerItem *spacerItem3;

    void setupUi(QDialog *QgsSingleSymbolDialogBase)
    {
    if (QgsSingleSymbolDialogBase->objectName().isEmpty())
        QgsSingleSymbolDialogBase->setObjectName(QString::fromUtf8("QgsSingleSymbolDialogBase"));
    QgsSingleSymbolDialogBase->resize(413, 497);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsSingleSymbolDialogBase->sizePolicy().hasHeightForWidth());
    QgsSingleSymbolDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsSingleSymbolDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
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
    gridLayout1 = new QGridLayout(mGroupPoint);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    spacerItem = new QSpacerItem(78, 35, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem, 0, 2, 1, 1);

    mPointSymbolComboBox = new QComboBox(mGroupPoint);
    mPointSymbolComboBox->setObjectName(QString::fromUtf8("mPointSymbolComboBox"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mPointSymbolComboBox->sizePolicy().hasHeightForWidth());
    mPointSymbolComboBox->setSizePolicy(sizePolicy1);
    mPointSymbolComboBox->setMinimumSize(QSize(0, 0));
    mPointSymbolComboBox->setMaximumSize(QSize(32767, 40));

    gridLayout1->addWidget(mPointSymbolComboBox, 0, 1, 1, 1);

    textLabel1_2 = new QLabel(mGroupPoint);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    gridLayout1->addWidget(textLabel1_2, 0, 3, 1, 1);

    mPointSizeSpinBox = new QSpinBox(mGroupPoint);
    mPointSizeSpinBox->setObjectName(QString::fromUtf8("mPointSizeSpinBox"));
    mPointSizeSpinBox->setMaximum(1000);
    mPointSizeSpinBox->setMinimum(3);
    mPointSizeSpinBox->setSingleStep(1);
    mPointSizeSpinBox->setValue(3);

    gridLayout1->addWidget(mPointSizeSpinBox, 0, 4, 1, 1);

    textLabel1 = new QLabel(mGroupPoint);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);


    gridLayout->addWidget(mGroupPoint, 1, 0, 1, 1);

    grpPattern = new QGroupBox(QgsSingleSymbolDialogBase);
    grpPattern->setObjectName(QString::fromUtf8("grpPattern"));
    gridLayout2 = new QGridLayout(grpPattern);
    gridLayout2->setSpacing(4);
    gridLayout2->setMargin(4);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    dense5 = new QToolButton(grpPattern);
    dense5->setObjectName(QString::fromUtf8("dense5"));
    dense5->setMaximumSize(QSize(60, 30));
    dense5->setIconSize(QSize(50, 20));
    dense5->setCheckable(true);
    dense5->setAutoExclusive(true);

    gridLayout2->addWidget(dense5, 1, 1, 1, 1);

    dense4 = new QToolButton(grpPattern);
    dense4->setObjectName(QString::fromUtf8("dense4"));
    dense4->setMaximumSize(QSize(60, 30));
    dense4->setIconSize(QSize(50, 20));
    dense4->setCheckable(true);
    dense4->setAutoExclusive(true);

    gridLayout2->addWidget(dense4, 0, 2, 1, 1);

    solid = new QToolButton(grpPattern);
    solid->setObjectName(QString::fromUtf8("solid"));
    solid->setMaximumSize(QSize(60, 30));
    solid->setIconSize(QSize(50, 20));
    solid->setCheckable(true);
    solid->setAutoExclusive(true);

    gridLayout2->addWidget(solid, 0, 0, 1, 1);

    fdiag = new QToolButton(grpPattern);
    fdiag->setObjectName(QString::fromUtf8("fdiag"));
    fdiag->setMaximumSize(QSize(60, 30));
    fdiag->setIconSize(QSize(50, 20));
    fdiag->setCheckable(true);
    fdiag->setAutoExclusive(true);

    gridLayout2->addWidget(fdiag, 0, 1, 1, 1);

    horizontal = new QToolButton(grpPattern);
    horizontal->setObjectName(QString::fromUtf8("horizontal"));
    horizontal->setMaximumSize(QSize(60, 30));
    horizontal->setIconSize(QSize(50, 20));
    horizontal->setCheckable(true);
    horizontal->setAutoExclusive(true);

    gridLayout2->addWidget(horizontal, 0, 3, 1, 1);

    diagcross = new QToolButton(grpPattern);
    diagcross->setObjectName(QString::fromUtf8("diagcross"));
    diagcross->setMaximumSize(QSize(60, 30));
    diagcross->setIconSize(QSize(50, 20));
    diagcross->setCheckable(true);
    diagcross->setAutoExclusive(true);

    gridLayout2->addWidget(diagcross, 1, 0, 1, 1);

    bdiag = new QToolButton(grpPattern);
    bdiag->setObjectName(QString::fromUtf8("bdiag"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(bdiag->sizePolicy().hasHeightForWidth());
    bdiag->setSizePolicy(sizePolicy3);
    bdiag->setMinimumSize(QSize(0, 0));
    bdiag->setMaximumSize(QSize(60, 30));
    bdiag->setIconSize(QSize(50, 20));
    bdiag->setCheckable(true);
    bdiag->setAutoExclusive(true);

    gridLayout2->addWidget(bdiag, 0, 4, 1, 1);

    cross = new QToolButton(grpPattern);
    cross->setObjectName(QString::fromUtf8("cross"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(cross->sizePolicy().hasHeightForWidth());
    cross->setSizePolicy(sizePolicy4);
    cross->setMaximumSize(QSize(60, 30));
    cross->setIconSize(QSize(50, 20));
    cross->setCheckable(true);
    cross->setAutoExclusive(true);

    gridLayout2->addWidget(cross, 2, 1, 1, 1);

    vertical = new QToolButton(grpPattern);
    vertical->setObjectName(QString::fromUtf8("vertical"));
    vertical->setMaximumSize(QSize(60, 30));
    vertical->setIconSize(QSize(50, 20));
    vertical->setCheckable(true);
    vertical->setAutoExclusive(true);

    gridLayout2->addWidget(vertical, 1, 2, 1, 1);

    dense1 = new QToolButton(grpPattern);
    dense1->setObjectName(QString::fromUtf8("dense1"));
    dense1->setMaximumSize(QSize(60, 30));
    dense1->setIconSize(QSize(50, 20));
    dense1->setCheckable(true);
    dense1->setAutoExclusive(true);

    gridLayout2->addWidget(dense1, 1, 3, 1, 1);

    dense3 = new QToolButton(grpPattern);
    dense3->setObjectName(QString::fromUtf8("dense3"));
    sizePolicy4.setHeightForWidth(dense3->sizePolicy().hasHeightForWidth());
    dense3->setSizePolicy(sizePolicy4);
    dense3->setMinimumSize(QSize(0, 0));
    dense3->setMaximumSize(QSize(60, 30));
    dense3->setIconSize(QSize(50, 20));
    dense3->setCheckable(true);
    dense3->setAutoExclusive(true);

    gridLayout2->addWidget(dense3, 1, 4, 1, 1);

    dense2 = new QToolButton(grpPattern);
    dense2->setObjectName(QString::fromUtf8("dense2"));
    sizePolicy4.setHeightForWidth(dense2->sizePolicy().hasHeightForWidth());
    dense2->setSizePolicy(sizePolicy4);
    dense2->setMaximumSize(QSize(60, 30));
    dense2->setIconSize(QSize(50, 20));
    dense2->setCheckable(true);
    dense2->setAutoExclusive(true);

    gridLayout2->addWidget(dense2, 2, 2, 1, 1);

    nopen = new QToolButton(grpPattern);
    nopen->setObjectName(QString::fromUtf8("nopen"));
    sizePolicy4.setHeightForWidth(nopen->sizePolicy().hasHeightForWidth());
    nopen->setSizePolicy(sizePolicy4);
    nopen->setMinimumSize(QSize(0, 0));
    nopen->setMaximumSize(QSize(60, 30));
    nopen->setIconSize(QSize(50, 20));
    nopen->setCheckable(true);
    nopen->setAutoExclusive(true);

    gridLayout2->addWidget(nopen, 2, 4, 1, 1);

    dense6 = new QToolButton(grpPattern);
    dense6->setObjectName(QString::fromUtf8("dense6"));
    sizePolicy4.setHeightForWidth(dense6->sizePolicy().hasHeightForWidth());
    dense6->setSizePolicy(sizePolicy4);
    dense6->setMaximumSize(QSize(60, 30));
    dense6->setIconSize(QSize(50, 20));
    dense6->setCheckable(true);
    dense6->setAutoExclusive(true);

    gridLayout2->addWidget(dense6, 2, 0, 1, 1);

    dense7 = new QToolButton(grpPattern);
    dense7->setObjectName(QString::fromUtf8("dense7"));
    sizePolicy4.setHeightForWidth(dense7->sizePolicy().hasHeightForWidth());
    dense7->setSizePolicy(sizePolicy4);
    dense7->setMaximumSize(QSize(60, 30));
    dense7->setIconSize(QSize(50, 20));
    dense7->setCheckable(true);
    dense7->setAutoExclusive(true);

    gridLayout2->addWidget(dense7, 2, 3, 1, 1);

    textureFilePath = new QLineEdit(grpPattern);
    textureFilePath->setObjectName(QString::fromUtf8("textureFilePath"));

    gridLayout2->addWidget(textureFilePath, 3, 1, 1, 3);

    textureSelect = new QPushButton(grpPattern);
    textureSelect->setObjectName(QString::fromUtf8("textureSelect"));
    textureSelect->setMaximumSize(QSize(60, 30));

    gridLayout2->addWidget(textureSelect, 3, 4, 1, 1);

    texture = new QToolButton(grpPattern);
    texture->setObjectName(QString::fromUtf8("texture"));
    sizePolicy4.setHeightForWidth(texture->sizePolicy().hasHeightForWidth());
    texture->setSizePolicy(sizePolicy4);
    texture->setMaximumSize(QSize(60, 30));
    texture->setIconSize(QSize(50, 20));
    texture->setCheckable(true);
    texture->setAutoExclusive(true);

    gridLayout2->addWidget(texture, 3, 0, 1, 1);


    gridLayout->addWidget(grpPattern, 4, 0, 1, 1);

    groupBox_2 = new QGroupBox(QgsSingleSymbolDialogBase);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout3 = new QGridLayout(groupBox_2);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(8);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    pbnLineDashDot = new QToolButton(groupBox_2);
    pbnLineDashDot->setObjectName(QString::fromUtf8("pbnLineDashDot"));
    pbnLineDashDot->setMaximumSize(QSize(50, 30));
    pbnLineDashDot->setIconSize(QSize(60, 26));
    pbnLineDashDot->setCheckable(true);
    pbnLineDashDot->setAutoExclusive(true);

    gridLayout3->addWidget(pbnLineDashDot, 0, 2, 1, 1);

    pbnLineDashDotDot = new QToolButton(groupBox_2);
    pbnLineDashDotDot->setObjectName(QString::fromUtf8("pbnLineDashDotDot"));
    pbnLineDashDotDot->setMaximumSize(QSize(50, 30));
    pbnLineDashDotDot->setIconSize(QSize(60, 26));
    pbnLineDashDotDot->setCheckable(true);
    pbnLineDashDotDot->setAutoExclusive(true);

    gridLayout3->addWidget(pbnLineDashDotDot, 0, 4, 1, 1);

    pbnLineSolid = new QToolButton(groupBox_2);
    pbnLineSolid->setObjectName(QString::fromUtf8("pbnLineSolid"));
    pbnLineSolid->setMaximumSize(QSize(50, 30));
    pbnLineSolid->setIconSize(QSize(60, 26));
    pbnLineSolid->setCheckable(true);
    pbnLineSolid->setAutoExclusive(true);

    gridLayout3->addWidget(pbnLineSolid, 0, 0, 1, 1);

    pbnLineDash = new QToolButton(groupBox_2);
    pbnLineDash->setObjectName(QString::fromUtf8("pbnLineDash"));
    pbnLineDash->setMaximumSize(QSize(50, 30));
    pbnLineDash->setIconSize(QSize(60, 26));
    pbnLineDash->setCheckable(true);
    pbnLineDash->setAutoExclusive(true);

    gridLayout3->addWidget(pbnLineDash, 0, 3, 1, 1);

    pbnLineDot = new QToolButton(groupBox_2);
    pbnLineDot->setObjectName(QString::fromUtf8("pbnLineDot"));
    pbnLineDot->setMaximumSize(QSize(50, 30));
    pbnLineDot->setIconSize(QSize(60, 26));
    pbnLineDot->setCheckable(true);
    pbnLineDot->setAutoExclusive(true);

    gridLayout3->addWidget(pbnLineDot, 0, 1, 1, 1);

    pbnLineNoPen = new QToolButton(groupBox_2);
    pbnLineNoPen->setObjectName(QString::fromUtf8("pbnLineNoPen"));
    pbnLineNoPen->setMaximumSize(QSize(50, 30));
    pbnLineNoPen->setIconSize(QSize(60, 26));
    pbnLineNoPen->setCheckable(true);
    pbnLineNoPen->setAutoExclusive(true);

    gridLayout3->addWidget(pbnLineNoPen, 0, 5, 1, 1);


    gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

    groupBox_3 = new QGroupBox(QgsSingleSymbolDialogBase);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    gridLayout4 = new QGridLayout(groupBox_3);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(8);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    spacerItem1 = new QSpacerItem(201, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem1, 1, 2, 1, 1);

    outlinewidthspinbox = new QSpinBox(groupBox_3);
    outlinewidthspinbox->setObjectName(QString::fromUtf8("outlinewidthspinbox"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(outlinewidthspinbox->sizePolicy().hasHeightForWidth());
    outlinewidthspinbox->setSizePolicy(sizePolicy5);
    outlinewidthspinbox->setMaximumSize(QSize(100, 32767));
    outlinewidthspinbox->setMinimum(0);

    gridLayout4->addWidget(outlinewidthspinbox, 1, 3, 1, 1);

    outlinewidthlabel = new QLabel(groupBox_3);
    outlinewidthlabel->setObjectName(QString::fromUtf8("outlinewidthlabel"));

    gridLayout4->addWidget(outlinewidthlabel, 1, 0, 1, 2);

    btnOutlineColor = new QgsColorButton(groupBox_3);
    btnOutlineColor->setObjectName(QString::fromUtf8("btnOutlineColor"));
    btnOutlineColor->setMinimumSize(QSize(100, 0));

    gridLayout4->addWidget(btnOutlineColor, 0, 3, 1, 1);

    btnFillColor = new QgsColorButton(groupBox_3);
    btnFillColor->setObjectName(QString::fromUtf8("btnFillColor"));
    btnFillColor->setMinimumSize(QSize(100, 0));

    gridLayout4->addWidget(btnFillColor, 2, 3, 1, 1);

    spacerItem2 = new QSpacerItem(138, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem2, 2, 1, 1, 2);

    fillcolorlabel = new QLabel(groupBox_3);
    fillcolorlabel->setObjectName(QString::fromUtf8("fillcolorlabel"));

    gridLayout4->addWidget(fillcolorlabel, 2, 0, 1, 1);

    outlinecolorlabel = new QLabel(groupBox_3);
    outlinecolorlabel->setObjectName(QString::fromUtf8("outlinecolorlabel"));

    gridLayout4->addWidget(outlinecolorlabel, 0, 0, 1, 2);

    spacerItem3 = new QSpacerItem(116, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem3, 0, 2, 1, 1);


    gridLayout->addWidget(groupBox_3, 3, 0, 1, 1);

    mLabel->setBuddy(mLabelEdit);
    textLabel1_2->setBuddy(mPointSizeSpinBox);
    textLabel1->setBuddy(mPointSymbolComboBox);
    outlinewidthlabel->setBuddy(outlinewidthspinbox);
    fillcolorlabel->setBuddy(btnFillColor);
    outlinecolorlabel->setBuddy(btnOutlineColor);
    QWidget::setTabOrder(mLabelEdit, mPointSymbolComboBox);
    QWidget::setTabOrder(mPointSymbolComboBox, mPointSizeSpinBox);
    QWidget::setTabOrder(mPointSizeSpinBox, pbnLineSolid);
    QWidget::setTabOrder(pbnLineSolid, pbnLineDot);
    QWidget::setTabOrder(pbnLineDot, pbnLineDashDot);
    QWidget::setTabOrder(pbnLineDashDot, pbnLineDash);
    QWidget::setTabOrder(pbnLineDash, pbnLineDashDotDot);
    QWidget::setTabOrder(pbnLineDashDotDot, pbnLineNoPen);
    QWidget::setTabOrder(pbnLineNoPen, btnOutlineColor);
    QWidget::setTabOrder(btnOutlineColor, outlinewidthspinbox);
    QWidget::setTabOrder(outlinewidthspinbox, btnFillColor);
    QWidget::setTabOrder(btnFillColor, solid);
    QWidget::setTabOrder(solid, fdiag);
    QWidget::setTabOrder(fdiag, dense4);
    QWidget::setTabOrder(dense4, horizontal);
    QWidget::setTabOrder(horizontal, bdiag);
    QWidget::setTabOrder(bdiag, diagcross);
    QWidget::setTabOrder(diagcross, dense5);
    QWidget::setTabOrder(dense5, vertical);
    QWidget::setTabOrder(vertical, dense1);
    QWidget::setTabOrder(dense1, dense3);
    QWidget::setTabOrder(dense3, dense6);
    QWidget::setTabOrder(dense6, cross);
    QWidget::setTabOrder(cross, dense2);
    QWidget::setTabOrder(dense2, dense7);
    QWidget::setTabOrder(dense7, nopen);

    retranslateUi(QgsSingleSymbolDialogBase);

    QMetaObject::connectSlotsByName(QgsSingleSymbolDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSingleSymbolDialogBase)
    {
    QgsSingleSymbolDialogBase->setWindowTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Single Symbol", 0, QApplication::UnicodeUTF8));
    mLabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Label:", 0, QApplication::UnicodeUTF8));
    mGroupPoint->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Point", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Size", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Symbol", 0, QApplication::UnicodeUTF8));
    grpPattern->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Fill Patterns:", 0, QApplication::UnicodeUTF8));
    dense5->setText(QString());
    dense4->setText(QString());
    solid->setText(QString());
    fdiag->setText(QString());
    horizontal->setText(QString());
    diagcross->setText(QString());
    bdiag->setText(QString());
    cross->setText(QString());
    vertical->setText(QString());
    dense1->setText(QString());
    dense3->setText(QString());
    dense2->setText(QString());
    nopen->setToolTip(QApplication::translate("QgsSingleSymbolDialogBase", "No Fill", 0, QApplication::UnicodeUTF8));
    nopen->setText(QString());
    dense6->setText(QString());
    dense7->setText(QString());
    textureSelect->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Browse:", 0, QApplication::UnicodeUTF8));
    texture->setText(QString());
    groupBox_2->setTitle(QApplication::translate("QgsSingleSymbolDialogBase", "Outline Style:", 0, QApplication::UnicodeUTF8));
    pbnLineDashDot->setText(QString());
    pbnLineDashDotDot->setText(QString());
    pbnLineSolid->setText(QString());
    pbnLineDash->setText(QString());
    pbnLineDot->setText(QString());
    pbnLineNoPen->setText(QString());
    groupBox_3->setTitle(QString());
    outlinewidthlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Outline Width:", 0, QApplication::UnicodeUTF8));
    btnOutlineColor->setText(QString());
    btnFillColor->setText(QString());
    fillcolorlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Fill Color:", 0, QApplication::UnicodeUTF8));
    outlinecolorlabel->setText(QApplication::translate("QgsSingleSymbolDialogBase", "Outline color:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsSingleSymbolDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSingleSymbolDialogBase: public Ui_QgsSingleSymbolDialogBase {};
} // namespace Ui

#endif // UI_QGSSINGLESYMBOLDIALOGBASE_H
