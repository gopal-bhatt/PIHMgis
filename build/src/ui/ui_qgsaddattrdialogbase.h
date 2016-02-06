/********************************************************************************
** Form generated from reading ui file 'qgsaddattrdialogbase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSADDATTRDIALOGBASE_H
#define UI_QGSADDATTRDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsAddAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *mOkButton;
    QPushButton *mCancelButton;
    QSpacerItem *spacerItem1;
    QComboBox *mTypeBox;
    QLabel *textLabel2;
    QLineEdit *mNameEdit;
    QLabel *textLabel1;

    void setupUi(QDialog *QgsAddAttrDialogBase)
    {
    if (QgsAddAttrDialogBase->objectName().isEmpty())
        QgsAddAttrDialogBase->setObjectName(QString::fromUtf8("QgsAddAttrDialogBase"));
    QgsAddAttrDialogBase->resize(303, 171);
    QgsAddAttrDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsAddAttrDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    mOkButton = new QPushButton(QgsAddAttrDialogBase);
    mOkButton->setObjectName(QString::fromUtf8("mOkButton"));

    hboxLayout->addWidget(mOkButton);

    mCancelButton = new QPushButton(QgsAddAttrDialogBase);
    mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

    hboxLayout->addWidget(mCancelButton);

    spacerItem1 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

    mTypeBox = new QComboBox(QgsAddAttrDialogBase);
    mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

    gridLayout->addWidget(mTypeBox, 1, 1, 1, 1);

    textLabel2 = new QLabel(QgsAddAttrDialogBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

    mNameEdit = new QLineEdit(QgsAddAttrDialogBase);
    mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

    gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

    textLabel1 = new QLabel(QgsAddAttrDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    textLabel2->setBuddy(mTypeBox);
    textLabel1->setBuddy(mNameEdit);
    QWidget::setTabOrder(mNameEdit, mTypeBox);
    QWidget::setTabOrder(mTypeBox, mOkButton);
    QWidget::setTabOrder(mOkButton, mCancelButton);

    retranslateUi(QgsAddAttrDialogBase);

    QMetaObject::connectSlotsByName(QgsAddAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddAttrDialogBase)
    {
    QgsAddAttrDialogBase->setWindowTitle(QApplication::translate("QgsAddAttrDialogBase", "Add Attribute", 0, QApplication::UnicodeUTF8));
    mOkButton->setText(QApplication::translate("QgsAddAttrDialogBase", "OK", 0, QApplication::UnicodeUTF8));
    mCancelButton->setText(QApplication::translate("QgsAddAttrDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsAddAttrDialogBase", "Type:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsAddAttrDialogBase", "Name:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAddAttrDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAddAttrDialogBase: public Ui_QgsAddAttrDialogBase {};
} // namespace Ui

#endif // UI_QGSADDATTRDIALOGBASE_H
