/********************************************************************************
** Form generated from reading ui file 'qgsfillstylewidgetbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSFILLSTYLEWIDGETBASE_H
#define UI_QGSFILLSTYLEWIDGETBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

class Ui_QgsFillStyleWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *grpFill;
    QGridLayout *gridLayout1;
    QPushButton *colFillColour;
    QLabel *txtFillColour;
    QComboBox *fptFillPattern;

    void setupUi(QWidget *QgsFillStyleWidgetBase)
    {
    if (QgsFillStyleWidgetBase->objectName().isEmpty())
        QgsFillStyleWidgetBase->setObjectName(QString::fromUtf8("QgsFillStyleWidgetBase"));
    QgsFillStyleWidgetBase->resize(219, 111);
    gridLayout = new QGridLayout(QgsFillStyleWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    grpFill = new QGroupBox(QgsFillStyleWidgetBase);
    grpFill->setObjectName(QString::fromUtf8("grpFill"));
    gridLayout1 = new QGridLayout(grpFill);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    colFillColour = new QPushButton(grpFill);
    colFillColour->setObjectName(QString::fromUtf8("colFillColour"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(colFillColour->sizePolicy().hasHeightForWidth());
    colFillColour->setSizePolicy(sizePolicy);
    colFillColour->setMinimumSize(QSize(50, 0));

    gridLayout1->addWidget(colFillColour, 1, 1, 1, 1);

    txtFillColour = new QLabel(grpFill);
    txtFillColour->setObjectName(QString::fromUtf8("txtFillColour"));

    gridLayout1->addWidget(txtFillColour, 1, 0, 1, 1);

    fptFillPattern = new QComboBox(grpFill);
    fptFillPattern->setObjectName(QString::fromUtf8("fptFillPattern"));

    gridLayout1->addWidget(fptFillPattern, 0, 0, 1, 2);


    gridLayout->addWidget(grpFill, 0, 0, 1, 1);

    txtFillColour->setBuddy(colFillColour);
    QWidget::setTabOrder(fptFillPattern, colFillColour);

    retranslateUi(QgsFillStyleWidgetBase);

    QMetaObject::connectSlotsByName(QgsFillStyleWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsFillStyleWidgetBase)
    {
    QgsFillStyleWidgetBase->setWindowTitle(QApplication::translate("QgsFillStyleWidgetBase", "Form1", 0, QApplication::UnicodeUTF8));
    grpFill->setTitle(QApplication::translate("QgsFillStyleWidgetBase", "Fill Style", 0, QApplication::UnicodeUTF8));
    colFillColour->setText(QApplication::translate("QgsFillStyleWidgetBase", "col", 0, QApplication::UnicodeUTF8));
    txtFillColour->setText(QApplication::translate("QgsFillStyleWidgetBase", "Colour:", 0, QApplication::UnicodeUTF8));
    fptFillPattern->clear();
    fptFillPattern->insertItems(0, QStringList()
     << QApplication::translate("QgsFillStyleWidgetBase", "PolyStyleWidget", 0, QApplication::UnicodeUTF8)
    );
    Q_UNUSED(QgsFillStyleWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsFillStyleWidgetBase: public Ui_QgsFillStyleWidgetBase {};
} // namespace Ui

#endif // UI_QGSFILLSTYLEWIDGETBASE_H
