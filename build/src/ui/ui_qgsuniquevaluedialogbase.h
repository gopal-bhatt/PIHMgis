/********************************************************************************
** Form generated from reading ui file 'qgsuniquevaluedialogbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSUNIQUEVALUEDIALOGBASE_H
#define UI_QGSUNIQUEVALUEDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
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
    QLabel *mClassVarLabel;
    QComboBox *mClassificationComboBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *mClassifyButton;
    QPushButton *mAddButton;
    QPushButton *mDeletePushButton;
    QPushButton *mRandomizeColors;
    QPushButton *mResetColors;
    QListWidget *mClassListWidget;
    QStackedWidget *mSymbolWidgetStack;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QDialog *QgsUniqueValueDialogBase)
    {
    if (QgsUniqueValueDialogBase->objectName().isEmpty())
        QgsUniqueValueDialogBase->setObjectName(QString::fromUtf8("QgsUniqueValueDialogBase"));
    QgsUniqueValueDialogBase->resize(500, 408);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsUniqueValueDialogBase->sizePolicy().hasHeightForWidth());
    QgsUniqueValueDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsUniqueValueDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 8, 0, 0);
    mClassVarLabel = new QLabel(QgsUniqueValueDialogBase);
    mClassVarLabel->setObjectName(QString::fromUtf8("mClassVarLabel"));
    QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mClassVarLabel->sizePolicy().hasHeightForWidth());
    mClassVarLabel->setSizePolicy(sizePolicy1);
    mClassVarLabel->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(mClassVarLabel, 0, 0, 1, 1);

    mClassificationComboBox = new QComboBox(QgsUniqueValueDialogBase);
    mClassificationComboBox->setObjectName(QString::fromUtf8("mClassificationComboBox"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mClassificationComboBox->sizePolicy().hasHeightForWidth());
    mClassificationComboBox->setSizePolicy(sizePolicy2);
    mClassificationComboBox->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(mClassificationComboBox, 0, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(111, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    mClassifyButton = new QPushButton(QgsUniqueValueDialogBase);
    mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

    hboxLayout->addWidget(mClassifyButton);

    mAddButton = new QPushButton(QgsUniqueValueDialogBase);
    mAddButton->setObjectName(QString::fromUtf8("mAddButton"));

    hboxLayout->addWidget(mAddButton);

    mDeletePushButton = new QPushButton(QgsUniqueValueDialogBase);
    mDeletePushButton->setObjectName(QString::fromUtf8("mDeletePushButton"));

    hboxLayout->addWidget(mDeletePushButton);

    mRandomizeColors = new QPushButton(QgsUniqueValueDialogBase);
    mRandomizeColors->setObjectName(QString::fromUtf8("mRandomizeColors"));

    hboxLayout->addWidget(mRandomizeColors);

    mResetColors = new QPushButton(QgsUniqueValueDialogBase);
    mResetColors->setObjectName(QString::fromUtf8("mResetColors"));

    hboxLayout->addWidget(mResetColors);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 2);

    mClassListWidget = new QListWidget(QgsUniqueValueDialogBase);
    mClassListWidget->setObjectName(QString::fromUtf8("mClassListWidget"));
    QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(mClassListWidget->sizePolicy().hasHeightForWidth());
    mClassListWidget->setSizePolicy(sizePolicy3);

    gridLayout->addWidget(mClassListWidget, 2, 0, 1, 1);

    mSymbolWidgetStack = new QStackedWidget(QgsUniqueValueDialogBase);
    mSymbolWidgetStack->setObjectName(QString::fromUtf8("mSymbolWidgetStack"));
    QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(mSymbolWidgetStack->sizePolicy().hasHeightForWidth());
    mSymbolWidgetStack->setSizePolicy(sizePolicy4);
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    mSymbolWidgetStack->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    mSymbolWidgetStack->addWidget(page_2);

    gridLayout->addWidget(mSymbolWidgetStack, 2, 1, 1, 1);

    mClassVarLabel->setBuddy(mClassificationComboBox);
    QWidget::setTabOrder(mClassificationComboBox, mClassifyButton);
    QWidget::setTabOrder(mClassifyButton, mDeletePushButton);
    QWidget::setTabOrder(mDeletePushButton, mClassListWidget);

    retranslateUi(QgsUniqueValueDialogBase);

    QMetaObject::connectSlotsByName(QgsUniqueValueDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsUniqueValueDialogBase)
    {
    QgsUniqueValueDialogBase->setWindowTitle(QApplication::translate("QgsUniqueValueDialogBase", "Form1", 0, QApplication::UnicodeUTF8));
    mClassVarLabel->setText(QApplication::translate("QgsUniqueValueDialogBase", "Classification field", 0, QApplication::UnicodeUTF8));
    mClassifyButton->setText(QApplication::translate("QgsUniqueValueDialogBase", "Classify", 0, QApplication::UnicodeUTF8));
    mAddButton->setText(QApplication::translate("QgsUniqueValueDialogBase", "Add class", 0, QApplication::UnicodeUTF8));
    mDeletePushButton->setText(QApplication::translate("QgsUniqueValueDialogBase", "Delete classes", 0, QApplication::UnicodeUTF8));
    mRandomizeColors->setText(QApplication::translate("QgsUniqueValueDialogBase", "Randomize Colors", 0, QApplication::UnicodeUTF8));
    mResetColors->setText(QApplication::translate("QgsUniqueValueDialogBase", "Reset Colors", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsUniqueValueDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsUniqueValueDialogBase: public Ui_QgsUniqueValueDialogBase {};
} // namespace Ui

#endif // UI_QGSUNIQUEVALUEDIALOGBASE_H
