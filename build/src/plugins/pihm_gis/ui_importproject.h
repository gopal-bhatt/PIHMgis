/********************************************************************************
** Form generated from reading ui file 'importproject.ui'
**
** Created: Tue Jul 27 23:38:16 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_IMPORTPROJECT_H
#define UI_IMPORTPROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_ImportProject
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButtonHelp;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonOpen;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonProject;
    QLineEdit *lineEditOld;
    QLabel *label_3;
    QLineEdit *lineEditNew;
    QLabel *label_4;

    void setupUi(QDialog *ImportProject)
    {
    if (ImportProject->objectName().isEmpty())
        ImportProject->setObjectName(QString::fromUtf8("ImportProject"));
    ImportProject->resize(553, 310);
    groupBox = new QGroupBox(ImportProject);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(11, 235, 531, 61));
    pushButtonHelp = new QPushButton(groupBox);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(4, 18, 113, 32));
    pushButtonClose = new QPushButton(groupBox);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(260, 18, 113, 32));
    pushButtonClose->setDefault(true);
    pushButtonOpen = new QPushButton(groupBox);
    pushButtonOpen->setObjectName(QString::fromUtf8("pushButtonOpen"));
    pushButtonOpen->setGeometry(QRect(394, 18, 131, 32));
    groupBox_2 = new QGroupBox(ImportProject);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(11, 12, 531, 211));
    lineEdit = new QLineEdit(groupBox_2);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(150, 81, 261, 22));
    label = new QLabel(groupBox_2);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(156, 20, 231, 31));
    label->setAlignment(Qt::AlignCenter);
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(20, 82, 111, 17));
    pushButtonProject = new QPushButton(groupBox_2);
    pushButtonProject->setObjectName(QString::fromUtf8("pushButtonProject"));
    pushButtonProject->setGeometry(QRect(414, 78, 113, 32));
    pushButtonProject->setDefault(true);
    lineEditOld = new QLineEdit(groupBox_2);
    lineEditOld->setObjectName(QString::fromUtf8("lineEditOld"));
    lineEditOld->setGeometry(QRect(150, 120, 261, 22));
    label_3 = new QLabel(groupBox_2);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(20, 121, 111, 17));
    lineEditNew = new QLineEdit(groupBox_2);
    lineEditNew->setObjectName(QString::fromUtf8("lineEditNew"));
    lineEditNew->setGeometry(QRect(150, 160, 261, 22));
    label_4 = new QLabel(groupBox_2);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(20, 161, 111, 17));

    retranslateUi(ImportProject);

    QMetaObject::connectSlotsByName(ImportProject);
    } // setupUi

    void retranslateUi(QDialog *ImportProject)
    {
    ImportProject->setWindowTitle(QApplication::translate("ImportProject", "ImportProject", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    pushButtonHelp->setText(QApplication::translate("ImportProject", "Help", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("ImportProject", "Close", 0, QApplication::UnicodeUTF8));
    pushButtonOpen->setToolTip(QApplication::translate("ImportProject", "Note: the dialog will close by itself after execution", 0, QApplication::UnicodeUTF8));
    pushButtonOpen->setText(QApplication::translate("ImportProject", " Import Project ", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QString());
    lineEdit->setToolTip(QApplication::translate("ImportProject", "Existing Project is a project that was not created on some other computer or Home directory structure has been altered (by moving or renaming).", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("ImportProject", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">Import Existing Project</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2->setToolTip(QApplication::translate("ImportProject", "Existing Project is a project that was not created on some other computer or Home directory structure has been altered (by moving or renaming).", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("ImportProject", "Existing Project", 0, QApplication::UnicodeUTF8));
    pushButtonProject->setToolTip(QApplication::translate("ImportProject", "Existing Project is a project that was not created on some other computer or Home directory structure has been altered (by moving or renaming).", 0, QApplication::UnicodeUTF8));
    pushButtonProject->setText(QApplication::translate("ImportProject", "Browse", 0, QApplication::UnicodeUTF8));
    label_3->setToolTip(QApplication::translate("ImportProject", "Existing Project is a project that was not created on some other computer.", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("ImportProject", "Old Project Dir.", 0, QApplication::UnicodeUTF8));
    label_4->setToolTip(QApplication::translate("ImportProject", "Existing Project is a project that was not created on some other computer.", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("ImportProject", "New Project Dir.", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ImportProject);
    } // retranslateUi

};

namespace Ui {
    class ImportProject: public Ui_ImportProject {};
} // namespace Ui

#endif // UI_IMPORTPROJECT_H