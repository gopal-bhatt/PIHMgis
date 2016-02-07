/********************************************************************************
** Form generated from reading ui file 'mergefeaturesdialog.ui'
**
** Created: Tue Jul 27 23:38:17 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MERGEFEATURESDIALOG_H
#define UI_MERGEFEATURESDIALOG_H

#include <Qt3Support/Q3ButtonGroup>
#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3Table>
#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_mergeFeaturesDialog
{
public:
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *helpButton;
    Q3ButtonGroup *polygonToPolyLineGroup;
    Q3Table *inputOutputTable;
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;
    Q3ButtonGroup *mergeFeaturesGroup;
    QPushButton *outputMergedFileButton;
    QLabel *outputMergedFileLabel;
    QLabel *mergeFeaturesClusterToleranceLabel;
    QLineEdit *clusterToleranceLineEdit;
    QLineEdit *outputMergedFileLineEdit;
    Q3TextBrowser *messageLog;

    void setupUi(QDialog *mergeFeaturesDialog)
    {
    if (mergeFeaturesDialog->objectName().isEmpty())
        mergeFeaturesDialog->setObjectName(QString::fromUtf8("mergeFeaturesDialog"));
    mergeFeaturesDialog->resize(600, 534);
    okButton = new QPushButton(mergeFeaturesDialog);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(494, 358, 98, 34));
    okButton->setAutoDefault(false);
    cancelButton = new QPushButton(mergeFeaturesDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(390, 358, 98, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(mergeFeaturesDialog);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(10, 358, 98, 34));
    helpButton->setAutoDefault(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(mergeFeaturesDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 10, 580, 220));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    inputOutputTable = new Q3Table(polygonToPolyLineGroup);
    inputOutputTable->setObjectName(QString::fromUtf8("inputOutputTable"));
    inputOutputTable->setGeometry(QRect(10, 10, 510, 200));
    inputOutputTable->setProperty("lineWidth", QVariant(2));
    inputOutputTable->setProperty("midLineWidth", QVariant(0));
    inputOutputTable->setProperty("margin", QVariant(0));
    inputOutputTable->setProperty("dragAutoScroll", QVariant(false));
    inputOutputTable->setProperty("numRows", QVariant(0));
    inputOutputTable->setProperty("numCols", QVariant(1));
    inputOutputTable->setProperty("showGrid", QVariant(true));
    inputOutputTable->setProperty("rowMovingEnabled", QVariant(false));
    inputOutputTable->setProperty("columnMovingEnabled", QVariant(false));
    addFileButton = new QPushButton(polygonToPolyLineGroup);
    addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
    addFileButton->setGeometry(QRect(530, 10, 40, 32));
    addFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Plus32.png")));
    addFileButton->setAutoDefault(false);
    removeFileButton = new QPushButton(polygonToPolyLineGroup);
    removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
    removeFileButton->setGeometry(QRect(530, 50, 40, 32));
    removeFileButton->setIcon(QIcon(QString::fromUtf8(":/icons/Minus32.png")));
    removeFileButton->setAutoDefault(false);
    removeAllButton = new QPushButton(polygonToPolyLineGroup);
    removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
    removeAllButton->setGeometry(QRect(530, 90, 40, 32));
    removeAllButton->setIcon(QIcon(QString::fromUtf8(":/icons/Delete32.png")));
    removeAllButton->setAutoDefault(false);
    mergeFeaturesGroup = new Q3ButtonGroup(mergeFeaturesDialog);
    mergeFeaturesGroup->setObjectName(QString::fromUtf8("mergeFeaturesGroup"));
    mergeFeaturesGroup->setGeometry(QRect(10, 235, 581, 110));
    outputMergedFileButton = new QPushButton(mergeFeaturesGroup);
    outputMergedFileButton->setObjectName(QString::fromUtf8("outputMergedFileButton"));
    outputMergedFileButton->setGeometry(QRect(478, 16, 98, 32));
    outputMergedFileButton->setAutoDefault(false);
    outputMergedFileLabel = new QLabel(mergeFeaturesGroup);
    outputMergedFileLabel->setObjectName(QString::fromUtf8("outputMergedFileLabel"));
    outputMergedFileLabel->setGeometry(QRect(14, 2, 144, 58));
    mergeFeaturesClusterToleranceLabel = new QLabel(mergeFeaturesGroup);
    mergeFeaturesClusterToleranceLabel->setObjectName(QString::fromUtf8("mergeFeaturesClusterToleranceLabel"));
    mergeFeaturesClusterToleranceLabel->setGeometry(QRect(14, 47, 151, 58));
    mergeFeaturesClusterToleranceLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
    clusterToleranceLineEdit = new QLineEdit(mergeFeaturesGroup);
    clusterToleranceLineEdit->setObjectName(QString::fromUtf8("clusterToleranceLineEdit"));
    clusterToleranceLineEdit->setGeometry(QRect(169, 61, 130, 29));
    outputMergedFileLineEdit = new QLineEdit(mergeFeaturesGroup);
    outputMergedFileLineEdit->setObjectName(QString::fromUtf8("outputMergedFileLineEdit"));
    outputMergedFileLineEdit->setGeometry(QRect(169, 15, 301, 29));
    messageLog = new Q3TextBrowser(mergeFeaturesDialog);
    messageLog->setObjectName(QString::fromUtf8("messageLog"));
    messageLog->setGeometry(QRect(10, 407, 581, 120));
    QWidget::setTabOrder(clusterToleranceLineEdit, outputMergedFileLineEdit);
    QWidget::setTabOrder(outputMergedFileLineEdit, outputMergedFileButton);
    QWidget::setTabOrder(outputMergedFileButton, cancelButton);
    QWidget::setTabOrder(cancelButton, okButton);
    QWidget::setTabOrder(okButton, helpButton);

    retranslateUi(mergeFeaturesDialog);

    QMetaObject::connectSlotsByName(mergeFeaturesDialog);
    } // setupUi

    void retranslateUi(QDialog *mergeFeaturesDialog)
    {
    mergeFeaturesDialog->setWindowTitle(QApplication::translate("mergeFeaturesDialog", "Merge Features", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("mergeFeaturesDialog", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("mergeFeaturesDialog", "Close", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("mergeFeaturesDialog", "Help", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QString());
    addFileButton->setToolTip(QApplication::translate("mergeFeaturesDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QString());
    removeFileButton->setToolTip(QApplication::translate("mergeFeaturesDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QString());
    removeAllButton->setToolTip(QApplication::translate("mergeFeaturesDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QString());
    mergeFeaturesGroup->setTitle(QString());
    outputMergedFileButton->setText(QApplication::translate("mergeFeaturesDialog", "Browse", 0, QApplication::UnicodeUTF8));
    outputMergedFileLabel->setText(QApplication::translate("mergeFeaturesDialog", "Output Merged File", 0, QApplication::UnicodeUTF8));
    mergeFeaturesClusterToleranceLabel->setText(QApplication::translate("mergeFeaturesDialog", "Cluster Tolerance (m)", 0, QApplication::UnicodeUTF8));
    clusterToleranceLineEdit->setText(QApplication::translate("mergeFeaturesDialog", "0", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(mergeFeaturesDialog);
    } // retranslateUi

};

namespace Ui {
    class mergeFeaturesDialog: public Ui_mergeFeaturesDialog {};
} // namespace Ui

#endif // UI_MERGEFEATURESDIALOG_H
