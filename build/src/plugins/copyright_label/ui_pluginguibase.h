/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Tue Jun 22 23:11:02 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PLUGINGUIBASE_H
#define UI_PLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include "qgscolorbutton.h"

class Ui_QgsCopyrightLabelPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QgsColorButton *pbnColorChooser;
    QSpacerItem *spacerItem;
    QTextEdit *textEdit3;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QCheckBox *cboxEnabled;
    QTextEdit *txtCopyrightText;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel16;
    QComboBox *cboPlacement;
    QLabel *textLabel15;
    QComboBox *cboOrientation;
    QFrame *line1;
    QLabel *pixmapLabel2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsCopyrightLabelPluginGuiBase)
    {
    if (QgsCopyrightLabelPluginGuiBase->objectName().isEmpty())
        QgsCopyrightLabelPluginGuiBase->setObjectName(QString::fromUtf8("QgsCopyrightLabelPluginGuiBase"));
    QgsCopyrightLabelPluginGuiBase->resize(556, 489);
    QgsCopyrightLabelPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsCopyrightLabelPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    label = new QLabel(QgsCopyrightLabelPluginGuiBase);
    label->setObjectName(QString::fromUtf8("label"));

    hboxLayout->addWidget(label);

    pbnColorChooser = new QgsColorButton(QgsCopyrightLabelPluginGuiBase);
    pbnColorChooser->setObjectName(QString::fromUtf8("pbnColorChooser"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(pbnColorChooser->sizePolicy().hasHeightForWidth());
    pbnColorChooser->setSizePolicy(sizePolicy);
    pbnColorChooser->setMinimumSize(QSize(100, 0));

    hboxLayout->addWidget(pbnColorChooser);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);


    gridLayout->addLayout(hboxLayout, 3, 2, 1, 1);

    textEdit3 = new QTextEdit(QgsCopyrightLabelPluginGuiBase);
    textEdit3->setObjectName(QString::fromUtf8("textEdit3"));
    textEdit3->setReadOnly(true);

    gridLayout->addWidget(textEdit3, 0, 2, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setContentsMargins(0, 0, 0, 0);
    spacerItem1 = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem1);

    cboxEnabled = new QCheckBox(QgsCopyrightLabelPluginGuiBase);
    cboxEnabled->setObjectName(QString::fromUtf8("cboxEnabled"));
    cboxEnabled->setChecked(true);

    hboxLayout1->addWidget(cboxEnabled);


    gridLayout->addLayout(hboxLayout1, 4, 2, 1, 1);

    txtCopyrightText = new QTextEdit(QgsCopyrightLabelPluginGuiBase);
    txtCopyrightText->setObjectName(QString::fromUtf8("txtCopyrightText"));

    gridLayout->addWidget(txtCopyrightText, 1, 2, 1, 1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    hboxLayout2->setContentsMargins(0, 0, 0, 0);
    textLabel16 = new QLabel(QgsCopyrightLabelPluginGuiBase);
    textLabel16->setObjectName(QString::fromUtf8("textLabel16"));

    hboxLayout2->addWidget(textLabel16);

    cboPlacement = new QComboBox(QgsCopyrightLabelPluginGuiBase);
    cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));

    hboxLayout2->addWidget(cboPlacement);

    textLabel15 = new QLabel(QgsCopyrightLabelPluginGuiBase);
    textLabel15->setObjectName(QString::fromUtf8("textLabel15"));

    hboxLayout2->addWidget(textLabel15);

    cboOrientation = new QComboBox(QgsCopyrightLabelPluginGuiBase);
    cboOrientation->setObjectName(QString::fromUtf8("cboOrientation"));

    hboxLayout2->addWidget(cboOrientation);


    gridLayout->addLayout(hboxLayout2, 2, 2, 1, 1);

    line1 = new QFrame(QgsCopyrightLabelPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setMaximumSize(QSize(2, 32767));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    gridLayout->addWidget(line1, 0, 1, 5, 1);

    pixmapLabel2 = new QLabel(QgsCopyrightLabelPluginGuiBase);
    pixmapLabel2->setObjectName(QString::fromUtf8("pixmapLabel2"));
    pixmapLabel2->setMaximumSize(QSize(150, 32767));
    pixmapLabel2->setPixmap(QPixmap(QString::fromUtf8(":/copyright.png")));
    pixmapLabel2->setScaledContents(false);

    gridLayout->addWidget(pixmapLabel2, 0, 0, 5, 1);

    buttonBox = new QDialogButtonBox(QgsCopyrightLabelPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 5, 0, 1, 3);


    retranslateUi(QgsCopyrightLabelPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsCopyrightLabelPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsCopyrightLabelPluginGuiBase)
    {
    QgsCopyrightLabelPluginGuiBase->setWindowTitle(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Copyright Label Plugin", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Color", 0, QApplication::UnicodeUTF8));
    textEdit3->setHtml(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><span style=\" font-size:12pt;\">Description</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\">Enter your copyright label below. This plugin supports basic html markup tags for formatting the label. For example:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bl"
        "ock-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"><span style=\" font-weight:600;\">&lt;B&gt; Bold text &lt;/B&gt; </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt; font-weight:600;\"><span style=\" font-weight:400; font-style:italic;\">&lt;I&gt; Italics &lt;/I&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt; font-style:italic;\"><span style=\" font-style:normal;\">(note: &amp;copy; gives a copyright symbol)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    cboxEnabled->setText(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Enable Copyright Label", 0, QApplication::UnicodeUTF8));
    txtCopyrightText->setHtml(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\302\251 QGIS 2008</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel16->setText(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
    cboPlacement->clear();
    cboPlacement->insertItems(0, QStringList()
     << QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Bottom Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Top Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Bottom Right", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Top Right", 0, QApplication::UnicodeUTF8)
    );
    textLabel15->setText(QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Orientation", 0, QApplication::UnicodeUTF8));
    cboOrientation->clear();
    cboOrientation->insertItems(0, QStringList()
     << QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Horizontal", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsCopyrightLabelPluginGuiBase", "Vertical", 0, QApplication::UnicodeUTF8)
    );
    Q_UNUSED(QgsCopyrightLabelPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCopyrightLabelPluginGuiBase: public Ui_QgsCopyrightLabelPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
