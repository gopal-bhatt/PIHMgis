/********************************************************************************
** Form generated from reading ui file 'qgsdelattrdialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSDELATTRDIALOGBASE_H
#define UI_QGSDELATTRDIALOGBASE_H

#include <Qt3Support/Q3ListBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsDelAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *mOkButton;
    QPushButton *mCancelButton;
    QSpacerItem *spacerItem1;
    Q3ListBox *listBox2;

    void setupUi(QDialog *QgsDelAttrDialogBase)
    {
    if (QgsDelAttrDialogBase->objectName().isEmpty())
        QgsDelAttrDialogBase->setObjectName(QString::fromUtf8("QgsDelAttrDialogBase"));
    QgsDelAttrDialogBase->resize(360, 238);
    gridLayout = new QGridLayout(QgsDelAttrDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(93, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    mOkButton = new QPushButton(QgsDelAttrDialogBase);
    mOkButton->setObjectName(QString::fromUtf8("mOkButton"));

    hboxLayout->addWidget(mOkButton);

    mCancelButton = new QPushButton(QgsDelAttrDialogBase);
    mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

    hboxLayout->addWidget(mCancelButton);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

    listBox2 = new Q3ListBox(QgsDelAttrDialogBase);
    listBox2->setObjectName(QString::fromUtf8("listBox2"));
    listBox2->setSelectionMode(Q3ListBox::Multi);

    gridLayout->addWidget(listBox2, 0, 0, 1, 1);


    retranslateUi(QgsDelAttrDialogBase);

    QMetaObject::connectSlotsByName(QgsDelAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDelAttrDialogBase)
    {
    QgsDelAttrDialogBase->setWindowTitle(QApplication::translate("QgsDelAttrDialogBase", "Delete Attributes", 0, QApplication::UnicodeUTF8));
    mOkButton->setText(QApplication::translate("QgsDelAttrDialogBase", "OK", 0, QApplication::UnicodeUTF8));
    mCancelButton->setText(QApplication::translate("QgsDelAttrDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsDelAttrDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDelAttrDialogBase: public Ui_QgsDelAttrDialogBase {};
} // namespace Ui

#endif // UI_QGSDELATTRDIALOGBASE_H
