/********************************************************************************
** Form generated from reading ui file 'qgshelpviewerbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
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
#include <QtGui/QTextBrowser>

class Ui_QgsHelpViewerBase
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonHome;
    QPushButton *buttonForward;
    QPushButton *buttonBack;
    QPushButton *buttonCancel;

    void setupUi(QDialog *QgsHelpViewerBase)
    {
    if (QgsHelpViewerBase->objectName().isEmpty())
        QgsHelpViewerBase->setObjectName(QString::fromUtf8("QgsHelpViewerBase"));
    QgsHelpViewerBase->resize(410, 374);
    QgsHelpViewerBase->setSizeGripEnabled(true);
    gridLayout = new QGridLayout(QgsHelpViewerBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textBrowser = new QTextBrowser(QgsHelpViewerBase);
    textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

    gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    buttonHome = new QPushButton(QgsHelpViewerBase);
    buttonHome->setObjectName(QString::fromUtf8("buttonHome"));
    buttonHome->setAutoDefault(true);

    hboxLayout->addWidget(buttonHome);

    buttonForward = new QPushButton(QgsHelpViewerBase);
    buttonForward->setObjectName(QString::fromUtf8("buttonForward"));
    buttonForward->setAutoDefault(true);

    hboxLayout->addWidget(buttonForward);

    buttonBack = new QPushButton(QgsHelpViewerBase);
    buttonBack->setObjectName(QString::fromUtf8("buttonBack"));
    buttonBack->setAutoDefault(true);

    hboxLayout->addWidget(buttonBack);

    buttonCancel = new QPushButton(QgsHelpViewerBase);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout->addWidget(buttonCancel);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

    QWidget::setTabOrder(textBrowser, buttonHome);
    QWidget::setTabOrder(buttonHome, buttonForward);
    QWidget::setTabOrder(buttonForward, buttonBack);
    QWidget::setTabOrder(buttonBack, buttonCancel);

    retranslateUi(QgsHelpViewerBase);

    QMetaObject::connectSlotsByName(QgsHelpViewerBase);
    } // setupUi

    void retranslateUi(QDialog *QgsHelpViewerBase)
    {
    QgsHelpViewerBase->setWindowTitle(QApplication::translate("QgsHelpViewerBase", "QGIS Help", 0, QApplication::UnicodeUTF8));
    buttonHome->setText(QApplication::translate("QgsHelpViewerBase", "&Home", 0, QApplication::UnicodeUTF8));
    buttonHome->setShortcut(QApplication::translate("QgsHelpViewerBase", "Alt+H", 0, QApplication::UnicodeUTF8));
    buttonForward->setText(QApplication::translate("QgsHelpViewerBase", "&Forward", 0, QApplication::UnicodeUTF8));
    buttonForward->setShortcut(QApplication::translate("QgsHelpViewerBase", "Alt+F", 0, QApplication::UnicodeUTF8));
    buttonBack->setText(QApplication::translate("QgsHelpViewerBase", "&Back", 0, QApplication::UnicodeUTF8));
    buttonBack->setShortcut(QApplication::translate("QgsHelpViewerBase", "Alt+B", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("QgsHelpViewerBase", "&Close", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QApplication::translate("QgsHelpViewerBase", "Alt+C", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsHelpViewerBase);
    } // retranslateUi

};

namespace Ui {
    class QgsHelpViewerBase: public Ui_QgsHelpViewerBase {};
} // namespace Ui

#endif // UI_QGSHELPVIEWERBASE_H
