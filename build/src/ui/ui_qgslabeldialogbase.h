/********************************************************************************
** Form generated from reading ui file 'qgslabeldialogbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLABELDIALOGBASE_H
#define UI_QGSLABELDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

class Ui_QgsLabelDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel5;
    QComboBox *cboLabelField;
    QLabel *textLabel1;
    QLineEdit *leDefaultLabel;
    QListWidget *listWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QPushButton *btnDefaultFont;
    QLabel *textLabel5_2_2_3_2;
    QSpinBox *spinFontTransparency;
    QPushButton *pbnDefaultFontColor;
    QLabel *textLabel1_2_2_2_2_2;
    QSpinBox *spinAngle;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout3;
    QRadioButton *radioBelowRight;
    QRadioButton *radioRight;
    QRadioButton *radioBelow;
    QRadioButton *radioOver;
    QRadioButton *radioAbove;
    QRadioButton *radioLeft;
    QRadioButton *radioBelowLeft;
    QRadioButton *radioAboveRight;
    QRadioButton *radioAboveLeft;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout4;
    QRadioButton *radioFontSizeUnitsPoints;
    QRadioButton *radioFontSizeUnitsMap;
    QSpacerItem *spacerItem;
    QGroupBox *chkUseScaleDependentRendering;
    QGridLayout *gridLayout5;
    QLabel *textLabel1_2_2_1;
    QLabel *textLabel1_1;
    QSpinBox *spinMinimumScale;
    QSpinBox *spinMaximumScale;
    QCheckBox *chkUseMultiline;
    QWidget *page_2;
    QGridLayout *gridLayout6;
    QCheckBox *chkUseBuffer;
    QLabel *textLabel4_3_2_2;
    QSpinBox *spinBufferSize;
    QLabel *textLabel5_2_2_3;
    QSpinBox *spinBufferTransparency;
    QPushButton *pbnDefaultBufferColor_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout7;
    QRadioButton *radioBufferUnitsPoints;
    QRadioButton *radioBufferUnitsMap;
    QSpacerItem *spacerItem1;
    QWidget *page_3;
    QGridLayout *gridLayout8;
    QLabel *textLabel1_2_3_2;
    QSpinBox *spinXOffset;
    QLabel *textLabel1_2_2_2_3;
    QSpinBox *spinYOffset;
    QGroupBox *buttonGroup10;
    QGridLayout *gridLayout9;
    QRadioButton *radioOffsetUnitsPoints;
    QRadioButton *radioOffsetUnitsMap;
    QSpacerItem *spacerItem2;
    QWidget *page_4;
    QGridLayout *gridLayout10;
    QLabel *lblFont;
    QComboBox *cboFontField;
    QLabel *textLabel4;
    QComboBox *cboBoldField;
    QLabel *textLabel4_2_4;
    QComboBox *cboItalicField;
    QLabel *textLabel4_3;
    QComboBox *cboUnderlineField;
    QLabel *textLabel4_3_2;
    QComboBox *cboFontSizeField;
    QLabel *textLabel4_3_2_4;
    QComboBox *cboFontSizeTypeField;
    QLabel *textLabel4_3_2_3;
    QComboBox *cboFontTransparencyField;
    QWidget *page_5;
    QGridLayout *gridLayout11;
    QLabel *textLabel1_2_2_2_2_3;
    QComboBox *cboAlignmentField;
    QLabel *textLabel1_2_2_2_2;
    QComboBox *cboAngleField;
    QWidget *page_6;
    QGridLayout *gridLayout12;
    QLabel *textLabel1_3_2_2_2;
    QComboBox *cboBufferTransparencyField;
    QLabel *textLabel4_3_2_2_2;
    QComboBox *cboBufferSizeField;
    QWidget *page_7;
    QGridLayout *gridLayout13;
    QLabel *textLabel1_2;
    QComboBox *cboXCoordinateField;
    QLabel *textLabel1_2_2;
    QComboBox *cboYCoordinateField;
    QLabel *textLabel1_2_3;
    QComboBox *cboXOffsetField;
    QLabel *textLabel1_2_2_2;
    QComboBox *cboYOffsetField;
    QGroupBox *groupBox5;
    QGridLayout *gridLayout14;
    QLabel *lblSample;

    void setupUi(QWidget *QgsLabelDialogBase)
    {
    if (QgsLabelDialogBase->objectName().isEmpty())
        QgsLabelDialogBase->setObjectName(QString::fromUtf8("QgsLabelDialogBase"));
    QgsLabelDialogBase->resize(516, 487);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsLabelDialogBase->sizePolicy().hasHeightForWidth());
    QgsLabelDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsLabelDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel5 = new QLabel(QgsLabelDialogBase);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

    hboxLayout->addWidget(textLabel5);

    cboLabelField = new QComboBox(QgsLabelDialogBase);
    cboLabelField->setObjectName(QString::fromUtf8("cboLabelField"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(1);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(cboLabelField->sizePolicy().hasHeightForWidth());
    cboLabelField->setSizePolicy(sizePolicy1);
    cboLabelField->setMinimumSize(QSize(0, 20));

    hboxLayout->addWidget(cboLabelField);

    textLabel1 = new QLabel(QgsLabelDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout->addWidget(textLabel1);

    leDefaultLabel = new QLineEdit(QgsLabelDialogBase);
    leDefaultLabel->setObjectName(QString::fromUtf8("leDefaultLabel"));
    QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(2);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(leDefaultLabel->sizePolicy().hasHeightForWidth());
    leDefaultLabel->setSizePolicy(sizePolicy2);
    leDefaultLabel->setMinimumSize(QSize(0, 20));

    hboxLayout->addWidget(leDefaultLabel);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

    listWidget = new QListWidget(QgsLabelDialogBase);
    listWidget->setObjectName(QString::fromUtf8("listWidget"));
    sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
    listWidget->setSizePolicy(sizePolicy);

    gridLayout->addWidget(listWidget, 1, 0, 1, 1);

    stackedWidget = new QStackedWidget(QgsLabelDialogBase);
    stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
    QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
    stackedWidget->setSizePolicy(sizePolicy3);
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    page->setGeometry(QRect(0, 0, 309, 394));
    gridLayout1 = new QGridLayout(page);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout2 = new QGridLayout();
    gridLayout2->setSpacing(6);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    btnDefaultFont = new QPushButton(page);
    btnDefaultFont->setObjectName(QString::fromUtf8("btnDefaultFont"));
    sizePolicy2.setHeightForWidth(btnDefaultFont->sizePolicy().hasHeightForWidth());
    btnDefaultFont->setSizePolicy(sizePolicy2);

    gridLayout2->addWidget(btnDefaultFont, 0, 0, 1, 1);

    textLabel5_2_2_3_2 = new QLabel(page);
    textLabel5_2_2_3_2->setObjectName(QString::fromUtf8("textLabel5_2_2_3_2"));
    textLabel5_2_2_3_2->setEnabled(false);
    textLabel5_2_2_3_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout2->addWidget(textLabel5_2_2_3_2, 0, 1, 1, 1);

    spinFontTransparency = new QSpinBox(page);
    spinFontTransparency->setObjectName(QString::fromUtf8("spinFontTransparency"));
    spinFontTransparency->setEnabled(false);
    QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(spinFontTransparency->sizePolicy().hasHeightForWidth());
    spinFontTransparency->setSizePolicy(sizePolicy4);
    spinFontTransparency->setMinimumSize(QSize(50, 0));
    spinFontTransparency->setMaximum(100);
    spinFontTransparency->setValue(0);

    gridLayout2->addWidget(spinFontTransparency, 0, 2, 1, 1);

    pbnDefaultFontColor = new QPushButton(page);
    pbnDefaultFontColor->setObjectName(QString::fromUtf8("pbnDefaultFontColor"));
    sizePolicy2.setHeightForWidth(pbnDefaultFontColor->sizePolicy().hasHeightForWidth());
    pbnDefaultFontColor->setSizePolicy(sizePolicy2);

    gridLayout2->addWidget(pbnDefaultFontColor, 1, 0, 1, 1);

    textLabel1_2_2_2_2_2 = new QLabel(page);
    textLabel1_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_2"));

    gridLayout2->addWidget(textLabel1_2_2_2_2_2, 1, 1, 1, 1);

    spinAngle = new QSpinBox(page);
    spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
    spinAngle->setMaximum(360);
    spinAngle->setValue(0);

    gridLayout2->addWidget(spinAngle, 1, 2, 1, 1);


    gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);

    groupBox_2 = new QGroupBox(page);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout3 = new QGridLayout(groupBox_2);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    radioBelowRight = new QRadioButton(groupBox_2);
    radioBelowRight->setObjectName(QString::fromUtf8("radioBelowRight"));

    gridLayout3->addWidget(radioBelowRight, 2, 2, 1, 1);

    radioRight = new QRadioButton(groupBox_2);
    radioRight->setObjectName(QString::fromUtf8("radioRight"));

    gridLayout3->addWidget(radioRight, 1, 2, 1, 1);

    radioBelow = new QRadioButton(groupBox_2);
    radioBelow->setObjectName(QString::fromUtf8("radioBelow"));

    gridLayout3->addWidget(radioBelow, 2, 1, 1, 1);

    radioOver = new QRadioButton(groupBox_2);
    radioOver->setObjectName(QString::fromUtf8("radioOver"));
    radioOver->setChecked(true);

    gridLayout3->addWidget(radioOver, 1, 1, 1, 1);

    radioAbove = new QRadioButton(groupBox_2);
    radioAbove->setObjectName(QString::fromUtf8("radioAbove"));

    gridLayout3->addWidget(radioAbove, 0, 1, 1, 1);

    radioLeft = new QRadioButton(groupBox_2);
    radioLeft->setObjectName(QString::fromUtf8("radioLeft"));

    gridLayout3->addWidget(radioLeft, 1, 0, 1, 1);

    radioBelowLeft = new QRadioButton(groupBox_2);
    radioBelowLeft->setObjectName(QString::fromUtf8("radioBelowLeft"));

    gridLayout3->addWidget(radioBelowLeft, 2, 0, 1, 1);

    radioAboveRight = new QRadioButton(groupBox_2);
    radioAboveRight->setObjectName(QString::fromUtf8("radioAboveRight"));

    gridLayout3->addWidget(radioAboveRight, 0, 2, 1, 1);

    radioAboveLeft = new QRadioButton(groupBox_2);
    radioAboveLeft->setObjectName(QString::fromUtf8("radioAboveLeft"));

    gridLayout3->addWidget(radioAboveLeft, 0, 0, 1, 1);


    gridLayout1->addWidget(groupBox_2, 1, 0, 1, 1);

    groupBox_3 = new QGroupBox(page);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    gridLayout4 = new QGridLayout(groupBox_3);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    radioFontSizeUnitsPoints = new QRadioButton(groupBox_3);
    radioFontSizeUnitsPoints->setObjectName(QString::fromUtf8("radioFontSizeUnitsPoints"));

    gridLayout4->addWidget(radioFontSizeUnitsPoints, 0, 0, 1, 1);

    radioFontSizeUnitsMap = new QRadioButton(groupBox_3);
    radioFontSizeUnitsMap->setObjectName(QString::fromUtf8("radioFontSizeUnitsMap"));

    gridLayout4->addWidget(radioFontSizeUnitsMap, 0, 1, 1, 1);


    gridLayout1->addWidget(groupBox_3, 2, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 3, 0, 1, 1);

    chkUseScaleDependentRendering = new QGroupBox(page);
    chkUseScaleDependentRendering->setObjectName(QString::fromUtf8("chkUseScaleDependentRendering"));
    chkUseScaleDependentRendering->setCheckable(true);
    gridLayout5 = new QGridLayout(chkUseScaleDependentRendering);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    textLabel1_2_2_1 = new QLabel(chkUseScaleDependentRendering);
    textLabel1_2_2_1->setObjectName(QString::fromUtf8("textLabel1_2_2_1"));

    gridLayout5->addWidget(textLabel1_2_2_1, 0, 2, 1, 1);

    textLabel1_1 = new QLabel(chkUseScaleDependentRendering);
    textLabel1_1->setObjectName(QString::fromUtf8("textLabel1_1"));

    gridLayout5->addWidget(textLabel1_1, 0, 0, 1, 1);

    spinMinimumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMinimumScale->setObjectName(QString::fromUtf8("spinMinimumScale"));
    spinMinimumScale->setMinimum(1);
    spinMinimumScale->setMaximum(100000000);

    gridLayout5->addWidget(spinMinimumScale, 0, 1, 1, 1);

    spinMaximumScale = new QSpinBox(chkUseScaleDependentRendering);
    spinMaximumScale->setObjectName(QString::fromUtf8("spinMaximumScale"));
    spinMaximumScale->setMinimum(1);
    spinMaximumScale->setMaximum(100000000);

    gridLayout5->addWidget(spinMaximumScale, 0, 3, 1, 1);


    gridLayout1->addWidget(chkUseScaleDependentRendering, 4, 0, 1, 1);

    chkUseMultiline = new QCheckBox(page);
    chkUseMultiline->setObjectName(QString::fromUtf8("chkUseMultiline"));
    chkUseMultiline->setChecked(true);

    gridLayout1->addWidget(chkUseMultiline, 5, 0, 1, 1);

    stackedWidget->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    page_2->setGeometry(QRect(0, 0, 309, 394));
    gridLayout6 = new QGridLayout(page_2);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(11);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    chkUseBuffer = new QCheckBox(page_2);
    chkUseBuffer->setObjectName(QString::fromUtf8("chkUseBuffer"));
    chkUseBuffer->setChecked(true);

    gridLayout6->addWidget(chkUseBuffer, 0, 0, 1, 1);

    textLabel4_3_2_2 = new QLabel(page_2);
    textLabel4_3_2_2->setObjectName(QString::fromUtf8("textLabel4_3_2_2"));

    gridLayout6->addWidget(textLabel4_3_2_2, 1, 0, 1, 1);

    spinBufferSize = new QSpinBox(page_2);
    spinBufferSize->setObjectName(QString::fromUtf8("spinBufferSize"));

    gridLayout6->addWidget(spinBufferSize, 1, 1, 1, 1);

    textLabel5_2_2_3 = new QLabel(page_2);
    textLabel5_2_2_3->setObjectName(QString::fromUtf8("textLabel5_2_2_3"));
    textLabel5_2_2_3->setEnabled(false);
    textLabel5_2_2_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout6->addWidget(textLabel5_2_2_3, 2, 0, 1, 1);

    spinBufferTransparency = new QSpinBox(page_2);
    spinBufferTransparency->setObjectName(QString::fromUtf8("spinBufferTransparency"));
    spinBufferTransparency->setEnabled(false);
    sizePolicy4.setHeightForWidth(spinBufferTransparency->sizePolicy().hasHeightForWidth());
    spinBufferTransparency->setSizePolicy(sizePolicy4);
    spinBufferTransparency->setMinimumSize(QSize(50, 0));
    spinBufferTransparency->setMaximum(100);
    spinBufferTransparency->setValue(0);

    gridLayout6->addWidget(spinBufferTransparency, 2, 1, 1, 1);

    pbnDefaultBufferColor_2 = new QPushButton(page_2);
    pbnDefaultBufferColor_2->setObjectName(QString::fromUtf8("pbnDefaultBufferColor_2"));

    gridLayout6->addWidget(pbnDefaultBufferColor_2, 3, 0, 1, 2);

    groupBox_4 = new QGroupBox(page_2);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    gridLayout7 = new QGridLayout(groupBox_4);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(11);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    radioBufferUnitsPoints = new QRadioButton(groupBox_4);
    radioBufferUnitsPoints->setObjectName(QString::fromUtf8("radioBufferUnitsPoints"));

    gridLayout7->addWidget(radioBufferUnitsPoints, 0, 0, 1, 1);

    radioBufferUnitsMap = new QRadioButton(groupBox_4);
    radioBufferUnitsMap->setObjectName(QString::fromUtf8("radioBufferUnitsMap"));

    gridLayout7->addWidget(radioBufferUnitsMap, 1, 0, 1, 1);


    gridLayout6->addWidget(groupBox_4, 4, 0, 1, 2);

    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout6->addItem(spacerItem1, 5, 0, 1, 1);

    stackedWidget->addWidget(page_2);
    page_3 = new QWidget();
    page_3->setObjectName(QString::fromUtf8("page_3"));
    page_3->setGeometry(QRect(0, 0, 100, 30));
    gridLayout8 = new QGridLayout(page_3);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(11);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    textLabel1_2_3_2 = new QLabel(page_3);
    textLabel1_2_3_2->setObjectName(QString::fromUtf8("textLabel1_2_3_2"));

    gridLayout8->addWidget(textLabel1_2_3_2, 0, 0, 1, 1);

    spinXOffset = new QSpinBox(page_3);
    spinXOffset->setObjectName(QString::fromUtf8("spinXOffset"));
    spinXOffset->setMinimum(-99);

    gridLayout8->addWidget(spinXOffset, 0, 1, 1, 1);

    textLabel1_2_2_2_3 = new QLabel(page_3);
    textLabel1_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_3"));

    gridLayout8->addWidget(textLabel1_2_2_2_3, 1, 0, 1, 1);

    spinYOffset = new QSpinBox(page_3);
    spinYOffset->setObjectName(QString::fromUtf8("spinYOffset"));
    spinYOffset->setMinimum(-99);

    gridLayout8->addWidget(spinYOffset, 1, 1, 1, 1);

    buttonGroup10 = new QGroupBox(page_3);
    buttonGroup10->setObjectName(QString::fromUtf8("buttonGroup10"));
    gridLayout9 = new QGridLayout(buttonGroup10);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(11);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    radioOffsetUnitsPoints = new QRadioButton(buttonGroup10);
    radioOffsetUnitsPoints->setObjectName(QString::fromUtf8("radioOffsetUnitsPoints"));

    gridLayout9->addWidget(radioOffsetUnitsPoints, 0, 0, 1, 1);

    radioOffsetUnitsMap = new QRadioButton(buttonGroup10);
    radioOffsetUnitsMap->setObjectName(QString::fromUtf8("radioOffsetUnitsMap"));

    gridLayout9->addWidget(radioOffsetUnitsMap, 0, 1, 1, 1);


    gridLayout8->addWidget(buttonGroup10, 2, 0, 1, 2);

    spacerItem2 = new QSpacerItem(20, 181, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout8->addItem(spacerItem2, 3, 0, 1, 1);

    stackedWidget->addWidget(page_3);
    page_4 = new QWidget();
    page_4->setObjectName(QString::fromUtf8("page_4"));
    page_4->setGeometry(QRect(0, 0, 100, 30));
    gridLayout10 = new QGridLayout(page_4);
    gridLayout10->setSpacing(6);
    gridLayout10->setMargin(11);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    lblFont = new QLabel(page_4);
    lblFont->setObjectName(QString::fromUtf8("lblFont"));
    sizePolicy4.setHeightForWidth(lblFont->sizePolicy().hasHeightForWidth());
    lblFont->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(lblFont, 0, 0, 1, 1);

    cboFontField = new QComboBox(page_4);
    cboFontField->setObjectName(QString::fromUtf8("cboFontField"));
    cboFontField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboFontField, 0, 1, 1, 1);

    textLabel4 = new QLabel(page_4);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    sizePolicy4.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(textLabel4, 1, 0, 1, 1);

    cboBoldField = new QComboBox(page_4);
    cboBoldField->setObjectName(QString::fromUtf8("cboBoldField"));
    cboBoldField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboBoldField, 1, 1, 1, 1);

    textLabel4_2_4 = new QLabel(page_4);
    textLabel4_2_4->setObjectName(QString::fromUtf8("textLabel4_2_4"));
    sizePolicy4.setHeightForWidth(textLabel4_2_4->sizePolicy().hasHeightForWidth());
    textLabel4_2_4->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(textLabel4_2_4, 2, 0, 1, 1);

    cboItalicField = new QComboBox(page_4);
    cboItalicField->setObjectName(QString::fromUtf8("cboItalicField"));
    cboItalicField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboItalicField, 2, 1, 1, 1);

    textLabel4_3 = new QLabel(page_4);
    textLabel4_3->setObjectName(QString::fromUtf8("textLabel4_3"));
    sizePolicy4.setHeightForWidth(textLabel4_3->sizePolicy().hasHeightForWidth());
    textLabel4_3->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(textLabel4_3, 3, 0, 1, 1);

    cboUnderlineField = new QComboBox(page_4);
    cboUnderlineField->setObjectName(QString::fromUtf8("cboUnderlineField"));
    cboUnderlineField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboUnderlineField, 3, 1, 1, 1);

    textLabel4_3_2 = new QLabel(page_4);
    textLabel4_3_2->setObjectName(QString::fromUtf8("textLabel4_3_2"));
    sizePolicy4.setHeightForWidth(textLabel4_3_2->sizePolicy().hasHeightForWidth());
    textLabel4_3_2->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(textLabel4_3_2, 4, 0, 1, 1);

    cboFontSizeField = new QComboBox(page_4);
    cboFontSizeField->setObjectName(QString::fromUtf8("cboFontSizeField"));
    cboFontSizeField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboFontSizeField, 4, 1, 1, 1);

    textLabel4_3_2_4 = new QLabel(page_4);
    textLabel4_3_2_4->setObjectName(QString::fromUtf8("textLabel4_3_2_4"));
    sizePolicy4.setHeightForWidth(textLabel4_3_2_4->sizePolicy().hasHeightForWidth());
    textLabel4_3_2_4->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(textLabel4_3_2_4, 5, 0, 1, 1);

    cboFontSizeTypeField = new QComboBox(page_4);
    cboFontSizeTypeField->setObjectName(QString::fromUtf8("cboFontSizeTypeField"));
    cboFontSizeTypeField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboFontSizeTypeField, 5, 1, 1, 1);

    textLabel4_3_2_3 = new QLabel(page_4);
    textLabel4_3_2_3->setObjectName(QString::fromUtf8("textLabel4_3_2_3"));
    sizePolicy4.setHeightForWidth(textLabel4_3_2_3->sizePolicy().hasHeightForWidth());
    textLabel4_3_2_3->setSizePolicy(sizePolicy4);

    gridLayout10->addWidget(textLabel4_3_2_3, 6, 0, 1, 1);

    cboFontTransparencyField = new QComboBox(page_4);
    cboFontTransparencyField->setObjectName(QString::fromUtf8("cboFontTransparencyField"));
    cboFontTransparencyField->setMinimumSize(QSize(0, 20));

    gridLayout10->addWidget(cboFontTransparencyField, 6, 1, 1, 1);

    stackedWidget->addWidget(page_4);
    page_5 = new QWidget();
    page_5->setObjectName(QString::fromUtf8("page_5"));
    page_5->setGeometry(QRect(0, 0, 100, 30));
    gridLayout11 = new QGridLayout(page_5);
    gridLayout11->setSpacing(6);
    gridLayout11->setMargin(11);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    textLabel1_2_2_2_2_3 = new QLabel(page_5);
    textLabel1_2_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3"));
    sizePolicy4.setHeightForWidth(textLabel1_2_2_2_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3->setSizePolicy(sizePolicy4);

    gridLayout11->addWidget(textLabel1_2_2_2_2_3, 0, 0, 1, 1);

    cboAlignmentField = new QComboBox(page_5);
    cboAlignmentField->setObjectName(QString::fromUtf8("cboAlignmentField"));

    gridLayout11->addWidget(cboAlignmentField, 0, 1, 1, 1);

    textLabel1_2_2_2_2 = new QLabel(page_5);
    textLabel1_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2"));
    sizePolicy4.setHeightForWidth(textLabel1_2_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2->setSizePolicy(sizePolicy4);

    gridLayout11->addWidget(textLabel1_2_2_2_2, 1, 0, 1, 1);

    cboAngleField = new QComboBox(page_5);
    cboAngleField->setObjectName(QString::fromUtf8("cboAngleField"));

    gridLayout11->addWidget(cboAngleField, 1, 1, 1, 1);

    stackedWidget->addWidget(page_5);
    page_6 = new QWidget();
    page_6->setObjectName(QString::fromUtf8("page_6"));
    page_6->setGeometry(QRect(0, 0, 100, 30));
    gridLayout12 = new QGridLayout(page_6);
    gridLayout12->setSpacing(6);
    gridLayout12->setMargin(11);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    textLabel1_3_2_2_2 = new QLabel(page_6);
    textLabel1_3_2_2_2->setObjectName(QString::fromUtf8("textLabel1_3_2_2_2"));
    textLabel1_3_2_2_2->setEnabled(false);
    sizePolicy4.setHeightForWidth(textLabel1_3_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_3_2_2_2->setSizePolicy(sizePolicy4);
    textLabel1_3_2_2_2->setMinimumSize(QSize(70, 0));

    gridLayout12->addWidget(textLabel1_3_2_2_2, 0, 0, 1, 1);

    cboBufferTransparencyField = new QComboBox(page_6);
    cboBufferTransparencyField->setObjectName(QString::fromUtf8("cboBufferTransparencyField"));
    cboBufferTransparencyField->setEnabled(false);

    gridLayout12->addWidget(cboBufferTransparencyField, 0, 1, 1, 1);

    textLabel4_3_2_2_2 = new QLabel(page_6);
    textLabel4_3_2_2_2->setObjectName(QString::fromUtf8("textLabel4_3_2_2_2"));
    sizePolicy4.setHeightForWidth(textLabel4_3_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel4_3_2_2_2->setSizePolicy(sizePolicy4);

    gridLayout12->addWidget(textLabel4_3_2_2_2, 1, 0, 1, 1);

    cboBufferSizeField = new QComboBox(page_6);
    cboBufferSizeField->setObjectName(QString::fromUtf8("cboBufferSizeField"));

    gridLayout12->addWidget(cboBufferSizeField, 1, 1, 1, 1);

    stackedWidget->addWidget(page_6);
    page_7 = new QWidget();
    page_7->setObjectName(QString::fromUtf8("page_7"));
    page_7->setGeometry(QRect(0, 0, 100, 30));
    gridLayout13 = new QGridLayout(page_7);
    gridLayout13->setSpacing(6);
    gridLayout13->setMargin(11);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    textLabel1_2 = new QLabel(page_7);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    sizePolicy4.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy4);

    gridLayout13->addWidget(textLabel1_2, 0, 0, 1, 1);

    cboXCoordinateField = new QComboBox(page_7);
    cboXCoordinateField->setObjectName(QString::fromUtf8("cboXCoordinateField"));

    gridLayout13->addWidget(cboXCoordinateField, 0, 1, 1, 1);

    textLabel1_2_2 = new QLabel(page_7);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
    sizePolicy4.setHeightForWidth(textLabel1_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2->setSizePolicy(sizePolicy4);

    gridLayout13->addWidget(textLabel1_2_2, 1, 0, 1, 1);

    cboYCoordinateField = new QComboBox(page_7);
    cboYCoordinateField->setObjectName(QString::fromUtf8("cboYCoordinateField"));

    gridLayout13->addWidget(cboYCoordinateField, 1, 1, 1, 1);

    textLabel1_2_3 = new QLabel(page_7);
    textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));
    sizePolicy4.setHeightForWidth(textLabel1_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_3->setSizePolicy(sizePolicy4);

    gridLayout13->addWidget(textLabel1_2_3, 2, 0, 1, 1);

    cboXOffsetField = new QComboBox(page_7);
    cboXOffsetField->setObjectName(QString::fromUtf8("cboXOffsetField"));

    gridLayout13->addWidget(cboXOffsetField, 2, 1, 1, 1);

    textLabel1_2_2_2 = new QLabel(page_7);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
    sizePolicy4.setHeightForWidth(textLabel1_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2->setSizePolicy(sizePolicy4);

    gridLayout13->addWidget(textLabel1_2_2_2, 3, 0, 1, 1);

    cboYOffsetField = new QComboBox(page_7);
    cboYOffsetField->setObjectName(QString::fromUtf8("cboYOffsetField"));

    gridLayout13->addWidget(cboYOffsetField, 3, 1, 1, 1);

    stackedWidget->addWidget(page_7);

    gridLayout->addWidget(stackedWidget, 1, 1, 1, 1);

    groupBox5 = new QGroupBox(QgsLabelDialogBase);
    groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
    QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(groupBox5->sizePolicy().hasHeightForWidth());
    groupBox5->setSizePolicy(sizePolicy5);
    gridLayout14 = new QGridLayout(groupBox5);
    gridLayout14->setSpacing(6);
    gridLayout14->setMargin(11);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    lblSample = new QLabel(groupBox5);
    lblSample->setObjectName(QString::fromUtf8("lblSample"));

    gridLayout14->addWidget(lblSample, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox5, 2, 0, 1, 2);

    textLabel1_2_2_1->setBuddy(spinMaximumScale);
    textLabel1_1->setBuddy(spinMinimumScale);
    lblFont->setBuddy(cboFontField);
    textLabel4->setBuddy(cboBoldField);
    textLabel4_2_4->setBuddy(cboItalicField);
    textLabel4_3->setBuddy(cboUnderlineField);
    textLabel4_3_2->setBuddy(cboFontSizeField);
    textLabel4_3_2_4->setBuddy(cboFontSizeTypeField);
    textLabel4_3_2_3->setBuddy(cboFontTransparencyField);
    textLabel1_3_2_2_2->setBuddy(cboBufferTransparencyField);
    textLabel4_3_2_2_2->setBuddy(cboBufferSizeField);
    QWidget::setTabOrder(cboLabelField, leDefaultLabel);
    QWidget::setTabOrder(leDefaultLabel, btnDefaultFont);
    QWidget::setTabOrder(btnDefaultFont, pbnDefaultFontColor);
    QWidget::setTabOrder(pbnDefaultFontColor, spinFontTransparency);
    QWidget::setTabOrder(spinFontTransparency, radioFontSizeUnitsPoints);
    QWidget::setTabOrder(radioFontSizeUnitsPoints, radioFontSizeUnitsMap);
    QWidget::setTabOrder(radioFontSizeUnitsMap, spinAngle);
    QWidget::setTabOrder(spinAngle, radioAboveLeft);
    QWidget::setTabOrder(radioAboveLeft, radioAbove);
    QWidget::setTabOrder(radioAbove, radioAboveRight);
    QWidget::setTabOrder(radioAboveRight, radioLeft);
    QWidget::setTabOrder(radioLeft, radioOver);
    QWidget::setTabOrder(radioOver, radioRight);
    QWidget::setTabOrder(radioRight, radioBelowLeft);
    QWidget::setTabOrder(radioBelowLeft, radioBelow);
    QWidget::setTabOrder(radioBelow, radioBelowRight);
    QWidget::setTabOrder(radioBelowRight, chkUseBuffer);
    QWidget::setTabOrder(chkUseBuffer, spinBufferSize);
    QWidget::setTabOrder(spinBufferSize, spinBufferTransparency);
    QWidget::setTabOrder(spinBufferTransparency, radioBufferUnitsPoints);
    QWidget::setTabOrder(radioBufferUnitsPoints, radioBufferUnitsMap);
    QWidget::setTabOrder(radioBufferUnitsMap, spinXOffset);
    QWidget::setTabOrder(spinXOffset, spinYOffset);
    QWidget::setTabOrder(spinYOffset, radioOffsetUnitsPoints);
    QWidget::setTabOrder(radioOffsetUnitsPoints, radioOffsetUnitsMap);
    QWidget::setTabOrder(radioOffsetUnitsMap, cboFontField);
    QWidget::setTabOrder(cboFontField, cboBoldField);
    QWidget::setTabOrder(cboBoldField, cboItalicField);
    QWidget::setTabOrder(cboItalicField, cboUnderlineField);
    QWidget::setTabOrder(cboUnderlineField, cboFontSizeField);
    QWidget::setTabOrder(cboFontSizeField, cboFontTransparencyField);
    QWidget::setTabOrder(cboFontTransparencyField, cboAlignmentField);
    QWidget::setTabOrder(cboAlignmentField, cboAngleField);
    QWidget::setTabOrder(cboAngleField, cboBufferTransparencyField);
    QWidget::setTabOrder(cboBufferTransparencyField, cboBufferSizeField);
    QWidget::setTabOrder(cboBufferSizeField, cboXCoordinateField);
    QWidget::setTabOrder(cboXCoordinateField, cboYCoordinateField);
    QWidget::setTabOrder(cboYCoordinateField, cboXOffsetField);
    QWidget::setTabOrder(cboXOffsetField, cboYOffsetField);

    retranslateUi(QgsLabelDialogBase);
    QObject::connect(listWidget, SIGNAL(currentRowChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
    QObject::connect(chkUseBuffer, SIGNAL(clicked(bool)), spinBufferTransparency, SLOT(setEnabled(bool)));
    QObject::connect(chkUseBuffer, SIGNAL(clicked(bool)), textLabel4_3_2_2, SLOT(setEnabled(bool)));
    QObject::connect(chkUseBuffer, SIGNAL(clicked(bool)), spinBufferSize, SLOT(setEnabled(bool)));
    QObject::connect(chkUseBuffer, SIGNAL(clicked(bool)), textLabel5_2_2_3, SLOT(setEnabled(bool)));
    QObject::connect(chkUseBuffer, SIGNAL(clicked(bool)), pbnDefaultBufferColor_2, SLOT(setEnabled(bool)));
    QObject::connect(chkUseBuffer, SIGNAL(clicked(bool)), groupBox_4, SLOT(setEnabled(bool)));

    stackedWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsLabelDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelDialogBase)
    {
    QgsLabelDialogBase->setWindowTitle(QApplication::translate("QgsLabelDialogBase", "Form1", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsLabelDialogBase", "Field containing label", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsLabelDialogBase", "Default label", 0, QApplication::UnicodeUTF8));
    listWidget->clear();

    QListWidgetItem *__item = new QListWidgetItem(listWidget);
    __item->setText(QApplication::translate("QgsLabelDialogBase", "General", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item1 = new QListWidgetItem(listWidget);
    __item1->setText(QApplication::translate("QgsLabelDialogBase", "Buffer", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item2 = new QListWidgetItem(listWidget);
    __item2->setText(QApplication::translate("QgsLabelDialogBase", "Position", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item3 = new QListWidgetItem(listWidget);
    __item3->setText(QApplication::translate("QgsLabelDialogBase", "Data defined style", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item4 = new QListWidgetItem(listWidget);
    __item4->setText(QApplication::translate("QgsLabelDialogBase", "Data defined alignment", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item5 = new QListWidgetItem(listWidget);
    __item5->setText(QApplication::translate("QgsLabelDialogBase", "Data defined buffer", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item6 = new QListWidgetItem(listWidget);
    __item6->setText(QApplication::translate("QgsLabelDialogBase", "Data defined position", 0, QApplication::UnicodeUTF8));
    btnDefaultFont->setText(QApplication::translate("QgsLabelDialogBase", "Font", 0, QApplication::UnicodeUTF8));
    textLabel5_2_2_3_2->setText(QApplication::translate("QgsLabelDialogBase", "Font transparency", 0, QApplication::UnicodeUTF8));
    spinFontTransparency->setSuffix(QApplication::translate("QgsLabelDialogBase", "%", 0, QApplication::UnicodeUTF8));
    pbnDefaultFontColor->setText(QApplication::translate("QgsLabelDialogBase", "Color", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Angle (deg)", 0, QApplication::UnicodeUTF8));
    spinAngle->setSuffix(QApplication::translate("QgsLabelDialogBase", "\302\260", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsLabelDialogBase", "Placement", 0, QApplication::UnicodeUTF8));
    radioBelowRight->setText(QApplication::translate("QgsLabelDialogBase", "Below Right", 0, QApplication::UnicodeUTF8));
    radioRight->setText(QApplication::translate("QgsLabelDialogBase", "Right", 0, QApplication::UnicodeUTF8));
    radioBelow->setText(QApplication::translate("QgsLabelDialogBase", "Below", 0, QApplication::UnicodeUTF8));
    radioOver->setText(QApplication::translate("QgsLabelDialogBase", "Over", 0, QApplication::UnicodeUTF8));
    radioAbove->setText(QApplication::translate("QgsLabelDialogBase", "Above", 0, QApplication::UnicodeUTF8));
    radioLeft->setText(QApplication::translate("QgsLabelDialogBase", "Left", 0, QApplication::UnicodeUTF8));
    radioBelowLeft->setText(QApplication::translate("QgsLabelDialogBase", "Below Left", 0, QApplication::UnicodeUTF8));
    radioAboveRight->setText(QApplication::translate("QgsLabelDialogBase", "Above Right", 0, QApplication::UnicodeUTF8));
    radioAboveLeft->setText(QApplication::translate("QgsLabelDialogBase", "Above Left", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("QgsLabelDialogBase", "Font size units", 0, QApplication::UnicodeUTF8));
    radioFontSizeUnitsPoints->setText(QApplication::translate("QgsLabelDialogBase", "Points", 0, QApplication::UnicodeUTF8));
    radioFontSizeUnitsMap->setText(QApplication::translate("QgsLabelDialogBase", "Map units", 0, QApplication::UnicodeUTF8));
    chkUseScaleDependentRendering->setTitle(QApplication::translate("QgsLabelDialogBase", "Use scale dependent rendering", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_1->setText(QApplication::translate("QgsLabelDialogBase", "Maximum", 0, QApplication::UnicodeUTF8));
    textLabel1_1->setText(QApplication::translate("QgsLabelDialogBase", "Minimum", 0, QApplication::UnicodeUTF8));
    spinMinimumScale->setToolTip(QApplication::translate("QgsLabelDialogBase", "Minimum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    spinMaximumScale->setToolTip(QApplication::translate("QgsLabelDialogBase", "Maximum scale at which this layer will be displayed. ", 0, QApplication::UnicodeUTF8));
    chkUseMultiline->setText(QApplication::translate("QgsLabelDialogBase", "Multiline labels?", 0, QApplication::UnicodeUTF8));
    chkUseBuffer->setText(QApplication::translate("QgsLabelDialogBase", "Buffer labels?", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Buffer size", 0, QApplication::UnicodeUTF8));
    textLabel5_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Transparency", 0, QApplication::UnicodeUTF8));
    spinBufferTransparency->setSuffix(QApplication::translate("QgsLabelDialogBase", "%", 0, QApplication::UnicodeUTF8));
    pbnDefaultBufferColor_2->setText(QApplication::translate("QgsLabelDialogBase", "Color", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("QgsLabelDialogBase", "Buffer size units", 0, QApplication::UnicodeUTF8));
    radioBufferUnitsPoints->setText(QApplication::translate("QgsLabelDialogBase", "Size is in points", 0, QApplication::UnicodeUTF8));
    radioBufferUnitsMap->setText(QApplication::translate("QgsLabelDialogBase", "Size is in map units", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3_2->setText(QApplication::translate("QgsLabelDialogBase", "X Offset (pts)", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Y Offset (pts)", 0, QApplication::UnicodeUTF8));
    buttonGroup10->setTitle(QApplication::translate("QgsLabelDialogBase", "Offset units", 0, QApplication::UnicodeUTF8));
    radioOffsetUnitsPoints->setText(QApplication::translate("QgsLabelDialogBase", "Points", 0, QApplication::UnicodeUTF8));
    radioOffsetUnitsMap->setText(QApplication::translate("QgsLabelDialogBase", "Map units", 0, QApplication::UnicodeUTF8));
    lblFont->setText(QApplication::translate("QgsLabelDialogBase", "&Font family", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsLabelDialogBase", "&Bold", 0, QApplication::UnicodeUTF8));
    textLabel4_2_4->setText(QApplication::translate("QgsLabelDialogBase", "&Italic", 0, QApplication::UnicodeUTF8));
    textLabel4_3->setText(QApplication::translate("QgsLabelDialogBase", "&Underline", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2->setText(QApplication::translate("QgsLabelDialogBase", "&Size", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_4->setText(QApplication::translate("QgsLabelDialogBase", "Size units", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Transparency", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Placement", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Angle (deg)", 0, QApplication::UnicodeUTF8));
    textLabel1_3_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Size:", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsLabelDialogBase", "X Coordinate", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Y Coordinate", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3->setText(QApplication::translate("QgsLabelDialogBase", "X Offset (pts)", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Y Offset (pts)", 0, QApplication::UnicodeUTF8));
    groupBox5->setTitle(QApplication::translate("QgsLabelDialogBase", "Preview:", 0, QApplication::UnicodeUTF8));
    lblSample->setText(QApplication::translate("QgsLabelDialogBase", "QGIS Rocks!", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLabelDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelDialogBase: public Ui_QgsLabelDialogBase {};
} // namespace Ui

#endif // UI_QGSLABELDIALOGBASE_H
