/********************************************************************************
** Form generated from reading ui file 'qgsludialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLUDIALOGBASE_H
#define UI_QGSLUDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsLUDialogBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *mLowerEdit;
    QLabel *mLowerLabel;
    QSpacerItem *spacerItem;
    QLabel *mBetweenLabel;
    QLineEdit *mUpperEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *mOkButton;
    QPushButton *mCancelButton;
    QSpacerItem *spacerItem2;
    QLabel *mUpperLabel;

    void setupUi(QDialog *QgsLUDialogBase)
    {
    if (QgsLUDialogBase->objectName().isEmpty())
        QgsLUDialogBase->setObjectName(QString::fromUtf8("QgsLUDialogBase"));
    QgsLUDialogBase->resize(340, 159);
    QgsLUDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsLUDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mLowerEdit = new QLineEdit(QgsLUDialogBase);
    mLowerEdit->setObjectName(QString::fromUtf8("mLowerEdit"));

    gridLayout->addWidget(mLowerEdit, 1, 0, 1, 1);

    mLowerLabel = new QLabel(QgsLUDialogBase);
    mLowerLabel->setObjectName(QString::fromUtf8("mLowerLabel"));

    gridLayout->addWidget(mLowerLabel, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(16, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 1, 1, 1);

    mBetweenLabel = new QLabel(QgsLUDialogBase);
    mBetweenLabel->setObjectName(QString::fromUtf8("mBetweenLabel"));
    mBetweenLabel->setTextFormat(Qt::AutoText);

    gridLayout->addWidget(mBetweenLabel, 1, 1, 1, 1);

    mUpperEdit = new QLineEdit(QgsLUDialogBase);
    mUpperEdit->setObjectName(QString::fromUtf8("mUpperEdit"));

    gridLayout->addWidget(mUpperEdit, 1, 2, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem1 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    mOkButton = new QPushButton(QgsLUDialogBase);
    mOkButton->setObjectName(QString::fromUtf8("mOkButton"));

    hboxLayout->addWidget(mOkButton);

    mCancelButton = new QPushButton(QgsLUDialogBase);
    mCancelButton->setObjectName(QString::fromUtf8("mCancelButton"));

    hboxLayout->addWidget(mCancelButton);

    spacerItem2 = new QSpacerItem(31, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem2);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 3);

    mUpperLabel = new QLabel(QgsLUDialogBase);
    mUpperLabel->setObjectName(QString::fromUtf8("mUpperLabel"));

    gridLayout->addWidget(mUpperLabel, 0, 2, 1, 1);

    mLowerLabel->setBuddy(mLowerEdit);
    mUpperLabel->setBuddy(mUpperEdit);

    retranslateUi(QgsLUDialogBase);

    QMetaObject::connectSlotsByName(QgsLUDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLUDialogBase)
    {
    QgsLUDialogBase->setWindowTitle(QApplication::translate("QgsLUDialogBase", "Enter class bounds", 0, QApplication::UnicodeUTF8));
    mLowerLabel->setText(QApplication::translate("QgsLUDialogBase", "Lower value", 0, QApplication::UnicodeUTF8));
    mBetweenLabel->setText(QApplication::translate("QgsLUDialogBase", "-", 0, QApplication::UnicodeUTF8));
    mOkButton->setText(QApplication::translate("QgsLUDialogBase", "OK", 0, QApplication::UnicodeUTF8));
    mCancelButton->setText(QApplication::translate("QgsLUDialogBase", "Cancel", 0, QApplication::UnicodeUTF8));
    mUpperLabel->setText(QApplication::translate("QgsLUDialogBase", "Upper value", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLUDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLUDialogBase: public Ui_QgsLUDialogBase {};
} // namespace Ui

#endif // UI_QGSLUDIALOGBASE_H
