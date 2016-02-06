/********************************************************************************
** Form generated from reading ui file 'about.ui'
**
** Created: Fri Jun 19 02:00:48 2009
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
    QLabel *label_10;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_8;

    void setupUi(QDialog *About)
    {
    if (About->objectName().isEmpty())
        About->setObjectName(QString::fromUtf8("About"));
    About->resize(454, 323);
    layoutWidget = new QWidget(About);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(160, 280, 111, 40));
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
    label->setGeometry(QRect(190, 13, 61, 34));
    label_10 = new QLabel(groupBox);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setGeometry(QRect(171, 191, 102, 26));
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(155, 70, 121, 26));
    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(190, 100, 64, 34));
    label_7 = new QLabel(groupBox);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(152, 169, 156, 26));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(130, 50, 239, 26));
    label_11 = new QLabel(groupBox);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setGeometry(QRect(136, 213, 205, 44));
    label_5 = new QLabel(groupBox);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(290, 120, 96, 26));
    label_9 = new QLabel(groupBox);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(60, 140, 109, 26));
    label_6 = new QLabel(groupBox);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(74, 120, 77, 26));
    QFont font;
    font.setPointSize(29);
    font.setBold(true);
    font.setWeight(75);
    label_6->setFont(font);
    label_8 = new QLabel(groupBox);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(281, 140, 113, 26));

    retranslateUi(About);
    QObject::connect(okButton, SIGNAL(clicked()), About, SLOT(accept()));

    QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
    About->setWindowTitle(QApplication::translate("About", "About", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("About", "OK", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QString());
    label->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">PIHMgis</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">cxd11@psu.edu</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><span style=\" font-size:10pt;\">(</span><span style=\" text-decoration: underline; color:#0000ff;\">http://www.pihm.psu.edu</span><span style=\" font-size:10pt; color:#000000;\">)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Contacts:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Prof. Christopher J. Duffy</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><span style=\" font-size:10pt;\">v1.0.3 - ea supported on QGIS v0.9.0</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Civil &amp; Environmental Engineering</span></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\">   Pennsylvania State University</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Mukesh Kumar</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">gxb913@psu.edu</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Gopal Bhatt</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("About", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">muk139@psu.edu</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(About);
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

#endif // UI_ABOUT_H
