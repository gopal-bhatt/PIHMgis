/********************************************************************************
** Form generated from reading ui file 'qgslayerprojectionselectorbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSLAYERPROJECTIONSELECTORBASE_H
#define UI_QGSLAYERPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include "qgsprojectionselector.h"

class Ui_QgsLayerProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QgsProjectionSelector *projectionSelector;
    QTextEdit *textEdit;
    QSpacerItem *spacerItem;
    QPushButton *pbnOK;

    void setupUi(QDialog *QgsLayerProjectionSelectorBase)
    {
    if (QgsLayerProjectionSelectorBase->objectName().isEmpty())
        QgsLayerProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsLayerProjectionSelectorBase"));
    QgsLayerProjectionSelectorBase->resize(605, 563);
    QgsLayerProjectionSelectorBase->setWindowIcon(QIcon());
    QgsLayerProjectionSelectorBase->setModal(true);
    gridLayout = new QGridLayout(QgsLayerProjectionSelectorBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    projectionSelector = new QgsProjectionSelector(QgsLayerProjectionSelectorBase);
    projectionSelector->setObjectName(QString::fromUtf8("projectionSelector"));

    gridLayout->addWidget(projectionSelector, 1, 0, 1, 2);

    textEdit = new QTextEdit(QgsLayerProjectionSelectorBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
    textEdit->setSizePolicy(sizePolicy);
    textEdit->setMaximumSize(QSize(16777215, 160));
    textEdit->setFocusPolicy(Qt::NoFocus);
    textEdit->setAcceptDrops(false);
    textEdit->setLineWidth(2);
    textEdit->setReadOnly(true);

    gridLayout->addWidget(textEdit, 0, 0, 1, 2);

    spacerItem = new QSpacerItem(221, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    pbnOK = new QPushButton(QgsLayerProjectionSelectorBase);
    pbnOK->setObjectName(QString::fromUtf8("pbnOK"));

    gridLayout->addWidget(pbnOK, 2, 1, 1, 1);


    retranslateUi(QgsLayerProjectionSelectorBase);

    QMetaObject::connectSlotsByName(QgsLayerProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QDialog *QgsLayerProjectionSelectorBase)
    {
    QgsLayerProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsLayerProjectionSelectorBase", "Layer Projection Selector", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("QgsLayerProjectionSelectorBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Define this layer's projection:</span></p><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p><p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This layer appears to have no projection specification. By default, this layer will now have its projection set to that of the project, but you may override this by selecting a different projection below.</p></body></html>", 0, QApplication::UnicodeUTF8));
    pbnOK->setText(QApplication::translate("QgsLayerProjectionSelectorBase", "OK", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsLayerProjectionSelectorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsLayerProjectionSelectorBase: public Ui_QgsLayerProjectionSelectorBase {};
} // namespace Ui

#endif // UI_QGSLAYERPROJECTIONSELECTORBASE_H
