/********************************************************************************
** Form generated from reading ui file 'simplifylinedialog.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SIMPLIFYLINEDIALOG_H
#define UI_SIMPLIFYLINEDIALOG_H

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
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_simplifyLineDialog
{
public:
    Q3ButtonGroup *polygonToPolyLineGroup;
    Q3Table *inputOutputTable;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;
    QPushButton *editToleranceButton;
    Q3ButtonGroup *buttonGroup8;
    QLabel *InputPolyline;
    QLabel *tolerance;
    QLineEdit *InputPolylineEdit;
    QLineEdit *toleranceEdit;
    QPushButton *addFileButton;
    QPushButton *inputPolylineButton;
    Q3TextBrowser *MessageLog;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;

    void setupUi(QDialog *simplifyLineDialog)
    {
    if (simplifyLineDialog->objectName().isEmpty())
        simplifyLineDialog->setObjectName(QString::fromUtf8("simplifyLineDialog"));
    simplifyLineDialog->resize(589, 528);
    polygonToPolyLineGroup = new Q3ButtonGroup(simplifyLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 140, 570, 231));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    inputOutputTable = new Q3Table(polygonToPolyLineGroup);
    inputOutputTable->setObjectName(QString::fromUtf8("inputOutputTable"));
    inputOutputTable->setGeometry(QRect(10, 10, 501, 200));
    inputOutputTable->setProperty("lineWidth", QVariant(2));
    inputOutputTable->setProperty("midLineWidth", QVariant(0));
    inputOutputTable->setProperty("margin", QVariant(0));
    inputOutputTable->setProperty("dragAutoScroll", QVariant(false));
    inputOutputTable->setProperty("numRows", QVariant(0));
    inputOutputTable->setProperty("numCols", QVariant(3));
    inputOutputTable->setProperty("showGrid", QVariant(true));
    inputOutputTable->setProperty("rowMovingEnabled", QVariant(false));
    inputOutputTable->setProperty("columnMovingEnabled", QVariant(false));
    removeFileButton = new QPushButton(polygonToPolyLineGroup);
    removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
    removeFileButton->setGeometry(QRect(520, 10, 40, 32));
    removeFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Minus32.png")));
    removeFileButton->setAutoDefault(false);
    removeAllButton = new QPushButton(polygonToPolyLineGroup);
    removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
    removeAllButton->setGeometry(QRect(520, 90, 40, 32));
    removeAllButton->setIcon(QIcon(QString::fromUtf8(":/icons/Delete32.png")));
    removeAllButton->setAutoDefault(false);
    editToleranceButton = new QPushButton(polygonToPolyLineGroup);
    editToleranceButton->setObjectName(QString::fromUtf8("editToleranceButton"));
    editToleranceButton->setGeometry(QRect(520, 50, 40, 32));
    editToleranceButton->setIcon(QIcon(QString::fromUtf8(":/icons/Properties32.png")));
    editToleranceButton->setAutoDefault(false);
    buttonGroup8 = new Q3ButtonGroup(simplifyLineDialog);
    buttonGroup8->setObjectName(QString::fromUtf8("buttonGroup8"));
    buttonGroup8->setGeometry(QRect(10, 10, 570, 121));
    InputPolyline = new QLabel(buttonGroup8);
    InputPolyline->setObjectName(QString::fromUtf8("InputPolyline"));
    InputPolyline->setGeometry(QRect(15, 10, 110, 48));
    tolerance = new QLabel(buttonGroup8);
    tolerance->setObjectName(QString::fromUtf8("tolerance"));
    tolerance->setGeometry(QRect(15, 60, 110, 48));
    InputPolylineEdit = new QLineEdit(buttonGroup8);
    InputPolylineEdit->setObjectName(QString::fromUtf8("InputPolylineEdit"));
    InputPolylineEdit->setGeometry(QRect(125, 20, 341, 29));
    toleranceEdit = new QLineEdit(buttonGroup8);
    toleranceEdit->setObjectName(QString::fromUtf8("toleranceEdit"));
    toleranceEdit->setGeometry(QRect(125, 70, 90, 29));
    addFileButton = new QPushButton(buttonGroup8);
    addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
    addFileButton->setGeometry(QRect(227, 68, 81, 37));
    addFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Plus32.png")));
    addFileButton->setAutoDefault(false);
    inputPolylineButton = new QPushButton(buttonGroup8);
    inputPolylineButton->setObjectName(QString::fromUtf8("inputPolylineButton"));
    inputPolylineButton->setGeometry(QRect(468, 20, 98, 32));
    inputPolylineButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(simplifyLineDialog);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(10, 417, 570, 101));
    okButton = new QPushButton(simplifyLineDialog);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(484, 379, 98, 34));
    okButton->setAutoDefault(false);
    cancelButton = new QPushButton(simplifyLineDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(380, 379, 98, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(simplifyLineDialog);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(6, 379, 98, 34));
    helpButton->setAutoDefault(false);

    retranslateUi(simplifyLineDialog);

    QMetaObject::connectSlotsByName(simplifyLineDialog);
    } // setupUi

    void retranslateUi(QDialog *simplifyLineDialog)
    {
    simplifyLineDialog->setWindowTitle(QApplication::translate("simplifyLineDialog", "Simplify Line", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QString());
    removeFileButton->setToolTip(QApplication::translate("simplifyLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QString());
    removeAllButton->setToolTip(QApplication::translate("simplifyLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QString());
    editToleranceButton->setToolTip(QApplication::translate("simplifyLineDialog", "Edit Tolerance", 0, QApplication::UnicodeUTF8));
    editToleranceButton->setText(QString());
    buttonGroup8->setTitle(QString());
    InputPolyline->setText(QApplication::translate("simplifyLineDialog", "Input Polyline", 0, QApplication::UnicodeUTF8));
    tolerance->setToolTip(QApplication::translate("simplifyLineDialog", "Simplification Tolerance", 0, QApplication::UnicodeUTF8));
    tolerance->setText(QApplication::translate("simplifyLineDialog", "Tolerance (m)", 0, QApplication::UnicodeUTF8));
    addFileButton->setToolTip(QApplication::translate("simplifyLineDialog", "Add (Polyline, Tolerance) to Table", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QString());
    inputPolylineButton->setText(QApplication::translate("simplifyLineDialog", "Browse", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("simplifyLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("simplifyLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("simplifyLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(simplifyLineDialog);
    } // retranslateUi

};

namespace Ui {
    class simplifyLineDialog: public Ui_simplifyLineDialog {};
} // namespace Ui

#endif // UI_SIMPLIFYLINEDIALOG_H
