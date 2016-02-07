/********************************************************************************
** Form generated from reading ui file 'qgsgenericprojectionselectorbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGENERICPROJECTIONSELECTORBASE_H
#define UI_QGSGENERICPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QTextEdit>
#include "qgsprojectionselector.h"

class Ui_QgsGenericProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QgsProjectionSelector *projectionSelector;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGenericProjectionSelectorBase)
    {
    if (QgsGenericProjectionSelectorBase->objectName().isEmpty())
        QgsGenericProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsGenericProjectionSelectorBase"));
    QgsGenericProjectionSelectorBase->resize(605, 563);
    QgsGenericProjectionSelectorBase->setWindowIcon(QIcon());
    QgsGenericProjectionSelectorBase->setModal(true);
    gridLayout = new QGridLayout(QgsGenericProjectionSelectorBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textEdit = new QTextEdit(QgsGenericProjectionSelectorBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy);
    textEdit->setMaximumSize(QSize(16777215, 160));
    textEdit->setFocusPolicy(Qt::NoFocus);
    textEdit->setAcceptDrops(false);
    textEdit->setLineWidth(2);
    textEdit->setReadOnly(true);

    gridLayout->addWidget(textEdit, 0, 0, 1, 1);

    projectionSelector = new QgsProjectionSelector(QgsGenericProjectionSelectorBase);
    projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

    gridLayout->addWidget(projectionSelector, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsGenericProjectionSelectorBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


    retranslateUi(QgsGenericProjectionSelectorBase);
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsGenericProjectionSelectorBase, SLOT(reject()));
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsGenericProjectionSelectorBase, SLOT(accept()));

    QMetaObject::connectSlotsByName(QgsGenericProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGenericProjectionSelectorBase)
    {
    QgsGenericProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsGenericProjectionSelectorBase", "Projection Selector", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGenericProjectionSelectorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGenericProjectionSelectorBase: public Ui_QgsGenericProjectionSelectorBase {};
} // namespace Ui

#endif // UI_QGSGENERICPROJECTIONSELECTORBASE_H
