/********************************************************************************
** Form generated from reading ui file 'qgsaddattrdialogbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSADDATTRDIALOGBASE_H
#define UI_QGSADDATTRDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

class Ui_QgsAddAttrDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *mNameEdit;
    QLabel *textLabel2;
    QComboBox *mTypeBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsAddAttrDialogBase)
    {
    if (QgsAddAttrDialogBase->objectName().isEmpty())
        QgsAddAttrDialogBase->setObjectName(QString::fromUtf8("QgsAddAttrDialogBase"));
    QgsAddAttrDialogBase->resize(312, 132);
    QgsAddAttrDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsAddAttrDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(QgsAddAttrDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    mNameEdit = new QLineEdit(QgsAddAttrDialogBase);
    mNameEdit->setObjectName(QString::fromUtf8("mNameEdit"));

    gridLayout->addWidget(mNameEdit, 0, 1, 1, 1);

    textLabel2 = new QLabel(QgsAddAttrDialogBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

    mTypeBox = new QComboBox(QgsAddAttrDialogBase);
    mTypeBox->setObjectName(QString::fromUtf8("mTypeBox"));

    gridLayout->addWidget(mTypeBox, 1, 1, 1, 1);

    buttonBox = new QDialogButtonBox(QgsAddAttrDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

    textLabel1->setBuddy(mNameEdit);
    textLabel2->setBuddy(mTypeBox);
    QWidget::setTabOrder(mNameEdit, mTypeBox);

    retranslateUi(QgsAddAttrDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsAddAttrDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsAddAttrDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsAddAttrDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAddAttrDialogBase)
    {
    QgsAddAttrDialogBase->setWindowTitle(QApplication::translate("QgsAddAttrDialogBase", "Add Attribute", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsAddAttrDialogBase", "Name:", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsAddAttrDialogBase", "Type:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAddAttrDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAddAttrDialogBase: public Ui_QgsAddAttrDialogBase {};
} // namespace Ui

#endif // UI_QGSADDATTRDIALOGBASE_H
