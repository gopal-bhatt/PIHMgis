#ifndef UI_FILLPITS_H
#define UI_FILLPITS_H

#include <Qt3Support/Q3ButtonGroup>
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
#include <Qt3Support/Q3MimeSourceFactory>

class Ui_FillPits
{
public:
    Q3ButtonGroup *buttonGroup1;
    QLineEdit *inputFileLineEdit;
    QPushButton *inputBrowseButton;
    QLabel *textLabel1;
    QPushButton *runButton;
    QPushButton *helpButton;
    QPushButton *closeButton;
    Q3TextBrowser *messageLog;
    Q3ButtonGroup *buttonGroup2;
    QLineEdit *outputFileLineEdit;
    QPushButton *outputBrowseButton;
    QLabel *textLabel1_2;
    QCheckBox *showPF_DFrame;

    void setupUi(QDialog *FillPits)
    {
    FillPits->setObjectName(QString::fromUtf8("FillPits"));
    FillPits->resize(QSize(604, 409).expandedTo(FillPits->minimumSizeHint()));
    buttonGroup1 = new Q3ButtonGroup(FillPits);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    buttonGroup1->setGeometry(QRect(10, 10, 581, 101));
    inputFileLineEdit = new QLineEdit(buttonGroup1);
    inputFileLineEdit->setObjectName(QString::fromUtf8("inputFileLineEdit"));
    inputFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    inputBrowseButton = new QPushButton(buttonGroup1);
    inputBrowseButton->setObjectName(QString::fromUtf8("inputBrowseButton"));
    inputBrowseButton->setGeometry(QRect(470, 40, 81, 32));
    inputBrowseButton->setCheckable(false);
    inputBrowseButton->setAutoDefault(false);
    inputBrowseButton->setFlat(false);
    textLabel1 = new QLabel(buttonGroup1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setGeometry(QRect(30, 40, 70, 31));
    runButton = new QPushButton(FillPits);
    runButton->setObjectName(QString::fromUtf8("runButton"));
    runButton->setGeometry(QRect(510, 229, 81, 32));
    runButton->setAutoDefault(false);
    helpButton = new QPushButton(FillPits);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(10, 229, 81, 32));
    helpButton->setAutoDefault(false);
    closeButton = new QPushButton(FillPits);
    closeButton->setObjectName(QString::fromUtf8("closeButton"));
    closeButton->setGeometry(QRect(424, 229, 81, 32));
    closeButton->setAutoDefault(false);
    messageLog = new Q3TextBrowser(FillPits);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(10, 269, 581, 130));
    buttonGroup2 = new Q3ButtonGroup(FillPits);
    buttonGroup2->setObjectName(QString::fromUtf8("buttonGroup2"));
    buttonGroup2->setGeometry(QRect(10, 120, 581, 100));
    outputFileLineEdit = new QLineEdit(buttonGroup2);
    outputFileLineEdit->setObjectName(QString::fromUtf8("outputFileLineEdit"));
    outputFileLineEdit->setGeometry(QRect(130, 41, 325, 29));
    outputBrowseButton = new QPushButton(buttonGroup2);
    outputBrowseButton->setObjectName(QString::fromUtf8("outputBrowseButton"));
    outputBrowseButton->setGeometry(QRect(470, 40, 81, 32));
    outputBrowseButton->setAutoDefault(false);
    textLabel1_2 = new QLabel(buttonGroup2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setGeometry(QRect(30, 40, 90, 31));
    showPF_DFrame = new QCheckBox(buttonGroup2);
    showPF_DFrame->setObjectName(QString::fromUtf8("showPF_DFrame"));
    showPF_DFrame->setGeometry(QRect(336, 73, 140, 21));
    QFont font;
    font.setFamily(QString::fromUtf8(""));
    font.setPointSize(8);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(0);
    font.setStrikeOut(false);
    showPF_DFrame->setFont(font);
    showPF_DFrame->setChecked(true);
    retranslateUi(FillPits);

    QMetaObject::connectSlotsByName(FillPits);
    } // setupUi

    void retranslateUi(QDialog *FillPits)
    {
    FillPits->setWindowTitle(QApplication::translate("FillPits", "Fill Pits", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("FillPits", "Input", 0, QApplication::UnicodeUTF8));
    inputBrowseButton->setText(QApplication::translate("FillPits", "Browse", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("FillPits", "DEM Grid", 0, QApplication::UnicodeUTF8));
    runButton->setText(QApplication::translate("FillPits", "Run", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("FillPits", "Help", 0, QApplication::UnicodeUTF8));
    closeButton->setText(QApplication::translate("FillPits", "Close", 0, QApplication::UnicodeUTF8));
    buttonGroup2->setTitle(QApplication::translate("FillPits", "Output", 0, QApplication::UnicodeUTF8));
    outputBrowseButton->setText(QApplication::translate("FillPits", "Browse", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("FillPits", "Pit-Filled Grid", 0, QApplication::UnicodeUTF8));
    showPF_DFrame->setText(QApplication::translate("FillPits", "Load in Data Frame", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FillPits);
    } // retranslateUi

};

namespace Ui {
    class FillPits: public Ui_FillPits {};
} // namespace Ui

#endif // UI_FILLPITS_H
