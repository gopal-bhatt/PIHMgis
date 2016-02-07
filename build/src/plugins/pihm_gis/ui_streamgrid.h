/********************************************************************************
** Form generated from reading ui file 'streamgrid.ui'
**
** Created: Mon Sep 7 22:45:43 2009
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_STREAMGRID_H
#define UI_STREAMGRID_H

#include <Qt3Support/Q3ButtonGroup>
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

class Ui_StreamGrid
{
public:
    Q3TextBrowser *messageLog;
    Q3ButtonGroup *buttonGroup2;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1_2;
    QLabel *textLabel1_2_2_2;
    QPushButton *outputBrowseButton;
    QLineEdit *outputFileLineEdit;
    QCheckBox *showSG_DFrame;
    QLineEdit *inputThreshLineEdit;
    QPushButton *pushButtonSuggestMe;
    QPushButton *helpButton;
    QPushButton *closeButton;
    QPushButton *runButton;
    Q3ButtonGroup *buttonGroup1;
    QLabel *textLabel1;
    QLineEdit *inputFileLineEdit;
    QPushButton *inputBrowseButton;

    void setupUi(QDialog *StreamGrid)
    {
    if (StreamGrid->objectName().isEmpty())
        StreamGrid->setObjectName(QString::fromUtf8("StreamGrid"));
    StreamGrid->resize(607, 458);
    messageLog = new Q3TextBrowser(StreamGrid);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(10, 319, 581, 130));
    buttonGroup2 = new Q3ButtonGroup(StreamGrid);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(10, 120, 581, 150));
    textLabel1_2_2 = new QLabel(buttonGroup2);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
    textLabel1_2_2->setGeometry(QRect(30, 100, 90, 31));
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(30, 40, 90, 31));
    textLabel1_2_2_2 = new QLabel(buttonGroup2);
    textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
    textLabel1_2_2_2->setGeometry(QRect(31, 122, 60, 20));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(8);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    textLabel1_2_2_2->setFont(font);
    outputBrowseButton = new QPushButton(buttonGroup2);
    outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));
    outputBrowseButton->setGeometry(QRect(470, 40, 81, 32));
    outputBrowseButton->setAutoDefault(false);
    outputFileLineEdit = new QLineEdit(buttonGroup2);
    outputFileLineEdit->setObjectName(QString::fromUtf8("outputFileLineEdit"));
    outputFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    showSG_DFrame = new QCheckBox(buttonGroup2);
    showSG_DFrame->setObjectName(QString::fromUtf8("showSG_DFrame"));
    showSG_DFrame->setGeometry(QRect(336, 73, 140, 21));
    showSG_DFrame->setFont(font);
    showSG_DFrame->setChecked(true);
    inputThreshLineEdit = new QLineEdit(buttonGroup2);
    inputThreshLineEdit->setObjectName(QString::fromUtf8("inputThreshLineEdit"));
    inputThreshLineEdit->setGeometry(QRect(130, 101, 90, 29));
    pushButtonSuggestMe = new QPushButton(buttonGroup2);
    pushButtonSuggestMe->setObjectName(QString::fromUtf8("pushButtonSuggestMe"));
    pushButtonSuggestMe->setGeometry(QRect(230, 100, 113, 32));
    helpButton = new QPushButton(StreamGrid);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(10, 279, 81, 32));
    helpButton->setAutoDefault(false);
    closeButton = new QPushButton(StreamGrid);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(424, 279, 81, 32));
    closeButton->setAutoDefault(false);
    runButton = new QPushButton(StreamGrid);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(510, 279, 81, 32));
    runButton->setAutoDefault(false);
    buttonGroup1 = new Q3ButtonGroup(StreamGrid);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(10, 10, 581, 101));
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(30, 40, 95, 31));
    inputFileLineEdit = new QLineEdit(buttonGroup1);
    inputFileLineEdit->setObjectName(QString::fromUtf8("inputFileLineEdit"));
    inputFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    inputBrowseButton = new QPushButton(buttonGroup1);
    inputBrowseButton->setObjectName(QString::fromUtf8("inputBrowseButton"));
    inputBrowseButton->setGeometry(QRect(470, 40, 81, 32));
    inputBrowseButton->setCheckable(false);
    inputBrowseButton->setAutoDefault(false);
    inputBrowseButton->setFlat(false);

    retranslateUi(StreamGrid);

    QMetaObject::connectSlotsByName(StreamGrid);
    } // setupUi

    void retranslateUi(QDialog *StreamGrid)
    {
    StreamGrid->setWindowTitle(QApplication::translate("StreamGrid", "Stream Grid", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setProperty("title", QVariant(QApplication::translate("StreamGrid", "Output", 0, QApplication::UnicodeUTF8)));
    textLabel1_2_2->setText(QApplication::translate("StreamGrid", "Threshold", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("StreamGrid", "Stream Grid", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2_2->setText(QApplication::translate("StreamGrid", "(# of grids)", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("StreamGrid", "Browse", 0, QApplication::UnicodeUTF8));
    showSG_DFrame->setText(QApplication::translate("StreamGrid", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    pushButtonSuggestMe->setText(QApplication::translate("StreamGrid", "Suggest Me", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("StreamGrid", "Help", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("StreamGrid", "Close", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("StreamGrid", "Run", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setProperty("title", QVariant(QApplication::translate("StreamGrid", "Input", 0, QApplication::UnicodeUTF8)));
    textLabel1->setText(QApplication::translate("StreamGrid", "Flow Acc. Grid", 0, QApplication::UnicodeUTF8));
    inputBrowseButton->setText(QApplication::translate("StreamGrid", "Browse", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(StreamGrid);
    } // retranslateUi

};

namespace Ui {
    class StreamGrid: public Ui_StreamGrid {};
} // namespace Ui

#endif // UI_STREAMGRID_H
