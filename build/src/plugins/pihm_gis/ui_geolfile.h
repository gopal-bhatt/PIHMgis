/********************************************************************************
** Form generated from reading ui file 'geolfile.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_GEOLFILE_H
#define UI_GEOLFILE_H

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

class Ui_GeolFile
{
public:
    QPushButton *pushButtonRun;
    QPushButton *pushButtonClose;
    Q3TextBrowser *textBrowser;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLineEdit *lineEditGeolFile;
    QPushButton *pushButtonGeolFile;
    QPushButton *pushButtonHelp;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEditGeolTexture;
    QPushButton *pushButtonGeolTexture;

    void setupUi(QDialog *GeolFile)
    {
    if (GeolFile->objectName().isEmpty())
        GeolFile->setObjectName(QString::fromUtf8("GeolFile"));
    GeolFile->resize(600, 400);
    pushButtonRun = new QPushButton(GeolFile);
    pushButtonRun->setObjectName(QString::fromUtf8("pushButtonRun"));
    pushButtonRun->setGeometry(QRect(473, 227, 113, 32));
    pushButtonClose = new QPushButton(GeolFile);
    pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
    pushButtonClose->setGeometry(QRect(330, 227, 113, 32));
    textBrowser = new Q3TextBrowser(GeolFile);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setGeometry(QRect(21, 273, 561, 111));
    groupBox_2 = new QGroupBox(GeolFile);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setGeometry(QRect(20, 109, 561, 101));
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 50, 61, 17));
    lineEditGeolFile = new QLineEdit(groupBox_2);
    lineEditGeolFile->setObjectName(QString::fromUtf8("lineEditGeolFile"));
    lineEditGeolFile->setGeometry(QRect(110, 50, 321, 22));
    pushButtonGeolFile = new QPushButton(groupBox_2);
    pushButtonGeolFile->setObjectName(QString::fromUtf8("pushButtonGeolFile"));
    pushButtonGeolFile->setGeometry(QRect(440, 46, 113, 32));
    pushButtonHelp = new QPushButton(GeolFile);
    pushButtonHelp->setObjectName(QString::fromUtf8("pushButtonHelp"));
    pushButtonHelp->setGeometry(QRect(15, 227, 113, 32));
    groupBox = new QGroupBox(GeolFile);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(20, 4, 561, 101));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 50, 81, 17));
    lineEditGeolTexture = new QLineEdit(groupBox);
    lineEditGeolTexture->setObjectName(QString::fromUtf8("lineEditGeolTexture"));
    lineEditGeolTexture->setGeometry(QRect(110, 50, 321, 22));
    pushButtonGeolTexture = new QPushButton(groupBox);
    pushButtonGeolTexture->setObjectName(QString::fromUtf8("pushButtonGeolTexture"));
    pushButtonGeolTexture->setGeometry(QRect(440, 46, 113, 32));

    retranslateUi(GeolFile);

    QMetaObject::connectSlotsByName(GeolFile);
    } // setupUi

    void retranslateUi(QDialog *GeolFile)
    {
    GeolFile->setWindowTitle(QApplication::translate("GeolFile", "GeolFile", 0, QApplication::UnicodeUTF8));
    pushButtonRun->setText(QApplication::translate("GeolFile", "Run", 0, QApplication::UnicodeUTF8));
    pushButtonClose->setText(QApplication::translate("GeolFile", "Close", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("GeolFile", "Output", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("GeolFile", ".geol File", 0, QApplication::UnicodeUTF8));
    pushButtonGeolFile->setToolTip(QApplication::translate("GeolFile", "Save GEOL file to...", 0, QApplication::UnicodeUTF8));
    pushButtonGeolFile->setText(QApplication::translate("GeolFile", "Browse...", 0, QApplication::UnicodeUTF8));
    pushButtonHelp->setText(QApplication::translate("GeolFile", "Help", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("GeolFile", "Input", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("GeolFile", "Geol Texture", 0, QApplication::UnicodeUTF8));
    lineEditGeolTexture->setToolTip(QString());
    pushButtonGeolTexture->setToolTip(QApplication::translate("GeolFile", "Browse Geol Texture File { (1) MUKEY (2) SILT (3) CLAY (4) ORGANIC_MATTER (5) BULK_DENSITY }", 0, QApplication::UnicodeUTF8));
    pushButtonGeolTexture->setText(QApplication::translate("GeolFile", "Browse...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GeolFile);
    } // retranslateUi

};

namespace Ui {
    class GeolFile: public Ui_GeolFile {};
} // namespace Ui

#endif // UI_GEOLFILE_H
