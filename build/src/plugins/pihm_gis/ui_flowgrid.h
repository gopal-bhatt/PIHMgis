/********************************************************************************
** Form generated from reading ui file 'flowgrid.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FLOWGRID_H
#define UI_FLOWGRID_H

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

class Ui_FlowGrid
{
public:
    QPushButton *runButton;
    QPushButton *helpButton;
    QPushButton *closeButton;
    Q3ButtonGroup *buttonGroup2;
    QLineEdit *outputFDRFileLineEdit;
    QLineEdit *outputFAGFileLineEdit;
    QPushButton *outputFDRBrowseButton;
    QPushButton *outputFAGBrowseButton;
    QCheckBox *showFDR_DFrame;
    QCheckBox *showFAG_DFrame;
    QLabel *textLabel1_2;
    QLabel *textLabel1_2_2;
    Q3ButtonGroup *buttonGroup1;
    QLineEdit *inputFileLineEdit;
    QPushButton *inputBrowseButton;
    QLabel *textLabel1;
    Q3TextBrowser *messageLog;

    void setupUi(QDialog *FlowGrid)
    {
    if (FlowGrid->objectName().isEmpty())
        FlowGrid->setObjectName(QString::fromUtf8("FlowGrid"));
    FlowGrid->resize(604, 489);
    runButton = new QPushButton(FlowGrid);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(500, 304, 98, 32));
    runButton->setAutoDefault(false);
    helpButton = new QPushButton(FlowGrid);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(12, 304, 98, 32));
    helpButton->setAutoDefault(false);
    closeButton = new QPushButton(FlowGrid);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(400, 304, 98, 32));
    closeButton->setAutoDefault(false);
    buttonGroup2 = new Q3ButtonGroup(FlowGrid);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(12, 114, 581, 180));
    outputFDRFileLineEdit = new QLineEdit(buttonGroup2);
    outputFDRFileLineEdit->setObjectName(QString::fromUtf8("outputFDRFileLineEdit"));
    outputFDRFileLineEdit->setGeometry(QRect(132, 37, 325, 29));
    outputFAGFileLineEdit = new QLineEdit(buttonGroup2);
    outputFAGFileLineEdit->setObjectName(QString::fromUtf8("outputFAGFileLineEdit"));
    outputFAGFileLineEdit->setGeometry(QRect(132, 117, 325, 29));
    outputFDRBrowseButton = new QPushButton(buttonGroup2);
    outputFDRBrowseButton->setObjectName(QString::fromUtf8("outputFDRBrowseButton"));
    outputFDRBrowseButton->setGeometry(QRect(472, 36, 98, 32));
    outputFDRBrowseButton->setAutoDefault(false);
    outputFAGBrowseButton = new QPushButton(buttonGroup2);
    outputFAGBrowseButton->setObjectName(QString::fromUtf8("outputFAGBrowseButton"));
    outputFAGBrowseButton->setGeometry(QRect(472, 114, 98, 32));
    outputFAGBrowseButton->setAutoDefault(false);
    showFDR_DFrame = new QCheckBox(buttonGroup2);
    showFDR_DFrame->setObjectName(QString::fromUtf8("showFDR_DFrame"));
    showFDR_DFrame->setGeometry(QRect(338, 69, 140, 21));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(8);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    showFDR_DFrame->setFont(font);
    showFDR_DFrame->setChecked(true);
    showFAG_DFrame = new QCheckBox(buttonGroup2);
    showFAG_DFrame->setObjectName(QString::fromUtf8("showFAG_DFrame"));
    showFAG_DFrame->setGeometry(QRect(338, 148, 140, 21));
    showFAG_DFrame->setFont(font);
    showFAG_DFrame->setChecked(true);
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(24, 36, 90, 31));
    textLabel1_2_2 = new QLabel(buttonGroup2);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
    textLabel1_2_2->setGeometry(QRect(24, 115, 90, 31));
    buttonGroup1 = new Q3ButtonGroup(FlowGrid);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(12, 6, 581, 101));
    inputFileLineEdit = new QLineEdit(buttonGroup1);
    inputFileLineEdit->setObjectName(QString::fromUtf8("inputFileLineEdit"));
    inputFileLineEdit->setGeometry(QRect(132, 45, 325, 29));
    inputBrowseButton = new QPushButton(buttonGroup1);
    inputBrowseButton->setObjectName(QString::fromUtf8("inputBrowseButton"));
    inputBrowseButton->setGeometry(QRect(472, 44, 98, 32));
    inputBrowseButton->setCheckable(false);
    inputBrowseButton->setAutoDefault(false);
    inputBrowseButton->setFlat(false);
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(24, 44, 104, 31));
    messageLog = new Q3TextBrowser(FlowGrid);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(12, 345, 581, 130));

    retranslateUi(FlowGrid);

    QMetaObject::connectSlotsByName(FlowGrid);
    } // setupUi

    void retranslateUi(QDialog *FlowGrid)
    {
    FlowGrid->setWindowTitle(QApplication::translate("FlowGrid", "Flow Grid", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("FlowGrid", "Run", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("FlowGrid", "Help", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("FlowGrid", "Close", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QApplication::translate("FlowGrid", "Output", 0, QApplication::UnicodeUTF8));
    outputFDRBrowseButton->setText(QApplication::translate("FlowGrid", "Browse", 0, QApplication::UnicodeUTF8));
    outputFAGBrowseButton->setText(QApplication::translate("FlowGrid", "Browse", 0, QApplication::UnicodeUTF8));
    showFDR_DFrame->setText(QApplication::translate("FlowGrid", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    showFAG_DFrame->setText(QApplication::translate("FlowGrid", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("FlowGrid", "Flow Dir. Grid", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("FlowGrid", "Flow Acc. Grid", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("FlowGrid", "Input", 0, QApplication::UnicodeUTF8));
    inputBrowseButton->setText(QApplication::translate("FlowGrid", "Browse", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("FlowGrid", "Pit-Filled/\n"
"DEM Grid", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FlowGrid);
    } // retranslateUi

};

namespace Ui {
    class FlowGrid: public Ui_FlowGrid {};
} // namespace Ui

#endif // UI_FLOWGRID_H
