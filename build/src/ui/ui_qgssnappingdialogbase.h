/********************************************************************************
** Form generated from reading ui file 'qgssnappingdialogbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSNAPPINGDIALOGBASE_H
#define UI_QGSSNAPPINGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QTreeWidget>

class Ui_QgsSnappingDialogBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *mLayerTreeWidget;
    QDialogButtonBox *mButtonBox;

    void setupUi(QDialog *QgsSnappingDialogBase)
    {
    if (QgsSnappingDialogBase->objectName().isEmpty())
        QgsSnappingDialogBase->setObjectName(QString::fromUtf8("QgsSnappingDialogBase"));
    QgsSnappingDialogBase->resize(644, 290);
    gridLayout = new QGridLayout(QgsSnappingDialogBase);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout->setMargin(9);
#endif
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mLayerTreeWidget = new QTreeWidget(QgsSnappingDialogBase);
    mLayerTreeWidget->setObjectName(QString::fromUtf8("mLayerTreeWidget"));

    gridLayout->addWidget(mLayerTreeWidget, 0, 0, 1, 1);

    mButtonBox = new QDialogButtonBox(QgsSnappingDialogBase);
    mButtonBox->setObjectName(QString::fromUtf8("mButtonBox"));
    mButtonBox->setOrientation(Qt::Horizontal);
    mButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(mButtonBox, 1, 0, 1, 1);


    retranslateUi(QgsSnappingDialogBase);
    QObject::connect(mButtonBox, SIGNAL(accepted()), QgsSnappingDialogBase, SLOT(accept()));
    QObject::connect(mButtonBox, SIGNAL(rejected()), QgsSnappingDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsSnappingDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsSnappingDialogBase)
    {
    QgsSnappingDialogBase->setWindowTitle(QApplication::translate("QgsSnappingDialogBase", "Snapping options", 0, QApplication::UnicodeUTF8));
    mLayerTreeWidget->headerItem()->setText(0, QApplication::translate("QgsSnappingDialogBase", "Layer", 0, QApplication::UnicodeUTF8));
    mLayerTreeWidget->headerItem()->setText(1, QApplication::translate("QgsSnappingDialogBase", "Mode", 0, QApplication::UnicodeUTF8));
    mLayerTreeWidget->headerItem()->setText(2, QApplication::translate("QgsSnappingDialogBase", "Tolerance", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsSnappingDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsSnappingDialogBase: public Ui_QgsSnappingDialogBase {};
} // namespace Ui

#endif // UI_QGSSNAPPINGDIALOGBASE_H
