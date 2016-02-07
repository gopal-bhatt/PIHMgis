/********************************************************************************
** Form generated from reading ui file 'mshfile.ui'
**
** Created: Tue Jul 27 23:38:18 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MSHFILE_H
#define UI_MSHFILE_H

#include <Qt3Support/Q3ButtonGroup>
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

class Ui_MshFileGeneration
{
public:
    Q3ButtonGroup *shapeFileGroup;
    QLabel *nodeFileLabel;
    QLabel *eleFileLabel;
    QLabel *neighFileLabel;
    QLabel *nodeFileLabel_2;
    QPushButton *eleFileButton;
    QPushButton *nodeFileButton;
    QPushButton *neighFileButton;
    QPushButton *sElevFileButton;
    QLineEdit *eleFileLineEdit;
    QLineEdit *nodeFileLineEdit;
    QLineEdit *neighFileLineEdit;
    QLineEdit *sElevFileLineEdit;
    QGroupBox *groupBox;
    QLineEdit *bElevFileLineEdit;
    QLabel *label;
    QPushButton *bElevFileButton;
    QLabel *neighFileLabel_2;
    QLineEdit *lineEdit;
    QRadioButton *radioButtonUni;
    QRadioButton *radioButtonFile;
    QLineEdit *rivFileLineEdit;
    QLabel *nodeFileLabel_3;
    QPushButton *rivFileButton;
    Q3TextBrowser *MessageLog;
    Q3ButtonGroup *shapeFileNameGroup;
    QLabel *mshFileLabel;
    QPushButton *mshFileButton;
    QLineEdit *mshFileLineEdit;
    QPushButton *runButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;

    void setupUi(QDialog *MshFileGeneration)
    {
    if (MshFileGeneration->objectName().isEmpty())
        MshFileGeneration->setObjectName(QString::fromUtf8("MshFileGeneration"));
    MshFileGeneration->resize(600, 541);
    shapeFileGroup = new Q3ButtonGroup(MshFileGeneration);
    shapeFileGroup->setObjectName(QString::fromUtf8("shapeFileGroup"));
    shapeFileGroup->setGeometry(QRect(13, 4, 572, 291));
    nodeFileLabel = new QLabel(shapeFileGroup);
    nodeFileLabel->setObjectName(QString::fromUtf8("nodeFileLabel"));
    nodeFileLabel->setGeometry(QRect(20, 57, 72, 38));
    nodeFileLabel->setFrameShape(QFrame::NoFrame);
    nodeFileLabel->setFrameShadow(QFrame::Plain);
    eleFileLabel = new QLabel(shapeFileGroup);
    eleFileLabel->setObjectName(QString::fromUtf8("eleFileLabel"));
    eleFileLabel->setGeometry(QRect(20, 22, 94, 38));
    neighFileLabel = new QLabel(shapeFileGroup);
    neighFileLabel->setObjectName(QString::fromUtf8("neighFileLabel"));
    neighFileLabel->setGeometry(QRect(20, 98, 100, 38));
    neighFileLabel->setFrameShape(QFrame::NoFrame);
    neighFileLabel->setFrameShadow(QFrame::Plain);
    nodeFileLabel_2 = new QLabel(shapeFileGroup);
    nodeFileLabel_2->setObjectName(QString::fromUtf8("nodeFileLabel_2"));
    nodeFileLabel_2->setGeometry(QRect(20, 169, 131, 38));
    nodeFileLabel_2->setFrameShape(QFrame::NoFrame);
    nodeFileLabel_2->setFrameShadow(QFrame::Plain);
    eleFileButton = new QPushButton(shapeFileGroup);
    eleFileButton->setObjectName(QString::fromUtf8("eleFileButton"));
    eleFileButton->setGeometry(QRect(469, 27, 98, 32));
    eleFileButton->setAutoDefault(false);
    nodeFileButton = new QPushButton(shapeFileGroup);
    nodeFileButton->setObjectName(QString::fromUtf8("nodeFileButton"));
    nodeFileButton->setGeometry(QRect(469, 64, 98, 32));
    nodeFileButton->setAutoDefault(false);
    neighFileButton = new QPushButton(shapeFileGroup);
    neighFileButton->setObjectName(QString::fromUtf8("neighFileButton"));
    neighFileButton->setGeometry(QRect(469, 102, 98, 32));
    neighFileButton->setAutoDefault(false);
    sElevFileButton = new QPushButton(shapeFileGroup);
    sElevFileButton->setObjectName(QString::fromUtf8("sElevFileButton"));
    sElevFileButton->setGeometry(QRect(469, 174, 98, 32));
    sElevFileButton->setAutoDefault(false);
    eleFileLineEdit = new QLineEdit(shapeFileGroup);
    eleFileLineEdit->setObjectName(QString::fromUtf8("eleFileLineEdit"));
    eleFileLineEdit->setGeometry(QRect(162, 32, 294, 22));
    nodeFileLineEdit = new QLineEdit(shapeFileGroup);
    nodeFileLineEdit->setObjectName(QString::fromUtf8("nodeFileLineEdit"));
    nodeFileLineEdit->setGeometry(QRect(162, 68, 294, 22));
    neighFileLineEdit = new QLineEdit(shapeFileGroup);
    neighFileLineEdit->setObjectName(QString::fromUtf8("neighFileLineEdit"));
    neighFileLineEdit->setGeometry(QRect(162, 106, 294, 22));
    sElevFileLineEdit = new QLineEdit(shapeFileGroup);
    sElevFileLineEdit->setObjectName(QString::fromUtf8("sElevFileLineEdit"));
    sElevFileLineEdit->setGeometry(QRect(162, 178, 294, 22));
    groupBox = new QGroupBox(shapeFileGroup);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(10, 210, 551, 71));
    bElevFileLineEdit = new QLineEdit(groupBox);
    bElevFileLineEdit->setObjectName(QString::fromUtf8("bElevFileLineEdit"));
    bElevFileLineEdit->setEnabled(true);
    bElevFileLineEdit->setGeometry(QRect(153, 14, 294, 22));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(60, 45, 121, 20));
    bElevFileButton = new QPushButton(groupBox);
    bElevFileButton->setObjectName(QString::fromUtf8("bElevFileButton"));
    bElevFileButton->setEnabled(true);
    bElevFileButton->setGeometry(QRect(450, 12, 98, 32));
    bElevFileButton->setAutoDefault(false);
    neighFileLabel_2 = new QLabel(groupBox);
    neighFileLabel_2->setObjectName(QString::fromUtf8("neighFileLabel_2"));
    neighFileLabel_2->setGeometry(QRect(10, 12, 134, 38));
    neighFileLabel_2->setFrameShape(QFrame::NoFrame);
    neighFileLabel_2->setFrameShadow(QFrame::Plain);
    lineEdit = new QLineEdit(groupBox);
    lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
    lineEdit->setGeometry(QRect(153, 14, 113, 22));
    radioButtonUni = new QRadioButton(groupBox);
    radioButtonUni->setObjectName(QString::fromUtf8("radioButtonUni"));
    radioButtonUni->setGeometry(QRect(190, 43, 151, 20));
    radioButtonUni->setChecked(true);
    radioButtonFile = new QRadioButton(groupBox);
    radioButtonFile->setObjectName(QString::fromUtf8("radioButtonFile"));
    radioButtonFile->setGeometry(QRect(340, 43, 121, 20));
    rivFileLineEdit = new QLineEdit(shapeFileGroup);
    rivFileLineEdit->setObjectName(QString::fromUtf8("rivFileLineEdit"));
    rivFileLineEdit->setGeometry(QRect(162, 144, 294, 22));
    nodeFileLabel_3 = new QLabel(shapeFileGroup);
    nodeFileLabel_3->setObjectName(QString::fromUtf8("nodeFileLabel_3"));
    nodeFileLabel_3->setGeometry(QRect(20, 135, 131, 38));
    nodeFileLabel_3->setFrameShape(QFrame::NoFrame);
    nodeFileLabel_3->setFrameShadow(QFrame::Plain);
    rivFileButton = new QPushButton(shapeFileGroup);
    rivFileButton->setObjectName(QString::fromUtf8("rivFileButton"));
    rivFileButton->setGeometry(QRect(469, 140, 98, 32));
    rivFileButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(MshFileGeneration);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(13, 403, 570, 130));
    MessageLog->setLayoutDirection(Qt::LeftToRight);
    shapeFileNameGroup = new Q3ButtonGroup(MshFileGeneration);
    shapeFileNameGroup->setObjectName(QString::fromUtf8("shapeFileNameGroup"));
    shapeFileNameGroup->setGeometry(QRect(13, 301, 572, 60));
    mshFileLabel = new QLabel(shapeFileNameGroup);
    mshFileLabel->setObjectName(QString::fromUtf8("mshFileLabel"));
    mshFileLabel->setGeometry(QRect(20, 9, 135, 38));
    mshFileButton = new QPushButton(shapeFileNameGroup);
    mshFileButton->setObjectName(QString::fromUtf8("mshFileButton"));
    mshFileButton->setGeometry(QRect(467, 14, 98, 32));
    mshFileButton->setAutoDefault(false);
    mshFileButton->setDefault(true);
    mshFileLineEdit = new QLineEdit(shapeFileNameGroup);
    mshFileLineEdit->setObjectName(QString::fromUtf8("mshFileLineEdit"));
    mshFileLineEdit->setGeometry(QRect(161, 16, 294, 25));
    mshFileLineEdit->setCursorPosition(0);
    runButton = new QPushButton(MshFileGeneration);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(490, 365, 98, 34));
    runButton->setAutoDefault(false);
    cancelButton = new QPushButton(MshFileGeneration);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(390, 365, 98, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(MshFileGeneration);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(13, 365, 98, 34));
    helpButton->setAutoDefault(false);

    retranslateUi(MshFileGeneration);
    QObject::connect(radioButtonFile, SIGNAL(toggled(bool)), bElevFileLineEdit, SLOT(setShown(bool)));
    QObject::connect(radioButtonFile, SIGNAL(toggled(bool)), bElevFileButton, SLOT(setShown(bool)));
    QObject::connect(radioButtonUni, SIGNAL(toggled(bool)), lineEdit, SLOT(setShown(bool)));

    QMetaObject::connectSlotsByName(MshFileGeneration);
    } // setupUi

    void retranslateUi(QDialog *MshFileGeneration)
    {
    MshFileGeneration->setWindowTitle(QApplication::translate("MshFileGeneration", "Mesh File Generation", 0, QApplication::UnicodeUTF8));
    shapeFileGroup->setTitle(QApplication::translate("MshFileGeneration", "Input Files", 0, QApplication::UnicodeUTF8));
    nodeFileLabel->setText(QApplication::translate("MshFileGeneration", "Node File", 0, QApplication::UnicodeUTF8));
    eleFileLabel->setText(QApplication::translate("MshFileGeneration", "Element File", 0, QApplication::UnicodeUTF8));
    neighFileLabel->setText(QApplication::translate("MshFileGeneration", "Neighbor File", 0, QApplication::UnicodeUTF8));
    nodeFileLabel_2->setText(QApplication::translate("MshFileGeneration", "Surface Elevation", 0, QApplication::UnicodeUTF8));
    eleFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    nodeFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    neighFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    sElevFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    label->setText(QApplication::translate("MshFileGeneration", "Select Input Type", 0, QApplication::UnicodeUTF8));
    bElevFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    neighFileLabel_2->setText(QApplication::translate("MshFileGeneration", "Bed Depth", 0, QApplication::UnicodeUTF8));
    lineEdit->setText(QApplication::translate("MshFileGeneration", "5", 0, QApplication::UnicodeUTF8));
    radioButtonUni->setText(QApplication::translate("MshFileGeneration", "Uniform Depth (m)", 0, QApplication::UnicodeUTF8));
    radioButtonFile->setText(QApplication::translate("MshFileGeneration", "Elevation File", 0, QApplication::UnicodeUTF8));
    nodeFileLabel_3->setText(QApplication::translate("MshFileGeneration", "River File", 0, QApplication::UnicodeUTF8));
    rivFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    shapeFileNameGroup->setTitle(QString());
    mshFileLabel->setText(QApplication::translate("MshFileGeneration", "Output Mesh File", 0, QApplication::UnicodeUTF8));
    mshFileButton->setText(QApplication::translate("MshFileGeneration", "Browse...", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("MshFileGeneration", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("MshFileGeneration", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("MshFileGeneration", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MshFileGeneration);
    } // retranslateUi

};

namespace Ui {
    class MshFileGeneration: public Ui_MshFileGeneration {};
} // namespace Ui

#endif // UI_MSHFILE_H
