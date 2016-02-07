/********************************************************************************
** Form generated from reading ui file 'qgisappbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGISAPPBASE_H
#define UI_QGISAPPBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

class Ui_QgisAppBase
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *QgisAppBase)
    {
    if (QgisAppBase->objectName().isEmpty())
        QgisAppBase->setObjectName(QString::fromUtf8("QgisAppBase"));
    QgisAppBase->resize(604, 391);
    QgisAppBase->setWindowIcon(QIcon(QString::fromUtf8("../../images/icons/qgis-icon-16x16.png")));
    QgisAppBase->setDockNestingEnabled(true);
    centralWidget = new QWidget(QgisAppBase);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
    centralWidget->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(6);
    gridLayout->setContentsMargins(9, 9, 9, 9);
    QgisAppBase->setCentralWidget(centralWidget);

    retranslateUi(QgisAppBase);

    QMetaObject::connectSlotsByName(QgisAppBase);
    } // setupUi

    void retranslateUi(QMainWindow *QgisAppBase)
    {
    QgisAppBase->setWindowTitle(QApplication::translate("QgisAppBase", "QGIS", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgisAppBase);
    } // retranslateUi

};

namespace Ui {
    class QgisAppBase: public Ui_QgisAppBase {};
} // namespace Ui

#endif // UI_QGISAPPBASE_H
