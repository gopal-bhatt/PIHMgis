/********************************************************************************
** Form generated from reading UI file 'riverspatial.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIVERSPATIAL_H
#define UI_RIVERSPATIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_RiverSpatial
{
public:
    QFrame *BorderBottom;
    QFrame *BorderTop;
    QGroupBox *groupBoxButtons;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonRun;
    QTextBrowser *textBrowserLogs;
    QGroupBox *groupBoxOutput;
    QLabel *textLabel2;
    QPushButton *pushButtonOutputDataFolder;
    QLineEdit *lineEditOutputDataFolder;
    QLineEdit *lineEditDataKey;
    QLabel *textLabel2_2;
    QLabel *textLabel2_3;
    QLabel *textLabel2_5;
    QLineEdit *lineEditRiverShapeFile;
    QPushButton *pushButtonRiverShapeFile;
    QLabel *textLabel2_6;
    QLabel *textLabel2_7;
    QSpinBox *spinBoxStartTime;
    QSpinBox *spinBoxStopTime;
    QComboBox *comboBoxStartStop;
    QLabel *textLabel2_8;
    QSpinBox *spinBoxNumBreaks;
    QComboBox *comboBoxPlotVariable;

    void setupUi(QDialog *RiverSpatial)
    {
        if (RiverSpatial->objectName().isEmpty())
            RiverSpatial->setObjectName(QStringLiteral("RiverSpatial"));
        RiverSpatial->resize(611, 467);
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
        RiverSpatial->setPalette(palette);
        BorderBottom = new QFrame(RiverSpatial);
        BorderBottom->setObjectName(QStringLiteral("BorderBottom"));
        BorderBottom->setGeometry(QRect(0, 451, 611, 20));
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
        BorderTop = new QFrame(RiverSpatial);
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
        groupBoxButtons = new QGroupBox(RiverSpatial);
        groupBoxButtons->setObjectName(QStringLiteral("groupBoxButtons"));
        groupBoxButtons->setGeometry(QRect(15, 302, 581, 61));
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
        textBrowserLogs = new QTextBrowser(RiverSpatial);
        textBrowserLogs->setObjectName(QStringLiteral("textBrowserLogs"));
        textBrowserLogs->setGeometry(QRect(15, 376, 581, 71));
        textBrowserLogs->setLineWrapMode(QTextEdit::NoWrap);
        groupBoxOutput = new QGroupBox(RiverSpatial);
        groupBoxOutput->setObjectName(QStringLiteral("groupBoxOutput"));
        groupBoxOutput->setGeometry(QRect(15, 26, 581, 261));
        textLabel2 = new QLabel(groupBoxOutput);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));
        textLabel2->setGeometry(QRect(16, 21, 131, 31));
        pushButtonOutputDataFolder = new QPushButton(groupBoxOutput);
        pushButtonOutputDataFolder->setObjectName(QStringLiteral("pushButtonOutputDataFolder"));
        pushButtonOutputDataFolder->setGeometry(QRect(475, 21, 98, 32));
        pushButtonOutputDataFolder->setAutoDefault(false);
        lineEditOutputDataFolder = new QLineEdit(groupBoxOutput);
        lineEditOutputDataFolder->setObjectName(QStringLiteral("lineEditOutputDataFolder"));
        lineEditOutputDataFolder->setGeometry(QRect(145, 22, 325, 29));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lineEditOutputDataFolder->setFont(font);
        lineEditDataKey = new QLineEdit(groupBoxOutput);
        lineEditDataKey->setObjectName(QStringLiteral("lineEditDataKey"));
        lineEditDataKey->setGeometry(QRect(145, 71, 211, 29));
        lineEditDataKey->setFont(font);
        textLabel2_2 = new QLabel(groupBoxOutput);
        textLabel2_2->setObjectName(QStringLiteral("textLabel2_2"));
        textLabel2_2->setGeometry(QRect(16, 70, 131, 31));
        textLabel2_3 = new QLabel(groupBoxOutput);
        textLabel2_3->setObjectName(QStringLiteral("textLabel2_3"));
        textLabel2_3->setGeometry(QRect(16, 118, 131, 31));
        textLabel2_5 = new QLabel(groupBoxOutput);
        textLabel2_5->setObjectName(QStringLiteral("textLabel2_5"));
        textLabel2_5->setGeometry(QRect(15, 212, 131, 31));
        lineEditRiverShapeFile = new QLineEdit(groupBoxOutput);
        lineEditRiverShapeFile->setObjectName(QStringLiteral("lineEditRiverShapeFile"));
        lineEditRiverShapeFile->setGeometry(QRect(144, 213, 325, 29));
        lineEditRiverShapeFile->setFont(font);
        pushButtonRiverShapeFile = new QPushButton(groupBoxOutput);
        pushButtonRiverShapeFile->setObjectName(QStringLiteral("pushButtonRiverShapeFile"));
        pushButtonRiverShapeFile->setGeometry(QRect(474, 212, 98, 32));
        pushButtonRiverShapeFile->setAutoDefault(false);
        textLabel2_6 = new QLabel(groupBoxOutput);
        textLabel2_6->setObjectName(QStringLiteral("textLabel2_6"));
        textLabel2_6->setGeometry(QRect(15, 164, 131, 31));
        textLabel2_7 = new QLabel(groupBoxOutput);
        textLabel2_7->setObjectName(QStringLiteral("textLabel2_7"));
        textLabel2_7->setGeometry(QRect(226, 164, 31, 31));
        spinBoxStartTime = new QSpinBox(groupBoxOutput);
        spinBoxStartTime->setObjectName(QStringLiteral("spinBoxStartTime"));
        spinBoxStartTime->setGeometry(QRect(144, 164, 71, 29));
        spinBoxStartTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxStartTime->setMaximum(999999999);
        spinBoxStopTime = new QSpinBox(groupBoxOutput);
        spinBoxStopTime->setObjectName(QStringLiteral("spinBoxStopTime"));
        spinBoxStopTime->setGeometry(QRect(251, 164, 71, 29));
        spinBoxStopTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxStopTime->setMaximum(999999999);
        spinBoxStopTime->setValue(2);
        comboBoxStartStop = new QComboBox(groupBoxOutput);
        comboBoxStartStop->setObjectName(QStringLiteral("comboBoxStartStop"));
        comboBoxStartStop->setGeometry(QRect(336, 164, 95, 28));
        textLabel2_8 = new QLabel(groupBoxOutput);
        textLabel2_8->setObjectName(QStringLiteral("textLabel2_8"));
        textLabel2_8->setGeometry(QRect(450, 164, 41, 31));
        spinBoxNumBreaks = new QSpinBox(groupBoxOutput);
        spinBoxNumBreaks->setObjectName(QStringLiteral("spinBoxNumBreaks"));
        spinBoxNumBreaks->setGeometry(QRect(496, 164, 71, 29));
        spinBoxNumBreaks->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBoxNumBreaks->setMaximum(999999999);
        spinBoxNumBreaks->setValue(1);
        comboBoxPlotVariable = new QComboBox(groupBoxOutput);
        comboBoxPlotVariable->setObjectName(QStringLiteral("comboBoxPlotVariable"));
        comboBoxPlotVariable->setGeometry(QRect(142, 118, 221, 28));

        retranslateUi(RiverSpatial);

        comboBoxStartStop->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RiverSpatial);
    } // setupUi

    void retranslateUi(QDialog *RiverSpatial)
    {
        RiverSpatial->setWindowTitle(QApplication::translate("RiverSpatial", ": :   River Spatial Analysis   : :", 0));
        groupBoxButtons->setTitle(QString());
        pushButtonHelp->setText(QApplication::translate("RiverSpatial", "Help", 0));
        pushButtonClose->setText(QApplication::translate("RiverSpatial", "Close", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRun->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRun->setText(QApplication::translate("RiverSpatial", "Run", 0));
        groupBoxOutput->setTitle(QString());
        textLabel2->setText(QApplication::translate("RiverSpatial", "Output Data Folder", 0));
        pushButtonOutputDataFolder->setText(QApplication::translate("RiverSpatial", "Browse", 0));
        textLabel2_2->setText(QApplication::translate("RiverSpatial", "Data Key (ID)", 0));
        textLabel2_3->setText(QApplication::translate("RiverSpatial", "Plot Variable", 0));
        textLabel2_5->setText(QApplication::translate("RiverSpatial", "River Shape File", 0));
        pushButtonRiverShapeFile->setText(QApplication::translate("RiverSpatial", "Browse", 0));
        textLabel2_6->setText(QApplication::translate("RiverSpatial", "Time Interval", 0));
        textLabel2_7->setText(QApplication::translate("RiverSpatial", "to", 0));
        comboBoxStartStop->clear();
        comboBoxStartStop->insertItems(0, QStringList()
         << QApplication::translate("RiverSpatial", "Minutes", 0)
         << QApplication::translate("RiverSpatial", "Hours", 0)
         << QApplication::translate("RiverSpatial", "Days", 0)
         << QApplication::translate("RiverSpatial", "Weeks", 0)
         << QApplication::translate("RiverSpatial", "Months", 0)
         << QApplication::translate("RiverSpatial", "Years", 0)
        );
        comboBoxStartStop->setCurrentText(QApplication::translate("RiverSpatial", "Minutes", 0));
        textLabel2_8->setText(QApplication::translate("RiverSpatial", "into", 0));
        comboBoxPlotVariable->clear();
        comboBoxPlotVariable->insertItems(0, QStringList()
         << QApplication::translate("RiverSpatial", "River Outflow", 0)
         << QApplication::translate("RiverSpatial", "River Inflow", 0)
         << QApplication::translate("RiverSpatial", "River Storage", 0)
         << QApplication::translate("RiverSpatial", "River Surfaceflow", 0)
         << QApplication::translate("RiverSpatial", "River Baseflow", 0)
         << QApplication::translate("RiverSpatial", "River Surfaceflow Left", 0)
         << QApplication::translate("RiverSpatial", "River Surfaceflow Right", 0)
         << QApplication::translate("RiverSpatial", "River Baseflow Left", 0)
         << QApplication::translate("RiverSpatial", "River Baseflow Right", 0)
         << QApplication::translate("RiverSpatial", "River Seepage to Bed", 0)
         << QApplication::translate("RiverSpatial", "Riverbed Outflow", 0)
         << QApplication::translate("RiverSpatial", "Riverbed Inflow", 0)
         << QApplication::translate("RiverSpatial", "Riverbed Storage", 0)
         << QApplication::translate("RiverSpatial", "Riverbed Baseflow ", 0)
         << QApplication::translate("RiverSpatial", "Riverbed Baseflow Left", 0)
         << QApplication::translate("RiverSpatial", "Riverbed Baseflow Right", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class RiverSpatial: public Ui_RiverSpatial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIVERSPATIAL_H
