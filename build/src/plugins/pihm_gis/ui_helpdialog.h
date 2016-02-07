/********************************************************************************
** Form generated from reading ui file 'helpdialog.ui'
**
** Created: Tue Jul 27 23:38:16 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

class Ui_helpDialog
{
public:
    QWidget *layout1;
    QGridLayout *gridLayout;
    Q3TextBrowser *helpTextBrowser;
    QPushButton *helpDialogCloseButton;

    void setupUi(QDialog *helpDialog)
    {
    if (helpDialog->objectName().isEmpty())
        helpDialog->setObjectName(QString::fromUtf8("helpDialog"));
    helpDialog->resize(600, 480);
    layout1 = new QWidget(helpDialog);
    layout1->setObjectName(QString::fromUtf8("layout1"));
    layout1->setGeometry(QRect(10, 10, 580, 450));
    gridLayout = new QGridLayout(layout1);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 0, 0, 0);
    helpTextBrowser = new Q3TextBrowser(layout1);
    helpTextBrowser->setObjectName(QString::fromUtf8("helpTextBrowser"));

    gridLayout->addWidget(helpTextBrowser, 0, 0, 1, 1);

    helpDialogCloseButton = new QPushButton(layout1);
    helpDialogCloseButton->setObjectName(QString::fromUtf8("helpDialogCloseButton"));

    gridLayout->addWidget(helpDialogCloseButton, 1, 0, 1, 1);


    retranslateUi(helpDialog);

    QMetaObject::connectSlotsByName(helpDialog);
    } // setupUi

    void retranslateUi(QDialog *helpDialog)
    {
    helpDialog->setWindowTitle(QApplication::translate("helpDialog", "Help", 0, QApplication::UnicodeUTF8));
    helpDialogCloseButton->setText(QApplication::translate("helpDialog", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(helpDialog);
    } // retranslateUi

};

namespace Ui {
    class helpDialog: public Ui_helpDialog {};
} // namespace Ui

#endif // UI_HELPDIALOG_H
