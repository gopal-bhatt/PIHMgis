/********************************************************************************
** Form generated from reading ui file 'runtriangle.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_RUNTRIANGLE_H
#define UI_RUNTRIANGLE_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_runTriangle
{
public:
    Q3ButtonGroup *inputPolyFileGroup;
    QPushButton *polyFileBrowseButton;
    QLineEdit *polyFileLineEdit;
    QLabel *label;
    Q3ButtonGroup *Options;
    QLineEdit *qOptionLineEdit;
    QLineEdit *aOptionLineEdit;
    QLineEdit *otherOptionLineEdit;
    QCheckBox *otherOptionCheckBox;
    QLabel *aOptionLabel;
    QCheckBox *nOptionCheckBox;
    QCheckBox *VOptionsCheckBox;
    QCheckBox *qOptionsCheckBox;
    QLabel *qOptionLabel;
    QCheckBox *aOptionsCheckBox;
    QPushButton *showOptionsButton;
    Q3TextBrowser *MessageLog;
    QPushButton *runButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;

    void setupUi(QDialog *runTriangle)
    {
    if (runTriangle->objectName().isEmpty())
        runTriangle->setObjectName(QString::fromUtf8("runTriangle"));
    runTriangle->resize(600, 579);
    inputPolyFileGroup = new Q3ButtonGroup(runTriangle);
    inputPolyFileGroup->setObjectName(QString::fromUtf8("inputPolyFileGroup"));
    inputPolyFileGroup->setGeometry(QRect(11, 283, 578, 100));
    polyFileBrowseButton = new QPushButton(inputPolyFileGroup);
    polyFileBrowseButton->setObjectName(QString::fromUtf8("polyFileBrowseButton"));
    polyFileBrowseButton->setGeometry(QRect(470, 43, 98, 32));
    polyFileBrowseButton->setAutoDefault(false);
    polyFileLineEdit = new QLineEdit(inputPolyFileGroup);
    polyFileLineEdit->setObjectName(QString::fromUtf8("polyFileLineEdit"));
    polyFileLineEdit->setGeometry(QRect(110, 44, 340, 28));
    label = new QLabel(inputPolyFileGroup);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(22, 50, 61, 16));
    Options = new Q3ButtonGroup(runTriangle);
    Options->setObjectName(QString::fromUtf8("Options"));
    Options->setGeometry(QRect(11, 10, 578, 270));
    qOptionLineEdit = new QLineEdit(Options);
    qOptionLineEdit->setObjectName(QString::fromUtf8("qOptionLineEdit"));
    qOptionLineEdit->setGeometry(QRect(50, 122, 90, 29));
    aOptionLineEdit = new QLineEdit(Options);
    aOptionLineEdit->setObjectName(QString::fromUtf8("aOptionLineEdit"));
    aOptionLineEdit->setGeometry(QRect(50, 190, 90, 29));
    otherOptionLineEdit = new QLineEdit(Options);
    otherOptionLineEdit->setObjectName(QString::fromUtf8("otherOptionLineEdit"));
    otherOptionLineEdit->setGeometry(QRect(180, 230, 90, 29));
    otherOptionCheckBox = new QCheckBox(Options);
    otherOptionCheckBox->setObjectName(QString::fromUtf8("otherOptionCheckBox"));
    otherOptionCheckBox->setGeometry(QRect(21, 231, 130, 26));
    aOptionLabel = new QLabel(Options);
    aOptionLabel->setObjectName(QString::fromUtf8("aOptionLabel"));
    aOptionLabel->setGeometry(QRect(160, 192, 151, 22));
    nOptionCheckBox = new QCheckBox(Options);
    nOptionCheckBox->setObjectName(QString::fromUtf8("nOptionCheckBox"));
    nOptionCheckBox->setGeometry(QRect(20, 26, 541, 26));
    VOptionsCheckBox = new QCheckBox(Options);
    VOptionsCheckBox->setObjectName(QString::fromUtf8("VOptionsCheckBox"));
    VOptionsCheckBox->setGeometry(QRect(21, 58, 541, 26));
    qOptionsCheckBox = new QCheckBox(Options);
    qOptionsCheckBox->setObjectName(QString::fromUtf8("qOptionsCheckBox"));
    qOptionsCheckBox->setGeometry(QRect(21, 92, 541, 26));
    qOptionLabel = new QLabel(Options);
    qOptionLabel->setObjectName(QString::fromUtf8("qOptionLabel"));
    qOptionLabel->setGeometry(QRect(160, 120, 251, 31));
    aOptionsCheckBox = new QCheckBox(Options);
    aOptionsCheckBox->setObjectName(QString::fromUtf8("aOptionsCheckBox"));
    aOptionsCheckBox->setGeometry(QRect(21, 159, 541, 26));
    showOptionsButton = new QPushButton(Options);
    showOptionsButton->setObjectName(QString::fromUtf8("showOptionsButton"));
    showOptionsButton->setGeometry(QRect(150, 229, 20, 32));
    showOptionsButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(runTriangle);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(12, 438, 578, 131));
    runButton = new QPushButton(runTriangle);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(495, 393, 98, 34));
    runButton->setAutoDefault(false);
    cancelButton = new QPushButton(runTriangle);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(380, 393, 98, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(runTriangle);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(8, 393, 98, 34));
    helpButton->setAutoDefault(false);

    retranslateUi(runTriangle);

    QMetaObject::connectSlotsByName(runTriangle);
    } // setupUi

    void retranslateUi(QDialog *runTriangle)
    {
    runTriangle->setWindowTitle(QApplication::translate("runTriangle", "Run TRIANGLE", 0, QApplication::UnicodeUTF8));
    inputPolyFileGroup->setTitle(QApplication::translate("runTriangle", "Input a Poly File", 0, QApplication::UnicodeUTF8));
    polyFileBrowseButton->setText(QApplication::translate("runTriangle", "Browse", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("runTriangle", "PSLG File", 0, QApplication::UnicodeUTF8));
    Options->setTitle(QApplication::translate("runTriangle", "Options", 0, QApplication::UnicodeUTF8));
    otherOptionCheckBox->setText(QApplication::translate("runTriangle", "Other options", 0, QApplication::UnicodeUTF8));
    aOptionLabel->setText(QApplication::translate("runTriangle", "Area (square meters)", 0, QApplication::UnicodeUTF8));
    nOptionCheckBox->setText(QApplication::translate("runTriangle", "-n : Generate a list of triangle neighbours.", 0, QApplication::UnicodeUTF8));
    VOptionsCheckBox->setText(QApplication::translate("runTriangle", "-V : Verbose if checked. Quiet otherwise.", 0, QApplication::UnicodeUTF8));
    qOptionsCheckBox->setText(QApplication::translate("runTriangle", "-q : Quality Mesh generation. A minimum angle may be specified.", 0, QApplication::UnicodeUTF8));
    qOptionLabel->setText(QApplication::translate("runTriangle", "Angle (in Degree)", 0, QApplication::UnicodeUTF8));
    aOptionsCheckBox->setText(QApplication::translate("runTriangle", "-a : Apply a maximum triangle area constraint.", 0, QApplication::UnicodeUTF8));
    showOptionsButton->setText(QApplication::translate("runTriangle", "?", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("runTriangle", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("runTriangle", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("runTriangle", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(runTriangle);
    } // retranslateUi

};

namespace Ui {
    class runTriangle: public Ui_runTriangle {};
} // namespace Ui

#endif // UI_RUNTRIANGLE_H
