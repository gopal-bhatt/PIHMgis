/********************************************************************************
** Form generated from reading ui file 'lcfile.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LCFILE_H
#define UI_LCFILE_H

#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_LCFile
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEditNLCD;
    QPushButton *pushButtonNLCD;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLineEdit *lineEditLC;
    QPushButton *pushButtonLC;
    Q3TextBrowser *textBrowser;
    QPushButton *pushButtonRun;
    QPushButton *pushButtonClose;
    QPushButton *pushButtonHelp;

    void setupUi(QDialog *LCFile)
    {
    if (LCFile->objectName().isEmpty())
        LCFile->setObjectName(QString::fromUtf8("LCFile"));
    LCFile->resize(600, 400);
    groupBox = new QGroupBox(LCFile);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(20, 0, 561, 101));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(19, 54, 71, 17));
    lineEditNLCD = new QLineEdit(groupBox);
    lineEditNLCD->setObjectName(QString::fromUtf8("lineEditNLCD"));
    lineEditNLCD->setGeometry(QRect(100, 50, 321, 22));
    pushButtonNLCD = new QPushButton(groupBox);
    pushButtonNLCD->setObjectName(QString::fromUtf8("pushButtonNLCD"));
    pushButtonNLCD->setGeometry(QRect(430, 46, 113, 32));
    groupBox_2 = new QGroupBox(LCFile);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(20, 103, 561, 101));
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(19, 52, 61, 17));
    lineEditLC = new QLineEdit(groupBox_2);
    lineEditLC->setObjectName(QString::fromUtf8("lineEditLC"));
    lineEditLC->setGeometry(QRect(100, 48, 321, 22));
    pushButtonLC = new QPushButton(groupBox_2);
    pushButtonLC->setObjectName(QString::fromUtf8("pushButtonLC"));
    pushButtonLC->setGeometry(QRect(430, 45, 113, 32));
    textBrowser = new Q3TextBrowser(LCFile);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(20, 264, 561, 121));
    pushButtonRun = new QPushButton(LCFile);
    pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
    pushButtonRun->setGeometry(QRect(471, 220, 113, 32));
    pushButtonRun->setDefault(true);
    pushButtonClose = new QPushButton(LCFile);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(340, 220, 113, 32));
    pushButtonHelp = new QPushButton(LCFile);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(16, 220, 113, 32));

    retranslateUi(LCFile);

    QMetaObject::connectSlotsByName(LCFile);
    } // setupUi

    void retranslateUi(QDialog *LCFile)
    {
    LCFile->setWindowTitle(QApplication::translate("LCFile", "LCFile", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("LCFile", "Input", 0, QApplication::UnicodeUTF8));
    label->setToolTip(QApplication::translate("LCFile", "Input Text File with All the \"NLCD Classfication Types\" Present in the Domain", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("LCFile", "NLCD File", 0, QApplication::UnicodeUTF8));
    lineEditNLCD->setToolTip(QApplication::translate("LCFile", "Input Text File with All the \"NLCD Classfication Types\" Present in the Domain", 0, QApplication::UnicodeUTF8));
    pushButtonNLCD->setToolTip(QApplication::translate("LCFile", "Input Text File with All the \"NLCD Classfication Types\" Present in the Domain", 0, QApplication::UnicodeUTF8));
    pushButtonNLCD->setText(QApplication::translate("LCFile", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("LCFile", "Output", 0, QApplication::UnicodeUTF8));
    label_2->setToolTip(QApplication::translate("LCFile", "Output will be saved to selected the .LC File", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("LCFile", ".LC File", 0, QApplication::UnicodeUTF8));
    lineEditLC->setToolTip(QApplication::translate("LCFile", "Output will be saved to selected the .LC File", 0, QApplication::UnicodeUTF8));
    pushButtonLC->setToolTip(QApplication::translate("LCFile", "Output will be saved to selected the .LC File", 0, QApplication::UnicodeUTF8));
    pushButtonLC->setText(QApplication::translate("LCFile", "Browse...", 0, QApplication::UnicodeUTF8));
    pushButtonRun->setToolTip(QApplication::translate("LCFile", "RUN Generate LC Module", 0, QApplication::UnicodeUTF8));
    pushButtonRun->setText(QApplication::translate("LCFile", "Run", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setToolTip(QApplication::translate("LCFile", "Close!", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("LCFile", "Close", 0, QApplication::UnicodeUTF8));
    pushButtonHelp->setToolTip(QApplication::translate("LCFile", "Help!", 0, QApplication::UnicodeUTF8));
    pushButtonHelp->setText(QApplication::translate("LCFile", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(LCFile);
    } // retranslateUi

};

namespace Ui {
    class LCFile: public Ui_LCFile {};
} // namespace Ui

#endif // UI_LCFILE_H
