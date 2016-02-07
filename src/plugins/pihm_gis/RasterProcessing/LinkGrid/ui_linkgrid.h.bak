#ifndef UI_LINKGRID_H
#define UI_LINKGRID_H

#include "Qt3Support/Q3ButtonGroup"
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <Qt3Support/Q3MimeSourceFactory>
#include "Qt3Support/Q3TextBrowser"

class Ui_LinkGrid
{
public:
    Q3ButtonGroup *buttonGroup2;
    QLabel *textLabel1_2;
    QPushButton *outputBrowseButton;
    QLineEdit *outputFileLineEdit;
    QCheckBox *showSG_DFrame;
    Q3ButtonGroup *buttonGroup1;
    QLabel *textLabel1_3;
    QLabel *textLabel1;
    QPushButton *inputFDRBrowseButton;
    QLineEdit *inputFDRFileLineEdit;
    QLineEdit *inputSTRFileLineEdit;
    QPushButton *inputSTRBrowseButton;
    QPushButton *closeButton;
    QPushButton *runButton;
    QPushButton *helpButton;
    Q3TextBrowser *messageLog;

    void setupUi(QDialog *LinkGrid)
    {
    LinkGrid->setObjectName(QString::fromUtf8("LinkGrid"));
    LinkGrid->resize(QSize(607, 449).expandedTo(LinkGrid->minimumSizeHint()));
    buttonGroup2 = new Q3ButtonGroup(LinkGrid);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(10, 160, 581, 100));
    buttonGroup2->setOrientation(Qt::Vertical);
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(30, 40, 90, 31));
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
    buttonGroup1 = new Q3ButtonGroup(LinkGrid);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(10, 10, 581, 140));
    buttonGroup1->setOrientation(Qt::Vertical);
    textLabel1_3 = new QLabel(buttonGroup1);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setGeometry(QRect(30, 90, 87, 31));
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(30, 40, 87, 31));
    inputFDRBrowseButton = new QPushButton(buttonGroup1);
    inputFDRBrowseButton->setObjectName(QString::fromUtf8("inputFDRBrowseButton"));
    inputFDRBrowseButton->setGeometry(QRect(470, 90, 81, 32));
    inputFDRBrowseButton->setCheckable(false);
    inputFDRBrowseButton->setAutoDefault(false);
    inputFDRBrowseButton->setFlat(false);
    inputFDRFileLineEdit = new QLineEdit(buttonGroup1);
    inputFDRFileLineEdit->setObjectName(QString::fromUtf8("inputFDRFileLineEdit"));
    inputFDRFileLineEdit->setGeometry(QRect(130, 91, 325, 29));
    inputSTRFileLineEdit = new QLineEdit(buttonGroup1);
    inputSTRFileLineEdit->setObjectName(QString::fromUtf8("inputSTRFileLineEdit"));
    inputSTRFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    inputSTRBrowseButton = new QPushButton(buttonGroup1);
    inputSTRBrowseButton->setObjectName(QString::fromUtf8("inputSTRBrowseButton"));
    inputSTRBrowseButton->setGeometry(QRect(470, 40, 81, 32));
    inputSTRBrowseButton->setCheckable(false);
    inputSTRBrowseButton->setAutoDefault(false);
    inputSTRBrowseButton->setFlat(false);
    closeButton = new QPushButton(LinkGrid);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(424, 269, 81, 32));
    closeButton->setAutoDefault(false);
    runButton = new QPushButton(LinkGrid);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(510, 269, 81, 32));
    runButton->setAutoDefault(false);
    helpButton = new QPushButton(LinkGrid);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(10, 269, 81, 32));
    helpButton->setAutoDefault(false);
    messageLog = new Q3TextBrowser(LinkGrid);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(10, 309, 581, 130));
    retranslateUi(LinkGrid);

    QMetaObject::connectSlotsByName(LinkGrid);
    } // setupUi

    void retranslateUi(QDialog *LinkGrid)
    {
    LinkGrid->setWindowTitle(QApplication::translate("LinkGrid", "Link Grid", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QApplication::translate("LinkGrid", "Output", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("LinkGrid", "Link Grid", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("LinkGrid", "Browse", 0, QApplication::UnicodeUTF8));
    showSG_DFrame->setText(QApplication::translate("LinkGrid", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("LinkGrid", "Input", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("LinkGrid", "Flow Dir. Grid", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("LinkGrid", "Stream Grid", 0, QApplication::UnicodeUTF8));
    inputFDRBrowseButton->setText(QApplication::translate("LinkGrid", "Browse", 0, QApplication::UnicodeUTF8));
    inputSTRBrowseButton->setText(QApplication::translate("LinkGrid", "Browse", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("LinkGrid", "Close", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("LinkGrid", "Run", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("LinkGrid", "Help", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(LinkGrid);
    } // retranslateUi

};

namespace Ui {
    class LinkGrid: public Ui_LinkGrid {};
} // namespace Ui

#endif // UI_LINKGRID_H
