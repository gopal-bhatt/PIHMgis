/********************************************************************************
** Form generated from reading ui file 'qgsattributedialogbase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEDIALOGBASE_H
#define UI_QGSATTRIBUTEDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

class Ui_QgsAttributeDialogBase
{
public:
    QGridLayout *gridLayout;
    QTableWidget *mTable;
    QPushButton *mOkButton;
    QPushButton *mCancelButton;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *QgsAttributeDialogBase)
    {
    if (QgsAttributeDialogBase->objectName().isEmpty())
        QgsAttributeDialogBase->setObjectName(QString::fromUtf8("QgsAttributeDialogBase"));
    QgsAttributeDialogBase->resize(267, 286);
    gridLayout = new QGridLayout(QgsAttributeDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mTable = new QTableWidget(QgsAttributeDialogBase);
    mTable->setObjectName(QString::fromUtf8("mTable"));
    mTable->setColumnCount(2);

    gridLayout->addWidget(mTable, 0, 0, 1, 3);

    mOkButton = new QPushButton(QgsAttributeDialogBase);
    mOkButton->setObjectName(QString::fromUtf8("mOkButton"));

    gridLayout->addWidget(mOkButton, 1, 1, 1, 1);

    mCancelButton = new QPushButton(QgsAttributeDialogBase);
    mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

    gridLayout->addWidget(mCancelButton, 1, 2, 1, 1);

    spacerItem = new QSpacerItem(55, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 0, 1, 1);

    QWidget::setTabOrder(mTable, mOkButton);
    QWidget::setTabOrder(mOkButton, mCancelButton);

    retranslateUi(QgsAttributeDialogBase);
    QObject::connect(mOkButton, SIGNAL(clicked()), QgsAttributeDialogBase, SLOT(accept()));
    QObject::connect(mCancelButton, SIGNAL(clicked()), QgsAttributeDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsAttributeDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeDialogBase)
    {
    QgsAttributeDialogBase->setWindowTitle(QApplication::translate("QgsAttributeDialogBase", "Enter Attribute Values", 0, QApplication::UnicodeUTF8));
    if (mTable->columnCount() < 2)
        mTable->setColumnCount(2);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("QgsAttributeDialogBase", "Attribute", 0, QApplication::UnicodeUTF8));
    mTable->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("QgsAttributeDialogBase", "Value", 0, QApplication::UnicodeUTF8));
    mTable->setHorizontalHeaderItem(1, __colItem1);
    if (mTable->rowCount() < 1)
        mTable->setRowCount(1);

    QTableWidgetItem *__rowItem = new QTableWidgetItem();
    __rowItem->setText(QApplication::translate("QgsAttributeDialogBase", "1", 0, QApplication::UnicodeUTF8));
    mTable->setVerticalHeaderItem(0, __rowItem);
    mOkButton->setText(QApplication::translate("QgsAttributeDialogBase", "&OK", 0, QApplication::UnicodeUTF8));
    mCancelButton->setText(QApplication::translate("QgsAttributeDialogBase", "&Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAttributeDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeDialogBase: public Ui_QgsAttributeDialogBase {};
} // namespace Ui

#endif // UI_QGSATTRIBUTEDIALOGBASE_H
