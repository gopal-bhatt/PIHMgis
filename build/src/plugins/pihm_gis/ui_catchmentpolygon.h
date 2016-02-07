/********************************************************************************
** Form generated from reading ui file 'catchmentpolygon.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CATCHMENTPOLYGON_H
#define UI_CATCHMENTPOLYGON_H

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

class Ui_CatchmentPolygon
{
public:
    Q3TextBrowser *messageLog;
    QPushButton *closeButton;
    QPushButton *helpButton;
    QPushButton *runButton;
    Q3ButtonGroup *buttonGroup2;
    QCheckBox *showSG_DFrame;
    QLineEdit *outputFileLineEdit;
    QPushButton *outputBrowseButton;
    QLabel *textLabel1_2;
    Q3ButtonGroup *buttonGroup1;
    QLabel *textLabel1;
    QLineEdit *inputFileLineEdit;
    QPushButton *inputBrowseButton;

    void setupUi(QDialog *CatchmentPolygon)
    {
    if (CatchmentPolygon->objectName().isEmpty())
        CatchmentPolygon->setObjectName(QString::fromUtf8("CatchmentPolygon"));
    CatchmentPolygon->resize(607, 410);
    messageLog = new Q3TextBrowser(CatchmentPolygon);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(14, 269, 581, 130));
    closeButton = new QPushButton(CatchmentPolygon);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(394, 229, 98, 32));
    closeButton->setAutoDefault(false);
    helpButton = new QPushButton(CatchmentPolygon);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(11, 229, 98, 32));
    helpButton->setAutoDefault(false);
    runButton = new QPushButton(CatchmentPolygon);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(504, 229, 98, 32));
    runButton->setAutoDefault(false);
    buttonGroup2 = new Q3ButtonGroup(CatchmentPolygon);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(14, 116, 581, 100));
    showSG_DFrame = new QCheckBox(buttonGroup2);
    showSG_DFrame->setObjectName(QString::fromUtf8("showSG_DFrame"));
    showSG_DFrame->setGeometry(QRect(350, 73, 140, 21));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(8);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    showSG_DFrame->setFont(font);
    showSG_DFrame->setChecked(true);
    outputFileLineEdit = new QLineEdit(buttonGroup2);
    outputFileLineEdit->setObjectName(QString::fromUtf8("outputFileLineEdit"));
    outputFileLineEdit->setGeometry(QRect(147, 41, 325, 29));
    outputBrowseButton = new QPushButton(buttonGroup2);
    outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));
    outputBrowseButton->setGeometry(QRect(478, 40, 98, 32));
    outputBrowseButton->setAutoDefault(false);
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(19, 40, 125, 31));
    buttonGroup1 = new Q3ButtonGroup(CatchmentPolygon);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(14, 7, 581, 101));
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(21, 43, 100, 31));
    inputFileLineEdit = new QLineEdit(buttonGroup1);
    inputFileLineEdit->setObjectName(QString::fromUtf8("inputFileLineEdit"));
    inputFileLineEdit->setGeometry(QRect(147, 44, 325, 29));
    inputBrowseButton = new QPushButton(buttonGroup1);
    inputBrowseButton->setObjectName(QString::fromUtf8("inputBrowseButton"));
    inputBrowseButton->setGeometry(QRect(478, 43, 98, 32));
    inputBrowseButton->setCheckable(false);
    inputBrowseButton->setAutoDefault(false);
    inputBrowseButton->setFlat(false);

    retranslateUi(CatchmentPolygon);

    QMetaObject::connectSlotsByName(CatchmentPolygon);
    } // setupUi

    void retranslateUi(QDialog *CatchmentPolygon)
    {
    CatchmentPolygon->setWindowTitle(QApplication::translate("CatchmentPolygon", "Catchment Polygon", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("CatchmentPolygon", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("CatchmentPolygon", "Help", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("CatchmentPolygon", "Run", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QApplication::translate("CatchmentPolygon", "Output", 0, QApplication::UnicodeUTF8));
    showSG_DFrame->setText(QApplication::translate("CatchmentPolygon", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("CatchmentPolygon", "Browse", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("CatchmentPolygon", "Catchment Polygon", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("CatchmentPolygon", "Input", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("CatchmentPolygon", "Catchment Grid", 0, QApplication::UnicodeUTF8));
    inputBrowseButton->setText(QApplication::translate("CatchmentPolygon", "Browse", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CatchmentPolygon);
    } // retranslateUi

};

namespace Ui {
    class CatchmentPolygon: public Ui_CatchmentPolygon {};
} // namespace Ui

#endif // UI_CATCHMENTPOLYGON_H
