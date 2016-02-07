/********************************************************************************
** Form generated from reading ui file 'qgshelpviewerbase.ui'
**
** Created: Tue Jun 22 23:10:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSHELPVIEWERBASE_H
#define UI_QGSHELPVIEWERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>

class Ui_QgsHelpViewerBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *txtBrowser;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *buttonCancel;

    void setupUi(QDialog *QgsHelpViewerBase)
    {
    if (QgsHelpViewerBase->objectName().isEmpty())
        QgsHelpViewerBase->setObjectName(QString::fromUtf8("QgsHelpViewerBase"));
    QgsHelpViewerBase->resize(514, 417);
    QgsHelpViewerBase->setWindowIcon(QIcon());
    QgsHelpViewerBase->setSizeGripEnabled(true);
    gridLayout = new QGridLayout(QgsHelpViewerBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    txtBrowser = new QTextBrowser(QgsHelpViewerBase);
    txtBrowser->setObjectName(QString::fromUtf8("txtBrowser"));
    txtBrowser->setAcceptDrops(false);

    gridLayout->addWidget(txtBrowser, 0, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(390, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    buttonCancel = new QPushButton(QgsHelpViewerBase);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout->addWidget(buttonCancel);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


    retranslateUi(QgsHelpViewerBase);
    QObject::connect(buttonCancel, SIGNAL(clicked()), QgsHelpViewerBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsHelpViewerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHelpViewerBase)
    {
    QgsHelpViewerBase->setWindowTitle(QApplication::translate("QgsHelpViewerBase", "QGIS Help", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("QgsHelpViewerBase", "&Close", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QApplication::translate("QgsHelpViewerBase", "Alt+C", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsHelpViewerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsHelpViewerBase: public Ui_QgsHelpViewerBase {};
} // namespace Ui

#endif // UI_QGSHELPVIEWERBASE_H
