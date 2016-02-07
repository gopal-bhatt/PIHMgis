/********************************************************************************
** Form generated from reading UI file 'paradatafile.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARADATAFILE_H
#define UI_PARADATAFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParaDataFile
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QComboBox *comboBoxRiverMode;
    QComboBox *comboBoxSubsurfaceMode;
    QLabel *textLabel3_22;
    QLabel *textLabel3_20;
    QComboBox *comboBoxSurfaceMode;
    QLabel *textLabel3_21;
    QFrame *line1_2;
    QFrame *line2_3;
    QCheckBox *checkBoxVerboseMode;
    QLabel *textLabel3_23;
    QLabel *textLabel3_24;
    QCheckBox *checkBoxDebugMode;
    QLabel *textLabel3_25;
    QComboBox *comboBoxInitMode;
    QWidget *tab_2;
    QLabel *textLabel1_2;
    QDoubleSpinBox *doubleSpinBoxAbsoluteTolerance;
    QDoubleSpinBox *doubleSpinBoxRelativeTolerance;
    QLabel *textLabel1_3;
    QFrame *line1_3;
    QLabel *textLabel1_4;
    QRadioButton *radioButtonDirectDense;
    QRadioButton *radioButtonIterative;
    QLabel *textLabel1_5;
    QDoubleSpinBox *doubleSpinBoxInitialStep;
    QFrame *line2_4;
    QDoubleSpinBox *doubleSpinBoxMaximumStep;
    QLabel *textLabel1_7;
    QDoubleSpinBox *doubleSpinBoxETStep;
    QLabel *textLabel1_6;
    QLabel *textLabel1_8;
    QDoubleSpinBox *doubleSpinBoxConvergenceThreshold;
    QLabel *textLabel1_9;
    QLabel *textLabel1_10;
    QComboBox *comboBoxGrahmSchmidt;
    QSpinBox *spinBoxKrylovDimension;
    QWidget *tab_3;
    QLabel *textLabel1;
    QLabel *textLabel2;
    QSpinBox *spinBoxStartTime;
    QSpinBox *spinBoxStopTime;
    QComboBox *comboBoxStartStop;
    QFrame *line1;
    QLabel *textLabel3_11;
    QFrame *line2_2;
    QLabel *textLabel3_12;
    QSpinBox *spinBoxRiverbed;
    QLabel *textLabel3_13;
    QSpinBox *spinBoxRiverSurfaceLeftRight;
    QSpinBox *spinBoxRiver;
    QSpinBox *spinBoxRiverUpDown;
    QLabel *textLabel3_14;
    QLabel *textLabel3_15;
    QSpinBox *spinBoxRiverBaseLeftRight;
    QSpinBox *spinBoxInterception;
    QLabel *textLabel3_2;
    QLabel *textLabel3;
    QSpinBox *spinBoxGroundEvaporation;
    QSpinBox *spinBoxSoilMoisture;
    QLabel *textLabel3_5;
    QSpinBox *spinBoxGroundwater;
    QFrame *line2;
    QLabel *textLabel3_6;
    QLabel *textLabel3_3;
    QLabel *textLabel3_9;
    QLabel *textLabel3_10;
    QLabel *textLabel3_4;
    QSpinBox *spinBoxCanopyEvaporation;
    QSpinBox *spinBoxSnow;
    QSpinBox *spinBoxSurface;
    QSpinBox *spinBoxTranspiration;
    QLabel *textLabel3_7;
    QSpinBox *spinBoxRecharge;
    QSpinBox *spinBoxInfiltration;
    QLabel *textLabel3_8;
    QLabel *textLabel3_16;
    QSpinBox *spinBoxRiverbedUpDown;
    QLabel *textLabel3_17;
    QSpinBox *spinBoxRiverbedLeftRight;
    QSpinBox *spinBoxRivertoRiverBed;
    QLabel *textLabel3_18;
    QComboBox *comboBoxOutput;
    QLabel *textLabel3_19;
    QTextBrowser *textBrowserLogs;
    QGroupBox *groupBoxButtons;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonRun;
    QFrame *BorderBottom;
    QGroupBox *groupBoxOutput;
    QLabel *textLabelPara;
    QPushButton *pushButtonParaDataFile;
    QLineEdit *lineEditParaDataFile;
    QFrame *BorderTop;

    void setupUi(QDialog *ParaDataFile)
    {
        if (ParaDataFile->objectName().isEmpty())
            ParaDataFile->setObjectName(QStringLiteral("ParaDataFile"));
        ParaDataFile->resize(611, 588);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        ParaDataFile->setPalette(palette);
        tabWidget = new QTabWidget(ParaDataFile);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(15, 21, 581, 281));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        comboBoxRiverMode = new QComboBox(tab_1);
        comboBoxRiverMode->setObjectName(QStringLiteral("comboBoxRiverMode"));
        comboBoxRiverMode->setGeometry(QRect(123, 128, 131, 30));
        comboBoxSubsurfaceMode = new QComboBox(tab_1);
        comboBoxSubsurfaceMode->setObjectName(QStringLiteral("comboBoxSubsurfaceMode"));
        comboBoxSubsurfaceMode->setGeometry(QRect(123, 73, 131, 30));
        textLabel3_22 = new QLabel(tab_1);
        textLabel3_22->setObjectName(QStringLiteral("textLabel3_22"));
        textLabel3_22->setGeometry(QRect(30, 128, 91, 31));
        textLabel3_20 = new QLabel(tab_1);
        textLabel3_20->setObjectName(QStringLiteral("textLabel3_20"));
        textLabel3_20->setGeometry(QRect(30, 17, 91, 31));
        comboBoxSurfaceMode = new QComboBox(tab_1);
        comboBoxSurfaceMode->setObjectName(QStringLiteral("comboBoxSurfaceMode"));
        comboBoxSurfaceMode->setGeometry(QRect(123, 17, 131, 30));
        textLabel3_21 = new QLabel(tab_1);
        textLabel3_21->setObjectName(QStringLiteral("textLabel3_21"));
        textLabel3_21->setGeometry(QRect(30, 73, 91, 31));
        line1_2 = new QFrame(tab_1);
        line1_2->setObjectName(QStringLiteral("line1_2"));
        line1_2->setGeometry(QRect(5, 180, 565, 3));
        line1_2->setFrameShape(QFrame::HLine);
        line1_2->setFrameShadow(QFrame::Sunken);
        line2_3 = new QFrame(tab_1);
        line2_3->setObjectName(QStringLiteral("line2_3"));
        line2_3->setGeometry(QRect(287, 5, 3, 165));
        line2_3->setFrameShape(QFrame::VLine);
        line2_3->setFrameShadow(QFrame::Sunken);
        checkBoxVerboseMode = new QCheckBox(tab_1);
        checkBoxVerboseMode->setObjectName(QStringLiteral("checkBoxVerboseMode"));
        checkBoxVerboseMode->setGeometry(QRect(160, 208, 20, 23));
        textLabel3_23 = new QLabel(tab_1);
        textLabel3_23->setObjectName(QStringLiteral("textLabel3_23"));
        textLabel3_23->setGeometry(QRect(40, 203, 91, 31));
        textLabel3_24 = new QLabel(tab_1);
        textLabel3_24->setObjectName(QStringLiteral("textLabel3_24"));
        textLabel3_24->setGeometry(QRect(220, 203, 91, 31));
        checkBoxDebugMode = new QCheckBox(tab_1);
        checkBoxDebugMode->setObjectName(QStringLiteral("checkBoxDebugMode"));
        checkBoxDebugMode->setGeometry(QRect(340, 208, 20, 23));
        checkBoxDebugMode->setChecked(true);
        textLabel3_25 = new QLabel(tab_1);
        textLabel3_25->setObjectName(QStringLiteral("textLabel3_25"));
        textLabel3_25->setGeometry(QRect(321, 17, 91, 31));
        comboBoxInitMode = new QComboBox(tab_1);
        comboBoxInitMode->setObjectName(QStringLiteral("comboBoxInitMode"));
        comboBoxInitMode->setGeometry(QRect(414, 17, 131, 30));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textLabel1_2 = new QLabel(tab_2);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setGeometry(QRect(315, 207, 131, 31));
        doubleSpinBoxAbsoluteTolerance = new QDoubleSpinBox(tab_2);
        doubleSpinBoxAbsoluteTolerance->setObjectName(QStringLiteral("doubleSpinBoxAbsoluteTolerance"));
        doubleSpinBoxAbsoluteTolerance->setGeometry(QRect(445, 208, 101, 29));
        doubleSpinBoxAbsoluteTolerance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxAbsoluteTolerance->setDecimals(6);
        doubleSpinBoxAbsoluteTolerance->setMaximum(1);
        doubleSpinBoxAbsoluteTolerance->setSingleStep(0.0001);
        doubleSpinBoxAbsoluteTolerance->setValue(0.0001);
        doubleSpinBoxRelativeTolerance = new QDoubleSpinBox(tab_2);
        doubleSpinBoxRelativeTolerance->setObjectName(QStringLiteral("doubleSpinBoxRelativeTolerance"));
        doubleSpinBoxRelativeTolerance->setGeometry(QRect(445, 169, 101, 29));
        doubleSpinBoxRelativeTolerance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxRelativeTolerance->setDecimals(6);
        doubleSpinBoxRelativeTolerance->setMaximum(1);
        doubleSpinBoxRelativeTolerance->setSingleStep(0.001);
        doubleSpinBoxRelativeTolerance->setValue(0.001);
        textLabel1_3 = new QLabel(tab_2);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));
        textLabel1_3->setGeometry(QRect(315, 168, 131, 31));
        line1_3 = new QFrame(tab_2);
        line1_3->setObjectName(QStringLiteral("line1_3"));
        line1_3->setGeometry(QRect(5, 56, 565, 3));
        line1_3->setFrameShape(QFrame::HLine);
        line1_3->setFrameShadow(QFrame::Sunken);
        textLabel1_4 = new QLabel(tab_2);
        textLabel1_4->setObjectName(QStringLiteral("textLabel1_4"));
        textLabel1_4->setGeometry(QRect(100, 12, 131, 31));
        radioButtonDirectDense = new QRadioButton(tab_2);
        radioButtonDirectDense->setObjectName(QStringLiteral("radioButtonDirectDense"));
        radioButtonDirectDense->setEnabled(false);
        radioButtonDirectDense->setGeometry(QRect(230, 16, 121, 23));
        radioButtonIterative = new QRadioButton(tab_2);
        radioButtonIterative->setObjectName(QStringLiteral("radioButtonIterative"));
        radioButtonIterative->setGeometry(QRect(390, 16, 121, 23));
        radioButtonIterative->setChecked(true);
        textLabel1_5 = new QLabel(tab_2);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));
        textLabel1_5->setGeometry(QRect(315, 90, 131, 31));
        doubleSpinBoxInitialStep = new QDoubleSpinBox(tab_2);
        doubleSpinBoxInitialStep->setObjectName(QStringLiteral("doubleSpinBoxInitialStep"));
        doubleSpinBoxInitialStep->setGeometry(QRect(445, 90, 101, 29));
        doubleSpinBoxInitialStep->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxInitialStep->setDecimals(6);
        doubleSpinBoxInitialStep->setMaximum(1);
        doubleSpinBoxInitialStep->setSingleStep(1e-05);
        doubleSpinBoxInitialStep->setValue(1e-05);
        line2_4 = new QFrame(tab_2);
        line2_4->setObjectName(QStringLiteral("line2_4"));
        line2_4->setGeometry(QRect(285, 64, 3, 183));
        line2_4->setFrameShape(QFrame::VLine);
        line2_4->setFrameShadow(QFrame::Sunken);
        doubleSpinBoxMaximumStep = new QDoubleSpinBox(tab_2);
        doubleSpinBoxMaximumStep->setObjectName(QStringLiteral("doubleSpinBoxMaximumStep"));
        doubleSpinBoxMaximumStep->setGeometry(QRect(445, 131, 101, 29));
        doubleSpinBoxMaximumStep->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxMaximumStep->setDecimals(6);
        doubleSpinBoxMaximumStep->setMaximum(1440);
        doubleSpinBoxMaximumStep->setSingleStep(1);
        doubleSpinBoxMaximumStep->setValue(30);
        textLabel1_7 = new QLabel(tab_2);
        textLabel1_7->setObjectName(QStringLiteral("textLabel1_7"));
        textLabel1_7->setGeometry(QRect(315, 130, 131, 31));
        doubleSpinBoxETStep = new QDoubleSpinBox(tab_2);
        doubleSpinBoxETStep->setObjectName(QStringLiteral("doubleSpinBoxETStep"));
        doubleSpinBoxETStep->setGeometry(QRect(156, 208, 101, 29));
        doubleSpinBoxETStep->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxETStep->setDecimals(6);
        doubleSpinBoxETStep->setMaximum(1);
        doubleSpinBoxETStep->setSingleStep(1);
        doubleSpinBoxETStep->setValue(1);
        textLabel1_6 = new QLabel(tab_2);
        textLabel1_6->setObjectName(QStringLiteral("textLabel1_6"));
        textLabel1_6->setGeometry(QRect(26, 207, 131, 31));
        textLabel1_8 = new QLabel(tab_2);
        textLabel1_8->setObjectName(QStringLiteral("textLabel1_8"));
        textLabel1_8->setGeometry(QRect(26, 163, 131, 31));
        doubleSpinBoxConvergenceThreshold = new QDoubleSpinBox(tab_2);
        doubleSpinBoxConvergenceThreshold->setObjectName(QStringLiteral("doubleSpinBoxConvergenceThreshold"));
        doubleSpinBoxConvergenceThreshold->setGeometry(QRect(156, 164, 101, 29));
        doubleSpinBoxConvergenceThreshold->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBoxConvergenceThreshold->setDecimals(6);
        doubleSpinBoxConvergenceThreshold->setMaximum(1);
        doubleSpinBoxConvergenceThreshold->setSingleStep(1);
        doubleSpinBoxConvergenceThreshold->setValue(0);
        textLabel1_9 = new QLabel(tab_2);
        textLabel1_9->setObjectName(QStringLiteral("textLabel1_9"));
        textLabel1_9->setGeometry(QRect(26, 118, 131, 31));
        textLabel1_10 = new QLabel(tab_2);
        textLabel1_10->setObjectName(QStringLiteral("textLabel1_10"));
        textLabel1_10->setGeometry(QRect(27, 73, 131, 31));
        comboBoxGrahmSchmidt = new QComboBox(tab_2);
        comboBoxGrahmSchmidt->setObjectName(QStringLiteral("comboBoxGrahmSchmidt"));
        comboBoxGrahmSchmidt->setGeometry(QRect(156, 74, 101, 30));
        spinBoxKrylovDimension = new QSpinBox(tab_2);
        spinBoxKrylovDimension->setObjectName(QStringLiteral("spinBoxKrylovDimension"));
        spinBoxKrylovDimension->setGeometry(QRect(157, 120, 101, 29));
        spinBoxKrylovDimension->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        textLabel1 = new QLabel(tab_3);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setGeometry(QRect(24, 10, 121, 31));
        textLabel2 = new QLabel(tab_3);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        textLabel2->setGeometry(QRect(209, 10, 121, 31));
        spinBoxStartTime = new QSpinBox(tab_3);
        spinBoxStartTime->setObjectName(QStringLiteral("spinBoxStartTime"));
        spinBoxStartTime->setGeometry(QRect(96, 10, 81, 29));
        spinBoxStartTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxStopTime = new QSpinBox(tab_3);
        spinBoxStopTime->setObjectName(QStringLiteral("spinBoxStopTime"));
        spinBoxStopTime->setGeometry(QRect(283, 10, 81, 29));
        spinBoxStopTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxStopTime->setValue(2);
        comboBoxStartStop = new QComboBox(tab_3);
        comboBoxStartStop->setObjectName(QStringLiteral("comboBoxStartStop"));
        comboBoxStartStop->setGeometry(QRect(418, 10, 104, 30));
        line1 = new QFrame(tab_3);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setGeometry(QRect(6, 47, 565, 3));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        textLabel3_11 = new QLabel(tab_3);
        textLabel3_11->setObjectName(QStringLiteral("textLabel3_11"));
        textLabel3_11->setGeometry(QRect(127, 100, 91, 31));
        line2_2 = new QFrame(tab_3);
        line2_2->setObjectName(QStringLiteral("line2_2"));
        line2_2->setGeometry(QRect(262, 58, 3, 191));
        line2_2->setFrameShape(QFrame::VLine);
        line2_2->setFrameShadow(QFrame::Sunken);
        textLabel3_12 = new QLabel(tab_3);
        textLabel3_12->setObjectName(QStringLiteral("textLabel3_12"));
        textLabel3_12->setGeometry(QRect(9, 100, 91, 31));
        spinBoxRiverbed = new QSpinBox(tab_3);
        spinBoxRiverbed->setObjectName(QStringLiteral("spinBoxRiverbed"));
        spinBoxRiverbed->setGeometry(QRect(200, 100, 55, 29));
        spinBoxRiverbed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiverbed->setValue(1);
        textLabel3_13 = new QLabel(tab_3);
        textLabel3_13->setObjectName(QStringLiteral("textLabel3_13"));
        textLabel3_13->setGeometry(QRect(9, 136, 91, 31));
        spinBoxRiverSurfaceLeftRight = new QSpinBox(tab_3);
        spinBoxRiverSurfaceLeftRight->setObjectName(QStringLiteral("spinBoxRiverSurfaceLeftRight"));
        spinBoxRiverSurfaceLeftRight->setGeometry(QRect(63, 174, 55, 29));
        spinBoxRiverSurfaceLeftRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiverSurfaceLeftRight->setValue(1);
        spinBoxRiver = new QSpinBox(tab_3);
        spinBoxRiver->setObjectName(QStringLiteral("spinBoxRiver"));
        spinBoxRiver->setGeometry(QRect(63, 100, 55, 29));
        spinBoxRiver->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiver->setValue(1);
        spinBoxRiverUpDown = new QSpinBox(tab_3);
        spinBoxRiverUpDown->setObjectName(QStringLiteral("spinBoxRiverUpDown"));
        spinBoxRiverUpDown->setGeometry(QRect(63, 136, 55, 29));
        spinBoxRiverUpDown->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiverUpDown->setValue(1);
        textLabel3_14 = new QLabel(tab_3);
        textLabel3_14->setObjectName(QStringLiteral("textLabel3_14"));
        textLabel3_14->setGeometry(QRect(9, 174, 91, 31));
        textLabel3_15 = new QLabel(tab_3);
        textLabel3_15->setObjectName(QStringLiteral("textLabel3_15"));
        textLabel3_15->setGeometry(QRect(9, 212, 91, 31));
        spinBoxRiverBaseLeftRight = new QSpinBox(tab_3);
        spinBoxRiverBaseLeftRight->setObjectName(QStringLiteral("spinBoxRiverBaseLeftRight"));
        spinBoxRiverBaseLeftRight->setGeometry(QRect(63, 212, 55, 29));
        spinBoxRiverBaseLeftRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiverBaseLeftRight->setValue(1);
        spinBoxInterception = new QSpinBox(tab_3);
        spinBoxInterception->setObjectName(QStringLiteral("spinBoxInterception"));
        spinBoxInterception->setGeometry(QRect(355, 60, 55, 29));
        spinBoxInterception->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxInterception->setValue(1);
        textLabel3_2 = new QLabel(tab_3);
        textLabel3_2->setObjectName(QStringLiteral("textLabel3_2"));
        textLabel3_2->setGeometry(QRect(271, 98, 121, 31));
        textLabel3 = new QLabel(tab_3);
        textLabel3->setObjectName(QStringLiteral("textLabel3"));
        textLabel3->setGeometry(QRect(271, 60, 121, 31));
        spinBoxGroundEvaporation = new QSpinBox(tab_3);
        spinBoxGroundEvaporation->setObjectName(QStringLiteral("spinBoxGroundEvaporation"));
        spinBoxGroundEvaporation->setGeometry(QRect(513, 212, 55, 29));
        spinBoxGroundEvaporation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxGroundEvaporation->setValue(1);
        spinBoxSoilMoisture = new QSpinBox(tab_3);
        spinBoxSoilMoisture->setObjectName(QStringLiteral("spinBoxSoilMoisture"));
        spinBoxSoilMoisture->setGeometry(QRect(355, 174, 55, 29));
        spinBoxSoilMoisture->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxSoilMoisture->setValue(1);
        textLabel3_5 = new QLabel(tab_3);
        textLabel3_5->setObjectName(QStringLiteral("textLabel3_5"));
        textLabel3_5->setGeometry(QRect(271, 212, 121, 31));
        spinBoxGroundwater = new QSpinBox(tab_3);
        spinBoxGroundwater->setObjectName(QStringLiteral("spinBoxGroundwater"));
        spinBoxGroundwater->setGeometry(QRect(355, 212, 55, 29));
        spinBoxGroundwater->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxGroundwater->setValue(1);
        line2 = new QFrame(tab_3);
        line2->setObjectName(QStringLiteral("line2"));
        line2->setGeometry(QRect(418, 58, 3, 191));
        line2->setFrameShape(QFrame::VLine);
        line2->setFrameShadow(QFrame::Sunken);
        textLabel3_6 = new QLabel(tab_3);
        textLabel3_6->setObjectName(QStringLiteral("textLabel3_6"));
        textLabel3_6->setGeometry(QRect(428, 212, 121, 31));
        textLabel3_3 = new QLabel(tab_3);
        textLabel3_3->setObjectName(QStringLiteral("textLabel3_3"));
        textLabel3_3->setGeometry(QRect(271, 136, 121, 31));
        textLabel3_9 = new QLabel(tab_3);
        textLabel3_9->setObjectName(QStringLiteral("textLabel3_9"));
        textLabel3_9->setGeometry(QRect(428, 98, 121, 31));
        textLabel3_10 = new QLabel(tab_3);
        textLabel3_10->setObjectName(QStringLiteral("textLabel3_10"));
        textLabel3_10->setGeometry(QRect(428, 60, 121, 31));
        textLabel3_4 = new QLabel(tab_3);
        textLabel3_4->setObjectName(QStringLiteral("textLabel3_4"));
        textLabel3_4->setGeometry(QRect(271, 174, 121, 31));
        spinBoxCanopyEvaporation = new QSpinBox(tab_3);
        spinBoxCanopyEvaporation->setObjectName(QStringLiteral("spinBoxCanopyEvaporation"));
        spinBoxCanopyEvaporation->setGeometry(QRect(513, 136, 55, 29));
        spinBoxCanopyEvaporation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxCanopyEvaporation->setValue(1);
        spinBoxSnow = new QSpinBox(tab_3);
        spinBoxSnow->setObjectName(QStringLiteral("spinBoxSnow"));
        spinBoxSnow->setGeometry(QRect(355, 98, 55, 29));
        spinBoxSnow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxSnow->setValue(1);
        spinBoxSurface = new QSpinBox(tab_3);
        spinBoxSurface->setObjectName(QStringLiteral("spinBoxSurface"));
        spinBoxSurface->setGeometry(QRect(355, 136, 55, 29));
        spinBoxSurface->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxSurface->setValue(1);
        spinBoxTranspiration = new QSpinBox(tab_3);
        spinBoxTranspiration->setObjectName(QStringLiteral("spinBoxTranspiration"));
        spinBoxTranspiration->setGeometry(QRect(513, 174, 55, 29));
        spinBoxTranspiration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxTranspiration->setValue(1);
        textLabel3_7 = new QLabel(tab_3);
        textLabel3_7->setObjectName(QStringLiteral("textLabel3_7"));
        textLabel3_7->setGeometry(QRect(428, 136, 121, 31));
        spinBoxRecharge = new QSpinBox(tab_3);
        spinBoxRecharge->setObjectName(QStringLiteral("spinBoxRecharge"));
        spinBoxRecharge->setGeometry(QRect(513, 98, 55, 29));
        spinBoxRecharge->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRecharge->setValue(1);
        spinBoxInfiltration = new QSpinBox(tab_3);
        spinBoxInfiltration->setObjectName(QStringLiteral("spinBoxInfiltration"));
        spinBoxInfiltration->setGeometry(QRect(513, 60, 55, 29));
        spinBoxInfiltration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxInfiltration->setValue(1);
        textLabel3_8 = new QLabel(tab_3);
        textLabel3_8->setObjectName(QStringLiteral("textLabel3_8"));
        textLabel3_8->setGeometry(QRect(428, 174, 121, 31));
        textLabel3_16 = new QLabel(tab_3);
        textLabel3_16->setObjectName(QStringLiteral("textLabel3_16"));
        textLabel3_16->setGeometry(QRect(128, 212, 91, 31));
        spinBoxRiverbedUpDown = new QSpinBox(tab_3);
        spinBoxRiverbedUpDown->setObjectName(QStringLiteral("spinBoxRiverbedUpDown"));
        spinBoxRiverbedUpDown->setGeometry(QRect(200, 136, 55, 29));
        spinBoxRiverbedUpDown->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiverbedUpDown->setValue(1);
        textLabel3_17 = new QLabel(tab_3);
        textLabel3_17->setObjectName(QStringLiteral("textLabel3_17"));
        textLabel3_17->setGeometry(QRect(128, 174, 91, 31));
        spinBoxRiverbedLeftRight = new QSpinBox(tab_3);
        spinBoxRiverbedLeftRight->setObjectName(QStringLiteral("spinBoxRiverbedLeftRight"));
        spinBoxRiverbedLeftRight->setGeometry(QRect(200, 174, 55, 29));
        spinBoxRiverbedLeftRight->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRiverbedLeftRight->setValue(1);
        spinBoxRivertoRiverBed = new QSpinBox(tab_3);
        spinBoxRivertoRiverBed->setObjectName(QStringLiteral("spinBoxRivertoRiverBed"));
        spinBoxRivertoRiverBed->setGeometry(QRect(200, 212, 55, 29));
        spinBoxRivertoRiverBed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxRivertoRiverBed->setValue(1);
        textLabel3_18 = new QLabel(tab_3);
        textLabel3_18->setObjectName(QStringLiteral("textLabel3_18"));
        textLabel3_18->setGeometry(QRect(128, 136, 91, 31));
        comboBoxOutput = new QComboBox(tab_3);
        comboBoxOutput->setObjectName(QStringLiteral("comboBoxOutput"));
        comboBoxOutput->setGeometry(QRect(150, 60, 104, 30));
        textLabel3_19 = new QLabel(tab_3);
        textLabel3_19->setObjectName(QStringLiteral("textLabel3_19"));
        textLabel3_19->setGeometry(QRect(8, 60, 141, 31));
        tabWidget->addTab(tab_3, QString());
        textBrowserLogs = new QTextBrowser(ParaDataFile);
        textBrowserLogs->setObjectName(QStringLiteral("textBrowserLogs"));
        textBrowserLogs->setGeometry(QRect(15, 497, 581, 71));
        textBrowserLogs->setLineWrapMode(QTextEdit::NoWrap);
        groupBoxButtons = new QGroupBox(ParaDataFile);
        groupBoxButtons->setObjectName(QStringLiteral("groupBoxButtons"));
        groupBoxButtons->setGeometry(QRect(15, 422, 581, 61));
        pushButtonHelp = new QPushButton(groupBoxButtons);
        pushButtonHelp->setObjectName(QStringLiteral("pushButtonHelp"));
        pushButtonHelp->setGeometry(QRect(10, 17, 113, 32));
        pushButtonHelp->setAutoDefault(false);
        pushButtonClose = new QPushButton(groupBoxButtons);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        pushButtonClose->setGeometry(QRect(326, 17, 113, 32));
        pushButtonClose->setAutoDefault(false);
        pushButtonRun = new QPushButton(groupBoxButtons);
        pushButtonRun->setObjectName(QStringLiteral("pushButtonRun"));
        pushButtonRun->setGeometry(QRect(460, 17, 113, 32));
        pushButtonRun->setAutoDefault(false);
        BorderBottom = new QFrame(ParaDataFile);
        BorderBottom->setObjectName(QStringLiteral("BorderBottom"));
        BorderBottom->setGeometry(QRect(0, 572, 611, 20));
        BorderBottom->setBaseSize(QSize(0, 0));
        QPalette palette1;
        QBrush brush5(QColor(0, 51, 153, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        QBrush brush6(QColor(128, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        QBrush brush7(QColor(192, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush7);
        QBrush brush8(QColor(160, 0, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(64, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(85, 0, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        BorderBottom->setPalette(palette1);
        BorderBottom->setStyleSheet(QStringLiteral("color: rgb(0, 51, 153);"));
        BorderBottom->setFrameShadow(QFrame::Plain);
        BorderBottom->setLineWidth(12);
        BorderBottom->setMidLineWidth(0);
        BorderBottom->setFrameShape(QFrame::HLine);
        groupBoxOutput = new QGroupBox(ParaDataFile);
        groupBoxOutput->setObjectName(QStringLiteral("groupBoxOutput"));
        groupBoxOutput->setGeometry(QRect(15, 311, 581, 91));
        textLabelPara = new QLabel(groupBoxOutput);
        textLabelPara->setObjectName(QStringLiteral("textLabelPara"));
        textLabelPara->setGeometry(QRect(16, 41, 131, 31));
        pushButtonParaDataFile = new QPushButton(groupBoxOutput);
        pushButtonParaDataFile->setObjectName(QStringLiteral("pushButtonParaDataFile"));
        pushButtonParaDataFile->setGeometry(QRect(475, 41, 98, 32));
        pushButtonParaDataFile->setAutoDefault(false);
        lineEditParaDataFile = new QLineEdit(groupBoxOutput);
        lineEditParaDataFile->setObjectName(QStringLiteral("lineEditParaDataFile"));
        lineEditParaDataFile->setGeometry(QRect(145, 42, 325, 29));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lineEditParaDataFile->setFont(font);
        BorderTop = new QFrame(ParaDataFile);
        BorderTop->setObjectName(QStringLiteral("BorderTop"));
        BorderTop->setGeometry(QRect(0, -4, 611, 20));
        BorderTop->setBaseSize(QSize(0, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        BorderTop->setPalette(palette2);
        BorderTop->setStyleSheet(QStringLiteral("color: rgb(0, 51, 153);"));
        BorderTop->setFrameShadow(QFrame::Plain);
        BorderTop->setLineWidth(12);
        BorderTop->setMidLineWidth(0);
        BorderTop->setFrameShape(QFrame::HLine);

        retranslateUi(ParaDataFile);

        tabWidget->setCurrentIndex(2);
        comboBoxRiverMode->setCurrentIndex(1);
        comboBoxSubsurfaceMode->setCurrentIndex(1);
        comboBoxSurfaceMode->setCurrentIndex(1);
        comboBoxInitMode->setCurrentIndex(2);
        comboBoxGrahmSchmidt->setCurrentIndex(0);
        comboBoxStartStop->setCurrentIndex(0);
        comboBoxOutput->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ParaDataFile);
    } // setupUi

    void retranslateUi(QDialog *ParaDataFile)
    {
        ParaDataFile->setWindowTitle(QApplication::translate("ParaDataFile", ": :   Para Data File   : :", 0));
        comboBoxRiverMode->clear();
        comboBoxRiverMode->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Kinematic", 0)
         << QApplication::translate("ParaDataFile", "Diffusion", 0)
        );
        comboBoxRiverMode->setCurrentText(QApplication::translate("ParaDataFile", "Diffusion", 0));
        comboBoxSubsurfaceMode->clear();
        comboBoxSubsurfaceMode->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Shallow", 0)
         << QApplication::translate("ParaDataFile", "Deep", 0)
        );
        comboBoxSubsurfaceMode->setCurrentText(QApplication::translate("ParaDataFile", "Deep", 0));
        textLabel3_22->setText(QApplication::translate("ParaDataFile", "River", 0));
        textLabel3_20->setText(QApplication::translate("ParaDataFile", "Surface", 0));
        comboBoxSurfaceMode->clear();
        comboBoxSurfaceMode->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Kinematic", 0)
         << QApplication::translate("ParaDataFile", "Diffusion", 0)
        );
        comboBoxSurfaceMode->setCurrentText(QApplication::translate("ParaDataFile", "Diffusion", 0));
        textLabel3_21->setText(QApplication::translate("ParaDataFile", "Subsurface", 0));
        checkBoxVerboseMode->setText(QString());
        textLabel3_23->setText(QApplication::translate("ParaDataFile", "Verbose Mode", 0));
        textLabel3_24->setText(QApplication::translate("ParaDataFile", "Debug Mode", 0));
        checkBoxDebugMode->setText(QString());
        textLabel3_25->setText(QApplication::translate("ParaDataFile", "Initial Mode", 0));
        comboBoxInitMode->clear();
        comboBoxInitMode->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Relax", 0)
         << QApplication::translate("ParaDataFile", "Att/Riv", 0)
         << QApplication::translate("ParaDataFile", "Init File", 0)
        );
        comboBoxInitMode->setCurrentText(QApplication::translate("ParaDataFile", "Init File", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("ParaDataFile", " Model Process Parameters", 0));
        textLabel1_2->setText(QApplication::translate("ParaDataFile", "Absolute Tolerance", 0));
        textLabel1_3->setText(QApplication::translate("ParaDataFile", "Relative Tolerance", 0));
        textLabel1_4->setText(QApplication::translate("ParaDataFile", "Solver Type", 0));
        radioButtonDirectDense->setText(QApplication::translate("ParaDataFile", "Direct Dense", 0));
        radioButtonIterative->setText(QApplication::translate("ParaDataFile", "Iterative", 0));
        textLabel1_5->setText(QApplication::translate("ParaDataFile", "Initial Step", 0));
        textLabel1_7->setText(QApplication::translate("ParaDataFile", "Maximum Step", 0));
        textLabel1_6->setText(QApplication::translate("ParaDataFile", "ET Step", 0));
        textLabel1_8->setText(QApplication::translate("ParaDataFile", "Convergence\n"
"Threshold", 0));
        textLabel1_9->setText(QApplication::translate("ParaDataFile", "Krylov\n"
"Dimension", 0));
        textLabel1_10->setText(QApplication::translate("ParaDataFile", "Grahm-Schmidt", 0));
        comboBoxGrahmSchmidt->clear();
        comboBoxGrahmSchmidt->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Modified", 0)
         << QApplication::translate("ParaDataFile", "Classical", 0)
        );
        comboBoxGrahmSchmidt->setCurrentText(QApplication::translate("ParaDataFile", "Modified", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ParaDataFile", "  Model Solver Parameters  ", 0));
        textLabel1->setText(QApplication::translate("ParaDataFile", "Start Time", 0));
        textLabel2->setText(QApplication::translate("ParaDataFile", "Stop Time", 0));
        comboBoxStartStop->clear();
        comboBoxStartStop->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Minutes", 0)
         << QApplication::translate("ParaDataFile", "Hours", 0)
         << QApplication::translate("ParaDataFile", "Days", 0)
         << QApplication::translate("ParaDataFile", "Weeks", 0)
         << QApplication::translate("ParaDataFile", "Months", 0)
         << QApplication::translate("ParaDataFile", "Years", 0)
        );
        comboBoxStartStop->setCurrentText(QApplication::translate("ParaDataFile", "Minutes", 0));
        textLabel3_11->setText(QApplication::translate("ParaDataFile", "Riverbed", 0));
        textLabel3_12->setText(QApplication::translate("ParaDataFile", "River", 0));
        textLabel3_13->setText(QApplication::translate("ParaDataFile", "Riv u/d", 0));
        textLabel3_14->setText(QApplication::translate("ParaDataFile", "Riv S l/r", 0));
        textLabel3_15->setText(QApplication::translate("ParaDataFile", "Riv B l/r", 0));
        textLabel3_2->setText(QApplication::translate("ParaDataFile", "Snow", 0));
        textLabel3->setText(QApplication::translate("ParaDataFile", "Interception", 0));
        textLabel3_5->setText(QApplication::translate("ParaDataFile", "Groundwater", 0));
        textLabel3_6->setText(QApplication::translate("ParaDataFile", "Ground Evap", 0));
        textLabel3_3->setText(QApplication::translate("ParaDataFile", "Surface", 0));
        textLabel3_9->setText(QApplication::translate("ParaDataFile", "Recharge", 0));
        textLabel3_10->setText(QApplication::translate("ParaDataFile", "Infiltration", 0));
        textLabel3_4->setText(QApplication::translate("ParaDataFile", "Soil Moisture", 0));
        textLabel3_7->setText(QApplication::translate("ParaDataFile", "Canopy Evap", 0));
        textLabel3_8->setText(QApplication::translate("ParaDataFile", "Transpiration", 0));
        textLabel3_16->setText(QApplication::translate("ParaDataFile", "Rivbed s", 0));
        textLabel3_17->setText(QApplication::translate("ParaDataFile", "Rivbed l/r", 0));
        textLabel3_18->setText(QApplication::translate("ParaDataFile", "Rivbed u/d", 0));
        comboBoxOutput->clear();
        comboBoxOutput->insertItems(0, QStringList()
         << QApplication::translate("ParaDataFile", "Minutes", 0)
         << QApplication::translate("ParaDataFile", "Hours", 0)
         << QApplication::translate("ParaDataFile", "Days", 0)
         << QApplication::translate("ParaDataFile", "Weeks", 0)
         << QApplication::translate("ParaDataFile", "Months", 0)
         << QApplication::translate("ParaDataFile", "Years", 0)
        );
        comboBoxOutput->setCurrentText(QApplication::translate("ParaDataFile", "Minutes", 0));
        textLabel3_19->setText(QApplication::translate("ParaDataFile", "Output Intervals in", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("ParaDataFile", " Model Output Parameters", 0));
        groupBoxButtons->setTitle(QString());
        pushButtonHelp->setText(QApplication::translate("ParaDataFile", "Help", 0));
        pushButtonClose->setText(QApplication::translate("ParaDataFile", "Close", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRun->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRun->setText(QApplication::translate("ParaDataFile", "Run", 0));
        groupBoxOutput->setTitle(QApplication::translate("ParaDataFile", "Output", 0));
        textLabelPara->setText(QApplication::translate("ParaDataFile", "Para Data File", 0));
        pushButtonParaDataFile->setText(QApplication::translate("ParaDataFile", "Browse", 0));
    } // retranslateUi

};

namespace Ui {
    class ParaDataFile: public Ui_ParaDataFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARADATAFILE_H
