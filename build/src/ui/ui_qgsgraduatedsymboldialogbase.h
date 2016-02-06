/********************************************************************************
** Form generated from reading ui file 'qgsgraduatedsymboldialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGRADUATEDSYMBOLDIALOGBASE_H
#define UI_QGSGRADUATEDSYMBOLDIALOGBASE_H

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
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsGraduatedSymbolDialogBase
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *mSymbolWidgetStack;
    QWidget *page;
    QWidget *page_2;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *classvarlabel;
    QLabel *modelabel;
    QLabel *numberofclasseslabel;
    QVBoxLayout *vboxLayout1;
    QComboBox *classificationComboBox;
    QComboBox *modeComboBox;
    QSpinBox *numberofclassesspinbox;
    QPushButton *mDeleteClassButton;
    QPushButton *mClassifyButton;
    QListWidget *mClassListWidget;

    void setupUi(QDialog *QgsGraduatedSymbolDialogBase)
    {
    if (QgsGraduatedSymbolDialogBase->objectName().isEmpty())
        QgsGraduatedSymbolDialogBase->setObjectName(QString::fromUtf8("QgsGraduatedSymbolDialogBase"));
    QgsGraduatedSymbolDialogBase->resize(388, 502);
    QgsGraduatedSymbolDialogBase->setMinimumSize(QSize(300, 100));
    QgsGraduatedSymbolDialogBase->setMaximumSize(QSize(32767, 32767));
    gridLayout = new QGridLayout(QgsGraduatedSymbolDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mSymbolWidgetStack = new QStackedWidget(QgsGraduatedSymbolDialogBase);
    mSymbolWidgetStack->setObjectName(QString::fromUtf8("mSymbolWidgetStack"));
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    mSymbolWidgetStack->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    mSymbolWidgetStack->addWidget(page_2);

    gridLayout->addWidget(mSymbolWidgetStack, 1, 0, 2, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    classvarlabel = new QLabel(QgsGraduatedSymbolDialogBase);
    classvarlabel->setObjectName(QString::fromUtf8("classvarlabel"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(classvarlabel->sizePolicy().hasHeightForWidth());
    classvarlabel->setSizePolicy(sizePolicy);
    classvarlabel->setMinimumSize(QSize(0, 20));
    classvarlabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    vboxLayout->addWidget(classvarlabel);

    modelabel = new QLabel(QgsGraduatedSymbolDialogBase);
    modelabel->setObjectName(QString::fromUtf8("modelabel"));
    modelabel->setMinimumSize(QSize(0, 20));
    modelabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    vboxLayout->addWidget(modelabel);

    numberofclasseslabel = new QLabel(QgsGraduatedSymbolDialogBase);
    numberofclasseslabel->setObjectName(QString::fromUtf8("numberofclasseslabel"));
    numberofclasseslabel->setMinimumSize(QSize(0, 30));
    numberofclasseslabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    vboxLayout->addWidget(numberofclasseslabel);


    hboxLayout->addLayout(vboxLayout);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    classificationComboBox = new QComboBox(QgsGraduatedSymbolDialogBase);
    classificationComboBox->setObjectName(QString::fromUtf8("classificationComboBox"));
    classificationComboBox->setMinimumSize(QSize(0, 20));

    vboxLayout1->addWidget(classificationComboBox);

    modeComboBox = new QComboBox(QgsGraduatedSymbolDialogBase);
    modeComboBox->setObjectName(QString::fromUtf8("modeComboBox"));
    modeComboBox->setMinimumSize(QSize(0, 20));

    vboxLayout1->addWidget(modeComboBox);

    numberofclassesspinbox = new QSpinBox(QgsGraduatedSymbolDialogBase);
    numberofclassesspinbox->setObjectName(QString::fromUtf8("numberofclassesspinbox"));
    numberofclassesspinbox->setMinimumSize(QSize(0, 20));

    vboxLayout1->addWidget(numberofclassesspinbox);


    hboxLayout->addLayout(vboxLayout1);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 3);

    mDeleteClassButton = new QPushButton(QgsGraduatedSymbolDialogBase);
    mDeleteClassButton->setObjectName(QString::fromUtf8("mDeleteClassButton"));

    gridLayout->addWidget(mDeleteClassButton, 1, 2, 1, 1);

    mClassifyButton = new QPushButton(QgsGraduatedSymbolDialogBase);
    mClassifyButton->setObjectName(QString::fromUtf8("mClassifyButton"));

    gridLayout->addWidget(mClassifyButton, 1, 1, 1, 1);

    mClassListWidget = new QListWidget(QgsGraduatedSymbolDialogBase);
    mClassListWidget->setObjectName(QString::fromUtf8("mClassListWidget"));

    gridLayout->addWidget(mClassListWidget, 2, 1, 1, 2);


    retranslateUi(QgsGraduatedSymbolDialogBase);

    QMetaObject::connectSlotsByName(QgsGraduatedSymbolDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGraduatedSymbolDialogBase)
    {
    QgsGraduatedSymbolDialogBase->setWindowTitle(QApplication::translate("QgsGraduatedSymbolDialogBase", "graduated Symbol", 0, QApplication::UnicodeUTF8));
    classvarlabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Classification Field:", 0, QApplication::UnicodeUTF8));
    modelabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Mode:", 0, QApplication::UnicodeUTF8));
    numberofclasseslabel->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Number of Classes:", 0, QApplication::UnicodeUTF8));
    mDeleteClassButton->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Delete class", 0, QApplication::UnicodeUTF8));
    mClassifyButton->setText(QApplication::translate("QgsGraduatedSymbolDialogBase", "Classify", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGraduatedSymbolDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGraduatedSymbolDialogBase: public Ui_QgsGraduatedSymbolDialogBase {};
} // namespace Ui

#endif // UI_QGSGRADUATEDSYMBOLDIALOGBASE_H
