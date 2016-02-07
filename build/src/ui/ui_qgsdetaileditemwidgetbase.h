/********************************************************************************
** Form generated from reading ui file 'qgsdetaileditemwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSDETAILEDITEMWIDGETBASE_H
#define UI_QGSDETAILEDITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

class Ui_QgsDetailedItemWidgetBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QCheckBox *cbx;
    QLabel *lblIcon;
    QLabel *lblTitle;
    QLabel *lblDetail;

    void setupUi(QWidget *QgsDetailedItemWidgetBase)
    {
    if (QgsDetailedItemWidgetBase->objectName().isEmpty())
        QgsDetailedItemWidgetBase->setObjectName(QString::fromUtf8("QgsDetailedItemWidgetBase"));
    QgsDetailedItemWidgetBase->resize(295, 68);
    gridLayout = new QGridLayout(QgsDetailedItemWidgetBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(2);
    gridLayout->setVerticalSpacing(2);
    gridLayout->setContentsMargins(2, 2, 2, 2);
    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    cbx = new QCheckBox(QgsDetailedItemWidgetBase);
    cbx->setObjectName(QString::fromUtf8("cbx"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(cbx->sizePolicy().hasHeightForWidth());
    cbx->setSizePolicy(sizePolicy);

    hboxLayout->addWidget(cbx);

    lblIcon = new QLabel(QgsDetailedItemWidgetBase);
    lblIcon->setObjectName(QString::fromUtf8("lblIcon"));
    sizePolicy.setHeightForWidth(lblIcon->sizePolicy().hasHeightForWidth());
    lblIcon->setSizePolicy(sizePolicy);
    lblIcon->setMinimumSize(QSize(0, 0));
    lblIcon->setMaximumSize(QSize(80, 80));
    lblIcon->setPixmap(QPixmap(QString::fromUtf8("../../images/icons/qgis-icon-16x16.png")));
    lblIcon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

    hboxLayout->addWidget(lblIcon);

    lblTitle = new QLabel(QgsDetailedItemWidgetBase);
    lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(lblTitle->sizePolicy().hasHeightForWidth());
    lblTitle->setSizePolicy(sizePolicy1);
    QFont font;
    font.setPointSize(15);
    font.setBold(true);
    font.setWeight(75);
    lblTitle->setFont(font);
    lblTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    lblTitle->setWordWrap(true);

    hboxLayout->addWidget(lblTitle);


    gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

    lblDetail = new QLabel(QgsDetailedItemWidgetBase);
    lblDetail->setObjectName(QString::fromUtf8("lblDetail"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(lblDetail->sizePolicy().hasHeightForWidth());
    lblDetail->setSizePolicy(sizePolicy2);
    lblDetail->setScaledContents(false);
    lblDetail->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
    lblDetail->setWordWrap(true);

    gridLayout->addWidget(lblDetail, 1, 0, 1, 1);


    retranslateUi(QgsDetailedItemWidgetBase);

    QMetaObject::connectSlotsByName(QgsDetailedItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsDetailedItemWidgetBase)
    {
    QgsDetailedItemWidgetBase->setWindowTitle(QApplication::translate("QgsDetailedItemWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
    cbx->setText(QString());
    lblIcon->setText(QString());
    lblTitle->setText(QApplication::translate("QgsDetailedItemWidgetBase", "Heading Label", 0, QApplication::UnicodeUTF8));
    lblDetail->setText(QApplication::translate("QgsDetailedItemWidgetBase", "Detail label", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsDetailedItemWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDetailedItemWidgetBase: public Ui_QgsDetailedItemWidgetBase {};
} // namespace Ui

#endif // UI_QGSDETAILEDITEMWIDGETBASE_H
