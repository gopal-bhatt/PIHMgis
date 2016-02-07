/********************************************************************************
** Form generated from reading ui file 'runpihm.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RUNPIHM_H
#define UI_RUNPIHM_H

#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

class Ui_runPIHM
{
public:
    Q3TextBrowser *textBrowser;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEditFile;
    QCheckBox *checkBox;
    QPushButton *browseButton;
    QGroupBox *groupBox_2;
    QProgressBar *progressBar;
    QPushButton *helpButton;
    QPushButton *cancelButton;
    QPushButton *runButton;

    void setupUi(QDialog *runPIHM)
    {
    if (runPIHM->objectName().isEmpty())
        runPIHM->setObjectName(QString::fromUtf8("runPIHM"));
    runPIHM->resize(555, 347);
    textBrowser = new Q3TextBrowser(runPIHM);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(12, 215, 531, 121));
    groupBox = new QGroupBox(runPIHM);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(12, 10, 531, 121));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(15, 26, 131, 17));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(15, 76, 102, 17));
    lineEdit = new QLineEdit(groupBox);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(142, 24, 281, 23));
    lineEdit->setFocusPolicy(Qt::StrongFocus);
    lineEdit->setCursorPosition(0);
    lineEditFile = new QLineEdit(groupBox);
    lineEditFile->setObjectName(QString::fromUtf8("lineEditFile"));
    lineEditFile->setGeometry(QRect(142, 76, 151, 23));
    checkBox = new QCheckBox(groupBox);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));
    checkBox->setGeometry(QRect(340, 76, 151, 20));
    checkBox->setChecked(true);
    browseButton = new QPushButton(groupBox);
    browseButton->setObjectName(QString::fromUtf8("browseButton"));
    browseButton->setGeometry(QRect(426, 21, 98, 32));
    groupBox_2 = new QGroupBox(runPIHM);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(12, 146, 531, 56));
    progressBar = new QProgressBar(groupBox_2);
    progressBar->setObjectName(QString::fromUtf8("progressBar"));
    progressBar->setGeometry(QRect(108, 18, 216, 25));
    progressBar->setValue(0);
    progressBar->setOrientation(Qt::Horizontal);
    helpButton = new QPushButton(groupBox_2);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(5, 13, 98, 32));
    cancelButton = new QPushButton(groupBox_2);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(330, 13, 98, 32));
    runButton = new QPushButton(groupBox_2);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(430, 13, 98, 32));
    runButton->setDefault(true);

    retranslateUi(runPIHM);

    QMetaObject::connectSlotsByName(runPIHM);
    } // setupUi

    void retranslateUi(QDialog *runPIHM)
    {
    runPIHM->setWindowTitle(QApplication::translate("runPIHM", "PIHM", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    label->setText(QApplication::translate("runPIHM", "Select Input Folder", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("runPIHM", "Input File ID", 0, QApplication::UnicodeUTF8));
    checkBox->setToolTip(QApplication::translate("runPIHM", "This creates a new Folder (Simul__) for each simulation run where all the model input and output is stored.", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("runPIHM", "Create New Folder", 0, QApplication::UnicodeUTF8));
    browseButton->setText(QApplication::translate("runPIHM", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QString());
    helpButton->setText(QApplication::translate("runPIHM", "Help", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("runPIHM", " Stop ", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("runPIHM", " RUN ", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(runPIHM);
    } // retranslateUi

};

namespace Ui {
    class runPIHM: public Ui_runPIHM {};
} // namespace Ui

#endif // UI_RUNPIHM_H
