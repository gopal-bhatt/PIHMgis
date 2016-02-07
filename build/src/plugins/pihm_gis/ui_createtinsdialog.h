/********************************************************************************
** Form generated from reading ui file 'createtinsdialog.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CREATETINSDIALOG_H
#define UI_CREATETINSDIALOG_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_CreateTINsDialog
{
public:
    Q3ButtonGroup *shapeFileNameGroup;
    QLineEdit *shpFileLineEdit;
    QLabel *shpFileLabel;
    QPushButton *shpFileButton;
    QPushButton *cancelButton;
    Q3TextBrowser *MessageLog;
    Q3ButtonGroup *shapeFileGroup;
    QLabel *nodeFileLabel;
    QLabel *eleFileLabel;
    QLineEdit *eleFileLineEdit;
    QLineEdit *nodeFileLineEdit;
    QPushButton *eleFileButton;
    QPushButton *nodeFileButton;
    QPushButton *runButton;
    QPushButton *helpButton;

    void setupUi(QDialog *CreateTINsDialog)
    {
    if (CreateTINsDialog->objectName().isEmpty())
        CreateTINsDialog->setObjectName(QString::fromUtf8("CreateTINsDialog"));
    CreateTINsDialog->resize(600, 508);
    shapeFileNameGroup = new Q3ButtonGroup(CreateTINsDialog);
    shapeFileNameGroup->setObjectName(QString::fromUtf8("shapeFileNameGroup"));
    shapeFileNameGroup->setGeometry(QRect(14, 197, 572, 110));
    shpFileLineEdit = new QLineEdit(shapeFileNameGroup);
    shpFileLineEdit->setObjectName(QString::fromUtf8("shpFileLineEdit"));
    shpFileLineEdit->setGeometry(QRect(147, 45, 311, 29));
    shpFileLabel = new QLabel(shapeFileNameGroup);
    shpFileLabel->setObjectName(QString::fromUtf8("shpFileLabel"));
    shpFileLabel->setGeometry(QRect(21, 41, 135, 38));
    shpFileLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    shpFileButton = new QPushButton(shapeFileNameGroup);
    shpFileButton->setObjectName(QString::fromUtf8("shpFileButton"));
    shpFileButton->setGeometry(QRect(463, 44, 98, 34));
    shpFileButton->setAutoDefault(false);
    cancelButton = new QPushButton(CreateTINsDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(380, 321, 98, 34));
    cancelButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(CreateTINsDialog);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(14, 365, 571, 131));
    shapeFileGroup = new Q3ButtonGroup(CreateTINsDialog);
    shapeFileGroup->setObjectName(QString::fromUtf8("shapeFileGroup"));
    shapeFileGroup->setGeometry(QRect(14, 11, 572, 170));
    nodeFileLabel = new QLabel(shapeFileGroup);
    nodeFileLabel->setObjectName(QString::fromUtf8("nodeFileLabel"));
    nodeFileLabel->setGeometry(QRect(22, 116, 94, 38));
    nodeFileLabel->setFrameShape(QFrame::NoFrame);
    nodeFileLabel->setFrameShadow(QFrame::Plain);
    nodeFileLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    eleFileLabel = new QLabel(shapeFileGroup);
    eleFileLabel->setObjectName(QString::fromUtf8("eleFileLabel"));
    eleFileLabel->setGeometry(QRect(22, 44, 94, 38));
    eleFileLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    eleFileLineEdit = new QLineEdit(shapeFileGroup);
    eleFileLineEdit->setObjectName(QString::fromUtf8("eleFileLineEdit"));
    eleFileLineEdit->setGeometry(QRect(122, 48, 335, 29));
    nodeFileLineEdit = new QLineEdit(shapeFileGroup);
    nodeFileLineEdit->setObjectName(QString::fromUtf8("nodeFileLineEdit"));
    nodeFileLineEdit->setGeometry(QRect(122, 120, 335, 29));
    eleFileButton = new QPushButton(shapeFileGroup);
    eleFileButton->setObjectName(QString::fromUtf8("eleFileButton"));
    eleFileButton->setGeometry(QRect(463, 47, 98, 34));
    eleFileButton->setAutoDefault(false);
    nodeFileButton = new QPushButton(shapeFileGroup);
    nodeFileButton->setObjectName(QString::fromUtf8("nodeFileButton"));
    nodeFileButton->setGeometry(QRect(463, 118, 98, 34));
    nodeFileButton->setAutoDefault(false);
    runButton = new QPushButton(CreateTINsDialog);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(488, 321, 98, 34));
    runButton->setAutoDefault(false);
    helpButton = new QPushButton(CreateTINsDialog);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(11, 321, 98, 34));
    helpButton->setAutoDefault(false);

    retranslateUi(CreateTINsDialog);

    QMetaObject::connectSlotsByName(CreateTINsDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateTINsDialog)
    {
    CreateTINsDialog->setWindowTitle(QApplication::translate("CreateTINsDialog", "Unstructured Mesh Generation", 0, QApplication::UnicodeUTF8));
    shapeFileNameGroup->setTitle(QApplication::translate("CreateTINsDialog", "Output TIN", 0, QApplication::UnicodeUTF8));
    shpFileLabel->setText(QApplication::translate("CreateTINsDialog", "Output Shape File", 0, QApplication::UnicodeUTF8));
    shpFileButton->setText(QApplication::translate("CreateTINsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("CreateTINsDialog", "Close", 0, QApplication::UnicodeUTF8));
    shapeFileGroup->setTitle(QApplication::translate("CreateTINsDialog", "Input Files", 0, QApplication::UnicodeUTF8));
    nodeFileLabel->setText(QApplication::translate("CreateTINsDialog", "Node File", 0, QApplication::UnicodeUTF8));
    eleFileLabel->setText(QApplication::translate("CreateTINsDialog", "Element File", 0, QApplication::UnicodeUTF8));
    eleFileButton->setText(QApplication::translate("CreateTINsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    nodeFileButton->setText(QApplication::translate("CreateTINsDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("CreateTINsDialog", "Run!", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("CreateTINsDialog", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CreateTINsDialog);
    } // retranslateUi

};

namespace Ui {
    class CreateTINsDialog: public Ui_CreateTINsDialog {};
} // namespace Ui

#endif // UI_CREATETINSDIALOG_H
