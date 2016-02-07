/********************************************************************************
** Form generated from reading ui file 'catchmentgrid.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CATCHMENTGRID_H
#define UI_CATCHMENTGRID_H

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

class Ui_CatchmentGrid
{
public:
    Q3TextBrowser *messageLog;
    QPushButton *helpButton;
    QPushButton *runButton;
    QPushButton *closeButton;
    Q3ButtonGroup *buttonGroup1;
    QPushButton *inputLNKBrowseButton;
    QPushButton *inputFDRBrowseButton;
    QLabel *textLabel1;
    QLabel *textLabel1_3;
    QLineEdit *inputLNKFileLineEdit;
    QLineEdit *inputFDRFileLineEdit;
    Q3ButtonGroup *buttonGroup2;
    QPushButton *outputBrowseButton;
    QLabel *textLabel1_2;
    QLineEdit *outputFileLineEdit;
    QCheckBox *showSG_DFrame;

    void setupUi(QDialog *CatchmentGrid)
    {
    if (CatchmentGrid->objectName().isEmpty())
        CatchmentGrid->setObjectName(QString::fromUtf8("CatchmentGrid"));
    CatchmentGrid->resize(607, 448);
    messageLog = new Q3TextBrowser(CatchmentGrid);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(10, 306, 581, 130));
    helpButton = new QPushButton(CatchmentGrid);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(10, 266, 98, 32));
    helpButton->setAutoDefault(false);
    runButton = new QPushButton(CatchmentGrid);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(500, 266, 98, 32));
    runButton->setAutoDefault(false);
    closeButton = new QPushButton(CatchmentGrid);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(390, 266, 98, 32));
    closeButton->setAutoDefault(false);
    buttonGroup1 = new Q3ButtonGroup(CatchmentGrid);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(10, 6, 581, 140));
    inputLNKBrowseButton = new QPushButton(buttonGroup1);
    inputLNKBrowseButton->setObjectName(QString::fromUtf8("inputLNKBrowseButton"));
    inputLNKBrowseButton->setGeometry(QRect(470, 40, 98, 32));
    inputLNKBrowseButton->setCheckable(false);
    inputLNKBrowseButton->setAutoDefault(false);
    inputLNKBrowseButton->setFlat(false);
    inputFDRBrowseButton = new QPushButton(buttonGroup1);
    inputFDRBrowseButton->setObjectName(QString::fromUtf8("inputFDRBrowseButton"));
    inputFDRBrowseButton->setGeometry(QRect(470, 90, 98, 32));
    inputFDRBrowseButton->setCheckable(false);
    inputFDRBrowseButton->setAutoDefault(false);
    inputFDRBrowseButton->setFlat(false);
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(13, 40, 110, 31));
    textLabel1_3 = new QLabel(buttonGroup1);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setGeometry(QRect(13, 90, 100, 31));
    inputLNKFileLineEdit = new QLineEdit(buttonGroup1);
    inputLNKFileLineEdit->setObjectName(QString::fromUtf8("inputLNKFileLineEdit"));
    inputLNKFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    inputFDRFileLineEdit = new QLineEdit(buttonGroup1);
    inputFDRFileLineEdit->setObjectName(QString::fromUtf8("inputFDRFileLineEdit"));
    inputFDRFileLineEdit->setGeometry(QRect(130, 91, 325, 29));
    buttonGroup2 = new Q3ButtonGroup(CatchmentGrid);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(10, 153, 581, 100));
    outputBrowseButton = new QPushButton(buttonGroup2);
    outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));
    outputBrowseButton->setGeometry(QRect(470, 40, 98, 32));
    outputBrowseButton->setAutoDefault(false);
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(13, 40, 100, 31));
    outputFileLineEdit = new QLineEdit(buttonGroup2);
    outputFileLineEdit->setObjectName(QString::fromUtf8("outputFileLineEdit"));
    outputFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
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

    retranslateUi(CatchmentGrid);

    QMetaObject::connectSlotsByName(CatchmentGrid);
    } // setupUi

    void retranslateUi(QDialog *CatchmentGrid)
    {
    CatchmentGrid->setWindowTitle(QApplication::translate("CatchmentGrid", "Catchment Grid", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("CatchmentGrid", "Help", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("CatchmentGrid", "Run", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("CatchmentGrid", "Close", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("CatchmentGrid", "Input", 0, QApplication::UnicodeUTF8));
    inputLNKBrowseButton->setText(QApplication::translate("CatchmentGrid", "Browse", 0, QApplication::UnicodeUTF8));
    inputFDRBrowseButton->setText(QApplication::translate("CatchmentGrid", "Browse", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("CatchmentGrid", "Link Grid", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("CatchmentGrid", "Flow Dir. Grid", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QApplication::translate("CatchmentGrid", "Output", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("CatchmentGrid", "Browse", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("CatchmentGrid", "Catchment Grid", 0, QApplication::UnicodeUTF8));
    showSG_DFrame->setText(QApplication::translate("CatchmentGrid", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CatchmentGrid);
    } // retranslateUi

};

namespace Ui {
    class CatchmentGrid: public Ui_CatchmentGrid {};
} // namespace Ui

#endif // UI_CATCHMENTGRID_H
