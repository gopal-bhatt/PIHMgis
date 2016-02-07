/********************************************************************************
** Form generated from reading ui file 'closeproject.ui'
**
** Created: Tue Jul 27 23:38:16 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CLOSEPROJECT_H
#define UI_CLOSEPROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

class Ui_CloseProject
{
public:
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonOpen;
    QLabel *label_3;

    void setupUi(QDialog *CloseProject)
    {
    if (CloseProject->objectName().isEmpty())
        CloseProject->setObjectName(QString::fromUtf8("CloseProject"));
    CloseProject->resize(552, 284);
    label_2 = new QLabel(CloseProject);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(187, 40, 241, 21));
    label = new QLabel(CloseProject);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(50, 110, 411, 17));
    QFont font;
    font.setPointSize(16);
    label->setFont(font);
    groupBox = new QGroupBox(CloseProject);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(11, 200, 531, 61));
    pushButtonHelp = new QPushButton(groupBox);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(12, 18, 113, 32));
    pushButtonClose = new QPushButton(groupBox);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(260, 18, 113, 32));
    pushButtonClose->setDefault(true);
    pushButtonOpen = new QPushButton(groupBox);
    pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
    pushButtonOpen->setGeometry(QRect(390, 18, 131, 32));
    label_3 = new QLabel(CloseProject);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(50, 150, 411, 17));
    label_3->setFont(font);

    retranslateUi(CloseProject);

    QMetaObject::connectSlotsByName(CloseProject);
    } // setupUi

    void retranslateUi(QDialog *CloseProject)
    {
    CloseProject->setWindowTitle(QApplication::translate("CloseProject", "CloseProject", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("CloseProject", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Close Current Project</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("CloseProject", "Are you sure you want to close current project", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    pushButtonHelp->setText(QApplication::translate("CloseProject", "Help", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("CloseProject", "No", 0, QApplication::UnicodeUTF8));
    pushButtonOpen->setToolTip(QApplication::translate("CloseProject", "Note: the dialog will close by itself after execution", 0, QApplication::UnicodeUTF8));
    pushButtonOpen->setText(QApplication::translate("CloseProject", "Yes", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("CloseProject", "...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CloseProject);
    } // retranslateUi

};

namespace Ui {
    class CloseProject: public Ui_CloseProject {};
} // namespace Ui

#endif // UI_CLOSEPROJECT_H
