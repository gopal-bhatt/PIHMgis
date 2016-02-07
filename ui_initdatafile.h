/********************************************************************************
** Form generated from reading UI file 'initdatafile.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITDATAFILE_H
#define UI_INITDATAFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_InitDataFile
{
public:
    QGroupBox *groupBoxOutput;
    QLabel *textLabel2;
    QPushButton *pushButtonInitDataFile;
    QLineEdit *lineEditInitDataFile;
    QFrame *BorderBottom;
    QFrame *BorderTop;
    QGroupBox *groupBoxButtons;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonRun;
    QGroupBox *groupBoxInput_2;
    QPushButton *pushButtonMeshDataFile;
    QLabel *textLabel1;
    QLineEdit *lineEditMeshDataFile;
    QLabel *textLabel1_4;
    QPushButton *pushButtonRivDataFile;
    QLineEdit *lineEditRivDataFile;
    QTextBrowser *textBrowserLogs;
    QGroupBox *groupBoxInput_1;
    QLabel *textLabel1_2;
    QLineEdit *lineEditInterception;
    QRadioButton *radioButtonMeters;
    QRadioButton *radioButtonPercent;
    QLabel *textLabel1_5;
    QLabel *textLabel1_6;
    QLineEdit *lineEditSnow;
    QLineEdit *lineEditSurface;
    QFrame *line;
    QLabel *textLabel1_7;
    QLabel *textLabel1_8;
    QLineEdit *lineEditGroundwater;
    QLineEdit *lineEditSoilMoisture;
    QLabel *textLabel1_9;
    QLineEdit *lineEditRiverbed;
    QLineEdit *lineEditRiver;
    QLabel *textLabel1_10;

    void setupUi(QDialog *InitDataFile)
    {
        if (InitDataFile->objectName().isEmpty())
            InitDataFile->setObjectName(QStringLiteral("InitDataFile"));
        InitDataFile->resize(611, 539);
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
        InitDataFile->setPalette(palette);
        groupBoxOutput = new QGroupBox(InitDataFile);
        groupBoxOutput->setObjectName(QStringLiteral("groupBoxOutput"));
        groupBoxOutput->setGeometry(QRect(15, 274, 581, 91));
        textLabel2 = new QLabel(groupBoxOutput);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        textLabel2->setGeometry(QRect(16, 41, 131, 31));
        pushButtonInitDataFile = new QPushButton(groupBoxOutput);
        pushButtonInitDataFile->setObjectName(QStringLiteral("pushButtonInitDataFile"));
        pushButtonInitDataFile->setGeometry(QRect(475, 41, 98, 32));
        pushButtonInitDataFile->setAutoDefault(false);
        lineEditInitDataFile = new QLineEdit(groupBoxOutput);
        lineEditInitDataFile->setObjectName(QStringLiteral("lineEditInitDataFile"));
        lineEditInitDataFile->setGeometry(QRect(145, 42, 325, 29));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lineEditInitDataFile->setFont(font);
        BorderBottom = new QFrame(InitDataFile);
        BorderBottom->setObjectName(QStringLiteral("BorderBottom"));
        BorderBottom->setGeometry(QRect(0, 523, 611, 20));
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
        BorderTop = new QFrame(InitDataFile);
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
        groupBoxButtons = new QGroupBox(InitDataFile);
        groupBoxButtons->setObjectName(QStringLiteral("groupBoxButtons"));
        groupBoxButtons->setGeometry(QRect(15, 378, 581, 61));
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
        groupBoxInput_2 = new QGroupBox(InitDataFile);
        groupBoxInput_2->setObjectName(QStringLiteral("groupBoxInput_2"));
        groupBoxInput_2->setGeometry(QRect(15, 170, 581, 101));
        pushButtonMeshDataFile = new QPushButton(groupBoxInput_2);
        pushButtonMeshDataFile->setObjectName(QStringLiteral("pushButtonMeshDataFile"));
        pushButtonMeshDataFile->setGeometry(QRect(475, 11, 98, 32));
        pushButtonMeshDataFile->setCheckable(false);
        pushButtonMeshDataFile->setAutoDefault(false);
        pushButtonMeshDataFile->setFlat(false);
        textLabel1 = new QLabel(groupBoxInput_2);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setGeometry(QRect(16, 11, 111, 31));
        lineEditMeshDataFile = new QLineEdit(groupBoxInput_2);
        lineEditMeshDataFile->setObjectName(QStringLiteral("lineEditMeshDataFile"));
        lineEditMeshDataFile->setGeometry(QRect(145, 12, 325, 29));
        lineEditMeshDataFile->setFont(font);
        textLabel1_4 = new QLabel(groupBoxInput_2);
        textLabel1_4->setObjectName(QStringLiteral("textLabel1_4"));
        textLabel1_4->setGeometry(QRect(16, 58, 111, 31));
        pushButtonRivDataFile = new QPushButton(groupBoxInput_2);
        pushButtonRivDataFile->setObjectName(QStringLiteral("pushButtonRivDataFile"));
        pushButtonRivDataFile->setGeometry(QRect(475, 58, 98, 32));
        pushButtonRivDataFile->setCheckable(false);
        pushButtonRivDataFile->setAutoDefault(false);
        pushButtonRivDataFile->setFlat(false);
        lineEditRivDataFile = new QLineEdit(groupBoxInput_2);
        lineEditRivDataFile->setObjectName(QStringLiteral("lineEditRivDataFile"));
        lineEditRivDataFile->setGeometry(QRect(145, 59, 325, 29));
        lineEditRivDataFile->setFont(font);
        textBrowserLogs = new QTextBrowser(InitDataFile);
        textBrowserLogs->setObjectName(QStringLiteral("textBrowserLogs"));
        textBrowserLogs->setGeometry(QRect(15, 448, 581, 71));
        textBrowserLogs->setLineWrapMode(QTextEdit::NoWrap);
        groupBoxInput_1 = new QGroupBox(InitDataFile);
        groupBoxInput_1->setObjectName(QStringLiteral("groupBoxInput_1"));
        groupBoxInput_1->setGeometry(QRect(15, 12, 581, 145));
        textLabel1_2 = new QLabel(groupBoxInput_1);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setGeometry(QRect(15, 30, 81, 31));
        lineEditInterception = new QLineEdit(groupBoxInput_1);
        lineEditInterception->setObjectName(QStringLiteral("lineEditInterception"));
        lineEditInterception->setGeometry(QRect(98, 31, 71, 29));
        lineEditInterception->setFont(font);
        lineEditInterception->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        radioButtonMeters = new QRadioButton(groupBoxInput_1);
        radioButtonMeters->setObjectName(QStringLiteral("radioButtonMeters"));
        radioButtonMeters->setGeometry(QRect(260, 30, 111, 23));
        radioButtonPercent = new QRadioButton(groupBoxInput_1);
        radioButtonPercent->setObjectName(QStringLiteral("radioButtonPercent"));
        radioButtonPercent->setGeometry(QRect(400, 30, 101, 23));
        textLabel1_5 = new QLabel(groupBoxInput_1);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));
        textLabel1_5->setGeometry(QRect(15, 67, 81, 31));
        textLabel1_6 = new QLabel(groupBoxInput_1);
        textLabel1_6->setObjectName(QStringLiteral("textLabel1_6"));
        textLabel1_6->setGeometry(QRect(15, 104, 81, 31));
        lineEditSnow = new QLineEdit(groupBoxInput_1);
        lineEditSnow->setObjectName(QStringLiteral("lineEditSnow"));
        lineEditSnow->setGeometry(QRect(98, 68, 71, 29));
        lineEditSnow->setFont(font);
        lineEditSnow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditSurface = new QLineEdit(groupBoxInput_1);
        lineEditSurface->setObjectName(QStringLiteral("lineEditSurface"));
        lineEditSurface->setGeometry(QRect(98, 105, 71, 29));
        lineEditSurface->setFont(font);
        lineEditSurface->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line = new QFrame(groupBoxInput_1);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(181, 21, 20, 121));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setMidLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        textLabel1_7 = new QLabel(groupBoxInput_1);
        textLabel1_7->setObjectName(QStringLiteral("textLabel1_7"));
        textLabel1_7->setGeometry(QRect(208, 63, 91, 31));
        textLabel1_8 = new QLabel(groupBoxInput_1);
        textLabel1_8->setObjectName(QStringLiteral("textLabel1_8"));
        textLabel1_8->setGeometry(QRect(208, 104, 91, 31));
        lineEditGroundwater = new QLineEdit(groupBoxInput_1);
        lineEditGroundwater->setObjectName(QStringLiteral("lineEditGroundwater"));
        lineEditGroundwater->setGeometry(QRect(304, 105, 71, 29));
        lineEditGroundwater->setFont(font);
        lineEditGroundwater->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditSoilMoisture = new QLineEdit(groupBoxInput_1);
        lineEditSoilMoisture->setObjectName(QStringLiteral("lineEditSoilMoisture"));
        lineEditSoilMoisture->setGeometry(QRect(304, 64, 71, 29));
        lineEditSoilMoisture->setFont(font);
        lineEditSoilMoisture->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_9 = new QLabel(groupBoxInput_1);
        textLabel1_9->setObjectName(QStringLiteral("textLabel1_9"));
        textLabel1_9->setGeometry(QRect(403, 60, 81, 31));
        lineEditRiverbed = new QLineEdit(groupBoxInput_1);
        lineEditRiverbed->setObjectName(QStringLiteral("lineEditRiverbed"));
        lineEditRiverbed->setGeometry(QRect(493, 102, 71, 29));
        lineEditRiverbed->setFont(font);
        lineEditRiverbed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEditRiver = new QLineEdit(groupBoxInput_1);
        lineEditRiver->setObjectName(QStringLiteral("lineEditRiver"));
        lineEditRiver->setGeometry(QRect(493, 61, 71, 29));
        lineEditRiver->setFont(font);
        lineEditRiver->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textLabel1_10 = new QLabel(groupBoxInput_1);
        textLabel1_10->setObjectName(QStringLiteral("textLabel1_10"));
        textLabel1_10->setGeometry(QRect(403, 101, 81, 31));

        retranslateUi(InitDataFile);

        QMetaObject::connectSlotsByName(InitDataFile);
    } // setupUi

    void retranslateUi(QDialog *InitDataFile)
    {
        InitDataFile->setWindowTitle(QApplication::translate("InitDataFile", ": :   Init Data File   : :", 0));
        groupBoxOutput->setTitle(QApplication::translate("InitDataFile", "Output", 0));
        textLabel2->setText(QApplication::translate("InitDataFile", "Init Data File", 0));
        pushButtonInitDataFile->setText(QApplication::translate("InitDataFile", "Browse", 0));
        groupBoxButtons->setTitle(QString());
        pushButtonHelp->setText(QApplication::translate("InitDataFile", "Help", 0));
        pushButtonClose->setText(QApplication::translate("InitDataFile", "Close", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRun->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRun->setText(QApplication::translate("InitDataFile", "Run", 0));
        groupBoxInput_2->setTitle(QString());
        pushButtonMeshDataFile->setText(QApplication::translate("InitDataFile", "Browse", 0));
        textLabel1->setText(QApplication::translate("InitDataFile", "Mesh Data File", 0));
        textLabel1_4->setText(QApplication::translate("InitDataFile", "Riv Data File", 0));
        pushButtonRivDataFile->setText(QApplication::translate("InitDataFile", "Browse", 0));
        groupBoxInput_1->setTitle(QApplication::translate("InitDataFile", "Input", 0));
        textLabel1_2->setText(QApplication::translate("InitDataFile", "Interception", 0));
        radioButtonMeters->setText(QApplication::translate("InitDataFile", " * meters", 0));
        radioButtonPercent->setText(QApplication::translate("InitDataFile", " * percent", 0));
        textLabel1_5->setText(QApplication::translate("InitDataFile", "Snow", 0));
        textLabel1_6->setText(QApplication::translate("InitDataFile", "Surface", 0));
        textLabel1_7->setText(QApplication::translate("InitDataFile", "*Soil Moisture", 0));
        textLabel1_8->setText(QApplication::translate("InitDataFile", "*Groundwater", 0));
        textLabel1_9->setText(QApplication::translate("InitDataFile", "*River", 0));
        textLabel1_10->setText(QApplication::translate("InitDataFile", "*Riverbed", 0));
    } // retranslateUi

};

namespace Ui {
    class InitDataFile: public Ui_InitDataFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITDATAFILE_H
