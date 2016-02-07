/********************************************************************************
** Form generated from reading ui file 'polygontopolylinedialog.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_POLYGONTOPOLYLINEDIALOG_H
#define UI_POLYGONTOPOLYLINEDIALOG_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
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
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;
    Q3TextBrowser *MessageLog;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;

    void setupUi(QDialog *polygonToPolyLineDialog)
    {
    if (polygonToPolyLineDialog->objectName().isEmpty())
        polygonToPolyLineDialog->setObjectName(QString::fromUtf8("polygonToPolyLineDialog"));
    polygonToPolyLineDialog->resize(600, 390);
    polygonToPolyLineDialog->setSizeGripEnabled(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(polygonToPolyLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 10, 580, 221));
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
    addFileButton = new QPushButton(polygonToPolyLineGroup);
    addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
    addFileButton->setGeometry(QRect(530, 30, 40, 32));
    addFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Plus32.png")));
    addFileButton->setAutoDefault(false);
    removeFileButton = new QPushButton(polygonToPolyLineGroup);
    removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
    removeFileButton->setGeometry(QRect(530, 70, 40, 32));
    removeFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Minus32.png")));
    removeFileButton->setAutoDefault(false);
    removeAllButton = new QPushButton(polygonToPolyLineGroup);
    removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
    removeAllButton->setGeometry(QRect(530, 110, 40, 32));
    removeAllButton->setIcon(QIcon(QString::fromUtf8(":/icons/Delete32.png")));
    removeAllButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(polygonToPolyLineDialog);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(10, 286, 580, 92));
    okButton = new QPushButton(polygonToPolyLineDialog);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(494, 240, 98, 34));
    okButton->setAutoDefault(false);
    cancelButton = new QPushButton(polygonToPolyLineDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(370, 240, 98, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(polygonToPolyLineDialog);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(8, 240, 98, 34));
    helpButton->setAutoDefault(false);

    retranslateUi(polygonToPolyLineDialog);

    QMetaObject::connectSlotsByName(polygonToPolyLineDialog);
    } // setupUi

    void retranslateUi(QDialog *polygonToPolyLineDialog)
    {
    polygonToPolyLineDialog->setWindowTitle(QApplication::translate("polygonToPolyLineDialog", "Polygon To Polyline", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QString());
    addFileButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QString());
    removeFileButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QString());
    removeAllButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QString());
    okButton->setText(QApplication::translate("polygonToPolyLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("polygonToPolyLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("polygonToPolyLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(polygonToPolyLineDialog);
    } // retranslateUi

};

namespace Ui {
    class polygonToPolyLineDialog: public Ui_polygonToPolyLineDialog {};
} // namespace Ui

#endif // UI_POLYGONTOPOLYLINEDIALOG_H
