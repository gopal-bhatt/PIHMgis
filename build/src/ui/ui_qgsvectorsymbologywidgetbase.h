/********************************************************************************
** Form generated from reading ui file 'qgsvectorsymbologywidgetbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSVECTORSYMBOLOGYWIDGETBASE_H
#define UI_QGSVECTORSYMBOLOGYWIDGETBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include "qgsfillstylewidget.h"
#include "qgslinestylewidget.h"
#include "qgspointstylewidget.h"

class Ui_QgsVectorSymbologyWidgetBase
{
public:
    QGridLayout *gridLayout;
    Q3ListView *listView1;
    Q3GroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QLabel *textLabel3;
    QSpinBox *spinBox5;
    QLabel *textLabel2;
    QLabel *textLabel1;
    QComboBox *comboBox5;
    QComboBox *comboBox5_2;
    QSpacerItem *spacerItem;
    QgsFillStyleWidget *qgsFillStyleWidget1;
    QgsLineStyleWidget *qgsLineStyleWidget1;
    QgsPointStyleWidget *qgsPointStyleWidget1;

    void setupUi(QWidget *QgsVectorSymbologyWidgetBase)
    {
    if (QgsVectorSymbologyWidgetBase->objectName().isEmpty())
        QgsVectorSymbologyWidgetBase->setObjectName(QString::fromUtf8("QgsVectorSymbologyWidgetBase"));
    QgsVectorSymbologyWidgetBase->resize(483, 468);
    gridLayout = new QGridLayout(QgsVectorSymbologyWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    listView1 = new Q3ListView(QgsVectorSymbologyWidgetBase);
    listView1->addColumn(QApplication::translate("QgsVectorSymbologyWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
    listView1->addColumn(QApplication::translate("QgsVectorSymbologyWidgetBase", "Min", 0, QApplication::UnicodeUTF8));
    listView1->addColumn(QApplication::translate("QgsVectorSymbologyWidgetBase", "Max", 0, QApplication::UnicodeUTF8));
    listView1->setObjectName(QString::fromUtf8("listView1"));
    listView1->setResizePolicy(Q3ScrollView::AutoOneFit);
    listView1->setSelectionMode(Q3ListView::Single);
    listView1->setAllColumnsShowFocus(true);
    listView1->setShowSortIndicator(true);
    listView1->setResizeMode(Q3ListView::AllColumns);

    gridLayout->addWidget(listView1, 1, 1, 3, 1);

    groupBox1 = new Q3GroupBox(QgsVectorSymbologyWidgetBase);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setOrientation(Qt::Vertical);
    groupBox1->setColumnLayout(0, Qt::Vertical);
    groupBox1->layout()->setSpacing(6);
    groupBox1->layout()->setMargin(10);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox1->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textLabel3 = new QLabel(groupBox1);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout1->addWidget(textLabel3, 2, 0, 1, 1);

    spinBox5 = new QSpinBox(groupBox1);
    spinBox5->setObjectName(QString::fromUtf8("spinBox5"));

    gridLayout1->addWidget(spinBox5, 2, 1, 1, 1);

    textLabel2 = new QLabel(groupBox1);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout1->addWidget(textLabel2, 1, 0, 1, 1);

    textLabel1 = new QLabel(groupBox1);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

    comboBox5 = new QComboBox(groupBox1);
    comboBox5->setObjectName(QString::fromUtf8("comboBox5"));

    gridLayout1->addWidget(comboBox5, 0, 1, 1, 1);

    comboBox5_2 = new QComboBox(groupBox1);
    comboBox5_2->setObjectName(QString::fromUtf8("comboBox5_2"));

    gridLayout1->addWidget(comboBox5_2, 1, 1, 1, 1);


    gridLayout->addWidget(groupBox1, 0, 1, 1, 1);

    spacerItem = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 3, 0, 1, 1);

    qgsFillStyleWidget1 = new QgsFillStyleWidget(QgsVectorSymbologyWidgetBase);
    qgsFillStyleWidget1->setObjectName(QString::fromUtf8("qgsFillStyleWidget1"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(qgsFillStyleWidget1->sizePolicy().hasHeightForWidth());
    qgsFillStyleWidget1->setSizePolicy(sizePolicy);

    gridLayout->addWidget(qgsFillStyleWidget1, 1, 0, 1, 1);

    qgsLineStyleWidget1 = new QgsLineStyleWidget(QgsVectorSymbologyWidgetBase);
    qgsLineStyleWidget1->setObjectName(QString::fromUtf8("qgsLineStyleWidget1"));
    sizePolicy.setHeightForWidth(qgsLineStyleWidget1->sizePolicy().hasHeightForWidth());
    qgsLineStyleWidget1->setSizePolicy(sizePolicy);

    gridLayout->addWidget(qgsLineStyleWidget1, 0, 0, 1, 1);

    qgsPointStyleWidget1 = new QgsPointStyleWidget(QgsVectorSymbologyWidgetBase);
    qgsPointStyleWidget1->setObjectName(QString::fromUtf8("qgsPointStyleWidget1"));
    sizePolicy.setHeightForWidth(qgsPointStyleWidget1->sizePolicy().hasHeightForWidth());
    qgsPointStyleWidget1->setSizePolicy(sizePolicy);
    qgsPointStyleWidget1->setMaximumSize(QSize(32767, 32767));

    gridLayout->addWidget(qgsPointStyleWidget1, 2, 0, 1, 1);

    textLabel3->setBuddy(spinBox5);
    textLabel2->setBuddy(comboBox5_2);
    textLabel1->setBuddy(comboBox5);
    QWidget::setTabOrder(comboBox5, comboBox5_2);
    QWidget::setTabOrder(comboBox5_2, spinBox5);

    retranslateUi(QgsVectorSymbologyWidgetBase);

    QMetaObject::connectSlotsByName(QgsVectorSymbologyWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsVectorSymbologyWidgetBase)
    {
    QgsVectorSymbologyWidgetBase->setWindowTitle(QApplication::translate("QgsVectorSymbologyWidgetBase", "Form2", 0, QApplication::UnicodeUTF8));
    listView1->header()->setLabel(0, QApplication::translate("QgsVectorSymbologyWidgetBase", "Label", 0, QApplication::UnicodeUTF8));
    listView1->header()->setLabel(1, QApplication::translate("QgsVectorSymbologyWidgetBase", "Min", 0, QApplication::UnicodeUTF8));
    listView1->header()->setLabel(2, QApplication::translate("QgsVectorSymbologyWidgetBase", "Max", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("QgsVectorSymbologyWidgetBase", "Symbol Classes:", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsVectorSymbologyWidgetBase", "Count:", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsVectorSymbologyWidgetBase", "Mode:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsVectorSymbologyWidgetBase", "Field:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsVectorSymbologyWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsVectorSymbologyWidgetBase: public Ui_QgsVectorSymbologyWidgetBase {};
} // namespace Ui

#endif // UI_QGSVECTORSYMBOLOGYWIDGETBASE_H
