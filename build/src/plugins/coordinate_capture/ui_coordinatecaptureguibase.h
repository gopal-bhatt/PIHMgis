/********************************************************************************
** Form generated from reading ui file 'coordinatecaptureguibase.ui'
**
** Created: Tue Jun 22 23:13:00 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_COORDINATECAPTUREGUIBASE_H
#define UI_COORDINATECAPTUREGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

class Ui_CoordinateCaptureGuiBase
{
public:
    QGridLayout *gridLayout;
    QLabel *txtHeading;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CoordinateCaptureGuiBase)
    {
    if (CoordinateCaptureGuiBase->objectName().isEmpty())
        CoordinateCaptureGuiBase->setObjectName(QString::fromUtf8("CoordinateCaptureGuiBase"));
    CoordinateCaptureGuiBase->resize(584, 435);
    CoordinateCaptureGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(CoordinateCaptureGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    txtHeading = new QLabel(CoordinateCaptureGuiBase);
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

    textBrowser = new QTextBrowser(CoordinateCaptureGuiBase);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
    textBrowser->setOpenExternalLinks(true);

    gridLayout->addWidget(textBrowser, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(CoordinateCaptureGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok|QDialogButtonBox::SaveAll);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


    retranslateUi(CoordinateCaptureGuiBase);

    QMetaObject::connectSlotsByName(CoordinateCaptureGuiBase);
    } // setupUi

    void retranslateUi(QDialog *CoordinateCaptureGuiBase)
    {
    CoordinateCaptureGuiBase->setWindowTitle(QApplication::translate("CoordinateCaptureGuiBase", "QGIS Plugin Template", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("CoordinateCaptureGuiBase", "Plugin Template", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CoordinateCaptureGuiBase);
    } // retranslateUi

};

namespace Ui {
    class CoordinateCaptureGuiBase: public Ui_CoordinateCaptureGuiBase {};
} // namespace Ui

#endif // UI_COORDINATECAPTUREGUIBASE_H
