/********************************************************************************
** Form generated from reading ui file 'streampolyline.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_STREAMPOLYLINE_H
#define UI_STREAMPOLYLINE_H

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

class Ui_StreamPolyLine
{
public:
    Q3ButtonGroup *buttonGroup2;
    QLabel *textLabel1_2;
    QLineEdit *outputFileLineEdit;
    QPushButton *outputBrowseButton;
    QCheckBox *showSG_DFrame;
    Q3TextBrowser *messageLog;
    Q3ButtonGroup *buttonGroup1;
    QLabel *textLabel1;
    QLabel *textLabel1_3;
    QPushButton *inputSTRBrowseButton;
    QPushButton *inputFDRBrowseButton;
    QLineEdit *inputSTRFileLineEdit;
    QLineEdit *inputFDRFileLineEdit;
    QPushButton *closeButton;
    QPushButton *runButton;
    QPushButton *helpButton;

    void setupUi(QDialog *StreamPolyLine)
    {
    if (StreamPolyLine->objectName().isEmpty())
        StreamPolyLine->setObjectName(QString::fromUtf8("StreamPolyLine"));
    StreamPolyLine->resize(607, 437);
    buttonGroup2 = new Q3ButtonGroup(StreamPolyLine);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(13, 142, 581, 100));
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(20, 40, 90, 31));
    outputFileLineEdit = new QLineEdit(buttonGroup2);
    outputFileLineEdit->setObjectName(QString::fromUtf8("outputFileLineEdit"));
    outputFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    outputBrowseButton = new QPushButton(buttonGroup2);
    outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));
    outputBrowseButton->setGeometry(QRect(470, 40, 98, 32));
    outputBrowseButton->setAutoDefault(false);
    showSG_DFrame = new QCheckBox(buttonGroup2);
    showSG_DFrame->setObjectName(QString::fromUtf8("showSG_DFrame"));
    showSG_DFrame->setGeometry(QRect(336, 73, 140, 21));
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
    messageLog = new Q3TextBrowser(StreamPolyLine);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(13, 297, 581, 130));
    buttonGroup1 = new Q3ButtonGroup(StreamPolyLine);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(13, 6, 581, 131));
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(20, 35, 87, 31));
    textLabel1_3 = new QLabel(buttonGroup1);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setGeometry(QRect(20, 85, 87, 31));
    inputSTRBrowseButton = new QPushButton(buttonGroup1);
    inputSTRBrowseButton->setObjectName(QString::fromUtf8("inputSTRBrowseButton"));
    inputSTRBrowseButton->setGeometry(QRect(470, 35, 98, 32));
    inputSTRBrowseButton->setCheckable(false);
    inputSTRBrowseButton->setAutoDefault(false);
    inputSTRBrowseButton->setFlat(false);
    inputFDRBrowseButton = new QPushButton(buttonGroup1);
    inputFDRBrowseButton->setObjectName(QString::fromUtf8("inputFDRBrowseButton"));
    inputFDRBrowseButton->setGeometry(QRect(470, 85, 98, 32));
    inputFDRBrowseButton->setCheckable(false);
    inputFDRBrowseButton->setAutoDefault(false);
    inputFDRBrowseButton->setFlat(false);
    inputSTRFileLineEdit = new QLineEdit(buttonGroup1);
    inputSTRFileLineEdit->setObjectName(QString::fromUtf8("inputSTRFileLineEdit"));
    inputSTRFileLineEdit->setGeometry(QRect(130, 36, 325, 29));
    inputFDRFileLineEdit = new QLineEdit(buttonGroup1);
    inputFDRFileLineEdit->setObjectName(QString::fromUtf8("inputFDRFileLineEdit"));
    inputFDRFileLineEdit->setGeometry(QRect(130, 86, 325, 29));
    closeButton = new QPushButton(StreamPolyLine);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(393, 255, 98, 32));
    closeButton->setAutoDefault(false);
    runButton = new QPushButton(StreamPolyLine);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(499, 255, 98, 32));
    runButton->setAutoDefault(false);
    helpButton = new QPushButton(StreamPolyLine);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(11, 255, 98, 32));
    helpButton->setAutoDefault(false);

    retranslateUi(StreamPolyLine);

    QMetaObject::connectSlotsByName(StreamPolyLine);
    } // setupUi

    void retranslateUi(QDialog *StreamPolyLine)
    {
    StreamPolyLine->setWindowTitle(QApplication::translate("StreamPolyLine", "Stream PolyLine", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QApplication::translate("StreamPolyLine", "Output", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("StreamPolyLine", "Stream Line", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("StreamPolyLine", "Browse", 0, QApplication::UnicodeUTF8));
    showSG_DFrame->setText(QApplication::translate("StreamPolyLine", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("StreamPolyLine", "Input", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("StreamPolyLine", "Stream Grid", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("StreamPolyLine", "Flow Dir. Grid", 0, QApplication::UnicodeUTF8));
    inputSTRBrowseButton->setText(QApplication::translate("StreamPolyLine", "Browse", 0, QApplication::UnicodeUTF8));
    inputFDRBrowseButton->setText(QApplication::translate("StreamPolyLine", "Browse", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("StreamPolyLine", "Close", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("StreamPolyLine", "Run", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("StreamPolyLine", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(StreamPolyLine);
    } // retranslateUi

};

namespace Ui {
    class StreamPolyLine: public Ui_StreamPolyLine {};
} // namespace Ui

#endif // UI_STREAMPOLYLINE_H
