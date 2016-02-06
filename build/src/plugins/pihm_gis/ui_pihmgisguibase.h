/********************************************************************************
** Form generated from reading ui file 'pihmgisguibase.ui'
**
** Created: Thu Jun 18 05:52:04 2009
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PIHMGISGUIBASE_H
#define UI_PIHMGISGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

class Ui_PIHMgisGuiBase
{
public:
    QGridLayout *gridLayout;
    QLabel *txtHeading;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PIHMgisGuiBase)
    {
    if (PIHMgisGuiBase->objectName().isEmpty())
        PIHMgisGuiBase->setObjectName(QString::fromUtf8("PIHMgisGuiBase"));
    PIHMgisGuiBase->resize(584, 435);
    PIHMgisGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(PIHMgisGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    txtHeading = new QLabel(PIHMgisGuiBase);
    txtHeading->setObjectName(QString::fromUtf8("txtHeading"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
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

    textBrowser = new QTextBrowser(PIHMgisGuiBase);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setOpenExternalLinks(true);

    gridLayout->addWidget(textBrowser, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(PIHMgisGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok|QDialogButtonBox::SaveAll);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


    retranslateUi(PIHMgisGuiBase);

    QMetaObject::connectSlotsByName(PIHMgisGuiBase);
    } // setupUi

    void retranslateUi(QDialog *PIHMgisGuiBase)
    {
    PIHMgisGuiBase->setWindowTitle(QApplication::translate("PIHMgisGuiBase", "QGIS Plugin Template", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("PIHMgisGuiBase", "Plugin Template", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(PIHMgisGuiBase);
    } // retranslateUi

};

namespace Ui {
    class PIHMgisGuiBase: public Ui_PIHMgisGuiBase {};
} // namespace Ui

#endif // UI_PIHMGISGUIBASE_H
