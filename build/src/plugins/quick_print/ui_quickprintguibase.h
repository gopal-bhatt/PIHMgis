/********************************************************************************
** Form generated from reading ui file 'quickprintguibase.ui'
**
** Created: Tue Jun 22 23:12:53 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QUICKPRINTGUIBASE_H
#define UI_QUICKPRINTGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>

class Ui_QuickPrintGuiBase
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QGroupBox *grpOuput;
    QGridLayout *gridLayout1;
    QRadioButton *radUseIncrementedFileName;
    QLabel *lblIncrementedFilename;
    QRadioButton *radPromptForFileName;
    QComboBox *cboPageSize;
    QLabel *label_2;
    QTextEdit *teCopyright;
    QLabel *lblCopyright;
    QLineEdit *leMapName;
    QLabel *lblMapName;
    QLineEdit *leMapTitle;
    QLabel *lblMapTitle;
    QLabel *txtHeading;

    void setupUi(QDialog *QuickPrintGuiBase)
    {
    if (QuickPrintGuiBase->objectName().isEmpty())
        QuickPrintGuiBase->setObjectName(QString::fromUtf8("QuickPrintGuiBase"));
    QuickPrintGuiBase->resize(427, 522);
    QuickPrintGuiBase->setWindowIcon(QIcon(QString::fromUtf8(":/quickprint/quickprint.png")));
    gridLayout = new QGridLayout(QuickPrintGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    buttonBox = new QDialogButtonBox(QuickPrintGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 11, 0, 1, 1);

    label = new QLabel(QuickPrintGuiBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setWordWrap(true);

    gridLayout->addWidget(label, 10, 0, 1, 1);

    grpOuput = new QGroupBox(QuickPrintGuiBase);
    grpOuput->setObjectName(QString::fromUtf8("grpOuput"));
    gridLayout1 = new QGridLayout(grpOuput);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    radUseIncrementedFileName = new QRadioButton(grpOuput);
    radUseIncrementedFileName->setObjectName(QString::fromUtf8("radUseIncrementedFileName"));

    gridLayout1->addWidget(radUseIncrementedFileName, 0, 0, 1, 1);

    lblIncrementedFilename = new QLabel(grpOuput);
    lblIncrementedFilename->setObjectName(QString::fromUtf8("lblIncrementedFilename"));
    lblIncrementedFilename->setWordWrap(true);

    gridLayout1->addWidget(lblIncrementedFilename, 1, 0, 1, 1);

    radPromptForFileName = new QRadioButton(grpOuput);
    radPromptForFileName->setObjectName(QString::fromUtf8("radPromptForFileName"));
    radPromptForFileName->setChecked(true);

    gridLayout1->addWidget(radPromptForFileName, 2, 0, 1, 1);


    gridLayout->addWidget(grpOuput, 9, 0, 1, 1);

    cboPageSize = new QComboBox(QuickPrintGuiBase);
    cboPageSize->setObjectName(QString::fromUtf8("cboPageSize"));

    gridLayout->addWidget(cboPageSize, 8, 0, 1, 1);

    label_2 = new QLabel(QuickPrintGuiBase);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 7, 0, 1, 1);

    teCopyright = new QTextEdit(QuickPrintGuiBase);
    teCopyright->setObjectName(QString::fromUtf8("teCopyright"));

    gridLayout->addWidget(teCopyright, 6, 0, 1, 1);

    lblCopyright = new QLabel(QuickPrintGuiBase);
    lblCopyright->setObjectName(QString::fromUtf8("lblCopyright"));

    gridLayout->addWidget(lblCopyright, 5, 0, 1, 1);

    leMapName = new QLineEdit(QuickPrintGuiBase);
    leMapName->setObjectName(QString::fromUtf8("leMapName"));

    gridLayout->addWidget(leMapName, 4, 0, 1, 1);

    lblMapName = new QLabel(QuickPrintGuiBase);
    lblMapName->setObjectName(QString::fromUtf8("lblMapName"));

    gridLayout->addWidget(lblMapName, 3, 0, 1, 1);

    leMapTitle = new QLineEdit(QuickPrintGuiBase);
    leMapTitle->setObjectName(QString::fromUtf8("leMapTitle"));

    gridLayout->addWidget(leMapTitle, 2, 0, 1, 1);

    lblMapTitle = new QLabel(QuickPrintGuiBase);
    lblMapTitle->setObjectName(QString::fromUtf8("lblMapTitle"));

    gridLayout->addWidget(lblMapTitle, 1, 0, 1, 1);

    txtHeading = new QLabel(QuickPrintGuiBase);
    txtHeading->setObjectName(QString::fromUtf8("txtHeading"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(txtHeading->sizePolicy().hasHeightForWidth());
    txtHeading->setSizePolicy(sizePolicy);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(24);
    font.setBold(true);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(75);
    font.setStrikeOut(false);
    txtHeading->setFont(font);
    txtHeading->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(txtHeading, 0, 0, 1, 1);

    lblCopyright->setBuddy(teCopyright);
    lblMapName->setBuddy(leMapName);
    lblMapTitle->setBuddy(leMapTitle);
    QWidget::setTabOrder(leMapTitle, leMapName);
    QWidget::setTabOrder(leMapName, teCopyright);
    QWidget::setTabOrder(teCopyright, radUseIncrementedFileName);
    QWidget::setTabOrder(radUseIncrementedFileName, radPromptForFileName);
    QWidget::setTabOrder(radPromptForFileName, buttonBox);

    retranslateUi(QuickPrintGuiBase);

    QMetaObject::connectSlotsByName(QuickPrintGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QuickPrintGuiBase)
    {
    QuickPrintGuiBase->setWindowTitle(QApplication::translate("QuickPrintGuiBase", "QGIS Quick Print Plugin", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QuickPrintGuiBase", "Note: If you want more control over the map layout please use the map composer function in QGIS.", 0, QApplication::UnicodeUTF8));
    grpOuput->setTitle(QApplication::translate("QuickPrintGuiBase", "Output", 0, QApplication::UnicodeUTF8));
    radUseIncrementedFileName->setText(QApplication::translate("QuickPrintGuiBase", "Use last filename but incremented.", 0, QApplication::UnicodeUTF8));
    lblIncrementedFilename->setText(QApplication::translate("QuickPrintGuiBase", "last used filename but incremented will be shown here", 0, QApplication::UnicodeUTF8));
    radPromptForFileName->setText(QApplication::translate("QuickPrintGuiBase", "Prompt for file name", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QuickPrintGuiBase", "Page Size", 0, QApplication::UnicodeUTF8));
    lblCopyright->setText(QApplication::translate("QuickPrintGuiBase", "Copyright", 0, QApplication::UnicodeUTF8));
    lblMapName->setText(QApplication::translate("QuickPrintGuiBase", "Map Name e.g. Water Features", 0, QApplication::UnicodeUTF8));
    lblMapTitle->setText(QApplication::translate("QuickPrintGuiBase", "Map Title e.g. ACME inc.", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("QuickPrintGuiBase", "Quick Print", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QuickPrintGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QuickPrintGuiBase: public Ui_QuickPrintGuiBase {};
} // namespace Ui

#endif // UI_QUICKPRINTGUIBASE_H
