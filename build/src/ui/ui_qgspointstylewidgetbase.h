/********************************************************************************
** Form generated from reading ui file 'qgspointstylewidgetbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPOINTSTYLEWIDGETBASE_H
#define UI_QGSPOINTSTYLEWIDGETBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

class Ui_QgsPointStyleWidgetBase
{
public:
    QGridLayout *gridLayout;
    Q3GroupBox *grpSymbol;
    QGridLayout *gridLayout1;
    QLabel *txtSymbolScale;
    QSpinBox *spbSymbolScale;
    QComboBox *comboBox8;

    void setupUi(QWidget *QgsPointStyleWidgetBase)
    {
    if (QgsPointStyleWidgetBase->objectName().isEmpty())
        QgsPointStyleWidgetBase->setObjectName(QString::fromUtf8("QgsPointStyleWidgetBase"));
    QgsPointStyleWidgetBase->resize(180, 141);
    gridLayout = new QGridLayout(QgsPointStyleWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    grpSymbol = new Q3GroupBox(QgsPointStyleWidgetBase);
    grpSymbol->setObjectName(QString::fromUtf8("grpSymbol"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(grpSymbol->sizePolicy().hasHeightForWidth());
    grpSymbol->setSizePolicy(sizePolicy);
    grpSymbol->setOrientation(Qt::Vertical);
    grpSymbol->setColumnLayout(0, Qt::Vertical);
    grpSymbol->layout()->setSpacing(6);
    grpSymbol->layout()->setMargin(10);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(grpSymbol->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    txtSymbolScale = new QLabel(grpSymbol);
    txtSymbolScale->setObjectName(QString::fromUtf8("txtSymbolScale"));

    gridLayout1->addWidget(txtSymbolScale, 1, 0, 1, 1);

    spbSymbolScale = new QSpinBox(grpSymbol);
    spbSymbolScale->setObjectName(QString::fromUtf8("spbSymbolScale"));
    spbSymbolScale->setMinimumSize(QSize(42, 0));

    gridLayout1->addWidget(spbSymbolScale, 2, 0, 1, 1);

    comboBox8 = new QComboBox(grpSymbol);
    comboBox8->setObjectName(QString::fromUtf8("comboBox8"));

    gridLayout1->addWidget(comboBox8, 0, 0, 1, 1);


    gridLayout->addWidget(grpSymbol, 0, 0, 1, 1);

    txtSymbolScale->setBuddy(spbSymbolScale);
    QWidget::setTabOrder(comboBox8, spbSymbolScale);

    retranslateUi(QgsPointStyleWidgetBase);

    QMetaObject::connectSlotsByName(QgsPointStyleWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsPointStyleWidgetBase)
    {
    QgsPointStyleWidgetBase->setWindowTitle(QApplication::translate("QgsPointStyleWidgetBase", "Form3", 0, QApplication::UnicodeUTF8));
    grpSymbol->setTitle(QApplication::translate("QgsPointStyleWidgetBase", "Symbol Style", 0, QApplication::UnicodeUTF8));
    txtSymbolScale->setText(QApplication::translate("QgsPointStyleWidgetBase", "Scale", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPointStyleWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPointStyleWidgetBase: public Ui_QgsPointStyleWidgetBase {};
} // namespace Ui

#endif // UI_QGSPOINTSTYLEWIDGETBASE_H
