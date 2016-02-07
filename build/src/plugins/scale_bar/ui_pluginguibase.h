/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Tue Jun 22 23:11:58 2010
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
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include "qgscolorbutton.h"

class Ui_QgsScaleBarPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QFrame *line1;
    QLabel *label;
    QGridLayout *gridLayout1;
    QgsColorButton *pbnChangeColour;
    QLabel *textLabel1_3;
    QCheckBox *chkSnapping;
    QLabel *textLabel1_3_2;
    QComboBox *cboPlacement;
    QCheckBox *chkEnable;
    QLabel *textLabel1;
    QComboBox *cboStyle;
    QSpinBox *spnSize;
    QLabel *textLabel1_2;
    QTextEdit *textEdit;
    QLabel *txtHeading;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsScaleBarPluginGuiBase)
    {
    if (QgsScaleBarPluginGuiBase->objectName().isEmpty())
        QgsScaleBarPluginGuiBase->setObjectName(QString::fromUtf8("QgsScaleBarPluginGuiBase"));
    QgsScaleBarPluginGuiBase->resize(518, 406);
    QgsScaleBarPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsScaleBarPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    line1 = new QFrame(QgsScaleBarPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setMaximumSize(QSize(2, 32767));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    gridLayout->addWidget(line1, 0, 1, 3, 1);

    label = new QLabel(QgsScaleBarPluginGuiBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setPixmap(QPixmap(QString::fromUtf8(":/scalebar.png")));

    gridLayout->addWidget(label, 0, 0, 3, 1);

    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    pbnChangeColour = new QgsColorButton(QgsScaleBarPluginGuiBase);
    pbnChangeColour->setObjectName(QString::fromUtf8("pbnChangeColour"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(pbnChangeColour->sizePolicy().hasHeightForWidth());
    pbnChangeColour->setSizePolicy(sizePolicy);

    gridLayout1->addWidget(pbnChangeColour, 2, 1, 1, 1);

    textLabel1_3 = new QLabel(QgsScaleBarPluginGuiBase);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel1_3->sizePolicy().hasHeightForWidth());
    textLabel1_3->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(textLabel1_3, 3, 0, 1, 1);

    chkSnapping = new QCheckBox(QgsScaleBarPluginGuiBase);
    chkSnapping->setObjectName(QString::fromUtf8("chkSnapping"));
    sizePolicy.setHeightForWidth(chkSnapping->sizePolicy().hasHeightForWidth());
    chkSnapping->setSizePolicy(sizePolicy);
    chkSnapping->setChecked(true);

    gridLayout1->addWidget(chkSnapping, 5, 0, 1, 2);

    textLabel1_3_2 = new QLabel(QgsScaleBarPluginGuiBase);
    textLabel1_3_2->setObjectName(QString::fromUtf8("textLabel1_3_2"));
    sizePolicy1.setHeightForWidth(textLabel1_3_2->sizePolicy().hasHeightForWidth());
    textLabel1_3_2->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(textLabel1_3_2, 2, 0, 1, 1);

    cboPlacement = new QComboBox(QgsScaleBarPluginGuiBase);
    cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));
    sizePolicy.setHeightForWidth(cboPlacement->sizePolicy().hasHeightForWidth());
    cboPlacement->setSizePolicy(sizePolicy);

    gridLayout1->addWidget(cboPlacement, 0, 1, 1, 1);

    chkEnable = new QCheckBox(QgsScaleBarPluginGuiBase);
    chkEnable->setObjectName(QString::fromUtf8("chkEnable"));
    sizePolicy.setHeightForWidth(chkEnable->sizePolicy().hasHeightForWidth());
    chkEnable->setSizePolicy(sizePolicy);
    chkEnable->setChecked(true);

    gridLayout1->addWidget(chkEnable, 4, 0, 1, 2);

    textLabel1 = new QLabel(QgsScaleBarPluginGuiBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(textLabel1, 1, 0, 1, 1);

    cboStyle = new QComboBox(QgsScaleBarPluginGuiBase);
    cboStyle->setObjectName(QString::fromUtf8("cboStyle"));
    sizePolicy.setHeightForWidth(cboStyle->sizePolicy().hasHeightForWidth());
    cboStyle->setSizePolicy(sizePolicy);

    gridLayout1->addWidget(cboStyle, 1, 1, 1, 1);

    spnSize = new QSpinBox(QgsScaleBarPluginGuiBase);
    spnSize->setObjectName(QString::fromUtf8("spnSize"));
    sizePolicy.setHeightForWidth(spnSize->sizePolicy().hasHeightForWidth());
    spnSize->setSizePolicy(sizePolicy);

    gridLayout1->addWidget(spnSize, 3, 1, 1, 1);

    textLabel1_2 = new QLabel(QgsScaleBarPluginGuiBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    sizePolicy1.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy1);

    gridLayout1->addWidget(textLabel1_2, 0, 0, 1, 1);


    gridLayout->addLayout(gridLayout1, 2, 2, 1, 1);

    textEdit = new QTextEdit(QgsScaleBarPluginGuiBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy2);
    textEdit->setReadOnly(true);

    gridLayout->addWidget(textEdit, 1, 2, 1, 1);

    txtHeading = new QLabel(QgsScaleBarPluginGuiBase);
    txtHeading->setObjectName(QString::fromUtf8("txtHeading"));
    sizePolicy1.setHeightForWidth(txtHeading->sizePolicy().hasHeightForWidth());
    txtHeading->setSizePolicy(sizePolicy1);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(24);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    txtHeading->setFont(font);
    txtHeading->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(txtHeading, 0, 2, 1, 1);

    buttonBox = new QDialogButtonBox(QgsScaleBarPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 3, 0, 1, 3);


    retranslateUi(QgsScaleBarPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsScaleBarPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsScaleBarPluginGuiBase)
    {
    QgsScaleBarPluginGuiBase->setWindowTitle(QApplication::translate("QgsScaleBarPluginGuiBase", "Scale Bar Plugin", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    pbnChangeColour->setToolTip(QApplication::translate("QgsScaleBarPluginGuiBase", "Click to select the colour", 0, QApplication::UnicodeUTF8));
    pbnChangeColour->setWhatsThis(QApplication::translate("QgsScaleBarPluginGuiBase", "Click to select the colour", 0, QApplication::UnicodeUTF8));
    pbnChangeColour->setText(QString());
    textLabel1_3->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Size of bar:", 0, QApplication::UnicodeUTF8));
    chkSnapping->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Automatically snap to round number on resize", 0, QApplication::UnicodeUTF8));
    textLabel1_3_2->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Colour of bar:", 0, QApplication::UnicodeUTF8));
    cboPlacement->clear();
    cboPlacement->insertItems(0, QStringList()
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Top Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Top Right", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Bottom Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Bottom Right", 0, QApplication::UnicodeUTF8)
    );
    chkEnable->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Enable scale bar", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Scale bar style:", 0, QApplication::UnicodeUTF8));
    cboStyle->clear();
    cboStyle->insertItems(0, QStringList()
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Tick Down", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Tick Up", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Box", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsScaleBarPluginGuiBase", "Bar", 0, QApplication::UnicodeUTF8)
    );
    cboStyle->setToolTip(QApplication::translate("QgsScaleBarPluginGuiBase", "Select the style of the scale bar", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Placement:", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("QgsScaleBarPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This plugin draws a scale bar on the map. Please note the size option below is a 'preferred' size and may have to be altered by QGIS depending on the level of zoom.  The size is measured according to the map units specified in the project properties.</p></body></html>", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("QgsScaleBarPluginGuiBase", "Scale Bar Plugin", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsScaleBarPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsScaleBarPluginGuiBase: public Ui_QgsScaleBarPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
