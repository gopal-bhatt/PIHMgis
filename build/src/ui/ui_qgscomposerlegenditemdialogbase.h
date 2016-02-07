/********************************************************************************
** Form generated from reading ui file 'qgscomposerlegenditemdialogbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLEGENDITEMDIALOGBASE_H
#define UI_QGSCOMPOSERLEGENDITEMDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

class Ui_QgsComposerLegendItemDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mItemTextLabel;
    QLineEdit *mItemTextLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsComposerLegendItemDialogBase)
    {
    if (QgsComposerLegendItemDialogBase->objectName().isEmpty())
        QgsComposerLegendItemDialogBase->setObjectName(QString::fromUtf8("QgsComposerLegendItemDialogBase"));
    QgsComposerLegendItemDialogBase->resize(360, 91);
    gridLayout = new QGridLayout(QgsComposerLegendItemDialogBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mItemTextLabel = new QLabel(QgsComposerLegendItemDialogBase);
    mItemTextLabel->setObjectName(QString::fromUtf8("mItemTextLabel"));

    gridLayout->addWidget(mItemTextLabel, 0, 0, 1, 1);

    mItemTextLineEdit = new QLineEdit(QgsComposerLegendItemDialogBase);
    mItemTextLineEdit->setObjectName(QString::fromUtf8("mItemTextLineEdit"));

    gridLayout->addWidget(mItemTextLineEdit, 0, 1, 1, 1);

    buttonBox = new QDialogButtonBox(QgsComposerLegendItemDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 2);


    retranslateUi(QgsComposerLegendItemDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsComposerLegendItemDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsComposerLegendItemDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsComposerLegendItemDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsComposerLegendItemDialogBase)
    {
    QgsComposerLegendItemDialogBase->setWindowTitle(QApplication::translate("QgsComposerLegendItemDialogBase", "Legend item properties", 0, QApplication::UnicodeUTF8));
    mItemTextLabel->setText(QApplication::translate("QgsComposerLegendItemDialogBase", "Item text:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerLegendItemDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLegendItemDialogBase: public Ui_QgsComposerLegendItemDialogBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERLEGENDITEMDIALOGBASE_H
