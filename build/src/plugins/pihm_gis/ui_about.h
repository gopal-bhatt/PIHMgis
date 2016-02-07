/********************************************************************************
** Form generated from reading ui file 'about.ui'
**
** Created: Tue Jul 27 23:38:13 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_About
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_11;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QDialog *About)
    {
    if (About->objectName().isEmpty())
        About->setObjectName(QString::fromUtf8("About"));
    About->resize(454, 323);
    layoutWidget = new QWidget(About);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(160, 280, 111, 43));
    hboxLayout = new QHBoxLayout(layoutWidget);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    okButton = new QPushButton(layoutWidget);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setEnabled(true);
    okButton->setFocusPolicy(Qt::NoFocus);
    okButton->setChecked(false);
    okButton->setAutoDefault(true);
    okButton->setDefault(true);

    hboxLayout->addWidget(okButton);

    groupBox = new QGroupBox(About);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(9, 10, 435, 261));
    groupBox->setFocusPolicy(Qt::NoFocus);
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(172, 12, 91, 25));
    QFont font;
    font.setFamily(QString::fromUtf8("Century Gothic"));
    font.setPointSize(20);
    label->setFont(font);
    label->setAlignment(Qt::AlignCenter);
    label_12 = new QLabel(groupBox);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setGeometry(QRect(97, 44, 241, 16));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Century Gothic"));
    font1.setPointSize(14);
    font1.setBold(false);
    font1.setWeight(50);
    label_12->setFont(font1);
    label_12->setAlignment(Qt::AlignCenter);
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(60, 115, 91, 16));
    QFont font2;
    font2.setFamily(QString::fromUtf8("Century Gothic"));
    font2.setPointSize(14);
    label_2->setFont(font2);
    label_2->setAlignment(Qt::AlignCenter);
    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(280, 115, 111, 16));
    label_5->setFont(font2);
    label_5->setAlignment(Qt::AlignCenter);
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(177, 95, 81, 16));
    label_4->setFont(font2);
    label_4->setAlignment(Qt::AlignCenter);
    label_6 = new QLabel(groupBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(132, 162, 171, 20));
    label_6->setFont(font2);
    label_6->setAlignment(Qt::AlignCenter);
    label_7 = new QLabel(groupBox);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(77, 215, 281, 38));
    QFont font3;
    font3.setFamily(QString::fromUtf8("Century Gothic"));
    font3.setPointSize(16);
    label_7->setFont(font3);
    label_7->setLayoutDirection(Qt::LeftToRight);
    label_7->setAlignment(Qt::AlignCenter);
    label_11 = new QLabel(groupBox);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(112, 60, 211, 20));
    label_11->setFont(font2);
    label_11->setMouseTracking(true);
    label_11->setFocusPolicy(Qt::ClickFocus);
    label_11->setAlignment(Qt::AlignCenter);
    label_11->setOpenExternalLinks(true);
    label_14 = new QLabel(groupBox);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setGeometry(QRect(42, 137, 131, 16));
    label_14->setFont(font2);
    label_14->setAlignment(Qt::AlignCenter);
    label_15 = new QLabel(groupBox);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setGeometry(QRect(270, 135, 131, 20));
    label_15->setFont(font2);
    label_15->setAlignment(Qt::AlignCenter);
    label_16 = new QLabel(groupBox);
    label_16->setObjectName(QString::fromUtf8("label_16"));
    label_16->setGeometry(QRect(157, 183, 121, 16));
    label_16->setFont(font2);
    label_16->setAlignment(Qt::AlignCenter);

    retranslateUi(About);
    QObject::connect(okButton, SIGNAL(clicked()), About, SLOT(accept()));

    QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
    About->setWindowTitle(QApplication::translate("About", "About", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("About", "Close", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    label->setText(QApplication::translate("About", "PIHMgis", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("About", "v2.3 - ea supported on QGIS v1.0.2", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("About", "Gopal Bhatt", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("About", "Mukesh Kumar", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("About", "Contacts:", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("About", "Prof. Christopher J. Duffy", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("About", "Civil & Environmental Engineering\n"
"The Pennsylvania State University", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("About", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Century Gothic'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.pihm.psu.edu/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.pihm.psu.edu/</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("About", "gxb913@psu.edu", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("About", "muk139@psu.edu", 0, QApplication::UnicodeUTF8));
    label_16->setText(QApplication::translate("About", "cxd11@psu.edu", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(About);
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

#endif // UI_ABOUT_H
