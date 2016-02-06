/********************************************************************************
** Form generated from reading ui file 'qgsoptionsbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSOPTIONSBASE_H
#define UI_QGSOPTIONSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qgscolorbutton.h"

class Ui_QgsOptionsBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox_11;
    QVBoxLayout *vboxLayout1;
    QCheckBox *chbAskToSaveProjectChanges;
    QSpacerItem *spacerItem;
    QWidget *tabAppearance;
    QVBoxLayout *vboxLayout2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QCheckBox *cbxHideSplash;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *textLabel1_5;
    QLabel *textLabel1_4;
    QComboBox *cmbTheme;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_9;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1_9;
    QgsColorButton *pbnSelectionColour;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QgsColorButton *pbnCanvasColor;
    QSpacerItem *spacerItem3;
    QGroupBox *groupBox_3;
    QVBoxLayout *vboxLayout3;
    QCheckBox *capitaliseCheckBox;
    QSpacerItem *spacerItem4;
    QWidget *tabRendering;
    QVBoxLayout *vboxLayout4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout3;
    QLabel *textLabel2_2;
    QSpinBox *spinBoxUpdateThreshold;
    QLabel *textLabel1_6;
    QLabel *textLabel3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout4;
    QCheckBox *chkAddedVisibility;
    QGroupBox *groupBox_8;
    QVBoxLayout *vboxLayout5;
    QCheckBox *chkAntiAliasing;
    QCheckBox *chkUseQPixmap;
    QCheckBox *cbxSplitterRedraw;
    QSpacerItem *spacerItem5;
    QWidget *tabMap;
    QGridLayout *gridLayout5;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout6;
    QComboBox *cmbWheelAction;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *spinZoomFactor;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout7;
    QSpacerItem *spacerItem6;
    QgsColorButton *pbnMeasureColour;
    QComboBox *cmbEllipsoid;
    QLabel *textLabel1_10;
    QLabel *textLabel1_8;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout8;
    QLabel *textLabel2;
    QLabel *textLabel1_3;
    QDoubleSpinBox *spinBoxIdentifyValue;
    QSpacerItem *spacerItem7;
    QWidget *tabProjection;
    QGridLayout *gridLayout9;
    QSpacerItem *spacerItem8;
    QPushButton *pbnSelectProjection;
    QTextBrowser *txtGlobalWKT;
    QGroupBox *grpProjectionBehaviour;
    QVBoxLayout *vboxLayout6;
    QRadioButton *radPromptForProjection;
    QRadioButton *radUseProjectProjection;
    QRadioButton *radUseGlobalProjection;
    QWidget *tabHelpBrowser;
    QGridLayout *gridLayout10;
    QSpacerItem *spacerItem9;
    QLabel *textLabel1_2;
    QPushButton *btnFindBrowser;
    QComboBox *cmbBrowser;
    QLabel *textLabel1;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOptionsBase)
    {
    if (QgsOptionsBase->objectName().isEmpty())
        QgsOptionsBase->setObjectName(QString::fromUtf8("QgsOptionsBase"));
    QgsOptionsBase->resize(590, 428);
    QgsOptionsBase->setWindowIcon(QIcon());
    QgsOptionsBase->setSizeGripEnabled(true);
    QgsOptionsBase->setModal(true);
    gridLayout = new QGridLayout(QgsOptionsBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(QgsOptionsBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabGeneral = new QWidget();
    tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
    vboxLayout = new QVBoxLayout(tabGeneral);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox_11 = new QGroupBox(tabGeneral);
    groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
    vboxLayout1 = new QVBoxLayout(groupBox_11);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(9);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    chbAskToSaveProjectChanges = new QCheckBox(groupBox_11);
    chbAskToSaveProjectChanges->setObjectName(QString::fromUtf8("chbAskToSaveProjectChanges"));

    vboxLayout1->addWidget(chbAskToSaveProjectChanges);


    vboxLayout->addWidget(groupBox_11);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    tabWidget->addTab(tabGeneral, QString());
    tabAppearance = new QWidget();
    tabAppearance->setObjectName(QString::fromUtf8("tabAppearance"));
    vboxLayout2 = new QVBoxLayout(tabAppearance);
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(9);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    groupBox = new QGroupBox(tabAppearance);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    cbxHideSplash = new QCheckBox(groupBox);
    cbxHideSplash->setObjectName(QString::fromUtf8("cbxHideSplash"));

    gridLayout1->addWidget(cbxHideSplash, 0, 0, 1, 1);


    vboxLayout2->addWidget(groupBox);

    groupBox_2 = new QGroupBox(tabAppearance);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout2 = new QGridLayout(groupBox_2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel1_5 = new QLabel(groupBox_2);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
    textLabel1_5->setAlignment(Qt::AlignVCenter);

    gridLayout2->addWidget(textLabel1_5, 1, 0, 1, 3);

    textLabel1_4 = new QLabel(groupBox_2);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel1_4->sizePolicy().hasHeightForWidth());
    textLabel1_4->setSizePolicy(sizePolicy);

    gridLayout2->addWidget(textLabel1_4, 0, 0, 1, 1);

    cmbTheme = new QComboBox(groupBox_2);
    cmbTheme->setObjectName(QString::fromUtf8("cmbTheme"));
    cmbTheme->setDuplicatesEnabled(false);

    gridLayout2->addWidget(cmbTheme, 0, 1, 1, 1);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem1, 0, 2, 1, 1);


    vboxLayout2->addWidget(groupBox_2);

    groupBox_9 = new QGroupBox(tabAppearance);
    groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
    hboxLayout = new QHBoxLayout(groupBox_9);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(9);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel1_9 = new QLabel(groupBox_9);
    textLabel1_9->setObjectName(QString::fromUtf8("textLabel1_9"));

    hboxLayout->addWidget(textLabel1_9);

    pbnSelectionColour = new QgsColorButton(groupBox_9);
    pbnSelectionColour->setObjectName(QString::fromUtf8("pbnSelectionColour"));
    pbnSelectionColour->setMinimumSize(QSize(100, 0));

    hboxLayout->addWidget(pbnSelectionColour);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem2);

    label = new QLabel(groupBox_9);
    label->setObjectName(QString::fromUtf8("label"));

    hboxLayout->addWidget(label);

    pbnCanvasColor = new QgsColorButton(groupBox_9);
    pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
    pbnCanvasColor->setMinimumSize(QSize(100, 0));

    hboxLayout->addWidget(pbnCanvasColor);

    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem3);


    vboxLayout2->addWidget(groupBox_9);

    groupBox_3 = new QGroupBox(tabAppearance);
    groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
    vboxLayout3 = new QVBoxLayout(groupBox_3);
    vboxLayout3->setSpacing(6);
    vboxLayout3->setMargin(9);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    capitaliseCheckBox = new QCheckBox(groupBox_3);
    capitaliseCheckBox->setObjectName(QString::fromUtf8("capitaliseCheckBox"));

    vboxLayout3->addWidget(capitaliseCheckBox);


    vboxLayout2->addWidget(groupBox_3);

    spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout2->addItem(spacerItem4);

    tabWidget->addTab(tabAppearance, QString());
    tabRendering = new QWidget();
    tabRendering->setObjectName(QString::fromUtf8("tabRendering"));
    vboxLayout4 = new QVBoxLayout(tabRendering);
    vboxLayout4->setSpacing(6);
    vboxLayout4->setMargin(9);
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    groupBox_5 = new QGroupBox(tabRendering);
    groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
    gridLayout3 = new QGridLayout(groupBox_5);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(9);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    textLabel2_2 = new QLabel(groupBox_5);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    gridLayout3->addWidget(textLabel2_2, 0, 2, 1, 1);

    spinBoxUpdateThreshold = new QSpinBox(groupBox_5);
    spinBoxUpdateThreshold->setObjectName(QString::fromUtf8("spinBoxUpdateThreshold"));
    spinBoxUpdateThreshold->setMaximum(1000000);
    spinBoxUpdateThreshold->setValue(1000);

    gridLayout3->addWidget(spinBoxUpdateThreshold, 0, 1, 1, 1);

    textLabel1_6 = new QLabel(groupBox_5);
    textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));

    gridLayout3->addWidget(textLabel1_6, 0, 0, 1, 1);

    textLabel3 = new QLabel(groupBox_5);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout3->addWidget(textLabel3, 1, 0, 1, 3);


    vboxLayout4->addWidget(groupBox_5);

    groupBox_4 = new QGroupBox(tabRendering);
    groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
    gridLayout4 = new QGridLayout(groupBox_4);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(9);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    chkAddedVisibility = new QCheckBox(groupBox_4);
    chkAddedVisibility->setObjectName(QString::fromUtf8("chkAddedVisibility"));

    gridLayout4->addWidget(chkAddedVisibility, 0, 0, 1, 1);


    vboxLayout4->addWidget(groupBox_4);

    groupBox_8 = new QGroupBox(tabRendering);
    groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
    vboxLayout5 = new QVBoxLayout(groupBox_8);
    vboxLayout5->setSpacing(6);
    vboxLayout5->setMargin(9);
    vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
    chkAntiAliasing = new QCheckBox(groupBox_8);
    chkAntiAliasing->setObjectName(QString::fromUtf8("chkAntiAliasing"));

    vboxLayout5->addWidget(chkAntiAliasing);

    chkUseQPixmap = new QCheckBox(groupBox_8);
    chkUseQPixmap->setObjectName(QString::fromUtf8("chkUseQPixmap"));

    vboxLayout5->addWidget(chkUseQPixmap);

    cbxSplitterRedraw = new QCheckBox(groupBox_8);
    cbxSplitterRedraw->setObjectName(QString::fromUtf8("cbxSplitterRedraw"));

    vboxLayout5->addWidget(cbxSplitterRedraw);


    vboxLayout4->addWidget(groupBox_8);

    spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout4->addItem(spacerItem5);

    tabWidget->addTab(tabRendering, QString());
    tabMap = new QWidget();
    tabMap->setObjectName(QString::fromUtf8("tabMap"));
    gridLayout5 = new QGridLayout(tabMap);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(9);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    groupBox_10 = new QGroupBox(tabMap);
    groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
    gridLayout6 = new QGridLayout(groupBox_10);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(9);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    cmbWheelAction = new QComboBox(groupBox_10);
    cmbWheelAction->setObjectName(QString::fromUtf8("cmbWheelAction"));

    gridLayout6->addWidget(cmbWheelAction, 0, 1, 1, 1);

    label_3 = new QLabel(groupBox_10);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout6->addWidget(label_3, 1, 0, 1, 1);

    label_2 = new QLabel(groupBox_10);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout6->addWidget(label_2, 0, 0, 1, 1);

    spinZoomFactor = new QDoubleSpinBox(groupBox_10);
    spinZoomFactor->setObjectName(QString::fromUtf8("spinZoomFactor"));
    spinZoomFactor->setDecimals(1);
    spinZoomFactor->setMinimum(1.1);
    spinZoomFactor->setValue(2);

    gridLayout6->addWidget(spinZoomFactor, 1, 1, 1, 1);


    gridLayout5->addWidget(groupBox_10, 2, 0, 1, 1);

    groupBox_6 = new QGroupBox(tabMap);
    groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
    gridLayout7 = new QGridLayout(groupBox_6);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(9);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    spacerItem6 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout7->addItem(spacerItem6, 1, 2, 1, 1);

    pbnMeasureColour = new QgsColorButton(groupBox_6);
    pbnMeasureColour->setObjectName(QString::fromUtf8("pbnMeasureColour"));
    pbnMeasureColour->setMinimumSize(QSize(100, 0));

    gridLayout7->addWidget(pbnMeasureColour, 1, 1, 1, 1);

    cmbEllipsoid = new QComboBox(groupBox_6);
    cmbEllipsoid->setObjectName(QString::fromUtf8("cmbEllipsoid"));

    gridLayout7->addWidget(cmbEllipsoid, 0, 1, 1, 2);

    textLabel1_10 = new QLabel(groupBox_6);
    textLabel1_10->setObjectName(QString::fromUtf8("textLabel1_10"));

    gridLayout7->addWidget(textLabel1_10, 1, 0, 1, 1);

    textLabel1_8 = new QLabel(groupBox_6);
    textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));

    gridLayout7->addWidget(textLabel1_8, 0, 0, 1, 1);


    gridLayout5->addWidget(groupBox_6, 1, 0, 1, 1);

    groupBox_7 = new QGroupBox(tabMap);
    groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
    gridLayout8 = new QGridLayout(groupBox_7);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(9);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    textLabel2 = new QLabel(groupBox_7);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    textLabel2->setWordWrap(true);

    gridLayout8->addWidget(textLabel2, 1, 0, 1, 2);

    textLabel1_3 = new QLabel(groupBox_7);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout8->addWidget(textLabel1_3, 0, 0, 1, 1);

    spinBoxIdentifyValue = new QDoubleSpinBox(groupBox_7);
    spinBoxIdentifyValue->setObjectName(QString::fromUtf8("spinBoxIdentifyValue"));
    spinBoxIdentifyValue->setMaximum(100);
    spinBoxIdentifyValue->setSingleStep(0.01);
    spinBoxIdentifyValue->setValue(5);

    gridLayout8->addWidget(spinBoxIdentifyValue, 0, 1, 1, 1);


    gridLayout5->addWidget(groupBox_7, 0, 0, 1, 1);

    spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout5->addItem(spacerItem7, 3, 0, 1, 1);

    tabWidget->addTab(tabMap, QString());
    tabProjection = new QWidget();
    tabProjection->setObjectName(QString::fromUtf8("tabProjection"));
    gridLayout9 = new QGridLayout(tabProjection);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(9);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    spacerItem8 = new QSpacerItem(51, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout9->addItem(spacerItem8, 3, 0, 1, 1);

    pbnSelectProjection = new QPushButton(tabProjection);
    pbnSelectProjection->setObjectName(QString::fromUtf8("pbnSelectProjection"));

    gridLayout9->addWidget(pbnSelectProjection, 2, 0, 1, 1);

    txtGlobalWKT = new QTextBrowser(tabProjection);
    txtGlobalWKT->setObjectName(QString::fromUtf8("txtGlobalWKT"));

    gridLayout9->addWidget(txtGlobalWKT, 1, 0, 1, 1);

    grpProjectionBehaviour = new QGroupBox(tabProjection);
    grpProjectionBehaviour->setObjectName(QString::fromUtf8("grpProjectionBehaviour"));
    vboxLayout6 = new QVBoxLayout(grpProjectionBehaviour);
    vboxLayout6->setSpacing(6);
    vboxLayout6->setMargin(9);
    vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
    radPromptForProjection = new QRadioButton(grpProjectionBehaviour);
    radPromptForProjection->setObjectName(QString::fromUtf8("radPromptForProjection"));

    vboxLayout6->addWidget(radPromptForProjection);

    radUseProjectProjection = new QRadioButton(grpProjectionBehaviour);
    radUseProjectProjection->setObjectName(QString::fromUtf8("radUseProjectProjection"));

    vboxLayout6->addWidget(radUseProjectProjection);

    radUseGlobalProjection = new QRadioButton(grpProjectionBehaviour);
    radUseGlobalProjection->setObjectName(QString::fromUtf8("radUseGlobalProjection"));

    vboxLayout6->addWidget(radUseGlobalProjection);


    gridLayout9->addWidget(grpProjectionBehaviour, 0, 0, 1, 1);

    tabWidget->addTab(tabProjection, QString());
    tabHelpBrowser = new QWidget();
    tabHelpBrowser->setObjectName(QString::fromUtf8("tabHelpBrowser"));
    gridLayout10 = new QGridLayout(tabHelpBrowser);
    gridLayout10->setSpacing(6);
    gridLayout10->setMargin(9);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem9, 2, 0, 1, 2);

    textLabel1_2 = new QLabel(tabHelpBrowser);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setWordWrap(true);

    gridLayout10->addWidget(textLabel1_2, 1, 0, 1, 3);

    btnFindBrowser = new QPushButton(tabHelpBrowser);
    btnFindBrowser->setObjectName(QString::fromUtf8("btnFindBrowser"));
    btnFindBrowser->setMaximumSize(QSize(60, 32767));

    gridLayout10->addWidget(btnFindBrowser, 0, 2, 1, 1);

    cmbBrowser = new QComboBox(tabHelpBrowser);
    cmbBrowser->setObjectName(QString::fromUtf8("cmbBrowser"));
    cmbBrowser->setEditable(true);

    gridLayout10->addWidget(cmbBrowser, 0, 1, 1, 1);

    textLabel1 = new QLabel(tabHelpBrowser);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout10->addWidget(textLabel1, 0, 0, 1, 1);

    tabWidget->addTab(tabHelpBrowser, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsOptionsBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    textLabel1_4->setBuddy(cmbTheme);
    textLabel1_9->setBuddy(pbnMeasureColour);
    label->setBuddy(pbnCanvasColor);
    textLabel1_6->setBuddy(spinBoxUpdateThreshold);
    textLabel1_10->setBuddy(cmbEllipsoid);
    textLabel1_8->setBuddy(cmbEllipsoid);
    textLabel1_3->setBuddy(spinBoxIdentifyValue);
    textLabel1->setBuddy(cmbBrowser);
    QWidget::setTabOrder(tabWidget, btnFindBrowser);
    QWidget::setTabOrder(btnFindBrowser, cbxHideSplash);
    QWidget::setTabOrder(cbxHideSplash, cmbTheme);
    QWidget::setTabOrder(cmbTheme, pbnSelectionColour);
    QWidget::setTabOrder(pbnSelectionColour, pbnCanvasColor);
    QWidget::setTabOrder(pbnCanvasColor, spinBoxUpdateThreshold);
    QWidget::setTabOrder(spinBoxUpdateThreshold, chkAddedVisibility);
    QWidget::setTabOrder(chkAddedVisibility, chkAntiAliasing);
    QWidget::setTabOrder(chkAntiAliasing, cmbEllipsoid);
    QWidget::setTabOrder(cmbEllipsoid, radPromptForProjection);
    QWidget::setTabOrder(radPromptForProjection, radUseProjectProjection);
    QWidget::setTabOrder(radUseProjectProjection, radUseGlobalProjection);
    QWidget::setTabOrder(radUseGlobalProjection, txtGlobalWKT);
    QWidget::setTabOrder(txtGlobalWKT, pbnSelectProjection);
    QWidget::setTabOrder(pbnSelectProjection, cmbBrowser);

    retranslateUi(QgsOptionsBase);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsOptionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOptionsBase)
    {
    QgsOptionsBase->setWindowTitle(QApplication::translate("QgsOptionsBase", "QGIS Options", 0, QApplication::UnicodeUTF8));
    groupBox_11->setTitle(QApplication::translate("QgsOptionsBase", "General", 0, QApplication::UnicodeUTF8));
    chbAskToSaveProjectChanges->setText(QApplication::translate("QgsOptionsBase", "Ask to save project changes when required", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("QgsOptionsBase", "&General", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsOptionsBase", "&Splash screen", 0, QApplication::UnicodeUTF8));
    cbxHideSplash->setText(QApplication::translate("QgsOptionsBase", "Hide splash screen at startup", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsOptionsBase", "&Icon Theme", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("QgsOptionsBase", "<b>Note: </b>Theme changes take effect the next time QGIS is started", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("QgsOptionsBase", "Theme", 0, QApplication::UnicodeUTF8));
    cmbTheme->clear();
    cmbTheme->insertItems(0, QStringList()
     << QString()
    );
    groupBox_9->setTitle(QApplication::translate("QgsOptionsBase", "Default Map Appearance (Overridden by project properties)", 0, QApplication::UnicodeUTF8));
    textLabel1_9->setText(QApplication::translate("QgsOptionsBase", "Selection Color:", 0, QApplication::UnicodeUTF8));
    pbnSelectionColour->setText(QString());
    label->setText(QApplication::translate("QgsOptionsBase", "Background Color:", 0, QApplication::UnicodeUTF8));
    pbnCanvasColor->setText(QString());
    groupBox_3->setTitle(QApplication::translate("QgsOptionsBase", "Appearance", 0, QApplication::UnicodeUTF8));
    capitaliseCheckBox->setText(QApplication::translate("QgsOptionsBase", "Capitalise layer name", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabAppearance), QApplication::translate("QgsOptionsBase", "&Appearance", 0, QApplication::UnicodeUTF8));
    groupBox_5->setTitle(QApplication::translate("QgsOptionsBase", "&Update during drawing", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsOptionsBase", "features", 0, QApplication::UnicodeUTF8));
    spinBoxUpdateThreshold->setToolTip(QApplication::translate("QgsOptionsBase", "Map display will be updated (drawn) after this many features have been read from the data source", 0, QApplication::UnicodeUTF8));
    textLabel1_6->setText(QApplication::translate("QgsOptionsBase", "Update display after reading", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsOptionsBase", "(Set to 0 to not update the display until all features have been read)", 0, QApplication::UnicodeUTF8));
    groupBox_4->setTitle(QApplication::translate("QgsOptionsBase", "Initial Visibility", 0, QApplication::UnicodeUTF8));
    chkAddedVisibility->setText(QApplication::translate("QgsOptionsBase", "By default new la&yers added to the map should be displayed", 0, QApplication::UnicodeUTF8));
    groupBox_8->setTitle(QApplication::translate("QgsOptionsBase", "Rendering", 0, QApplication::UnicodeUTF8));
    chkAntiAliasing->setText(QApplication::translate("QgsOptionsBase", "Make lines appear less jagged at the expense of some drawing performance", 0, QApplication::UnicodeUTF8));
    chkUseQPixmap->setToolTip(QApplication::translate("QgsOptionsBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Selecting this will unselect the 'make lines less' jagged toggle</p></body></html>", 0, QApplication::UnicodeUTF8));
    chkUseQPixmap->setText(QApplication::translate("QgsOptionsBase", "Fix problems with incorrectly filled polygons", 0, QApplication::UnicodeUTF8));
    cbxSplitterRedraw->setText(QApplication::translate("QgsOptionsBase", "Continuously redraw the map when dragging the legend/map divider", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabRendering), QApplication::translate("QgsOptionsBase", "&Rendering", 0, QApplication::UnicodeUTF8));
    groupBox_10->setTitle(QApplication::translate("QgsOptionsBase", "Panning and zooming", 0, QApplication::UnicodeUTF8));
    cmbWheelAction->clear();
    cmbWheelAction->insertItems(0, QStringList()
     << QApplication::translate("QgsOptionsBase", "Zoom", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "Zoom and recenter", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "Nothing", 0, QApplication::UnicodeUTF8)
    );
    label_3->setText(QApplication::translate("QgsOptionsBase", "Zoom factor:", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QgsOptionsBase", "Mouse wheel action:", 0, QApplication::UnicodeUTF8));
    groupBox_6->setTitle(QApplication::translate("QgsOptionsBase", "Measure tool", 0, QApplication::UnicodeUTF8));
    pbnMeasureColour->setText(QString());
    textLabel1_10->setText(QApplication::translate("QgsOptionsBase", "Rubberband color:", 0, QApplication::UnicodeUTF8));
    textLabel1_8->setText(QApplication::translate("QgsOptionsBase", "Ellipsoid for distance calculations:", 0, QApplication::UnicodeUTF8));
    groupBox_7->setTitle(QApplication::translate("QgsOptionsBase", "Search radius", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsOptionsBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Note:</span> Specify the search radius as a percentage of the map width.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsOptionsBase", "Search Radius for Identifying Features", 0, QApplication::UnicodeUTF8));
    spinBoxIdentifyValue->setSuffix(QApplication::translate("QgsOptionsBase", "%", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabMap), QApplication::translate("QgsOptionsBase", "&Map tools", 0, QApplication::UnicodeUTF8));
    pbnSelectProjection->setText(QApplication::translate("QgsOptionsBase", "Select Global Default ...", 0, QApplication::UnicodeUTF8));
    grpProjectionBehaviour->setTitle(QApplication::translate("QgsOptionsBase", "When layer is loaded that has no projection information", 0, QApplication::UnicodeUTF8));
    radPromptForProjection->setText(QApplication::translate("QgsOptionsBase", "Prompt for projection.", 0, QApplication::UnicodeUTF8));
    radUseProjectProjection->setText(QApplication::translate("QgsOptionsBase", "Project wide default projection will be used.", 0, QApplication::UnicodeUTF8));
    radUseGlobalProjection->setText(QApplication::translate("QgsOptionsBase", "Global default projection displa&yed below will be used.", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabProjection), QApplication::translate("QgsOptionsBase", "Pro&jection", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> The browser must be in your PATH or you can specify the full path above", 0, QApplication::UnicodeUTF8));
    btnFindBrowser->setText(QApplication::translate("QgsOptionsBase", "...", 0, QApplication::UnicodeUTF8));
    cmbBrowser->clear();
    cmbBrowser->insertItems(0, QStringList()
     << QApplication::translate("QgsOptionsBase", "epiphany", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "firefox", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "mozilla-firefox", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "galeon", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "konqueror", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "mozilla", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "opera", 0, QApplication::UnicodeUTF8)
    );
    textLabel1->setText(QApplication::translate("QgsOptionsBase", "Open help documents with", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabHelpBrowser), QApplication::translate("QgsOptionsBase", "Help &Browser", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsOptionsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsOptionsBase: public Ui_QgsOptionsBase {};
} // namespace Ui

#endif // UI_QGSOPTIONSBASE_H
