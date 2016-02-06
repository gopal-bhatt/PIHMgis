/********************************************************************************
** Form generated from reading ui file 'qgslabeldialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLABELDIALOGBASE_H
#define UI_QGSLABELDIALOGBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

class Ui_QgsLabelDialogBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget2;
    QWidget *tab1;
    QGridLayout *gridLayout1;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout2;
    QRadioButton *radioFontSizeUnitsMap;
    QRadioButton *radioFontSizeUnitsPoints;
    QLabel *textLabel5_2_2_3_2;
    QSlider *sliderFontTransparency;
    QPushButton *btnDefaultFont;
    QPushButton *pbnDefaultFontColor;
    QSpinBox *spinFontTransparency;
    QWidget *tab_2;
    QGridLayout *gridLayout3;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout4;
    QRadioButton *radioBelowRight;
    QRadioButton *radioRight;
    QRadioButton *radioBelow;
    QRadioButton *radioOver;
    QRadioButton *radioAbove;
    QRadioButton *radioLeft;
    QRadioButton *radioBelowLeft;
    QRadioButton *radioAboveRight;
    QRadioButton *radioAboveLeft;
    QSpinBox *spinAngle;
    QSlider *sliderAngle;
    QLabel *textLabel1_2_2_2_2_2;
    QWidget *unnamed;
    QGridLayout *gridLayout5;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout6;
    QRadioButton *radioBufferUnitsMap;
    QRadioButton *radioBufferUnitsPoints;
    QSpacerItem *spacerItem2;
    QLabel *textLabel4_3_2_2;
    QSpinBox *spinBufferSize;
    QCheckBox *chkUseBuffer;
    QSpinBox *spinBufferTransparency;
    QLabel *textLabel5_2_2_3;
    QSlider *sliderBufferTransparency;
    QPushButton *pbnDefaultBufferColor_2;
    QWidget *tab_3;
    QGridLayout *gridLayout7;
    QSpacerItem *spacerItem3;
    QGroupBox *buttonGroup10;
    QGridLayout *gridLayout8;
    QRadioButton *radioOffsetUnitsMap;
    QRadioButton *radioOffsetUnitsPoints;
    QSpinBox *spinXOffset;
    QSpinBox *spinYOffset;
    QLabel *textLabel1_2_3_2;
    QLabel *textLabel1_2_2_2_3;
    QWidget *tab4;
    QGridLayout *gridLayout9;
    QLabel *textLabel4_2_4;
    QLabel *textLabel4_3_2;
    QLabel *textLabel4;
    QComboBox *cboFontTransparencyField;
    QLabel *textLabel4_3;
    QComboBox *cboUnderlineField;
    QComboBox *cboFontSizeField;
    QComboBox *cboItalicField;
    QLabel *textLabel4_3_2_3;
    QComboBox *cboBoldField;
    QLabel *lblFont;
    QComboBox *cboFontField;
    QSpacerItem *spacerItem4;
    QSpacerItem *spacerItem5;
    QWidget *tab_4;
    QGridLayout *gridLayout10;
    QSpacerItem *spacerItem6;
    QSpacerItem *spacerItem7;
    QLabel *textLabel1_2_2_2_2;
    QComboBox *cboAngleField;
    QComboBox *cboAlignmentField;
    QLabel *textLabel1_2_2_2_2_3;
    QWidget *tab5;
    QGridLayout *gridLayout11;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QComboBox *cboBufferSizeField;
    QLabel *textLabel1_3_2_2_2;
    QComboBox *cboBufferTransparencyField;
    QLabel *textLabel4_3_2_2_2;
    QWidget *tab_5;
    QGridLayout *gridLayout12;
    QSpacerItem *spacerItem10;
    QSpacerItem *spacerItem11;
    QLabel *textLabel1_2;
    QComboBox *cboYCoordinateField;
    QLabel *textLabel1_2_3;
    QComboBox *cboYOffsetField;
    QComboBox *cboXOffsetField;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1_2_2_2;
    QComboBox *cboXCoordinateField;
    Q3GroupBox *groupBox5;
    QGridLayout *gridLayout13;
    QLabel *lblSample;
    QGroupBox *groupBox;
    QGridLayout *gridLayout14;
    QLabel *textLabel5;
    QComboBox *cboLabelField;
    QLineEdit *leDefaultLabel;
    QLabel *textLabel1;

    void setupUi(QWidget *QgsLabelDialogBase)
    {
    if (QgsLabelDialogBase->objectName().isEmpty())
        QgsLabelDialogBase->setObjectName(QString::fromUtf8("QgsLabelDialogBase"));
    QgsLabelDialogBase->resize(332, 463);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsLabelDialogBase->sizePolicy().hasHeightForWidth());
    QgsLabelDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsLabelDialogBase);
    gridLayout->setSpacing(2);
    gridLayout->setMargin(1);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget2 = new QTabWidget(QgsLabelDialogBase);
    tabWidget2->setObjectName(QString::fromUtf8("tabWidget2"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(tabWidget2->sizePolicy().hasHeightForWidth());
    tabWidget2->setSizePolicy(sizePolicy1);
    tab1 = new QWidget();
    tab1->setObjectName(QString::fromUtf8("tab1"));
    gridLayout1 = new QGridLayout(tab1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 4, 1, 1, 1);

    groupBox_3 = new QGroupBox(tab1);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    gridLayout2 = new QGridLayout(groupBox_3);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    radioFontSizeUnitsMap = new QRadioButton(groupBox_3);
    radioFontSizeUnitsMap->setObjectName(QString::fromUtf8("radioFontSizeUnitsMap"));

    gridLayout2->addWidget(radioFontSizeUnitsMap, 0, 1, 1, 1);

    radioFontSizeUnitsPoints = new QRadioButton(groupBox_3);
    radioFontSizeUnitsPoints->setObjectName(QString::fromUtf8("radioFontSizeUnitsPoints"));

    gridLayout2->addWidget(radioFontSizeUnitsPoints, 0, 0, 1, 1);


    gridLayout1->addWidget(groupBox_3, 3, 0, 1, 3);

    textLabel5_2_2_3_2 = new QLabel(tab1);
    textLabel5_2_2_3_2->setObjectName(QString::fromUtf8("textLabel5_2_2_3_2"));
    textLabel5_2_2_3_2->setEnabled(false);
    textLabel5_2_2_3_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout1->addWidget(textLabel5_2_2_3_2, 2, 0, 1, 1);

    sliderFontTransparency = new QSlider(tab1);
    sliderFontTransparency->setObjectName(QString::fromUtf8("sliderFontTransparency"));
    sliderFontTransparency->setEnabled(false);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(sliderFontTransparency->sizePolicy().hasHeightForWidth());
    sliderFontTransparency->setSizePolicy(sizePolicy2);
    sliderFontTransparency->setMinimumSize(QSize(0, 0));
    sliderFontTransparency->setMaximum(100);
    sliderFontTransparency->setOrientation(Qt::Horizontal);
    sliderFontTransparency->setTickInterval(100);

    gridLayout1->addWidget(sliderFontTransparency, 2, 1, 1, 1);

    btnDefaultFont = new QPushButton(tab1);
    btnDefaultFont->setObjectName(QString::fromUtf8("btnDefaultFont"));
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(2);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(btnDefaultFont->sizePolicy().hasHeightForWidth());
    btnDefaultFont->setSizePolicy(sizePolicy3);

    gridLayout1->addWidget(btnDefaultFont, 0, 0, 1, 3);

    pbnDefaultFontColor = new QPushButton(tab1);
    pbnDefaultFontColor->setObjectName(QString::fromUtf8("pbnDefaultFontColor"));
    sizePolicy3.setHeightForWidth(pbnDefaultFontColor->sizePolicy().hasHeightForWidth());
    pbnDefaultFontColor->setSizePolicy(sizePolicy3);

    gridLayout1->addWidget(pbnDefaultFontColor, 1, 0, 1, 3);

    spinFontTransparency = new QSpinBox(tab1);
    spinFontTransparency->setObjectName(QString::fromUtf8("spinFontTransparency"));
    spinFontTransparency->setEnabled(false);
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(spinFontTransparency->sizePolicy().hasHeightForWidth());
    spinFontTransparency->setSizePolicy(sizePolicy4);
    spinFontTransparency->setMinimumSize(QSize(50, 0));
    spinFontTransparency->setMaximum(100);
    spinFontTransparency->setValue(0);

    gridLayout1->addWidget(spinFontTransparency, 2, 2, 1, 1);

    tabWidget2->addTab(tab1, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout3 = new QGridLayout(tab_2);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(spacerItem1, 3, 1, 1, 1);

    groupBox_2 = new QGroupBox(tab_2);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout4 = new QGridLayout(groupBox_2);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    radioBelowRight = new QRadioButton(groupBox_2);
    radioBelowRight->setObjectName(QString::fromUtf8("radioBelowRight"));

    gridLayout4->addWidget(radioBelowRight, 2, 2, 1, 1);

    radioRight = new QRadioButton(groupBox_2);
    radioRight->setObjectName(QString::fromUtf8("radioRight"));

    gridLayout4->addWidget(radioRight, 1, 2, 1, 1);

    radioBelow = new QRadioButton(groupBox_2);
    radioBelow->setObjectName(QString::fromUtf8("radioBelow"));

    gridLayout4->addWidget(radioBelow, 2, 1, 1, 1);

    radioOver = new QRadioButton(groupBox_2);
    radioOver->setObjectName(QString::fromUtf8("radioOver"));
    radioOver->setChecked(true);

    gridLayout4->addWidget(radioOver, 1, 1, 1, 1);

    radioAbove = new QRadioButton(groupBox_2);
    radioAbove->setObjectName(QString::fromUtf8("radioAbove"));

    gridLayout4->addWidget(radioAbove, 0, 1, 1, 1);

    radioLeft = new QRadioButton(groupBox_2);
    radioLeft->setObjectName(QString::fromUtf8("radioLeft"));

    gridLayout4->addWidget(radioLeft, 1, 0, 1, 1);

    radioBelowLeft = new QRadioButton(groupBox_2);
    radioBelowLeft->setObjectName(QString::fromUtf8("radioBelowLeft"));

    gridLayout4->addWidget(radioBelowLeft, 2, 0, 1, 1);

    radioAboveRight = new QRadioButton(groupBox_2);
    radioAboveRight->setObjectName(QString::fromUtf8("radioAboveRight"));

    gridLayout4->addWidget(radioAboveRight, 0, 2, 1, 1);

    radioAboveLeft = new QRadioButton(groupBox_2);
    radioAboveLeft->setObjectName(QString::fromUtf8("radioAboveLeft"));

    gridLayout4->addWidget(radioAboveLeft, 0, 0, 1, 1);


    gridLayout3->addWidget(groupBox_2, 2, 0, 1, 3);

    spinAngle = new QSpinBox(tab_2);
    spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
    spinAngle->setMaximum(360);
    spinAngle->setValue(0);

    gridLayout3->addWidget(spinAngle, 0, 2, 1, 1);

    sliderAngle = new QSlider(tab_2);
    sliderAngle->setObjectName(QString::fromUtf8("sliderAngle"));
    QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy5.setHorizontalStretch(0);
    sizePolicy5.setVerticalStretch(0);
    sizePolicy5.setHeightForWidth(sliderAngle->sizePolicy().hasHeightForWidth());
    sliderAngle->setSizePolicy(sizePolicy5);
    sliderAngle->setMaximum(360);
    sliderAngle->setOrientation(Qt::Horizontal);
    sliderAngle->setTickInterval(45);

    gridLayout3->addWidget(sliderAngle, 0, 1, 1, 1);

    textLabel1_2_2_2_2_2 = new QLabel(tab_2);
    textLabel1_2_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_2"));

    gridLayout3->addWidget(textLabel1_2_2_2_2_2, 0, 0, 1, 1);

    tabWidget2->addTab(tab_2, QString());
    unnamed = new QWidget();
    unnamed->setObjectName(QString::fromUtf8("unnamed"));
    gridLayout5 = new QGridLayout(unnamed);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(9);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    groupBox_4 = new QGroupBox(unnamed);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    gridLayout6 = new QGridLayout(groupBox_4);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(9);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    radioBufferUnitsMap = new QRadioButton(groupBox_4);
    radioBufferUnitsMap->setObjectName(QString::fromUtf8("radioBufferUnitsMap"));

    gridLayout6->addWidget(radioBufferUnitsMap, 0, 1, 1, 1);

    radioBufferUnitsPoints = new QRadioButton(groupBox_4);
    radioBufferUnitsPoints->setObjectName(QString::fromUtf8("radioBufferUnitsPoints"));

    gridLayout6->addWidget(radioBufferUnitsPoints, 0, 0, 1, 1);


    gridLayout5->addWidget(groupBox_4, 3, 0, 1, 5);

    spacerItem2 = new QSpacerItem(50, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout5->addItem(spacerItem2, 4, 2, 1, 1);

    textLabel4_3_2_2 = new QLabel(unnamed);
    textLabel4_3_2_2->setObjectName(QString::fromUtf8("textLabel4_3_2_2"));

    gridLayout5->addWidget(textLabel4_3_2_2, 0, 2, 1, 1);

    spinBufferSize = new QSpinBox(unnamed);
    spinBufferSize->setObjectName(QString::fromUtf8("spinBufferSize"));

    gridLayout5->addWidget(spinBufferSize, 0, 3, 1, 2);

    chkUseBuffer = new QCheckBox(unnamed);
    chkUseBuffer->setObjectName(QString::fromUtf8("chkUseBuffer"));
    chkUseBuffer->setChecked(true);

    gridLayout5->addWidget(chkUseBuffer, 0, 0, 1, 2);

    spinBufferTransparency = new QSpinBox(unnamed);
    spinBufferTransparency->setObjectName(QString::fromUtf8("spinBufferTransparency"));
    spinBufferTransparency->setEnabled(false);
    sizePolicy4.setHeightForWidth(spinBufferTransparency->sizePolicy().hasHeightForWidth());
    spinBufferTransparency->setSizePolicy(sizePolicy4);
    spinBufferTransparency->setMinimumSize(QSize(50, 0));
    spinBufferTransparency->setMaximum(100);
    spinBufferTransparency->setValue(0);

    gridLayout5->addWidget(spinBufferTransparency, 2, 4, 1, 1);

    textLabel5_2_2_3 = new QLabel(unnamed);
    textLabel5_2_2_3->setObjectName(QString::fromUtf8("textLabel5_2_2_3"));
    textLabel5_2_2_3->setEnabled(false);
    textLabel5_2_2_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout5->addWidget(textLabel5_2_2_3, 2, 0, 1, 1);

    sliderBufferTransparency = new QSlider(unnamed);
    sliderBufferTransparency->setObjectName(QString::fromUtf8("sliderBufferTransparency"));
    sliderBufferTransparency->setEnabled(false);
    sizePolicy2.setHeightForWidth(sliderBufferTransparency->sizePolicy().hasHeightForWidth());
    sliderBufferTransparency->setSizePolicy(sizePolicy2);
    sliderBufferTransparency->setMinimumSize(QSize(0, 0));
    sliderBufferTransparency->setMaximum(100);
    sliderBufferTransparency->setOrientation(Qt::Horizontal);
    sliderBufferTransparency->setTickInterval(100);

    gridLayout5->addWidget(sliderBufferTransparency, 2, 1, 1, 3);

    pbnDefaultBufferColor_2 = new QPushButton(unnamed);
    pbnDefaultBufferColor_2->setObjectName(QString::fromUtf8("pbnDefaultBufferColor_2"));

    gridLayout5->addWidget(pbnDefaultBufferColor_2, 1, 0, 1, 1);

    tabWidget2->addTab(unnamed, QString());
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    gridLayout7 = new QGridLayout(tab_3);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(9);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout7->addItem(spacerItem3, 3, 1, 1, 1);

    buttonGroup10 = new QGroupBox(tab_3);
    buttonGroup10->setObjectName(QString::fromUtf8("buttonGroup10"));
    gridLayout8 = new QGridLayout(buttonGroup10);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(9);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    radioOffsetUnitsMap = new QRadioButton(buttonGroup10);
    radioOffsetUnitsMap->setObjectName(QString::fromUtf8("radioOffsetUnitsMap"));

    gridLayout8->addWidget(radioOffsetUnitsMap, 0, 1, 1, 1);

    radioOffsetUnitsPoints = new QRadioButton(buttonGroup10);
    radioOffsetUnitsPoints->setObjectName(QString::fromUtf8("radioOffsetUnitsPoints"));

    gridLayout8->addWidget(radioOffsetUnitsPoints, 0, 0, 1, 1);


    gridLayout7->addWidget(buttonGroup10, 2, 0, 1, 2);

    spinXOffset = new QSpinBox(tab_3);
    spinXOffset->setObjectName(QString::fromUtf8("spinXOffset"));
    spinXOffset->setMinimum(-99);

    gridLayout7->addWidget(spinXOffset, 0, 1, 1, 1);

    spinYOffset = new QSpinBox(tab_3);
    spinYOffset->setObjectName(QString::fromUtf8("spinYOffset"));
    spinYOffset->setMinimum(-99);

    gridLayout7->addWidget(spinYOffset, 1, 1, 1, 1);

    textLabel1_2_3_2 = new QLabel(tab_3);
    textLabel1_2_3_2->setObjectName(QString::fromUtf8("textLabel1_2_3_2"));

    gridLayout7->addWidget(textLabel1_2_3_2, 0, 0, 1, 1);

    textLabel1_2_2_2_3 = new QLabel(tab_3);
    textLabel1_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_3"));

    gridLayout7->addWidget(textLabel1_2_2_2_3, 1, 0, 1, 1);

    tabWidget2->addTab(tab_3, QString());
    tab4 = new QWidget();
    tab4->setObjectName(QString::fromUtf8("tab4"));
    gridLayout9 = new QGridLayout(tab4);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(9);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    textLabel4_2_4 = new QLabel(tab4);
    textLabel4_2_4->setObjectName(QString::fromUtf8("textLabel4_2_4"));
    QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy6.setHorizontalStretch(0);
    sizePolicy6.setVerticalStretch(0);
    sizePolicy6.setHeightForWidth(textLabel4_2_4->sizePolicy().hasHeightForWidth());
    textLabel4_2_4->setSizePolicy(sizePolicy6);

    gridLayout9->addWidget(textLabel4_2_4, 3, 0, 1, 2);

    textLabel4_3_2 = new QLabel(tab4);
    textLabel4_3_2->setObjectName(QString::fromUtf8("textLabel4_3_2"));
    sizePolicy6.setHeightForWidth(textLabel4_3_2->sizePolicy().hasHeightForWidth());
    textLabel4_3_2->setSizePolicy(sizePolicy6);

    gridLayout9->addWidget(textLabel4_3_2, 5, 0, 1, 1);

    textLabel4 = new QLabel(tab4);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    sizePolicy6.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy6);

    gridLayout9->addWidget(textLabel4, 1, 0, 2, 1);

    cboFontTransparencyField = new QComboBox(tab4);
    cboFontTransparencyField->setObjectName(QString::fromUtf8("cboFontTransparencyField"));
    cboFontTransparencyField->setMinimumSize(QSize(0, 20));

    gridLayout9->addWidget(cboFontTransparencyField, 6, 3, 1, 1);

    textLabel4_3 = new QLabel(tab4);
    textLabel4_3->setObjectName(QString::fromUtf8("textLabel4_3"));
    sizePolicy6.setHeightForWidth(textLabel4_3->sizePolicy().hasHeightForWidth());
    textLabel4_3->setSizePolicy(sizePolicy6);

    gridLayout9->addWidget(textLabel4_3, 4, 0, 1, 2);

    cboUnderlineField = new QComboBox(tab4);
    cboUnderlineField->setObjectName(QString::fromUtf8("cboUnderlineField"));
    cboUnderlineField->setMinimumSize(QSize(0, 20));

    gridLayout9->addWidget(cboUnderlineField, 4, 3, 1, 1);

    cboFontSizeField = new QComboBox(tab4);
    cboFontSizeField->setObjectName(QString::fromUtf8("cboFontSizeField"));
    cboFontSizeField->setMinimumSize(QSize(0, 20));

    gridLayout9->addWidget(cboFontSizeField, 5, 3, 1, 1);

    cboItalicField = new QComboBox(tab4);
    cboItalicField->setObjectName(QString::fromUtf8("cboItalicField"));
    cboItalicField->setMinimumSize(QSize(0, 20));

    gridLayout9->addWidget(cboItalicField, 2, 3, 2, 1);

    textLabel4_3_2_3 = new QLabel(tab4);
    textLabel4_3_2_3->setObjectName(QString::fromUtf8("textLabel4_3_2_3"));
    sizePolicy6.setHeightForWidth(textLabel4_3_2_3->sizePolicy().hasHeightForWidth());
    textLabel4_3_2_3->setSizePolicy(sizePolicy6);

    gridLayout9->addWidget(textLabel4_3_2_3, 6, 0, 1, 2);

    cboBoldField = new QComboBox(tab4);
    cboBoldField->setObjectName(QString::fromUtf8("cboBoldField"));
    cboBoldField->setMinimumSize(QSize(0, 20));

    gridLayout9->addWidget(cboBoldField, 1, 3, 1, 1);

    lblFont = new QLabel(tab4);
    lblFont->setObjectName(QString::fromUtf8("lblFont"));
    sizePolicy6.setHeightForWidth(lblFont->sizePolicy().hasHeightForWidth());
    lblFont->setSizePolicy(sizePolicy6);

    gridLayout9->addWidget(lblFont, 0, 0, 1, 2);

    cboFontField = new QComboBox(tab4);
    cboFontField->setObjectName(QString::fromUtf8("cboFontField"));
    cboFontField->setMinimumSize(QSize(0, 20));

    gridLayout9->addWidget(cboFontField, 0, 3, 1, 1);

    spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout9->addItem(spacerItem4, 7, 2, 1, 1);

    spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout9->addItem(spacerItem5, 7, 3, 1, 1);

    tabWidget2->addTab(tab4, QString());
    tab_4 = new QWidget();
    tab_4->setObjectName(QString::fromUtf8("tab_4"));
    gridLayout10 = new QGridLayout(tab_4);
    gridLayout10->setSpacing(6);
    gridLayout10->setMargin(9);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem6, 2, 1, 1, 1);

    spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem7, 2, 0, 1, 1);

    textLabel1_2_2_2_2 = new QLabel(tab_4);
    textLabel1_2_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2"));
    sizePolicy6.setHeightForWidth(textLabel1_2_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2->setSizePolicy(sizePolicy6);

    gridLayout10->addWidget(textLabel1_2_2_2_2, 1, 0, 1, 1);

    cboAngleField = new QComboBox(tab_4);
    cboAngleField->setObjectName(QString::fromUtf8("cboAngleField"));

    gridLayout10->addWidget(cboAngleField, 1, 1, 1, 1);

    cboAlignmentField = new QComboBox(tab_4);
    cboAlignmentField->setObjectName(QString::fromUtf8("cboAlignmentField"));

    gridLayout10->addWidget(cboAlignmentField, 0, 1, 1, 1);

    textLabel1_2_2_2_2_3 = new QLabel(tab_4);
    textLabel1_2_2_2_2_3->setObjectName(QString::fromUtf8("textLabel1_2_2_2_2_3"));
    sizePolicy6.setHeightForWidth(textLabel1_2_2_2_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2_2_3->setSizePolicy(sizePolicy6);

    gridLayout10->addWidget(textLabel1_2_2_2_2_3, 0, 0, 1, 1);

    tabWidget2->addTab(tab_4, QString());
    tab5 = new QWidget();
    tab5->setObjectName(QString::fromUtf8("tab5"));
    gridLayout11 = new QGridLayout(tab5);
    gridLayout11->setSpacing(6);
    gridLayout11->setMargin(9);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    spacerItem8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout11->addItem(spacerItem8, 2, 1, 1, 1);

    spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout11->addItem(spacerItem9, 2, 0, 1, 1);

    cboBufferSizeField = new QComboBox(tab5);
    cboBufferSizeField->setObjectName(QString::fromUtf8("cboBufferSizeField"));

    gridLayout11->addWidget(cboBufferSizeField, 1, 1, 1, 1);

    textLabel1_3_2_2_2 = new QLabel(tab5);
    textLabel1_3_2_2_2->setObjectName(QString::fromUtf8("textLabel1_3_2_2_2"));
    textLabel1_3_2_2_2->setEnabled(false);
    sizePolicy6.setHeightForWidth(textLabel1_3_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_3_2_2_2->setSizePolicy(sizePolicy6);
    textLabel1_3_2_2_2->setMinimumSize(QSize(70, 0));

    gridLayout11->addWidget(textLabel1_3_2_2_2, 0, 0, 1, 1);

    cboBufferTransparencyField = new QComboBox(tab5);
    cboBufferTransparencyField->setObjectName(QString::fromUtf8("cboBufferTransparencyField"));
    cboBufferTransparencyField->setEnabled(false);

    gridLayout11->addWidget(cboBufferTransparencyField, 0, 1, 1, 1);

    textLabel4_3_2_2_2 = new QLabel(tab5);
    textLabel4_3_2_2_2->setObjectName(QString::fromUtf8("textLabel4_3_2_2_2"));
    sizePolicy6.setHeightForWidth(textLabel4_3_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel4_3_2_2_2->setSizePolicy(sizePolicy6);

    gridLayout11->addWidget(textLabel4_3_2_2_2, 1, 0, 1, 1);

    tabWidget2->addTab(tab5, QString());
    tab_5 = new QWidget();
    tab_5->setObjectName(QString::fromUtf8("tab_5"));
    gridLayout12 = new QGridLayout(tab_5);
    gridLayout12->setSpacing(6);
    gridLayout12->setMargin(9);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout12->addItem(spacerItem10, 4, 0, 1, 1);

    spacerItem11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout12->addItem(spacerItem11, 4, 1, 1, 1);

    textLabel1_2 = new QLabel(tab_5);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    sizePolicy6.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy6);

    gridLayout12->addWidget(textLabel1_2, 0, 0, 1, 1);

    cboYCoordinateField = new QComboBox(tab_5);
    cboYCoordinateField->setObjectName(QString::fromUtf8("cboYCoordinateField"));

    gridLayout12->addWidget(cboYCoordinateField, 1, 1, 1, 1);

    textLabel1_2_3 = new QLabel(tab_5);
    textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));
    sizePolicy6.setHeightForWidth(textLabel1_2_3->sizePolicy().hasHeightForWidth());
    textLabel1_2_3->setSizePolicy(sizePolicy6);

    gridLayout12->addWidget(textLabel1_2_3, 2, 0, 1, 1);

    cboYOffsetField = new QComboBox(tab_5);
    cboYOffsetField->setObjectName(QString::fromUtf8("cboYOffsetField"));

    gridLayout12->addWidget(cboYOffsetField, 3, 1, 1, 1);

    cboXOffsetField = new QComboBox(tab_5);
    cboXOffsetField->setObjectName(QString::fromUtf8("cboXOffsetField"));

    gridLayout12->addWidget(cboXOffsetField, 2, 1, 1, 1);

    textLabel1_2_2 = new QLabel(tab_5);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
    sizePolicy6.setHeightForWidth(textLabel1_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2->setSizePolicy(sizePolicy6);

    gridLayout12->addWidget(textLabel1_2_2, 1, 0, 1, 1);

    textLabel1_2_2_2 = new QLabel(tab_5);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
    sizePolicy6.setHeightForWidth(textLabel1_2_2_2->sizePolicy().hasHeightForWidth());
    textLabel1_2_2_2->setSizePolicy(sizePolicy6);

    gridLayout12->addWidget(textLabel1_2_2_2, 3, 0, 1, 1);

    cboXCoordinateField = new QComboBox(tab_5);
    cboXCoordinateField->setObjectName(QString::fromUtf8("cboXCoordinateField"));

    gridLayout12->addWidget(cboXCoordinateField, 0, 1, 1, 1);

    tabWidget2->addTab(tab_5, QString());

    gridLayout->addWidget(tabWidget2, 1, 0, 1, 1);

    groupBox5 = new Q3GroupBox(QgsLabelDialogBase);
    groupBox5->setObjectName(QString::fromUtf8("groupBox5"));
    QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
    sizePolicy7.setHorizontalStretch(0);
    sizePolicy7.setVerticalStretch(0);
    sizePolicy7.setHeightForWidth(groupBox5->sizePolicy().hasHeightForWidth());
    groupBox5->setSizePolicy(sizePolicy7);
    groupBox5->setOrientation(Qt::Vertical);
    groupBox5->setColumnLayout(0, Qt::Vertical);
    groupBox5->layout()->setSpacing(6);
    groupBox5->layout()->setMargin(10);
    gridLayout13 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox5->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout13);
    gridLayout13->setAlignment(Qt::AlignTop);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    lblSample = new QLabel(groupBox5);
    lblSample->setObjectName(QString::fromUtf8("lblSample"));

    gridLayout13->addWidget(lblSample, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox5, 2, 0, 1, 1);

    groupBox = new QGroupBox(QgsLabelDialogBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setMinimumSize(QSize(16, 90));
    gridLayout14 = new QGridLayout(groupBox);
    gridLayout14->setSpacing(6);
    gridLayout14->setMargin(9);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    textLabel5 = new QLabel(groupBox);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

    gridLayout14->addWidget(textLabel5, 0, 0, 1, 2);

    cboLabelField = new QComboBox(groupBox);
    cboLabelField->setObjectName(QString::fromUtf8("cboLabelField"));
    QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy8.setHorizontalStretch(1);
    sizePolicy8.setVerticalStretch(0);
    sizePolicy8.setHeightForWidth(cboLabelField->sizePolicy().hasHeightForWidth());
    cboLabelField->setSizePolicy(sizePolicy8);
    cboLabelField->setMinimumSize(QSize(0, 20));

    gridLayout14->addWidget(cboLabelField, 0, 2, 1, 1);

    leDefaultLabel = new QLineEdit(groupBox);
    leDefaultLabel->setObjectName(QString::fromUtf8("leDefaultLabel"));
    QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
    sizePolicy9.setHorizontalStretch(2);
    sizePolicy9.setVerticalStretch(0);
    sizePolicy9.setHeightForWidth(leDefaultLabel->sizePolicy().hasHeightForWidth());
    leDefaultLabel->setSizePolicy(sizePolicy9);
    leDefaultLabel->setMinimumSize(QSize(0, 20));

    gridLayout14->addWidget(leDefaultLabel, 1, 1, 1, 2);

    textLabel1 = new QLabel(groupBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout14->addWidget(textLabel1, 1, 0, 1, 1);


    gridLayout->addWidget(groupBox, 0, 0, 1, 1);

    textLabel4_2_4->setBuddy(cboItalicField);
    textLabel4_3_2->setBuddy(cboFontSizeField);
    textLabel4->setBuddy(cboBoldField);
    textLabel4_3->setBuddy(cboUnderlineField);
    textLabel4_3_2_3->setBuddy(cboFontSizeField);
    lblFont->setBuddy(cboFontField);
    textLabel1_3_2_2_2->setBuddy(cboBufferTransparencyField);
    textLabel4_3_2_2_2->setBuddy(cboBufferSizeField);
    QWidget::setTabOrder(cboLabelField, leDefaultLabel);
    QWidget::setTabOrder(leDefaultLabel, tabWidget2);
    QWidget::setTabOrder(tabWidget2, btnDefaultFont);
    QWidget::setTabOrder(btnDefaultFont, pbnDefaultFontColor);
    QWidget::setTabOrder(pbnDefaultFontColor, sliderFontTransparency);
    QWidget::setTabOrder(sliderFontTransparency, spinFontTransparency);
    QWidget::setTabOrder(spinFontTransparency, radioFontSizeUnitsPoints);
    QWidget::setTabOrder(radioFontSizeUnitsPoints, radioFontSizeUnitsMap);
    QWidget::setTabOrder(radioFontSizeUnitsMap, sliderAngle);
    QWidget::setTabOrder(sliderAngle, spinAngle);
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
    QWidget::setTabOrder(spinBufferSize, sliderBufferTransparency);
    QWidget::setTabOrder(sliderBufferTransparency, spinBufferTransparency);
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

    tabWidget2->setCurrentIndex(3);


    QMetaObject::connectSlotsByName(QgsLabelDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLabelDialogBase)
    {
    QgsLabelDialogBase->setWindowTitle(QApplication::translate("QgsLabelDialogBase", "Form1", 0, QApplication::UnicodeUTF8));
    groupBox_3->setTitle(QApplication::translate("QgsLabelDialogBase", "Font size units", 0, QApplication::UnicodeUTF8));
    radioFontSizeUnitsMap->setText(QApplication::translate("QgsLabelDialogBase", "Map units", 0, QApplication::UnicodeUTF8));
    radioFontSizeUnitsPoints->setText(QApplication::translate("QgsLabelDialogBase", "Points", 0, QApplication::UnicodeUTF8));
    textLabel5_2_2_3_2->setText(QApplication::translate("QgsLabelDialogBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    btnDefaultFont->setText(QApplication::translate("QgsLabelDialogBase", "Font", 0, QApplication::UnicodeUTF8));
    pbnDefaultFontColor->setText(QApplication::translate("QgsLabelDialogBase", "Colour", 0, QApplication::UnicodeUTF8));
    spinFontTransparency->setSuffix(QApplication::translate("QgsLabelDialogBase", "%", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab1), QApplication::translate("QgsLabelDialogBase", "Font Style", 0, QApplication::UnicodeUTF8));
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
    spinAngle->setSuffix(QApplication::translate("QgsLabelDialogBase", "\302\260", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Angle (deg):", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab_2), QApplication::translate("QgsLabelDialogBase", "Font Alignment", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("QgsLabelDialogBase", "Buffer size units", 0, QApplication::UnicodeUTF8));
    radioBufferUnitsMap->setText(QApplication::translate("QgsLabelDialogBase", "Size is in map units", 0, QApplication::UnicodeUTF8));
    radioBufferUnitsPoints->setText(QApplication::translate("QgsLabelDialogBase", "Size is in points", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Size:", 0, QApplication::UnicodeUTF8));
    chkUseBuffer->setText(QApplication::translate("QgsLabelDialogBase", "Buffer Labels?", 0, QApplication::UnicodeUTF8));
    spinBufferTransparency->setSuffix(QApplication::translate("QgsLabelDialogBase", "%", 0, QApplication::UnicodeUTF8));
    textLabel5_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    pbnDefaultBufferColor_2->setText(QApplication::translate("QgsLabelDialogBase", "Colour", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(unnamed), QApplication::translate("QgsLabelDialogBase", "Buffer", 0, QApplication::UnicodeUTF8));
    buttonGroup10->setTitle(QApplication::translate("QgsLabelDialogBase", "Offset units", 0, QApplication::UnicodeUTF8));
    radioOffsetUnitsMap->setText(QApplication::translate("QgsLabelDialogBase", "Map units", 0, QApplication::UnicodeUTF8));
    radioOffsetUnitsPoints->setText(QApplication::translate("QgsLabelDialogBase", "Points", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3_2->setText(QApplication::translate("QgsLabelDialogBase", "X Offset (pts):", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Y Offset (pts):", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab_3), QApplication::translate("QgsLabelDialogBase", "Position", 0, QApplication::UnicodeUTF8));
    textLabel4_2_4->setText(QApplication::translate("QgsLabelDialogBase", "&Italic:", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2->setText(QApplication::translate("QgsLabelDialogBase", "&Size:", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsLabelDialogBase", "&Bold:", 0, QApplication::UnicodeUTF8));
    textLabel4_3->setText(QApplication::translate("QgsLabelDialogBase", "&Underline:", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    lblFont->setText(QApplication::translate("QgsLabelDialogBase", "&Font family:", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab4), QApplication::translate("QgsLabelDialogBase", "Data Defined Style", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Angle (deg):", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2_2_3->setText(QApplication::translate("QgsLabelDialogBase", "Placement:", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab_4), QApplication::translate("QgsLabelDialogBase", "Data Defined Alignment", 0, QApplication::UnicodeUTF8));
    textLabel1_3_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Transparency:", 0, QApplication::UnicodeUTF8));
    textLabel4_3_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Size:", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab5), QApplication::translate("QgsLabelDialogBase", "Data Defined Buffer", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsLabelDialogBase", "X Coordinate:", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3->setText(QApplication::translate("QgsLabelDialogBase", "X Offset (pts):", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Y Coordinate:", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("QgsLabelDialogBase", "Y Offset (pts):", 0, QApplication::UnicodeUTF8));
    tabWidget2->setTabText(tabWidget2->indexOf(tab_5), QApplication::translate("QgsLabelDialogBase", "Data Defined Position", 0, QApplication::UnicodeUTF8));
    groupBox5->setTitle(QApplication::translate("QgsLabelDialogBase", "Preview:", 0, QApplication::UnicodeUTF8));
    lblSample->setText(QApplication::translate("QgsLabelDialogBase", "QGIS Rocks!", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsLabelDialogBase", "Source", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsLabelDialogBase", "Field containing label:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsLabelDialogBase", "Default label:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLabelDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLabelDialogBase: public Ui_QgsLabelDialogBase {};
} // namespace Ui

#endif // UI_QGSLABELDIALOGBASE_H
