/********************************************************************************
** Form generated from reading UI file 'qcustomplotmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCUSTOMPLOTMAINWINDOW_H
#define UI_QCUSTOMPLOTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "7VisualAnalytics/QCustomPlot/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_QCustomPlotMainWindow
{
public:
    QAction *actionSave_as_PDF;
    QAction *actionSave_as_PDF_2;
    QAction *actionSave_as_PDF_3;
    QWidget *centralwidget;
    QCustomPlot *QCustomPlotWidget;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *QCustomPlotMainWindow)
    {
        if (QCustomPlotMainWindow->objectName().isEmpty())
            QCustomPlotMainWindow->setObjectName(QStringLiteral("QCustomPlotMainWindow"));
        QCustomPlotMainWindow->resize(600, 400);
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
        QCustomPlotMainWindow->setPalette(palette);
        actionSave_as_PDF = new QAction(QCustomPlotMainWindow);
        actionSave_as_PDF->setObjectName(QStringLiteral("actionSave_as_PDF"));
        actionSave_as_PDF_2 = new QAction(QCustomPlotMainWindow);
        actionSave_as_PDF_2->setObjectName(QStringLiteral("actionSave_as_PDF_2"));
        actionSave_as_PDF_3 = new QAction(QCustomPlotMainWindow);
        actionSave_as_PDF_3->setObjectName(QStringLiteral("actionSave_as_PDF_3"));
        centralwidget = new QWidget(QCustomPlotMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        QCustomPlotWidget = new QCustomPlot(centralwidget);
        QCustomPlotWidget->setObjectName(QStringLiteral("QCustomPlotWidget"));
        QCustomPlotWidget->setGeometry(QRect(4, 42, 591, 311));
        QCustomPlotMainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QCustomPlotMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        QCustomPlotMainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(QCustomPlotMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        QCustomPlotMainWindow->setMenuBar(menubar);

        retranslateUi(QCustomPlotMainWindow);

        QMetaObject::connectSlotsByName(QCustomPlotMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QCustomPlotMainWindow)
    {
        QCustomPlotMainWindow->setWindowTitle(QApplication::translate("QCustomPlotMainWindow", "MainWindow", 0));
        actionSave_as_PDF->setText(QApplication::translate("QCustomPlotMainWindow", "Save as PDF", 0));
        actionSave_as_PDF_2->setText(QApplication::translate("QCustomPlotMainWindow", "Save as PDF", 0));
        actionSave_as_PDF_3->setText(QApplication::translate("QCustomPlotMainWindow", "Save as PDF", 0));
    } // retranslateUi

};

namespace Ui {
    class QCustomPlotMainWindow: public Ui_QCustomPlotMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCUSTOMPLOTMAINWINDOW_H
