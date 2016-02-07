/********************************************************************************
** Form generated from reading ui file 'splitlinedialog.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SPLITLINEDIALOG_H
#define UI_SPLITLINEDIALOG_H

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

class Ui_splitLineDialog
{
public:
    Q3ButtonGroup *polygonToPolyLineGroup;
    Q3Table *inputOutputTable;
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;
    Q3TextBrowser *MessageLog;
    QPushButton *helpButton;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *splitLineDialog)
    {
    if (splitLineDialog->objectName().isEmpty())
        splitLineDialog->setObjectName(QString::fromUtf8("splitLineDialog"));
    splitLineDialog->resize(600, 390);
    splitLineDialog->setSizeGripEnabled(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(splitLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 10, 580, 227));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    inputOutputTable = new Q3Table(polygonToPolyLineGroup);
    inputOutputTable->setObjectName(QString::fromUtf8("inputOutputTable"));
    inputOutputTable->setGeometry(QRect(10, 10, 510, 200));
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
    removeAllButton->setIconSize(QSize(16, 16));
    removeAllButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(splitLineDialog);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(10, 285, 580, 92));
    helpButton = new QPushButton(splitLineDialog);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(6, 245, 98, 34));
    helpButton->setAutoDefault(false);
    cancelButton = new QPushButton(splitLineDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(380, 245, 98, 34));
    cancelButton->setAutoDefault(false);
    okButton = new QPushButton(splitLineDialog);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(495, 245, 98, 34));
    okButton->setAutoDefault(false);

    retranslateUi(splitLineDialog);

    QMetaObject::connectSlotsByName(splitLineDialog);
    } // setupUi

    void retranslateUi(QDialog *splitLineDialog)
    {
    splitLineDialog->setWindowTitle(QApplication::translate("splitLineDialog", "Split Lines", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QString());
    addFileButton->setToolTip(QApplication::translate("splitLineDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QString());
    removeFileButton->setToolTip(QApplication::translate("splitLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QString());
    removeAllButton->setToolTip(QApplication::translate("splitLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QString());
    helpButton->setText(QApplication::translate("splitLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("splitLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("splitLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(splitLineDialog);
    } // retranslateUi

};

namespace Ui {
    class splitLineDialog: public Ui_splitLineDialog {};
} // namespace Ui

#endif // UI_SPLITLINEDIALOG_H
