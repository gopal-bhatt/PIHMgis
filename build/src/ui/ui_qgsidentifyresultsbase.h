/********************************************************************************
** Form generated from reading ui file 'qgsidentifyresultsbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSIDENTIFYRESULTSBASE_H
#define UI_QGSIDENTIFYRESULTSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

class Ui_QgsIdentifyResultsBase
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *lstResults;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonHelp;
    QSpacerItem *spacerItem;
    QPushButton *buttonCancel;

    void setupUi(QDialog *QgsIdentifyResultsBase)
    {
    if (QgsIdentifyResultsBase->objectName().isEmpty())
        QgsIdentifyResultsBase->setObjectName(QString::fromUtf8("QgsIdentifyResultsBase"));
    QgsIdentifyResultsBase->resize(281, 316);
    vboxLayout = new QVBoxLayout(QgsIdentifyResultsBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    lstResults = new QTreeWidget(QgsIdentifyResultsBase);
    lstResults->setObjectName(QString::fromUtf8("lstResults"));
    lstResults->setLineWidth(2);
    lstResults->setSortingEnabled(true);

    vboxLayout->addWidget(lstResults);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    buttonHelp = new QPushButton(QgsIdentifyResultsBase);
    buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
    buttonHelp->setAutoDefault(true);

    hboxLayout->addWidget(buttonHelp);

    spacerItem = new QSpacerItem(20, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    buttonCancel = new QPushButton(QgsIdentifyResultsBase);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout->addWidget(buttonCancel);


    vboxLayout->addLayout(hboxLayout);


    retranslateUi(QgsIdentifyResultsBase);

    QMetaObject::connectSlotsByName(QgsIdentifyResultsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsIdentifyResultsBase)
    {
    QgsIdentifyResultsBase->setWindowTitle(QApplication::translate("QgsIdentifyResultsBase", "Identify Results", 0, QApplication::UnicodeUTF8));
    buttonHelp->setText(QApplication::translate("QgsIdentifyResultsBase", "Help", 0, QApplication::UnicodeUTF8));
    buttonHelp->setShortcut(QApplication::translate("QgsIdentifyResultsBase", "F1", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("QgsIdentifyResultsBase", "Close", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    Q_UNUSED(QgsIdentifyResultsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsIdentifyResultsBase: public Ui_QgsIdentifyResultsBase {};
} // namespace Ui

#endif // UI_QGSIDENTIFYRESULTSBASE_H
