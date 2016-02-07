/********************************************************************************
** Form generated from reading ui file 'polygontopolylinedialog.ui'
**
** Created: Mon Sep 7 22:45:43 2009
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_POLYGONTOPOLYLINEDIALOG_H
#define UI_POLYGONTOPOLYLINEDIALOG_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3Table>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QPushButton>

class Ui_polygonToPolyLineDialog
{
public:
    Q3ButtonGroup *polygonToPolyLineGroup;
    Q3Table *inputOutputTable;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QPushButton *helpButton;
    Q3TextBrowser *MessageLog;
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;

    void setupUi(QDialog *polygonToPolyLineDialog)
    {
    if (polygonToPolyLineDialog->objectName().isEmpty())
        polygonToPolyLineDialog->setObjectName(QString::fromUtf8("polygonToPolyLineDialog"));
    polygonToPolyLineDialog->resize(600, 390);
    polygonToPolyLineDialog->setSizeGripEnabled(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(polygonToPolyLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 10, 580, 370));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    inputOutputTable = new Q3Table(polygonToPolyLineGroup);
    inputOutputTable->setObjectName(QString::fromUtf8("inputOutputTable"));
    inputOutputTable->setGeometry(QRect(10, 20, 500, 180));
    inputOutputTable->setProperty("lineWidth", QVariant(2));
    inputOutputTable->setProperty("midLineWidth", QVariant(0));
    inputOutputTable->setProperty("margin", QVariant(0));
    inputOutputTable->setProperty("dragAutoScroll", QVariant(false));
    inputOutputTable->setProperty("numRows", QVariant(0));
    inputOutputTable->setProperty("numCols", QVariant(2));
    inputOutputTable->setProperty("showGrid", QVariant(true));
    inputOutputTable->setProperty("rowMovingEnabled", QVariant(false));
    inputOutputTable->setProperty("columnMovingEnabled", QVariant(false));
    cancelButton = new QPushButton(polygonToPolyLineGroup);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(402, 222, 80, 34));
    cancelButton->setAutoDefault(false);
    okButton = new QPushButton(polygonToPolyLineGroup);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(488, 222, 80, 34));
    okButton->setAutoDefault(false);
    helpButton = new QPushButton(polygonToPolyLineGroup);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(12, 222, 80, 34));
    helpButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(polygonToPolyLineGroup);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(11, 271, 560, 92));
    addFileButton = new QPushButton(polygonToPolyLineGroup);
    addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
    addFileButton->setGeometry(QRect(530, 10, 40, 32));
    addFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Plus32.png")));
    addFileButton->setAutoDefault(false);
    removeFileButton = new QPushButton(polygonToPolyLineGroup);
    removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
    removeFileButton->setGeometry(QRect(530, 50, 40, 32));
    removeFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Minus32.png")));
    removeFileButton->setAutoDefault(false);
    removeAllButton = new QPushButton(polygonToPolyLineGroup);
    removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
    removeAllButton->setGeometry(QRect(530, 90, 40, 32));
    removeAllButton->setIcon(QIcon(QString::fromUtf8(":/icons/Delete32.png")));
    removeAllButton->setAutoDefault(false);

    retranslateUi(polygonToPolyLineDialog);

    QMetaObject::connectSlotsByName(polygonToPolyLineDialog);
    } // setupUi

    void retranslateUi(QDialog *polygonToPolyLineDialog)
    {
    polygonToPolyLineDialog->setWindowTitle(QApplication::translate("polygonToPolyLineDialog", "Polygon To Polyline", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setProperty("title", QVariant(QString()));
    cancelButton->setText(QApplication::translate("polygonToPolyLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("polygonToPolyLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("polygonToPolyLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    addFileButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QString());
    removeFileButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QString());
    removeAllButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QString());
    Q_UNUSED(polygonToPolyLineDialog);
    } // retranslateUi

};

namespace Ui {
    class polygonToPolyLineDialog: public Ui_polygonToPolyLineDialog {};
} // namespace Ui

#endif // UI_POLYGONTOPOLYLINEDIALOG_H
