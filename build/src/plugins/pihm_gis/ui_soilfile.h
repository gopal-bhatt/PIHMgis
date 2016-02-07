/********************************************************************************
** Form generated from reading ui file 'soilfile.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SOILFILE_H
#define UI_SOILFILE_H

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

class Ui_SoilFile
{
public:
    QPushButton *pushButtonRun;
    QPushButton *pushButtonClose;
    Q3TextBrowser *textBrowser;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEditSoilTexture;
    QPushButton *pushButtonSoilTexture;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLineEdit *lineEditSoilFile;
    QPushButton *pushButtonSoilFile;
    QPushButton *pushButtonHelp;

    void setupUi(QDialog *SoilFile)
    {
    if (SoilFile->objectName().isEmpty())
        SoilFile->setObjectName(QString::fromUtf8("SoilFile"));
    SoilFile->resize(600, 400);
    pushButtonRun = new QPushButton(SoilFile);
    pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
    pushButtonRun->setGeometry(QRect(473, 228, 113, 32));
    pushButtonClose = new QPushButton(SoilFile);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(330, 228, 113, 32));
    textBrowser = new Q3TextBrowser(SoilFile);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(21, 274, 561, 111));
    groupBox = new QGroupBox(SoilFile);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(20, 5, 561, 101));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 50, 81, 17));
    lineEditSoilTexture = new QLineEdit(groupBox);
    lineEditSoilTexture->setObjectName(QString::fromUtf8("lineEditSoilTexture"));
    lineEditSoilTexture->setGeometry(QRect(110, 50, 321, 22));
    pushButtonSoilTexture = new QPushButton(groupBox);
    pushButtonSoilTexture->setObjectName(QString::fromUtf8("pushButtonSoilTexture"));
    pushButtonSoilTexture->setGeometry(QRect(440, 46, 113, 32));
    groupBox_2 = new QGroupBox(SoilFile);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(20, 110, 561, 101));
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 50, 61, 17));
    lineEditSoilFile = new QLineEdit(groupBox_2);
    lineEditSoilFile->setObjectName(QString::fromUtf8("lineEditSoilFile"));
    lineEditSoilFile->setGeometry(QRect(110, 50, 321, 22));
    pushButtonSoilFile = new QPushButton(groupBox_2);
    pushButtonSoilFile->setObjectName(QString::fromUtf8("pushButtonSoilFile"));
    pushButtonSoilFile->setGeometry(QRect(440, 46, 113, 32));
    pushButtonHelp = new QPushButton(SoilFile);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(15, 228, 113, 32));

    retranslateUi(SoilFile);

    QMetaObject::connectSlotsByName(SoilFile);
    } // setupUi

    void retranslateUi(QDialog *SoilFile)
    {
    SoilFile->setWindowTitle(QApplication::translate("SoilFile", "SoilFile", 0, QApplication::UnicodeUTF8));
    pushButtonRun->setText(QApplication::translate("SoilFile", "Run", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("SoilFile", "Close", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("SoilFile", "Input", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("SoilFile", "Soil Texture", 0, QApplication::UnicodeUTF8));
    lineEditSoilTexture->setToolTip(QApplication::translate("SoilFile", "Browse Soil File {Format - (1) MUKEY (2) SILT (3) CLAY (4) ORGANIC_MATTER (5) BULK_DENSITY}", 0, QApplication::UnicodeUTF8));
    pushButtonSoilTexture->setToolTip(QApplication::translate("SoilFile", "Browse Soil Texture File { (1) MUKEY (2) SILT (3) CLAY (4) ORGANIC_MATTER (5) BULK_DENSITY }", 0, QApplication::UnicodeUTF8));
    pushButtonSoilTexture->setText(QApplication::translate("SoilFile", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("SoilFile", "Output", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("SoilFile", ".soil File", 0, QApplication::UnicodeUTF8));
    pushButtonSoilFile->setToolTip(QApplication::translate("SoilFile", "Save SOIL file to...", 0, QApplication::UnicodeUTF8));
    pushButtonSoilFile->setText(QApplication::translate("SoilFile", "Browse...", 0, QApplication::UnicodeUTF8));
    pushButtonHelp->setText(QApplication::translate("SoilFile", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(SoilFile);
    } // retranslateUi

};

namespace Ui {
    class SoilFile: public Ui_SoilFile {};
} // namespace Ui

#endif // UI_SOILFILE_H
