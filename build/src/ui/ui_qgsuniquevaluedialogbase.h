/********************************************************************************
** Form generated from reading ui file 'qgsuniquevaluedialogbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSUNIQUEVALUEDIALOGBASE_H
#define UI_QGSUNIQUEVALUEDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

class Ui_QgsUniqueValueDialogBase
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *mSymbolWidgetStack;
    QWidget *page;
    QWidget *page_2;
    QLabel *mClassVarLabel;
    QPushButton *mDeletePushButton;
    QSpacerItem *spacerItem;
    QComboBox *mClassificationComboBox;
    QPushButton *mClassifyButton;
    QListWidget *mClassListWidget;

    void setupUi(QDialog *QgsUniqueValueDialogBase)
    {
    if (QgsUniqueValueDialogBase->objectName().isEmpty())
        QgsUniqueValueDialogBase->setObjectName(QString::fromUtf8("QgsUniqueValueDialogBase"));
    QgsUniqueValueDialogBase->resize(505, 300);
    gridLayout = new QGridLayout(QgsUniqueValueDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mSymbolWidgetStack = new QStackedWidget(QgsUniqueValueDialogBase);
    mSymbolWidgetStack->setObjectName(QString::fromUtf8("mSymbolWidgetStack"));
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    mSymbolWidgetStack->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    mSymbolWidgetStack->addWidget(page_2);

    gridLayout->addWidget(mSymbolWidgetStack, 1, 0, 1, 2);

    mClassVarLabel = new QLabel(QgsUniqueValueDialogBase);
    mClassVarLabel->setObjectName(QString::fromUtf8("mClassVarLabel"));
    mClassVarLabel->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(mClassVarLabel, 0, 0, 1, 1);

    mDeletePushButton = new QPushButton(QgsUniqueValueDialogBase);
    mDeletePushButton->setObjectName(QString::fromUtf8("mDeletePushButton"));

    gridLayout->addWidget(mDeletePushButton, 0, 4, 1, 1);

    spacerItem = new QSpacerItem(51, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 5, 1, 1);

    mClassificationComboBox = new QComboBox(QgsUniqueValueDialogBase);
    mClassificationComboBox->setObjectName(QString::fromUtf8("mClassificationComboBox"));
    mClassificationComboBox->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(mClassificationComboBox, 0, 1, 1, 2);

    mClassifyButton = new QPushButton(QgsUniqueValueDialogBase);
    mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

    gridLayout->addWidget(mClassifyButton, 0, 3, 1, 1);

    mClassListWidget = new QListWidget(QgsUniqueValueDialogBase);
    mClassListWidget->setObjectName(QString::fromUtf8("mClassListWidget"));

    gridLayout->addWidget(mClassListWidget, 1, 2, 1, 4);

    mClassVarLabel->setBuddy(mClassificationComboBox);

    retranslateUi(QgsUniqueValueDialogBase);

    QMetaObject::connectSlotsByName(QgsUniqueValueDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsUniqueValueDialogBase)
    {
    QgsUniqueValueDialogBase->setWindowTitle(QApplication::translate("QgsUniqueValueDialogBase", "Form1", 0, QApplication::UnicodeUTF8));
    mClassVarLabel->setText(QApplication::translate("QgsUniqueValueDialogBase", "Classification Field:", 0, QApplication::UnicodeUTF8));
    mDeletePushButton->setText(QApplication::translate("QgsUniqueValueDialogBase", "Delete class", 0, QApplication::UnicodeUTF8));
    mClassifyButton->setText(QApplication::translate("QgsUniqueValueDialogBase", "Classify", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsUniqueValueDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsUniqueValueDialogBase: public Ui_QgsUniqueValueDialogBase {};
} // namespace Ui

#endif // UI_QGSUNIQUEVALUEDIALOGBASE_H
