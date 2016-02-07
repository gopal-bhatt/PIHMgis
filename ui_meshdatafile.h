/********************************************************************************
** Form generated from reading UI file 'meshdatafile.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESHDATAFILE_H
#define UI_MESHDATAFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_MeshDataFile
{
public:
    QFrame *BorderTop;
    QGroupBox *groupBoxButtons;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonRun;
    QGroupBox *groupBoxInput1;
    QPushButton *pushButtonElementFile;
    QLabel *textLabel1;
    QLineEdit *lineEditElementFile;
    QLineEdit *lineEditNodeFile;
    QLabel *textLabel1_3;
    QPushButton *pushButtonNodeFile;
    QLineEdit *lineEditNeighbourFile;
    QLabel *textLabel1_4;
    QPushButton *pushButtonNeighbourFile;
    QLineEdit *lineEditRiverFile;
    QLabel *textLabel1_5;
    QPushButton *pushButtonRiverFile;
    QGroupBox *groupBoxOutput;
    QLabel *textLabel1_2;
    QPushButton *pushButtonMeshDataFile;
    QLineEdit *lineEditMeshDataFile;
    QFrame *BorderBottom;
    QTextBrowser *textBrowserLogs;
    QGroupBox *groupBoxInput2;
    QPushButton *pushButtonSurfaceElevationFile;
    QLabel *textLabel1_6;
    QLineEdit *lineEditSurfaceElevationFile;
    QLineEdit *lineEditSubsurfaceThickness;
    QLabel *textLabelSubsurface;
    QPushButton *pushButtonSubsurfaceThickness;
    QCheckBox *checkBoxSubsurfaceThickness;

    void setupUi(QDialog *MeshDataFile)
    {
        if (MeshDataFile->objectName().isEmpty())
            MeshDataFile->setObjectName(QStringLiteral("MeshDataFile"));
        MeshDataFile->resize(611, 584);
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
        MeshDataFile->setPalette(palette);
        BorderTop = new QFrame(MeshDataFile);
        BorderTop->setObjectName(QStringLiteral("BorderTop"));
        BorderTop->setGeometry(QRect(0, -4, 611, 20));
        BorderTop->setBaseSize(QSize(0, 0));
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
        BorderTop->setPalette(palette1);
        BorderTop->setStyleSheet(QStringLiteral("color: rgb(0, 51, 153);"));
        BorderTop->setFrameShadow(QFrame::Plain);
        BorderTop->setLineWidth(12);
        BorderTop->setMidLineWidth(0);
        BorderTop->setFrameShape(QFrame::HLine);
        groupBoxButtons = new QGroupBox(MeshDataFile);
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
        groupBoxInput1 = new QGroupBox(MeshDataFile);
        groupBoxInput1->setObjectName(QStringLiteral("groupBoxInput1"));
        groupBoxInput1->setGeometry(QRect(15, 12, 581, 203));
        pushButtonElementFile = new QPushButton(groupBoxInput1);
        pushButtonElementFile->setObjectName(QStringLiteral("pushButtonElementFile"));
        pushButtonElementFile->setGeometry(QRect(475, 32, 98, 32));
        pushButtonElementFile->setCheckable(false);
        pushButtonElementFile->setAutoDefault(false);
        pushButtonElementFile->setFlat(false);
        textLabel1 = new QLabel(groupBoxInput1);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));
        textLabel1->setGeometry(QRect(16, 32, 111, 31));
        lineEditElementFile = new QLineEdit(groupBoxInput1);
        lineEditElementFile->setObjectName(QStringLiteral("lineEditElementFile"));
        lineEditElementFile->setGeometry(QRect(145, 33, 325, 29));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lineEditElementFile->setFont(font);
        lineEditNodeFile = new QLineEdit(groupBoxInput1);
        lineEditNodeFile->setObjectName(QStringLiteral("lineEditNodeFile"));
        lineEditNodeFile->setGeometry(QRect(145, 74, 325, 29));
        lineEditNodeFile->setFont(font);
        textLabel1_3 = new QLabel(groupBoxInput1);
        textLabel1_3->setObjectName(QStringLiteral("textLabel1_3"));
        textLabel1_3->setGeometry(QRect(16, 73, 111, 31));
        pushButtonNodeFile = new QPushButton(groupBoxInput1);
        pushButtonNodeFile->setObjectName(QStringLiteral("pushButtonNodeFile"));
        pushButtonNodeFile->setGeometry(QRect(475, 73, 98, 32));
        pushButtonNodeFile->setCheckable(false);
        pushButtonNodeFile->setAutoDefault(false);
        pushButtonNodeFile->setFlat(false);
        lineEditNeighbourFile = new QLineEdit(groupBoxInput1);
        lineEditNeighbourFile->setObjectName(QStringLiteral("lineEditNeighbourFile"));
        lineEditNeighbourFile->setGeometry(QRect(145, 115, 325, 29));
        lineEditNeighbourFile->setFont(font);
        textLabel1_4 = new QLabel(groupBoxInput1);
        textLabel1_4->setObjectName(QStringLiteral("textLabel1_4"));
        textLabel1_4->setGeometry(QRect(16, 114, 111, 31));
        pushButtonNeighbourFile = new QPushButton(groupBoxInput1);
        pushButtonNeighbourFile->setObjectName(QStringLiteral("pushButtonNeighbourFile"));
        pushButtonNeighbourFile->setGeometry(QRect(475, 114, 98, 32));
        pushButtonNeighbourFile->setCheckable(false);
        pushButtonNeighbourFile->setAutoDefault(false);
        pushButtonNeighbourFile->setFlat(false);
        lineEditRiverFile = new QLineEdit(groupBoxInput1);
        lineEditRiverFile->setObjectName(QStringLiteral("lineEditRiverFile"));
        lineEditRiverFile->setGeometry(QRect(145, 158, 325, 29));
        lineEditRiverFile->setFont(font);
        textLabel1_5 = new QLabel(groupBoxInput1);
        textLabel1_5->setObjectName(QStringLiteral("textLabel1_5"));
        textLabel1_5->setGeometry(QRect(16, 157, 111, 31));
        pushButtonRiverFile = new QPushButton(groupBoxInput1);
        pushButtonRiverFile->setObjectName(QStringLiteral("pushButtonRiverFile"));
        pushButtonRiverFile->setGeometry(QRect(475, 157, 98, 32));
        pushButtonRiverFile->setCheckable(false);
        pushButtonRiverFile->setAutoDefault(false);
        pushButtonRiverFile->setFlat(false);
        groupBoxOutput = new QGroupBox(MeshDataFile);
        groupBoxOutput->setObjectName(QStringLiteral("groupBoxOutput"));
        groupBoxOutput->setGeometry(QRect(15, 326, 581, 85));
        textLabel1_2 = new QLabel(groupBoxOutput);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));
        textLabel1_2->setGeometry(QRect(16, 37, 131, 31));
        pushButtonMeshDataFile = new QPushButton(groupBoxOutput);
        pushButtonMeshDataFile->setObjectName(QStringLiteral("pushButtonMeshDataFile"));
        pushButtonMeshDataFile->setGeometry(QRect(475, 37, 98, 32));
        pushButtonMeshDataFile->setAutoDefault(false);
        lineEditMeshDataFile = new QLineEdit(groupBoxOutput);
        lineEditMeshDataFile->setObjectName(QStringLiteral("lineEditMeshDataFile"));
        lineEditMeshDataFile->setGeometry(QRect(145, 38, 325, 29));
        lineEditMeshDataFile->setFont(font);
        BorderBottom = new QFrame(MeshDataFile);
        BorderBottom->setObjectName(QStringLiteral("BorderBottom"));
        BorderBottom->setGeometry(QRect(0, 568, 611, 20));
        BorderBottom->setBaseSize(QSize(0, 0));
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
        BorderBottom->setPalette(palette2);
        BorderBottom->setStyleSheet(QStringLiteral("color: rgb(0, 51, 153);"));
        BorderBottom->setFrameShadow(QFrame::Plain);
        BorderBottom->setLineWidth(12);
        BorderBottom->setMidLineWidth(0);
        BorderBottom->setFrameShape(QFrame::HLine);
        textBrowserLogs = new QTextBrowser(MeshDataFile);
        textBrowserLogs->setObjectName(QStringLiteral("textBrowserLogs"));
        textBrowserLogs->setGeometry(QRect(15, 493, 581, 71));
        textBrowserLogs->setLineWrapMode(QTextEdit::NoWrap);
        groupBoxInput2 = new QGroupBox(MeshDataFile);
        groupBoxInput2->setObjectName(QStringLiteral("groupBoxInput2"));
        groupBoxInput2->setGeometry(QRect(15, 214, 581, 114));
        pushButtonSurfaceElevationFile = new QPushButton(groupBoxInput2);
        pushButtonSurfaceElevationFile->setObjectName(QStringLiteral("pushButtonSurfaceElevationFile"));
        pushButtonSurfaceElevationFile->setGeometry(QRect(475, 29, 98, 32));
        pushButtonSurfaceElevationFile->setCheckable(false);
        pushButtonSurfaceElevationFile->setAutoDefault(false);
        pushButtonSurfaceElevationFile->setFlat(false);
        textLabel1_6 = new QLabel(groupBoxInput2);
        textLabel1_6->setObjectName(QStringLiteral("textLabel1_6"));
        textLabel1_6->setGeometry(QRect(16, 29, 111, 31));
        lineEditSurfaceElevationFile = new QLineEdit(groupBoxInput2);
        lineEditSurfaceElevationFile->setObjectName(QStringLiteral("lineEditSurfaceElevationFile"));
        lineEditSurfaceElevationFile->setGeometry(QRect(145, 30, 325, 29));
        lineEditSurfaceElevationFile->setFont(font);
        lineEditSubsurfaceThickness = new QLineEdit(groupBoxInput2);
        lineEditSubsurfaceThickness->setObjectName(QStringLiteral("lineEditSubsurfaceThickness"));
        lineEditSubsurfaceThickness->setGeometry(QRect(145, 71, 325, 29));
        lineEditSubsurfaceThickness->setFont(font);
        textLabelSubsurface = new QLabel(groupBoxInput2);
        textLabelSubsurface->setObjectName(QStringLiteral("textLabelSubsurface"));
        textLabelSubsurface->setGeometry(QRect(16, 70, 131, 31));
        pushButtonSubsurfaceThickness = new QPushButton(groupBoxInput2);
        pushButtonSubsurfaceThickness->setObjectName(QStringLiteral("pushButtonSubsurfaceThickness"));
        pushButtonSubsurfaceThickness->setGeometry(QRect(475, 70, 98, 32));
        pushButtonSubsurfaceThickness->setCheckable(false);
        pushButtonSubsurfaceThickness->setAutoDefault(false);
        pushButtonSubsurfaceThickness->setFlat(false);
        checkBoxSubsurfaceThickness = new QCheckBox(groupBoxInput2);
        checkBoxSubsurfaceThickness->setObjectName(QStringLiteral("checkBoxSubsurfaceThickness"));
        checkBoxSubsurfaceThickness->setGeometry(QRect(118, 74, 16, 23));

        retranslateUi(MeshDataFile);

        QMetaObject::connectSlotsByName(MeshDataFile);
    } // setupUi

    void retranslateUi(QDialog *MeshDataFile)
    {
        MeshDataFile->setWindowTitle(QApplication::translate("MeshDataFile", ": :   Mesh Data File   : :", 0));
        groupBoxButtons->setTitle(QString());
        pushButtonHelp->setText(QApplication::translate("MeshDataFile", "Help", 0));
        pushButtonClose->setText(QApplication::translate("MeshDataFile", "Close", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonRun->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButtonRun->setText(QApplication::translate("MeshDataFile", "Run", 0));
        groupBoxInput1->setTitle(QApplication::translate("MeshDataFile", "Input", 0));
        pushButtonElementFile->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        textLabel1->setText(QApplication::translate("MeshDataFile", "Element File", 0));
        textLabel1_3->setText(QApplication::translate("MeshDataFile", "Node File", 0));
        pushButtonNodeFile->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        textLabel1_4->setText(QApplication::translate("MeshDataFile", "Neighbour File", 0));
        pushButtonNeighbourFile->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        textLabel1_5->setText(QApplication::translate("MeshDataFile", "River Shape File", 0));
        pushButtonRiverFile->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        groupBoxOutput->setTitle(QApplication::translate("MeshDataFile", "Output", 0));
        textLabel1_2->setText(QApplication::translate("MeshDataFile", "Mesh Data File", 0));
        pushButtonMeshDataFile->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        groupBoxInput2->setTitle(QApplication::translate("MeshDataFile", "Elevation", 0));
        pushButtonSurfaceElevationFile->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        textLabel1_6->setText(QApplication::translate("MeshDataFile", "Surface", 0));
        textLabelSubsurface->setText(QApplication::translate("MeshDataFile", "Subsurface\n"
"Thickness (m)", 0));
        pushButtonSubsurfaceThickness->setText(QApplication::translate("MeshDataFile", "Browse", 0));
        checkBoxSubsurfaceThickness->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MeshDataFile: public Ui_MeshDataFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESHDATAFILE_H
