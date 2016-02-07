/********************************************************************************
** Form generated from reading ui file 'qgsdelimitedtextpluginguibase.ui'
**
** Created: Tue Jun 22 23:11:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSDELIMITEDTEXTPLUGINGUIBASE_H
#define UI_QGSDELIMITEDTEXTPLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include "qgsfiledropedit.h"

class Ui_QgsDelimitedTextPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QLabel *txtHeading;
    QTextEdit *teInstructions;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel2;
    QComboBox *cmbXField;
    QLabel *textLabel2_2;
    QComboBox *cmbYField;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel1;
    QgsFileDropEdit *txtFilePath;
    QPushButton *btnBrowseForFile;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel1_2;
    QLineEdit *txtLayerName;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QLabel *pixmapLabel1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QTextEdit *txtSample;
    QFrame *line1;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel3;
    QLineEdit *txtDelimiter;
    QRadioButton *delimiterPlain;
    QRadioButton *delimiterRegexp;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QgsDelimitedTextPluginGuiBase)
    {
    if (QgsDelimitedTextPluginGuiBase->objectName().isEmpty())
        QgsDelimitedTextPluginGuiBase->setObjectName(QString::fromUtf8("QgsDelimitedTextPluginGuiBase"));
    QgsDelimitedTextPluginGuiBase->resize(701, 547);
    QgsDelimitedTextPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsDelimitedTextPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    txtHeading = new QLabel(QgsDelimitedTextPluginGuiBase);
    txtHeading->setObjectName(QString::fromUtf8("txtHeading"));
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(20);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    txtHeading->setFont(font);
    txtHeading->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(txtHeading, 0, 0, 1, 3);

    teInstructions = new QTextEdit(QgsDelimitedTextPluginGuiBase);
    teInstructions->setObjectName(QString::fromUtf8("teInstructions"));
    teInstructions->setReadOnly(true);

    gridLayout->addWidget(teInstructions, 1, 2, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    textLabel2 = new QLabel(QgsDelimitedTextPluginGuiBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    hboxLayout->addWidget(textLabel2);

    cmbXField = new QComboBox(QgsDelimitedTextPluginGuiBase);
    cmbXField->setObjectName(QString::fromUtf8("cmbXField"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(cmbXField->sizePolicy().hasHeightForWidth());
    cmbXField->setSizePolicy(sizePolicy);
    cmbXField->setMinimumSize(QSize(120, 0));
    cmbXField->setEditable(true);

    hboxLayout->addWidget(cmbXField);

    textLabel2_2 = new QLabel(QgsDelimitedTextPluginGuiBase);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    hboxLayout->addWidget(textLabel2_2);

    cmbYField = new QComboBox(QgsDelimitedTextPluginGuiBase);
    cmbYField->setObjectName(QString::fromUtf8("cmbYField"));
    sizePolicy.setHeightForWidth(cmbYField->sizePolicy().hasHeightForWidth());
    cmbYField->setSizePolicy(sizePolicy);
    cmbYField->setMinimumSize(QSize(120, 0));
    cmbYField->setEditable(true);

    hboxLayout->addWidget(cmbYField);


    gridLayout->addLayout(hboxLayout, 5, 2, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    hboxLayout1->setContentsMargins(0, 0, 0, 0);
    textLabel1 = new QLabel(QgsDelimitedTextPluginGuiBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout1->addWidget(textLabel1);

    txtFilePath = new QgsFileDropEdit(QgsDelimitedTextPluginGuiBase);
    txtFilePath->setObjectName(QString::fromUtf8("txtFilePath"));
    txtFilePath->setReadOnly(true);

    hboxLayout1->addWidget(txtFilePath);

    btnBrowseForFile = new QPushButton(QgsDelimitedTextPluginGuiBase);
    btnBrowseForFile->setObjectName(QString::fromUtf8("btnBrowseForFile"));
    btnBrowseForFile->setEnabled(true);

    hboxLayout1->addWidget(btnBrowseForFile);


    gridLayout->addLayout(hboxLayout1, 2, 2, 1, 1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    hboxLayout2->setContentsMargins(0, 0, 0, 0);
    textLabel1_2 = new QLabel(QgsDelimitedTextPluginGuiBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    hboxLayout2->addWidget(textLabel1_2);

    txtLayerName = new QLineEdit(QgsDelimitedTextPluginGuiBase);
    txtLayerName->setObjectName(QString::fromUtf8("txtLayerName"));

    hboxLayout2->addWidget(txtLayerName);

    spacerItem = new QSpacerItem(20, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem);


    gridLayout->addLayout(hboxLayout2, 3, 2, 1, 1);

    buttonBox = new QDialogButtonBox(QgsDelimitedTextPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 7, 2, 1, 1);

    pixmapLabel1 = new QLabel(QgsDelimitedTextPluginGuiBase);
    pixmapLabel1->setObjectName(QString::fromUtf8("pixmapLabel1"));
    pixmapLabel1->setPixmap(QPixmap(QString::fromUtf8(":/delimited_text.png")));
    pixmapLabel1->setScaledContents(false);

    gridLayout->addWidget(pixmapLabel1, 1, 0, 7, 1);

    groupBox = new QGroupBox(QgsDelimitedTextPluginGuiBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setHorizontalSpacing(6);
    gridLayout1->setVerticalSpacing(6);
    gridLayout1->setContentsMargins(9, 9, 9, 9);
    txtSample = new QTextEdit(groupBox);
    txtSample->setObjectName(QString::fromUtf8("txtSample"));
    txtSample->setReadOnly(true);

    gridLayout1->addWidget(txtSample, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox, 6, 2, 1, 1);

    line1 = new QFrame(QgsDelimitedTextPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    gridLayout->addWidget(line1, 1, 1, 7, 1);

    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    hboxLayout3->setContentsMargins(0, 0, 0, 0);
    textLabel3 = new QLabel(QgsDelimitedTextPluginGuiBase);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy1);

    hboxLayout3->addWidget(textLabel3);

    txtDelimiter = new QLineEdit(QgsDelimitedTextPluginGuiBase);
    txtDelimiter->setObjectName(QString::fromUtf8("txtDelimiter"));
    sizePolicy.setHeightForWidth(txtDelimiter->sizePolicy().hasHeightForWidth());
    txtDelimiter->setSizePolicy(sizePolicy);
    txtDelimiter->setMaximumSize(QSize(32767, 32767));

    hboxLayout3->addWidget(txtDelimiter);

    delimiterPlain = new QRadioButton(QgsDelimitedTextPluginGuiBase);
    delimiterPlain->setObjectName(QString::fromUtf8("delimiterPlain"));

    hboxLayout3->addWidget(delimiterPlain);

    delimiterRegexp = new QRadioButton(QgsDelimitedTextPluginGuiBase);
    delimiterRegexp->setObjectName(QString::fromUtf8("delimiterRegexp"));

    hboxLayout3->addWidget(delimiterRegexp);

    spacerItem1 = new QSpacerItem(61, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout3->addItem(spacerItem1);


    gridLayout->addLayout(hboxLayout3, 4, 2, 1, 1);

    QWidget::setTabOrder(txtLayerName, txtDelimiter);
    QWidget::setTabOrder(txtDelimiter, txtFilePath);
    QWidget::setTabOrder(txtFilePath, btnBrowseForFile);
    QWidget::setTabOrder(btnBrowseForFile, cmbXField);
    QWidget::setTabOrder(cmbXField, cmbYField);

    retranslateUi(QgsDelimitedTextPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsDelimitedTextPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelimitedTextPluginGuiBase)
    {
    QgsDelimitedTextPluginGuiBase->setWindowTitle(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Create a Layer from a Delimited Text File", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Delimited Text Layer", 0, QApplication::UnicodeUTF8));
    teInstructions->setHtml(QApplication::translate("QgsDelimitedTextPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "<p align=\"right\">X field</p>", 0, QApplication::UnicodeUTF8));
    cmbXField->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Name of the field containing x values", 0, QApplication::UnicodeUTF8));
    cmbXField->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Name of the field containing x values. Choose a field from the list. The list is generated by parsing the header row of the delimited text file.", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "<p align=\"right\">Y field</p>", 0, QApplication::UnicodeUTF8));
    cmbYField->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Name of the field containing y values", 0, QApplication::UnicodeUTF8));
    cmbYField->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Name of the field containing y values. Choose a field from the list. The list is generated by parsing the header row of the delimited text file.", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Delimited text file", 0, QApplication::UnicodeUTF8));
    txtFilePath->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Full path to the delimited text file", 0, QApplication::UnicodeUTF8));
    txtFilePath->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Full path to the delimited text file. In order to properly parse the fields in the file, the delimiter must be defined prior to entering the file name. Use the Browse button to the right of this field to choose the input file.", 0, QApplication::UnicodeUTF8));
    btnBrowseForFile->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Browse to find the delimited text file to be processed", 0, QApplication::UnicodeUTF8));
    btnBrowseForFile->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Use this button to browse to the location of the delimited text file. This button will not be enabled until a delimiter has been entered in the <i>Delimiter</i> box. Once a file is chosen, the X and Y field drop-down boxes will be populated with the fields from the delimited text file.", 0, QApplication::UnicodeUTF8));
    btnBrowseForFile->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Layer name", 0, QApplication::UnicodeUTF8));
    txtLayerName->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Name to display in the map legend", 0, QApplication::UnicodeUTF8));
    txtLayerName->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Name displayed in the map legend", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Sample text", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Delimiter", 0, QApplication::UnicodeUTF8));
    txtDelimiter->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Delimiter to use when splitting fields in the text file. The delimiter can be more than one character.", 0, QApplication::UnicodeUTF8));
    txtDelimiter->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Delimiter to use when splitting fields in the delimited text file. The delimiter can be 1 or more characters in length.", 0, QApplication::UnicodeUTF8));
    delimiterPlain->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "The delimiter is taken as is", 0, QApplication::UnicodeUTF8));
    delimiterPlain->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "The delimiter is taken as is", 0, QApplication::UnicodeUTF8));
    delimiterPlain->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Plain characters", 0, QApplication::UnicodeUTF8));
    delimiterRegexp->setToolTip(QApplication::translate("QgsDelimitedTextPluginGuiBase", "The delimiter is a regular expression", 0, QApplication::UnicodeUTF8));
    delimiterRegexp->setWhatsThis(QApplication::translate("QgsDelimitedTextPluginGuiBase", "The delimiter is a regular expression", 0, QApplication::UnicodeUTF8));
    delimiterRegexp->setText(QApplication::translate("QgsDelimitedTextPluginGuiBase", "Regular expression", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsDelimitedTextPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDelimitedTextPluginGuiBase: public Ui_QgsDelimitedTextPluginGuiBase {};
} // namespace Ui

#endif // UI_QGSDELIMITEDTEXTPLUGINGUIBASE_H
