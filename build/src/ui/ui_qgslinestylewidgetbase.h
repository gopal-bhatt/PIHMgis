/********************************************************************************
** Form generated from reading ui file 'qgslinestylewidgetbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLINESTYLEWIDGETBASE_H
#define UI_QGSLINESTYLEWIDGETBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

class Ui_QgsLineStyleWidgetBase
{
public:
    QGridLayout *gridLayout;
    Q3GroupBox *grpOutline;
    QGridLayout *gridLayout1;
    QSpinBox *spbOutlineWidth;
    QLabel *txtOutLineWidth;
    QSpacerItem *spacerItem;
    QLabel *txtOutlineColour;
    QComboBox *lptOutlinePattern;
    QPushButton *colOutlineColour;

    void setupUi(QWidget *QgsLineStyleWidgetBase)
    {
    if (QgsLineStyleWidgetBase->objectName().isEmpty())
        QgsLineStyleWidgetBase->setObjectName(QString::fromUtf8("QgsLineStyleWidgetBase"));
    QgsLineStyleWidgetBase->resize(193, 128);
    gridLayout = new QGridLayout(QgsLineStyleWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    grpOutline = new Q3GroupBox(QgsLineStyleWidgetBase);
    grpOutline->setObjectName(QString::fromUtf8("grpOutline"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(grpOutline->sizePolicy().hasHeightForWidth());
    grpOutline->setSizePolicy(sizePolicy);
    grpOutline->setOrientation(Qt::Vertical);
    grpOutline->setColumnLayout(0, Qt::Vertical);
    grpOutline->layout()->setSpacing(6);
    grpOutline->layout()->setMargin(10);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(grpOutline->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    spbOutlineWidth = new QSpinBox(grpOutline);
    spbOutlineWidth->setObjectName(QString::fromUtf8("spbOutlineWidth"));
    spbOutlineWidth->setMinimumSize(QSize(42, 0));

    gridLayout1->addWidget(spbOutlineWidth, 2, 2, 1, 1);

    txtOutLineWidth = new QLabel(grpOutline);
    txtOutLineWidth->setObjectName(QString::fromUtf8("txtOutLineWidth"));

    gridLayout1->addWidget(txtOutLineWidth, 1, 2, 1, 1);

    spacerItem = new QSpacerItem(30, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem, 2, 1, 1, 1);

    txtOutlineColour = new QLabel(grpOutline);
    txtOutlineColour->setObjectName(QString::fromUtf8("txtOutlineColour"));

    gridLayout1->addWidget(txtOutlineColour, 1, 0, 1, 2);

    lptOutlinePattern = new QComboBox(grpOutline);
    lptOutlinePattern->setObjectName(QString::fromUtf8("lptOutlinePattern"));

    gridLayout1->addWidget(lptOutlinePattern, 0, 0, 1, 3);

    colOutlineColour = new QPushButton(grpOutline);
    colOutlineColour->setObjectName(QString::fromUtf8("colOutlineColour"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(colOutlineColour->sizePolicy().hasHeightForWidth());
    colOutlineColour->setSizePolicy(sizePolicy1);
    colOutlineColour->setMinimumSize(QSize(50, 0));

    gridLayout1->addWidget(colOutlineColour, 2, 0, 1, 1);


    gridLayout->addWidget(grpOutline, 0, 0, 1, 1);

    txtOutLineWidth->setBuddy(spbOutlineWidth);
    txtOutlineColour->setBuddy(colOutlineColour);
    QWidget::setTabOrder(lptOutlinePattern, colOutlineColour);
    QWidget::setTabOrder(colOutlineColour, spbOutlineWidth);

    retranslateUi(QgsLineStyleWidgetBase);

    QMetaObject::connectSlotsByName(QgsLineStyleWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsLineStyleWidgetBase)
    {
    QgsLineStyleWidgetBase->setWindowTitle(QApplication::translate("QgsLineStyleWidgetBase", "Form2", 0, QApplication::UnicodeUTF8));
    grpOutline->setTitle(QApplication::translate("QgsLineStyleWidgetBase", "Outline Style", 0, QApplication::UnicodeUTF8));
    txtOutLineWidth->setText(QApplication::translate("QgsLineStyleWidgetBase", "Width:", 0, QApplication::UnicodeUTF8));
    txtOutlineColour->setText(QApplication::translate("QgsLineStyleWidgetBase", "Colour:", 0, QApplication::UnicodeUTF8));
    lptOutlinePattern->clear();
    lptOutlinePattern->insertItems(0, QStringList()
     << QApplication::translate("QgsLineStyleWidgetBase", "LineStyleWidget", 0, QApplication::UnicodeUTF8)
    );
    colOutlineColour->setText(QApplication::translate("QgsLineStyleWidgetBase", "col", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLineStyleWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLineStyleWidgetBase: public Ui_QgsLineStyleWidgetBase {};
} // namespace Ui

#endif // UI_QGSLINESTYLEWIDGETBASE_H
