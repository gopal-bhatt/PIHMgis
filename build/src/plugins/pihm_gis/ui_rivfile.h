/********************************************************************************
** Form generated from reading ui file 'rivfile.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RIVFILE_H
#define UI_RIVFILE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
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
#include <QtGui/QRadioButton>

class Ui_rivfile
{
public:
    Q3GroupBox *groupBox1;
    QLabel *textLabel4_2_5_2;
    QLabel *textLabel4_2_5_2_2;
    QLabel *textLabel4_2_5_2_3;
    QLabel *textLabel4_2_5;
    QLineEdit *eleLineEdit;
    QLineEdit *nodeLineEdit;
    QLineEdit *neighLineEdit;
    QPushButton *eleFileButton;
    QPushButton *nodeFileButton;
    QPushButton *neighFileButton;
    QLineEdit *riverLineEdit;
    QPushButton *riverFileButton;
    Q3GroupBox *groupBox1_3;
    QLabel *textLabel4_2_5_4;
    QPushButton *rivFileButton;
    QLineEdit *rivLineEdit;
    QPushButton *cancelButton;
    QPushButton *helpButton;
    Q3TextBrowser *messageLog;
    QPushButton *runButton;
    QGroupBox *groupBox;
    QRadioButton *one;
    QRadioButton *two;
    QRadioButton *three;
    QRadioButton *four;

    void setupUi(QDialog *rivfile)
    {
    if (rivfile->objectName().isEmpty())
        rivfile->setObjectName(QString::fromUtf8("rivfile"));
    rivfile->resize(600, 505);
    groupBox1 = new Q3GroupBox(rivfile);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setGeometry(QRect(14, 4, 571, 181));
    textLabel4_2_5_2 = new QLabel(groupBox1);
    textLabel4_2_5_2->setObjectName(QString::fromUtf8("textLabel4_2_5_2"));
    textLabel4_2_5_2->setGeometry(QRect(26, 58, 70, 41));
    textLabel4_2_5_2_2 = new QLabel(groupBox1);
    textLabel4_2_5_2_2->setObjectName(QString::fromUtf8("textLabel4_2_5_2_2"));
    textLabel4_2_5_2_2->setGeometry(QRect(26, 98, 70, 41));
    textLabel4_2_5_2_3 = new QLabel(groupBox1);
    textLabel4_2_5_2_3->setObjectName(QString::fromUtf8("textLabel4_2_5_2_3"));
    textLabel4_2_5_2_3->setGeometry(QRect(26, 138, 70, 41));
    textLabel4_2_5 = new QLabel(groupBox1);
    textLabel4_2_5->setObjectName(QString::fromUtf8("textLabel4_2_5"));
    textLabel4_2_5->setGeometry(QRect(26, 20, 70, 41));
    eleLineEdit = new QLineEdit(groupBox1);
    eleLineEdit->setObjectName(QString::fromUtf8("eleLineEdit"));
    eleLineEdit->setGeometry(QRect(116, 68, 325, 22));
    nodeLineEdit = new QLineEdit(groupBox1);
    nodeLineEdit->setObjectName(QString::fromUtf8("nodeLineEdit"));
    nodeLineEdit->setGeometry(QRect(116, 108, 325, 22));
    neighLineEdit = new QLineEdit(groupBox1);
    neighLineEdit->setObjectName(QString::fromUtf8("neighLineEdit"));
    neighLineEdit->setGeometry(QRect(116, 148, 325, 22));
    eleFileButton = new QPushButton(groupBox1);
    eleFileButton->setObjectName(QString::fromUtf8("eleFileButton"));
    eleFileButton->setGeometry(QRect(466, 64, 98, 32));
    eleFileButton->setAutoDefault(false);
    nodeFileButton = new QPushButton(groupBox1);
    nodeFileButton->setObjectName(QString::fromUtf8("nodeFileButton"));
    nodeFileButton->setGeometry(QRect(466, 104, 98, 32));
    nodeFileButton->setAutoDefault(false);
    neighFileButton = new QPushButton(groupBox1);
    neighFileButton->setObjectName(QString::fromUtf8("neighFileButton"));
    neighFileButton->setGeometry(QRect(466, 143, 98, 32));
    neighFileButton->setAutoDefault(false);
    riverLineEdit = new QLineEdit(groupBox1);
    riverLineEdit->setObjectName(QString::fromUtf8("riverLineEdit"));
    riverLineEdit->setGeometry(QRect(116, 31, 325, 22));
    riverFileButton = new QPushButton(groupBox1);
    riverFileButton->setObjectName(QString::fromUtf8("riverFileButton"));
    riverFileButton->setGeometry(QRect(466, 27, 98, 32));
    riverFileButton->setAutoDefault(false);
    groupBox1_3 = new Q3GroupBox(rivfile);
    groupBox1_3->setObjectName(QString::fromUtf8("groupBox1_3"));
    groupBox1_3->setGeometry(QRect(14, 245, 571, 71));
    textLabel4_2_5_4 = new QLabel(groupBox1_3);
    textLabel4_2_5_4->setObjectName(QString::fromUtf8("textLabel4_2_5_4"));
    textLabel4_2_5_4->setGeometry(QRect(26, 26, 70, 41));
    rivFileButton = new QPushButton(groupBox1_3);
    rivFileButton->setObjectName(QString::fromUtf8("rivFileButton"));
    rivFileButton->setGeometry(QRect(466, 31, 98, 32));
    rivFileButton->setAutoDefault(false);
    rivLineEdit = new QLineEdit(groupBox1_3);
    rivLineEdit->setObjectName(QString::fromUtf8("rivLineEdit"));
    rivLineEdit->setGeometry(QRect(116, 36, 325, 22));
    cancelButton = new QPushButton(rivfile);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(390, 322, 98, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(rivfile);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(9, 322, 98, 34));
    helpButton->setAutoDefault(false);
    messageLog = new Q3TextBrowser(rivfile);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(12, 365, 575, 130));
    runButton = new QPushButton(rivfile);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(490, 322, 98, 34));
    runButton->setAutoDefault(false);
    groupBox = new QGroupBox(rivfile);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(14, 187, 571, 61));
    one = new QRadioButton(groupBox);
    one->setObjectName(QString::fromUtf8("one"));
    one->setGeometry(QRect(18, 30, 101, 21));
    one->setChecked(false);
    two = new QRadioButton(groupBox);
    two->setObjectName(QString::fromUtf8("two"));
    two->setGeometry(QRect(140, 30, 101, 21));
    three = new QRadioButton(groupBox);
    three->setObjectName(QString::fromUtf8("three"));
    three->setGeometry(QRect(260, 30, 161, 21));
    three->setChecked(true);
    four = new QRadioButton(groupBox);
    four->setObjectName(QString::fromUtf8("four"));
    four->setGeometry(QRect(440, 30, 111, 21));

    retranslateUi(rivfile);

    QMetaObject::connectSlotsByName(rivfile);
    } // setupUi

    void retranslateUi(QDialog *rivfile)
    {
    rivfile->setWindowTitle(QApplication::translate("rivfile", "Riv File Generation", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("rivfile", "Input Files", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_2->setText(QApplication::translate("rivfile", "ele File", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_2_2->setText(QApplication::translate("rivfile", "node File", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_2_3->setText(QApplication::translate("rivfile", "neigh File", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5->setText(QApplication::translate("rivfile", "River File", 0, QApplication::UnicodeUTF8));
    eleFileButton->setText(QApplication::translate("rivfile", "Browse...", 0, QApplication::UnicodeUTF8));
    nodeFileButton->setText(QApplication::translate("rivfile", "Browse...", 0, QApplication::UnicodeUTF8));
    neighFileButton->setText(QApplication::translate("rivfile", "Browse...", 0, QApplication::UnicodeUTF8));
    riverFileButton->setText(QApplication::translate("rivfile", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox1_3->setTitle(QApplication::translate("rivfile", "Output File", 0, QApplication::UnicodeUTF8));
    textLabel4_2_5_4->setText(QApplication::translate("rivfile", "riv File", 0, QApplication::UnicodeUTF8));
    rivFileButton->setText(QApplication::translate("rivfile", "Browse...", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("rivfile", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("rivfile", "Help", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("rivfile", "Run!", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("rivfile", "Boundary Condition", 0, QApplication::UnicodeUTF8));
    one->setText(QApplication::translate("rivfile", "Dirichlet", 0, QApplication::UnicodeUTF8));
    two->setText(QApplication::translate("rivfile", "Neumann", 0, QApplication::UnicodeUTF8));
    three->setText(QApplication::translate("rivfile", "zero-depth-gradient", 0, QApplication::UnicodeUTF8));
    four->setText(QApplication::translate("rivfile", "critical-depth", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(rivfile);
    } // retranslateUi

};

namespace Ui {
    class rivfile: public Ui_rivfile {};
} // namespace Ui

#endif // UI_RIVFILE_H
