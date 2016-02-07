/********************************************************************************
** Form generated from reading ui file 'qgsoptionsbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
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
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
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
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_11;
    QVBoxLayout *vboxLayout;
    QCheckBox *chbAskToSaveProjectChanges;
    QCheckBox *chbWarnOldProjectVersion;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout2;
    QLabel *textLabel1_9;
    QSpacerItem *spacerItem;
    QgsColorButton *pbnSelectionColour;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QgsColorButton *pbnCanvasColor;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QLabel *textLabel1_4;
    QComboBox *cmbTheme;
    QLabel *textLabel1_5;
    QCheckBox *capitaliseCheckBox;
    QCheckBox *cbxLegendClassifiers;
    QCheckBox *cbxHideSplash;
    QCheckBox *cbxAttributeTableDocked;
    QLabel *textLabel1_6;
    QComboBox *cmbAttrTableBehaviour;
    QSpacerItem *spacerItem2;
    QWidget *tabRendering;
    QGridLayout *gridLayout4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout5;
    QCheckBox *chkAddedVisibility;
    QLabel *textLabel1_61;
    QSpinBox *spinBoxUpdateThreshold;
    QLabel *textLabel3;
    QGroupBox *groupBox_8;
    QVBoxLayout *vboxLayout1;
    QCheckBox *chkAntiAliasing;
    QCheckBox *chkUseQPixmap;
    QCheckBox *cbxSplitterRedraw;
    QSpacerItem *spacerItem3;
    QWidget *tabMap;
    QGridLayout *gridLayout6;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout7;
    QComboBox *cmbWheelAction;
    QLabel *label_3;
    QLabel *label_2;
    QDoubleSpinBox *spinZoomFactor;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout8;
    QSpacerItem *spacerItem4;
    QgsColorButton *pbnMeasureColour;
    QComboBox *cmbEllipsoid;
    QLabel *textLabel1_10;
    QLabel *textLabel1_8;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout9;
    QLabel *textLabel2;
    QLabel *textLabel1_3;
    QDoubleSpinBox *spinBoxIdentifyValue;
    QSpacerItem *spacerItem5;
    QWidget *tabDigitizing;
    QGridLayout *gridLayout10;
    QGroupBox *mRubberBandGroupBox;
    QGridLayout *gridLayout11;
    QLabel *mLineWidthTextLabel;
    QSpinBox *mLineWidthSpinBox;
    QLabel *mLineColourTextLabel;
    QgsColorButton *mLineColourToolButton;
    QGroupBox *mSnappingGroupBox;
    QGridLayout *gridLayout12;
    QLabel *mDefaultSnapModeLabel;
    QSpacerItem *spacerItem6;
    QComboBox *mDefaultSnapModeComboBox;
    QLabel *mDefaultSnappingToleranceTextLabel;
    QSpacerItem *spacerItem7;
    QDoubleSpinBox *mDefaultSnappingToleranceSpinBox;
    QLabel *mVertexSearchRadiusVertexEditLabel;
    QSpacerItem *spacerItem8;
    QDoubleSpinBox *mSearchRadiusVertexEditSpinBox;
    QGroupBox *mVertexMarkerGroupBox;
    QGridLayout *gridLayout13;
    QLabel *mMarkerStyleLabel;
    QSpacerItem *spacerItem9;
    QComboBox *mMarkerStyleComboBox;
    QSpacerItem *spacerItem10;
    QWidget *tabCRS;
    QGridLayout *gridLayout14;
    QSpacerItem *spacerItem11;
    QPushButton *pbnSelectProjection;
    QTextBrowser *txtGlobalWkt;
    QGroupBox *grpProjectionBehaviour;
    QVBoxLayout *vboxLayout2;
    QRadioButton *radPromptForProjection;
    QRadioButton *radUseProjectProjection;
    QRadioButton *radUseGlobalProjection;
    QWidget *tabLocale;
    QGridLayout *gridLayout15;
    QGroupBox *grpLocale;
    QGridLayout *gridLayout16;
    QLabel *label_5;
    QComboBox *cboLocale;
    QLabel *label_7;
    QSpacerItem *spacerItem12;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout17;
    QLabel *lblSystemLocale;
    QWidget *tab;
    QGridLayout *gridLayout18;
    QGroupBox *grpProxy;
    QGridLayout *gridLayout19;
    QLabel *lblProxyHost;
    QLineEdit *leProxyHost;
    QLabel *lblProxyPort;
    QLineEdit *leProxyPort;
    QLabel *lblUser;
    QLineEdit *leProxyUser;
    QLabel *lblPassword;
    QLineEdit *leProxyPassword;
    QSpacerItem *spacerItem13;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsOptionsBase)
    {
    if (QgsOptionsBase->objectName().isEmpty())
        QgsOptionsBase->setObjectName(QString::fromUtf8("QgsOptionsBase"));
    QgsOptionsBase->resize(617, 559);
    QgsOptionsBase->setWindowIcon(QIcon());
    QgsOptionsBase->setSizeGripEnabled(true);
    QgsOptionsBase->setModal(true);
    gridLayout = new QGridLayout(QgsOptionsBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(QgsOptionsBase);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tabGeneral = new QWidget();
    tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
    gridLayout1 = new QGridLayout(tabGeneral);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    groupBox_11 = new QGroupBox(tabGeneral);
    groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
    vboxLayout = new QVBoxLayout(groupBox_11);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(11);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    vboxLayout->setContentsMargins(11, 11, 11, 11);
    chbAskToSaveProjectChanges = new QCheckBox(groupBox_11);
    chbAskToSaveProjectChanges->setObjectName(QString::fromUtf8("chbAskToSaveProjectChanges"));

    vboxLayout->addWidget(chbAskToSaveProjectChanges);

    chbWarnOldProjectVersion = new QCheckBox(groupBox_11);
    chbWarnOldProjectVersion->setObjectName(QString::fromUtf8("chbWarnOldProjectVersion"));

    vboxLayout->addWidget(chbWarnOldProjectVersion);


    gridLayout1->addWidget(groupBox_11, 0, 0, 1, 1);

    groupBox_9 = new QGroupBox(tabGeneral);
    groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
    gridLayout2 = new QGridLayout(groupBox_9);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel1_9 = new QLabel(groupBox_9);
    textLabel1_9->setObjectName(QString::fromUtf8("textLabel1_9"));

    gridLayout2->addWidget(textLabel1_9, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem, 0, 1, 1, 1);

    pbnSelectionColour = new QgsColorButton(groupBox_9);
    pbnSelectionColour->setObjectName(QString::fromUtf8("pbnSelectionColour"));
    pbnSelectionColour->setMinimumSize(QSize(100, 0));

    gridLayout2->addWidget(pbnSelectionColour, 0, 3, 1, 1);

    label = new QLabel(groupBox_9);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout2->addWidget(label, 1, 0, 1, 1);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout2->addItem(spacerItem1, 1, 2, 1, 1);

    pbnCanvasColor = new QgsColorButton(groupBox_9);
    pbnCanvasColor->setObjectName(QString::fromUtf8("pbnCanvasColor"));
    pbnCanvasColor->setMinimumSize(QSize(100, 0));

    gridLayout2->addWidget(pbnCanvasColor, 1, 3, 1, 1);


    gridLayout1->addWidget(groupBox_9, 1, 0, 1, 1);

    groupBox = new QGroupBox(tabGeneral);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout3 = new QGridLayout(groupBox);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    textLabel1_4 = new QLabel(groupBox);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel1_4->sizePolicy().hasHeightForWidth());
    textLabel1_4->setSizePolicy(sizePolicy);

    gridLayout3->addWidget(textLabel1_4, 0, 0, 1, 1);

    cmbTheme = new QComboBox(groupBox);
    cmbTheme->setObjectName(QString::fromUtf8("cmbTheme"));
    cmbTheme->setDuplicatesEnabled(false);

    gridLayout3->addWidget(cmbTheme, 0, 1, 1, 1);

    textLabel1_5 = new QLabel(groupBox);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
    textLabel1_5->setAlignment(Qt::AlignVCenter);

    gridLayout3->addWidget(textLabel1_5, 1, 0, 1, 2);

    capitaliseCheckBox = new QCheckBox(groupBox);
    capitaliseCheckBox->setObjectName(QString::fromUtf8("capitaliseCheckBox"));

    gridLayout3->addWidget(capitaliseCheckBox, 2, 0, 1, 2);

    cbxLegendClassifiers = new QCheckBox(groupBox);
    cbxLegendClassifiers->setObjectName(QString::fromUtf8("cbxLegendClassifiers"));

    gridLayout3->addWidget(cbxLegendClassifiers, 3, 0, 1, 2);

    cbxHideSplash = new QCheckBox(groupBox);
    cbxHideSplash->setObjectName(QString::fromUtf8("cbxHideSplash"));

    gridLayout3->addWidget(cbxHideSplash, 4, 0, 1, 2);

    cbxAttributeTableDocked = new QCheckBox(groupBox);
    cbxAttributeTableDocked->setObjectName(QString::fromUtf8("cbxAttributeTableDocked"));

    gridLayout3->addWidget(cbxAttributeTableDocked, 5, 0, 1, 2);

    textLabel1_6 = new QLabel(groupBox);
    textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));
    sizePolicy.setHeightForWidth(textLabel1_6->sizePolicy().hasHeightForWidth());
    textLabel1_6->setSizePolicy(sizePolicy);

    gridLayout3->addWidget(textLabel1_6, 6, 0, 1, 1);

    cmbAttrTableBehaviour = new QComboBox(groupBox);
    cmbAttrTableBehaviour->setObjectName(QString::fromUtf8("cmbAttrTableBehaviour"));
    cmbAttrTableBehaviour->setDuplicatesEnabled(false);

    gridLayout3->addWidget(cmbAttrTableBehaviour, 6, 1, 1, 1);


    gridLayout1->addWidget(groupBox, 2, 0, 1, 1);

    spacerItem2 = new QSpacerItem(577, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem2, 3, 0, 1, 1);

    tabWidget->addTab(tabGeneral, QString());
    tabRendering = new QWidget();
    tabRendering->setObjectName(QString::fromUtf8("tabRendering"));
    gridLayout4 = new QGridLayout(tabRendering);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    groupBox_5 = new QGroupBox(tabRendering);
    groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
    gridLayout5 = new QGridLayout(groupBox_5);
    gridLayout5->setSpacing(6);
    gridLayout5->setMargin(11);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    chkAddedVisibility = new QCheckBox(groupBox_5);
    chkAddedVisibility->setObjectName(QString::fromUtf8("chkAddedVisibility"));

    gridLayout5->addWidget(chkAddedVisibility, 0, 0, 1, 1);

    textLabel1_61 = new QLabel(groupBox_5);
    textLabel1_61->setObjectName(QString::fromUtf8("textLabel1_61"));

    gridLayout5->addWidget(textLabel1_61, 1, 0, 1, 1);

    spinBoxUpdateThreshold = new QSpinBox(groupBox_5);
    spinBoxUpdateThreshold->setObjectName(QString::fromUtf8("spinBoxUpdateThreshold"));
    spinBoxUpdateThreshold->setMaximum(1000000);
    spinBoxUpdateThreshold->setValue(1000);

    gridLayout5->addWidget(spinBoxUpdateThreshold, 1, 1, 1, 1);

    textLabel3 = new QLabel(groupBox_5);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout5->addWidget(textLabel3, 2, 0, 1, 2);


    gridLayout4->addWidget(groupBox_5, 0, 0, 1, 1);

    groupBox_8 = new QGroupBox(tabRendering);
    groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
    vboxLayout1 = new QVBoxLayout(groupBox_8);
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(11);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    vboxLayout1->setContentsMargins(11, 11, 11, 11);
    chkAntiAliasing = new QCheckBox(groupBox_8);
    chkAntiAliasing->setObjectName(QString::fromUtf8("chkAntiAliasing"));

    vboxLayout1->addWidget(chkAntiAliasing);

    chkUseQPixmap = new QCheckBox(groupBox_8);
    chkUseQPixmap->setObjectName(QString::fromUtf8("chkUseQPixmap"));

    vboxLayout1->addWidget(chkUseQPixmap);

    cbxSplitterRedraw = new QCheckBox(groupBox_8);
    cbxSplitterRedraw->setObjectName(QString::fromUtf8("cbxSplitterRedraw"));

    vboxLayout1->addWidget(cbxSplitterRedraw);


    gridLayout4->addWidget(groupBox_8, 1, 0, 1, 1);

    spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout4->addItem(spacerItem3, 2, 0, 1, 1);

    tabWidget->addTab(tabRendering, QString());
    tabMap = new QWidget();
    tabMap->setObjectName(QString::fromUtf8("tabMap"));
    gridLayout6 = new QGridLayout(tabMap);
    gridLayout6->setSpacing(6);
    gridLayout6->setMargin(11);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    gridLayout6->setContentsMargins(11, 11, 11, 11);
    groupBox_10 = new QGroupBox(tabMap);
    groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
    gridLayout7 = new QGridLayout(groupBox_10);
    gridLayout7->setSpacing(6);
    gridLayout7->setMargin(11);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    gridLayout7->setContentsMargins(11, 11, 11, 11);
    cmbWheelAction = new QComboBox(groupBox_10);
    cmbWheelAction->setObjectName(QString::fromUtf8("cmbWheelAction"));

    gridLayout7->addWidget(cmbWheelAction, 0, 1, 1, 1);

    label_3 = new QLabel(groupBox_10);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout7->addWidget(label_3, 1, 0, 1, 1);

    label_2 = new QLabel(groupBox_10);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout7->addWidget(label_2, 0, 0, 1, 1);

    spinZoomFactor = new QDoubleSpinBox(groupBox_10);
    spinZoomFactor->setObjectName(QString::fromUtf8("spinZoomFactor"));
    spinZoomFactor->setDecimals(1);
    spinZoomFactor->setMinimum(1.1);
    spinZoomFactor->setValue(2);

    gridLayout7->addWidget(spinZoomFactor, 1, 1, 1, 1);


    gridLayout6->addWidget(groupBox_10, 2, 0, 1, 1);

    groupBox_6 = new QGroupBox(tabMap);
    groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
    gridLayout8 = new QGridLayout(groupBox_6);
    gridLayout8->setSpacing(6);
    gridLayout8->setMargin(11);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    gridLayout8->setContentsMargins(11, 11, 11, 11);
    spacerItem4 = new QSpacerItem(191, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout8->addItem(spacerItem4, 1, 2, 1, 1);

    pbnMeasureColour = new QgsColorButton(groupBox_6);
    pbnMeasureColour->setObjectName(QString::fromUtf8("pbnMeasureColour"));
    pbnMeasureColour->setMinimumSize(QSize(100, 0));

    gridLayout8->addWidget(pbnMeasureColour, 1, 1, 1, 1);

    cmbEllipsoid = new QComboBox(groupBox_6);
    cmbEllipsoid->setObjectName(QString::fromUtf8("cmbEllipsoid"));

    gridLayout8->addWidget(cmbEllipsoid, 0, 1, 1, 2);

    textLabel1_10 = new QLabel(groupBox_6);
    textLabel1_10->setObjectName(QString::fromUtf8("textLabel1_10"));

    gridLayout8->addWidget(textLabel1_10, 1, 0, 1, 1);

    textLabel1_8 = new QLabel(groupBox_6);
    textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));

    gridLayout8->addWidget(textLabel1_8, 0, 0, 1, 1);


    gridLayout6->addWidget(groupBox_6, 1, 0, 1, 1);

    groupBox_7 = new QGroupBox(tabMap);
    groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
    gridLayout9 = new QGridLayout(groupBox_7);
    gridLayout9->setSpacing(6);
    gridLayout9->setMargin(11);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    gridLayout9->setContentsMargins(11, 11, 11, 11);
    textLabel2 = new QLabel(groupBox_7);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    textLabel2->setWordWrap(true);

    gridLayout9->addWidget(textLabel2, 1, 0, 1, 2);

    textLabel1_3 = new QLabel(groupBox_7);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    gridLayout9->addWidget(textLabel1_3, 0, 0, 1, 1);

    spinBoxIdentifyValue = new QDoubleSpinBox(groupBox_7);
    spinBoxIdentifyValue->setObjectName(QString::fromUtf8("spinBoxIdentifyValue"));
    spinBoxIdentifyValue->setMaximum(100);
    spinBoxIdentifyValue->setSingleStep(0.01);
    spinBoxIdentifyValue->setValue(5);

    gridLayout9->addWidget(spinBoxIdentifyValue, 0, 1, 1, 1);


    gridLayout6->addWidget(groupBox_7, 0, 0, 1, 1);

    spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout6->addItem(spacerItem5, 3, 0, 1, 1);

    tabWidget->addTab(tabMap, QString());
    tabDigitizing = new QWidget();
    tabDigitizing->setObjectName(QString::fromUtf8("tabDigitizing"));
    gridLayout10 = new QGridLayout(tabDigitizing);
    gridLayout10->setSpacing(6);
    gridLayout10->setMargin(11);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    mRubberBandGroupBox = new QGroupBox(tabDigitizing);
    mRubberBandGroupBox->setObjectName(QString::fromUtf8("mRubberBandGroupBox"));
    gridLayout11 = new QGridLayout(mRubberBandGroupBox);
    gridLayout11->setSpacing(6);
    gridLayout11->setMargin(11);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    mLineWidthTextLabel = new QLabel(mRubberBandGroupBox);
    mLineWidthTextLabel->setObjectName(QString::fromUtf8("mLineWidthTextLabel"));

    gridLayout11->addWidget(mLineWidthTextLabel, 0, 0, 1, 1);

    mLineWidthSpinBox = new QSpinBox(mRubberBandGroupBox);
    mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
    mLineWidthSpinBox->setMinimum(1);

    gridLayout11->addWidget(mLineWidthSpinBox, 0, 1, 1, 1);

    mLineColourTextLabel = new QLabel(mRubberBandGroupBox);
    mLineColourTextLabel->setObjectName(QString::fromUtf8("mLineColourTextLabel"));

    gridLayout11->addWidget(mLineColourTextLabel, 1, 0, 1, 1);

    mLineColourToolButton = new QgsColorButton(mRubberBandGroupBox);
    mLineColourToolButton->setObjectName(QString::fromUtf8("mLineColourToolButton"));
    mLineColourToolButton->setMinimumSize(QSize(100, 0));

    gridLayout11->addWidget(mLineColourToolButton, 1, 1, 1, 1);


    gridLayout10->addWidget(mRubberBandGroupBox, 0, 0, 1, 1);

    mSnappingGroupBox = new QGroupBox(tabDigitizing);
    mSnappingGroupBox->setObjectName(QString::fromUtf8("mSnappingGroupBox"));
    gridLayout12 = new QGridLayout(mSnappingGroupBox);
    gridLayout12->setSpacing(6);
    gridLayout12->setMargin(11);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    mDefaultSnapModeLabel = new QLabel(mSnappingGroupBox);
    mDefaultSnapModeLabel->setObjectName(QString::fromUtf8("mDefaultSnapModeLabel"));

    gridLayout12->addWidget(mDefaultSnapModeLabel, 0, 0, 1, 1);

    spacerItem6 = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout12->addItem(spacerItem6, 0, 1, 1, 3);

    mDefaultSnapModeComboBox = new QComboBox(mSnappingGroupBox);
    mDefaultSnapModeComboBox->setObjectName(QString::fromUtf8("mDefaultSnapModeComboBox"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mDefaultSnapModeComboBox->sizePolicy().hasHeightForWidth());
    mDefaultSnapModeComboBox->setSizePolicy(sizePolicy1);

    gridLayout12->addWidget(mDefaultSnapModeComboBox, 0, 4, 1, 1);

    mDefaultSnappingToleranceTextLabel = new QLabel(mSnappingGroupBox);
    mDefaultSnappingToleranceTextLabel->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceTextLabel"));

    gridLayout12->addWidget(mDefaultSnappingToleranceTextLabel, 1, 0, 1, 2);

    spacerItem7 = new QSpacerItem(241, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout12->addItem(spacerItem7, 1, 2, 1, 2);

    mDefaultSnappingToleranceSpinBox = new QDoubleSpinBox(mSnappingGroupBox);
    mDefaultSnappingToleranceSpinBox->setObjectName(QString::fromUtf8("mDefaultSnappingToleranceSpinBox"));
    mDefaultSnappingToleranceSpinBox->setDecimals(5);
    mDefaultSnappingToleranceSpinBox->setMaximum(9999.99);

    gridLayout12->addWidget(mDefaultSnappingToleranceSpinBox, 1, 4, 1, 1);

    mVertexSearchRadiusVertexEditLabel = new QLabel(mSnappingGroupBox);
    mVertexSearchRadiusVertexEditLabel->setObjectName(QString::fromUtf8("mVertexSearchRadiusVertexEditLabel"));

    gridLayout12->addWidget(mVertexSearchRadiusVertexEditLabel, 2, 0, 1, 3);

    spacerItem8 = new QSpacerItem(61, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout12->addItem(spacerItem8, 2, 3, 1, 1);

    mSearchRadiusVertexEditSpinBox = new QDoubleSpinBox(mSnappingGroupBox);
    mSearchRadiusVertexEditSpinBox->setObjectName(QString::fromUtf8("mSearchRadiusVertexEditSpinBox"));
    mSearchRadiusVertexEditSpinBox->setDecimals(5);
    mSearchRadiusVertexEditSpinBox->setMaximum(9999.99);

    gridLayout12->addWidget(mSearchRadiusVertexEditSpinBox, 2, 4, 1, 1);


    gridLayout10->addWidget(mSnappingGroupBox, 1, 0, 1, 1);

    mVertexMarkerGroupBox = new QGroupBox(tabDigitizing);
    mVertexMarkerGroupBox->setObjectName(QString::fromUtf8("mVertexMarkerGroupBox"));
    gridLayout13 = new QGridLayout(mVertexMarkerGroupBox);
    gridLayout13->setSpacing(6);
    gridLayout13->setMargin(11);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    mMarkerStyleLabel = new QLabel(mVertexMarkerGroupBox);
    mMarkerStyleLabel->setObjectName(QString::fromUtf8("mMarkerStyleLabel"));

    gridLayout13->addWidget(mMarkerStyleLabel, 0, 0, 1, 1);

    spacerItem9 = new QSpacerItem(281, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout13->addItem(spacerItem9, 0, 1, 1, 1);

    mMarkerStyleComboBox = new QComboBox(mVertexMarkerGroupBox);
    mMarkerStyleComboBox->setObjectName(QString::fromUtf8("mMarkerStyleComboBox"));
    sizePolicy1.setHeightForWidth(mMarkerStyleComboBox->sizePolicy().hasHeightForWidth());
    mMarkerStyleComboBox->setSizePolicy(sizePolicy1);

    gridLayout13->addWidget(mMarkerStyleComboBox, 0, 2, 1, 1);


    gridLayout10->addWidget(mVertexMarkerGroupBox, 2, 0, 1, 1);

    spacerItem10 = new QSpacerItem(547, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem10, 3, 0, 1, 1);

    tabWidget->addTab(tabDigitizing, QString());
    tabCRS = new QWidget();
    tabCRS->setObjectName(QString::fromUtf8("tabCRS"));
    gridLayout14 = new QGridLayout(tabCRS);
    gridLayout14->setSpacing(6);
    gridLayout14->setMargin(11);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    gridLayout14->setContentsMargins(11, 11, 11, 11);
    spacerItem11 = new QSpacerItem(51, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout14->addItem(spacerItem11, 3, 0, 1, 1);

    pbnSelectProjection = new QPushButton(tabCRS);
    pbnSelectProjection->setObjectName(QString::fromUtf8("pbnSelectProjection"));

    gridLayout14->addWidget(pbnSelectProjection, 2, 0, 1, 1);

    txtGlobalWkt = new QTextBrowser(tabCRS);
    txtGlobalWkt->setObjectName(QString::fromUtf8("txtGlobalWkt"));

    gridLayout14->addWidget(txtGlobalWkt, 1, 0, 1, 1);

    grpProjectionBehaviour = new QGroupBox(tabCRS);
    grpProjectionBehaviour->setObjectName(QString::fromUtf8("grpProjectionBehaviour"));
    vboxLayout2 = new QVBoxLayout(grpProjectionBehaviour);
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(11);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    vboxLayout2->setContentsMargins(11, 11, 11, 11);
    radPromptForProjection = new QRadioButton(grpProjectionBehaviour);
    radPromptForProjection->setObjectName(QString::fromUtf8("radPromptForProjection"));

    vboxLayout2->addWidget(radPromptForProjection);

    radUseProjectProjection = new QRadioButton(grpProjectionBehaviour);
    radUseProjectProjection->setObjectName(QString::fromUtf8("radUseProjectProjection"));

    vboxLayout2->addWidget(radUseProjectProjection);

    radUseGlobalProjection = new QRadioButton(grpProjectionBehaviour);
    radUseGlobalProjection->setObjectName(QString::fromUtf8("radUseGlobalProjection"));

    vboxLayout2->addWidget(radUseGlobalProjection);


    gridLayout14->addWidget(grpProjectionBehaviour, 0, 0, 1, 1);

    tabWidget->addTab(tabCRS, QString());
    tabLocale = new QWidget();
    tabLocale->setObjectName(QString::fromUtf8("tabLocale"));
    gridLayout15 = new QGridLayout(tabLocale);
    gridLayout15->setSpacing(6);
    gridLayout15->setMargin(11);
    gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
    grpLocale = new QGroupBox(tabLocale);
    grpLocale->setObjectName(QString::fromUtf8("grpLocale"));
    grpLocale->setCheckable(true);
    gridLayout16 = new QGridLayout(grpLocale);
    gridLayout16->setSpacing(6);
    gridLayout16->setMargin(11);
    gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
    label_5 = new QLabel(grpLocale);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout16->addWidget(label_5, 0, 0, 1, 1);

    cboLocale = new QComboBox(grpLocale);
    cboLocale->setObjectName(QString::fromUtf8("cboLocale"));

    gridLayout16->addWidget(cboLocale, 0, 1, 1, 1);

    label_7 = new QLabel(grpLocale);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setWordWrap(true);

    gridLayout16->addWidget(label_7, 1, 0, 1, 2);


    gridLayout15->addWidget(grpLocale, 0, 0, 1, 1);

    spacerItem12 = new QSpacerItem(501, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout15->addItem(spacerItem12, 2, 0, 1, 1);

    groupBox_12 = new QGroupBox(tabLocale);
    groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
    gridLayout17 = new QGridLayout(groupBox_12);
    gridLayout17->setSpacing(6);
    gridLayout17->setMargin(11);
    gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
    lblSystemLocale = new QLabel(groupBox_12);
    lblSystemLocale->setObjectName(QString::fromUtf8("lblSystemLocale"));

    gridLayout17->addWidget(lblSystemLocale, 0, 0, 1, 1);


    gridLayout15->addWidget(groupBox_12, 1, 0, 1, 1);

    tabWidget->addTab(tabLocale, QString());
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout18 = new QGridLayout(tab);
    gridLayout18->setSpacing(6);
    gridLayout18->setMargin(11);
    gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
    grpProxy = new QGroupBox(tab);
    grpProxy->setObjectName(QString::fromUtf8("grpProxy"));
    grpProxy->setFlat(false);
    grpProxy->setCheckable(true);
    gridLayout19 = new QGridLayout(grpProxy);
    gridLayout19->setSpacing(6);
    gridLayout19->setMargin(11);
    gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
    lblProxyHost = new QLabel(grpProxy);
    lblProxyHost->setObjectName(QString::fromUtf8("lblProxyHost"));

    gridLayout19->addWidget(lblProxyHost, 0, 0, 1, 1);

    leProxyHost = new QLineEdit(grpProxy);
    leProxyHost->setObjectName(QString::fromUtf8("leProxyHost"));

    gridLayout19->addWidget(leProxyHost, 0, 1, 1, 1);

    lblProxyPort = new QLabel(grpProxy);
    lblProxyPort->setObjectName(QString::fromUtf8("lblProxyPort"));

    gridLayout19->addWidget(lblProxyPort, 1, 0, 1, 1);

    leProxyPort = new QLineEdit(grpProxy);
    leProxyPort->setObjectName(QString::fromUtf8("leProxyPort"));

    gridLayout19->addWidget(leProxyPort, 1, 1, 1, 1);

    lblUser = new QLabel(grpProxy);
    lblUser->setObjectName(QString::fromUtf8("lblUser"));

    gridLayout19->addWidget(lblUser, 2, 0, 1, 1);

    leProxyUser = new QLineEdit(grpProxy);
    leProxyUser->setObjectName(QString::fromUtf8("leProxyUser"));

    gridLayout19->addWidget(leProxyUser, 2, 1, 1, 1);

    lblPassword = new QLabel(grpProxy);
    lblPassword->setObjectName(QString::fromUtf8("lblPassword"));

    gridLayout19->addWidget(lblPassword, 3, 0, 1, 1);

    leProxyPassword = new QLineEdit(grpProxy);
    leProxyPassword->setObjectName(QString::fromUtf8("leProxyPassword"));
    leProxyPassword->setEchoMode(QLineEdit::Password);

    gridLayout19->addWidget(leProxyPassword, 3, 1, 1, 1);


    gridLayout18->addWidget(grpProxy, 0, 0, 1, 1);

    spacerItem13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout18->addItem(spacerItem13, 1, 0, 1, 1);

    tabWidget->addTab(tab, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsOptionsBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    textLabel1_9->setBuddy(pbnMeasureColour);
    label->setBuddy(pbnCanvasColor);
    textLabel1_4->setBuddy(cmbTheme);
    textLabel1_6->setBuddy(cmbAttrTableBehaviour);
    textLabel1_61->setBuddy(spinBoxUpdateThreshold);
    textLabel1_10->setBuddy(cmbEllipsoid);
    textLabel1_8->setBuddy(cmbEllipsoid);
    textLabel1_3->setBuddy(spinBoxIdentifyValue);
    mLineWidthTextLabel->setBuddy(mLineWidthSpinBox);
    mLineColourTextLabel->setBuddy(mLineColourToolButton);
    label_5->setBuddy(cboLocale);
    lblProxyHost->setBuddy(leProxyHost);
    lblProxyPort->setBuddy(leProxyPort);
    lblUser->setBuddy(leProxyUser);
    lblPassword->setBuddy(leProxyPassword);
    QWidget::setTabOrder(chbAskToSaveProjectChanges, chbWarnOldProjectVersion);
    QWidget::setTabOrder(chbWarnOldProjectVersion, pbnSelectionColour);
    QWidget::setTabOrder(pbnSelectionColour, pbnCanvasColor);
    QWidget::setTabOrder(pbnCanvasColor, cmbTheme);
    QWidget::setTabOrder(cmbTheme, capitaliseCheckBox);
    QWidget::setTabOrder(capitaliseCheckBox, cbxHideSplash);
    QWidget::setTabOrder(cbxHideSplash, chkAddedVisibility);
    QWidget::setTabOrder(chkAddedVisibility, spinBoxUpdateThreshold);
    QWidget::setTabOrder(spinBoxUpdateThreshold, chkAntiAliasing);
    QWidget::setTabOrder(chkAntiAliasing, chkUseQPixmap);
    QWidget::setTabOrder(chkUseQPixmap, cbxSplitterRedraw);
    QWidget::setTabOrder(cbxSplitterRedraw, spinBoxIdentifyValue);
    QWidget::setTabOrder(spinBoxIdentifyValue, cmbEllipsoid);
    QWidget::setTabOrder(cmbEllipsoid, pbnMeasureColour);
    QWidget::setTabOrder(pbnMeasureColour, cmbWheelAction);
    QWidget::setTabOrder(cmbWheelAction, spinZoomFactor);
    QWidget::setTabOrder(spinZoomFactor, mLineWidthSpinBox);
    QWidget::setTabOrder(mLineWidthSpinBox, mLineColourToolButton);
    QWidget::setTabOrder(mLineColourToolButton, mDefaultSnapModeComboBox);
    QWidget::setTabOrder(mDefaultSnapModeComboBox, mDefaultSnappingToleranceSpinBox);
    QWidget::setTabOrder(mDefaultSnappingToleranceSpinBox, mSearchRadiusVertexEditSpinBox);
    QWidget::setTabOrder(mSearchRadiusVertexEditSpinBox, mMarkerStyleComboBox);
    QWidget::setTabOrder(mMarkerStyleComboBox, radPromptForProjection);
    QWidget::setTabOrder(radPromptForProjection, radUseProjectProjection);
    QWidget::setTabOrder(radUseProjectProjection, radUseGlobalProjection);
    QWidget::setTabOrder(radUseGlobalProjection, txtGlobalWkt);
    QWidget::setTabOrder(txtGlobalWkt, pbnSelectProjection);
    QWidget::setTabOrder(pbnSelectProjection, grpLocale);
    QWidget::setTabOrder(grpLocale, cboLocale);
    QWidget::setTabOrder(cboLocale, buttonBox);
    QWidget::setTabOrder(buttonBox, tabWidget);

    retranslateUi(QgsOptionsBase);

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsOptionsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsOptionsBase)
    {
    QgsOptionsBase->setWindowTitle(QApplication::translate("QgsOptionsBase", "QGIS Options", 0, QApplication::UnicodeUTF8));
    groupBox_11->setTitle(QApplication::translate("QgsOptionsBase", "Project files", 0, QApplication::UnicodeUTF8));
    chbAskToSaveProjectChanges->setText(QApplication::translate("QgsOptionsBase", "Prompt to save project changes when required", 0, QApplication::UnicodeUTF8));
    chbWarnOldProjectVersion->setText(QApplication::translate("QgsOptionsBase", "Warn when opening a project file saved with an older version of QGIS", 0, QApplication::UnicodeUTF8));
    groupBox_9->setTitle(QApplication::translate("QgsOptionsBase", "Default Map Appearance (overridden by project properties)", 0, QApplication::UnicodeUTF8));
    textLabel1_9->setText(QApplication::translate("QgsOptionsBase", "Selection color", 0, QApplication::UnicodeUTF8));
    pbnSelectionColour->setText(QString());
    label->setText(QApplication::translate("QgsOptionsBase", "Background color", 0, QApplication::UnicodeUTF8));
    pbnCanvasColor->setText(QString());
    groupBox->setTitle(QApplication::translate("QgsOptionsBase", "&Application", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("QgsOptionsBase", "Icon theme", 0, QApplication::UnicodeUTF8));
    cmbTheme->clear();
    cmbTheme->insertItems(0, QStringList()
     << QString()
    );
    textLabel1_5->setText(QApplication::translate("QgsOptionsBase", "<b>Note: </b>Theme changes take effect the next time QGIS is started", 0, QApplication::UnicodeUTF8));
    capitaliseCheckBox->setText(QApplication::translate("QgsOptionsBase", "Capitalise layer names in legend", 0, QApplication::UnicodeUTF8));
    cbxLegendClassifiers->setText(QApplication::translate("QgsOptionsBase", "Display classification attribute names in legend", 0, QApplication::UnicodeUTF8));
    cbxHideSplash->setText(QApplication::translate("QgsOptionsBase", "Hide splash screen at startup", 0, QApplication::UnicodeUTF8));
    cbxAttributeTableDocked->setText(QApplication::translate("QgsOptionsBase", "Open attribute table in a dock window", 0, QApplication::UnicodeUTF8));
    textLabel1_6->setText(QApplication::translate("QgsOptionsBase", "Attribute table behaviour", 0, QApplication::UnicodeUTF8));
    cmbAttrTableBehaviour->clear();
    cmbAttrTableBehaviour->insertItems(0, QStringList()
     << QString()
    );
    tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("QgsOptionsBase", "&General", 0, QApplication::UnicodeUTF8));
    groupBox_5->setTitle(QApplication::translate("QgsOptionsBase", "Rendering behavior", 0, QApplication::UnicodeUTF8));
    chkAddedVisibility->setText(QApplication::translate("QgsOptionsBase", "By default new la&yers added to the map should be displayed", 0, QApplication::UnicodeUTF8));
    textLabel1_61->setText(QApplication::translate("QgsOptionsBase", "Number of features to draw before updating the display", 0, QApplication::UnicodeUTF8));
    spinBoxUpdateThreshold->setToolTip(QApplication::translate("QgsOptionsBase", "Map display will be updated (drawn) after this many features have been read from the data source", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Use zero to prevent display updates until all features have been rendered", 0, QApplication::UnicodeUTF8));
    groupBox_8->setTitle(QApplication::translate("QgsOptionsBase", "Rendering quality", 0, QApplication::UnicodeUTF8));
    chkAntiAliasing->setText(QApplication::translate("QgsOptionsBase", "Make lines appear less jagged at the expense of some drawing performance", 0, QApplication::UnicodeUTF8));
    chkUseQPixmap->setToolTip(QApplication::translate("QgsOptionsBase", "Selecting this will unselect the 'make lines less' jagged toggle", 0, QApplication::UnicodeUTF8));
    chkUseQPixmap->setText(QApplication::translate("QgsOptionsBase", "Fix problems with incorrectly filled polygons", 0, QApplication::UnicodeUTF8));
    cbxSplitterRedraw->setText(QApplication::translate("QgsOptionsBase", "Continuously redraw the map when dragging the legend/map divider", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabRendering), QApplication::translate("QgsOptionsBase", "&Rendering", 0, QApplication::UnicodeUTF8));
    groupBox_10->setTitle(QApplication::translate("QgsOptionsBase", "Panning and zooming", 0, QApplication::UnicodeUTF8));
    cmbWheelAction->clear();
    cmbWheelAction->insertItems(0, QStringList()
     << QApplication::translate("QgsOptionsBase", "Zoom", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "Zoom and recenter", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "Zoom to mouse cursor", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsOptionsBase", "Nothing", 0, QApplication::UnicodeUTF8)
    );
    label_3->setText(QApplication::translate("QgsOptionsBase", "Zoom factor", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QgsOptionsBase", "Mouse wheel action", 0, QApplication::UnicodeUTF8));
    groupBox_6->setTitle(QApplication::translate("QgsOptionsBase", "Measure tool", 0, QApplication::UnicodeUTF8));
    pbnMeasureColour->setText(QString());
    textLabel1_10->setText(QApplication::translate("QgsOptionsBase", "Rubberband color", 0, QApplication::UnicodeUTF8));
    textLabel1_8->setText(QApplication::translate("QgsOptionsBase", "Ellipsoid for distance calculations", 0, QApplication::UnicodeUTF8));
    groupBox_7->setTitle(QApplication::translate("QgsOptionsBase", "Search radius", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Specify the search radius as a percentage of the map width", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsOptionsBase", "Search radius for identifying features and displaying map tips", 0, QApplication::UnicodeUTF8));
    spinBoxIdentifyValue->setSuffix(QApplication::translate("QgsOptionsBase", "%", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabMap), QApplication::translate("QgsOptionsBase", "&Map tools", 0, QApplication::UnicodeUTF8));
    mRubberBandGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Rubberband", 0, QApplication::UnicodeUTF8));
    mLineWidthTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line width", 0, QApplication::UnicodeUTF8));
    mLineWidthSpinBox->setToolTip(QApplication::translate("QgsOptionsBase", "Line width in pixels", 0, QApplication::UnicodeUTF8));
    mLineColourTextLabel->setText(QApplication::translate("QgsOptionsBase", "Line colour", 0, QApplication::UnicodeUTF8));
    mLineColourToolButton->setText(QString());
    mSnappingGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Snapping", 0, QApplication::UnicodeUTF8));
    mDefaultSnapModeLabel->setText(QApplication::translate("QgsOptionsBase", "Default snap mode", 0, QApplication::UnicodeUTF8));
    mDefaultSnappingToleranceTextLabel->setText(QApplication::translate("QgsOptionsBase", "Default snapping tolerance in layer units", 0, QApplication::UnicodeUTF8));
    mVertexSearchRadiusVertexEditLabel->setText(QApplication::translate("QgsOptionsBase", "Search radius for vertex edits in layer units", 0, QApplication::UnicodeUTF8));
    mVertexMarkerGroupBox->setTitle(QApplication::translate("QgsOptionsBase", "Vertex markers", 0, QApplication::UnicodeUTF8));
    mMarkerStyleLabel->setText(QApplication::translate("QgsOptionsBase", "Marker style", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabDigitizing), QApplication::translate("QgsOptionsBase", "Digitizing", 0, QApplication::UnicodeUTF8));
    pbnSelectProjection->setText(QApplication::translate("QgsOptionsBase", "Select Global Default ...", 0, QApplication::UnicodeUTF8));
    grpProjectionBehaviour->setTitle(QApplication::translate("QgsOptionsBase", "When layer is loaded that has no coordinate reference system (CRS)", 0, QApplication::UnicodeUTF8));
    radPromptForProjection->setText(QApplication::translate("QgsOptionsBase", "Prompt for CRS", 0, QApplication::UnicodeUTF8));
    radUseProjectProjection->setText(QApplication::translate("QgsOptionsBase", "Project wide default CRS will be used", 0, QApplication::UnicodeUTF8));
    radUseGlobalProjection->setText(QApplication::translate("QgsOptionsBase", "Global default CRS displa&yed below will be used", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabCRS), QApplication::translate("QgsOptionsBase", "CRS", 0, QApplication::UnicodeUTF8));
    grpLocale->setTitle(QApplication::translate("QgsOptionsBase", "Override system locale", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("QgsOptionsBase", "Locale to use instead", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("QgsOptionsBase", "<b>Note:</b> Enabling / changing overide on local requires an application restart", 0, QApplication::UnicodeUTF8));
    groupBox_12->setTitle(QApplication::translate("QgsOptionsBase", "Additional Info", 0, QApplication::UnicodeUTF8));
    lblSystemLocale->setText(QApplication::translate("QgsOptionsBase", "Detected active locale on your system:", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tabLocale), QApplication::translate("QgsOptionsBase", "Locale", 0, QApplication::UnicodeUTF8));
    grpProxy->setTitle(QApplication::translate("QgsOptionsBase", "Use proxy for web access", 0, QApplication::UnicodeUTF8));
    lblProxyHost->setText(QApplication::translate("QgsOptionsBase", "Host", 0, QApplication::UnicodeUTF8));
    lblProxyPort->setText(QApplication::translate("QgsOptionsBase", "Port", 0, QApplication::UnicodeUTF8));
    lblUser->setText(QApplication::translate("QgsOptionsBase", "User", 0, QApplication::UnicodeUTF8));
    leProxyUser->setToolTip(QApplication::translate("QgsOptionsBase", "Leave this blank if no proxy username / password are required", 0, QApplication::UnicodeUTF8));
    lblPassword->setText(QApplication::translate("QgsOptionsBase", "Password", 0, QApplication::UnicodeUTF8));
    leProxyPassword->setToolTip(QApplication::translate("QgsOptionsBase", "Leave this blank if no proxy username / password are required", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QgsOptionsBase", "Proxy", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsOptionsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsOptionsBase: public Ui_QgsOptionsBase {};
} // namespace Ui

#endif // UI_QGSOPTIONSBASE_H
