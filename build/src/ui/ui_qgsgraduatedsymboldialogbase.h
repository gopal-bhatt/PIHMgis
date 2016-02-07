/********************************************************************************
** Form generated from reading ui file 'qgsgraduatedsymboldialogbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGRADUATEDSYMBOLDIALOGBASE_H
#define UI_QGSGRADUATEDSYMBOLDIALOGBASE_H

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
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

class Ui_QgsGraduatedSymbolDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *classvarlabel;
    QComboBox *classificationComboBox;
    QLabel *modelabel;
    QComboBox *modeComboBox;
    QLabel *numberofclasseslabel;
    QSpinBox *numberofclassesspinbox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QPushButton *mClassifyButton;
    QPushButton *mDeleteClassButton;
    QListWidget *mClassListWidget;
    QStackedWidget *mSymbolWidgetStack;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QDialog *QgsGraduatedSymbolDialogBase)
    {
    if (QgsGraduatedSymbolDialogBase->objectName().isEmpty())
        QgsGraduatedSymbolDialogBase->setObjectName(QString::fromUtf8("QgsGraduatedSymbolDialogBase"));
    QgsGraduatedSymbolDialogBase->resize(500, 437);
    QgsGraduatedSymbolDialogBase->setMinimumSize(QSize(300, 100));
    QgsGraduatedSymbolDialogBase->setMaximumSize(QSize(32767, 32767));
    gridLayout = new QGridLayout(QgsGraduatedSymbolDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 8, 0, 0);
    classvarlabel = new QLabel(QgsGraduatedSymbolDialogBase);
    classvarlabel->setObjectName(QString::fromUtf8("classvarlabel"));
    QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(classvarlabel->sizePolicy().hasHeightForWidth());
    classvarlabel->setSizePolicy(sizePolicy);
    classvarlabel->setMinimumSize(QSize(0, 20));
    classvarlabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(classvarlabel, 0, 0, 1, 1);

    classificationComboBox = new QComboBox(QgsGraduatedSymbolDialogBase);
    classificationComboBox->setObjectName(QString::fromUtf8("classificationComboBox"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(classificationComboBox->sizePolicy().hasHeightForWidth());
    classificationComboBox->setSizePolicy(sizePolicy1);
    classificationComboBox->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(classificationComboBox, 0, 1, 1, 1);

    modelabel = new QLabel(QgsGraduatedSymbolDialogBase);
    modelabel->setObjectName(QString::fromUtf8("modelabel"));
    sizePolicy.setHeightForWidth(modelabel->sizePolicy().hasHeightForWidth());
    modelabel->setSizePolicy(sizePolicy);
    modelabel->setMinimumSize(QSize(0, 20));
    modelabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(modelabel, 1, 0, 1, 1);

    modeComboBox = new QComboBox(QgsGraduatedSymbolDialogBase);
    modeComboBox->setObjectName(QString::fromUtf8("modeComboBox"));
    sizePolicy1.setHeightForWidth(modeComboBox->sizePolicy().hasHeightForWidth());
    modeComboBox->setSizePolicy(sizePolicy1);
    modeComboBox->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(modeComboBox, 1, 1, 1, 1);

    numberofclasseslabel = new QLabel(QgsGraduatedSymbolDialogBase);
    numberofclasseslabel->setObjectName(QString::fromUtf8("numberofclasseslabel"));
    sizePolicy.setHeightForWidth(numberofclasseslabel->sizePolicy().hasHeightForWidth());
    numberofclasseslabel->setSizePolicy(sizePolicy);
    numberofclasseslabel->setMinimumSize(QSize(0, 30));
    numberofclasseslabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    gridLayout->addWidget(numberofclasseslabel, 2, 0, 1, 1);

    numberofclassesspinbox = new QSpinBox(QgsGraduatedSymbolDialogBase);
    numberofclassesspinbox->setObjectName(QString::fromUtf8("numberofclassesspinbox"));
    sizePolicy1.setHeightForWidth(numberofclassesspinbox->sizePolicy().hasHeightForWidth());
    numberofclassesspinbox->setSizePolicy(sizePolicy1);
    numberofclassesspinbox->setMinimumSize(QSize(0, 20));

    gridLayout->addWidget(numberofclassesspinbox, 2, 1, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 3, 0, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    mClassifyButton = new QPushButton(QgsGraduatedSymbolDialogBase);
    mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));
    QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mClassifyButton->sizePolicy().hasHeightForWidth());
    mClassifyButton->setSizePolicy(sizePolicy2);

    hboxLayout->addWidget(mClassifyButton);

    mDeleteClassButton = new QPushButton(QgsGraduatedSymbolDialogBase);
    mDeleteClassButton->setObjectName(QString::fromUtf8("mDeleteClassButton"));

    hboxLayout->addWidget(mDeleteClassButton);


    gridLayout->addLayout(hboxLayout, 3, 1, 1, 1);

    mClassListWidget = new QListWidget(QgsGraduatedSymbolDialogBase);
    mClassListWidget->setObjectName(QString::fromUtf8("mClassListWidget"));
    QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(mClassListWidget->sizePolicy().hasHeightForWidth());
    mClassListWidget->setSizePolicy(sizePolicy3);

    gridLayout->addWidget(mClassListWidget, 4, 0, 1, 1);

    mSymbolWidgetStack = new QStackedWidget(QgsGraduatedSymbolDialogBase);
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

    gridLayout->addWidget(mSymbolWidgetStack, 4, 1, 1, 1);

    QWidget::setTabOrder(classificationComboBox, modeComboBox);
    QWidget::setTabOrder(modeComboBox, numberofclassesspinbox);
    QWidget::setTabOrder(numberofclassesspinbox, mClassifyButton);
    QWidget::setTabOrder(mClassifyButton, mDeleteClassButton);
    QWidget::setTabOrder(mDeleteClassButton, mClassListWidget);

    retranslateUi(QgsGraduatedSymbolDialogBase);

    mSymbolWidgetStack->setCurrentIndex(1);


    QMetaObject::connectSlotsByName(QgsGraduatedSymbolDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGraduatedSymbolDialogBase)
    {
    QgsGraduatedSymbolDialogBase->setWindowTitle(QApplication::translate("QgsGraduatedSymbolDialogBase", "graduated Symbol", 0, QApplication::UnicodeUTF8));
    classvarlabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Classification field", 0, QApplication::UnicodeUTF8));
    modelabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Mode", 0, QApplication::UnicodeUTF8));
    numberofclasseslabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Number of classes", 0, QApplication::UnicodeUTF8));
    mClassifyButton->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Classify", 0, QApplication::UnicodeUTF8));
    mDeleteClassButton->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Delete class", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGraduatedSymbolDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGraduatedSymbolDialogBase: public Ui_QgsGraduatedSymbolDialogBase {};
} // namespace Ui

#endif // UI_QGSGRADUATEDSYMBOLDIALOGBASE_H
