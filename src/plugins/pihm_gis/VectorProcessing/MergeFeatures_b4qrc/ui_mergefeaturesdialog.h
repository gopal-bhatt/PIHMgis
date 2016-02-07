#ifndef UI_MERGEFEATURESDIALOG_H
#define UI_MERGEFEATURESDIALOG_H

#include "Qt3Support/Q3ButtonGroup"
#include <Qt3Support/Q3Header>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include "Qt3Support/Q3Table"
#include "Qt3Support/Q3TextBrowser"

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
    mergeFeaturesDialog->setObjectName(QString::fromUtf8("mergeFeaturesDialog"));
    mergeFeaturesDialog->resize(QSize(600, 534).expandedTo(mergeFeaturesDialog->minimumSizeHint()));
    okButton = new QPushButton(mergeFeaturesDialog);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(513, 358, 80, 34));
    okButton->setAutoDefault(false);
    cancelButton = new QPushButton(mergeFeaturesDialog);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(427, 358, 80, 34));
    cancelButton->setAutoDefault(false);
    helpButton = new QPushButton(mergeFeaturesDialog);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(15, 358, 80, 34));
    helpButton->setAutoDefault(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(mergeFeaturesDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(15, 10, 580, 220));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    polygonToPolyLineGroup->setOrientation(Qt::Vertical);
    inputOutputTable = new Q3Table(polygonToPolyLineGroup);
    inputOutputTable->setNumCols(0);
    inputOutputTable->setObjectName(QString::fromUtf8("inputOutputTable"));
    inputOutputTable->setGeometry(QRect(10, 10, 510, 200));
    inputOutputTable->setLineWidth(2);
    inputOutputTable->setMidLineWidth(0);
    inputOutputTable->setMargin(0);
    inputOutputTable->setResizePolicy(Q3ScrollView::Default);
    inputOutputTable->setDragAutoScroll(false);
    inputOutputTable->setNumRows(0);
    inputOutputTable->setNumCols(1);
    inputOutputTable->setShowGrid(true);
    inputOutputTable->setRowMovingEnabled(false);
    inputOutputTable->setColumnMovingEnabled(false);
    inputOutputTable->setFocusStyle(Q3Table::SpreadSheet);
    addFileButton = new QPushButton(polygonToPolyLineGroup);
    addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
    addFileButton->setGeometry(QRect(530, 10, 40, 32));
    addFileButton->setIcon(QIcon(QString::fromUtf8("./icons/Plus32.png")));
    addFileButton->setAutoDefault(false);
    removeFileButton = new QPushButton(polygonToPolyLineGroup);
    removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
    removeFileButton->setGeometry(QRect(530, 50, 40, 32));
    removeFileButton->setIcon(QIcon(QString::fromUtf8("./icons/Minus32.png")));
    removeFileButton->setAutoDefault(false);
    removeAllButton = new QPushButton(polygonToPolyLineGroup);
    removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
    removeAllButton->setGeometry(QRect(530, 90, 40, 32));
    removeAllButton->setIcon(QIcon(QString::fromUtf8("./icons/Delete32.png")));
    removeAllButton->setAutoDefault(false);
    mergeFeaturesGroup = new Q3ButtonGroup(mergeFeaturesDialog);
    mergeFeaturesGroup->setObjectName(QString::fromUtf8("mergeFeaturesGroup"));
    mergeFeaturesGroup->setGeometry(QRect(14, 235, 581, 110));
    mergeFeaturesGroup->setOrientation(Qt::Vertical);
    outputMergedFileButton = new QPushButton(mergeFeaturesGroup);
    outputMergedFileButton->setObjectName(QString::fromUtf8("outputMergedFileButton"));
    outputMergedFileButton->setGeometry(QRect(478, 14, 81, 32));
    outputMergedFileButton->setAutoDefault(false);
    outputMergedFileLabel = new QLabel(mergeFeaturesGroup);
    outputMergedFileLabel->setObjectName(QString::fromUtf8("outputMergedFileLabel"));
    outputMergedFileLabel->setGeometry(QRect(21, 2, 144, 58));
    mergeFeaturesClusterToleranceLabel = new QLabel(mergeFeaturesGroup);
    mergeFeaturesClusterToleranceLabel->setObjectName(QString::fromUtf8("mergeFeaturesClusterToleranceLabel"));
    mergeFeaturesClusterToleranceLabel->setGeometry(QRect(21, 47, 132, 58));
    mergeFeaturesClusterToleranceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
    clusterToleranceLineEdit = new QLineEdit(mergeFeaturesGroup);
    clusterToleranceLineEdit->setObjectName(QString::fromUtf8("clusterToleranceLineEdit"));
    clusterToleranceLineEdit->setGeometry(QRect(169, 61, 130, 29));
    outputMergedFileLineEdit = new QLineEdit(mergeFeaturesGroup);
    outputMergedFileLineEdit->setObjectName(QString::fromUtf8("outputMergedFileLineEdit"));
    outputMergedFileLineEdit->setGeometry(QRect(171, 15, 301, 29));
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
    polygonToPolyLineGroup->setTitle(QApplication::translate("mergeFeaturesDialog", "", 0, QApplication::UnicodeUTF8));
    inputOutputTable->setNumRows(0);
    addFileButton->setToolTip(QApplication::translate("mergeFeaturesDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QApplication::translate("mergeFeaturesDialog", "", 0, QApplication::UnicodeUTF8));
    removeFileButton->setToolTip(QApplication::translate("mergeFeaturesDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QApplication::translate("mergeFeaturesDialog", "", 0, QApplication::UnicodeUTF8));
    removeAllButton->setToolTip(QApplication::translate("mergeFeaturesDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QApplication::translate("mergeFeaturesDialog", "", 0, QApplication::UnicodeUTF8));
    mergeFeaturesGroup->setTitle(QApplication::translate("mergeFeaturesDialog", "", 0, QApplication::UnicodeUTF8));
    outputMergedFileButton->setText(QApplication::translate("mergeFeaturesDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    outputMergedFileLabel->setText(QApplication::translate("mergeFeaturesDialog", "Output Merged File", 0, QApplication::UnicodeUTF8));
    mergeFeaturesClusterToleranceLabel->setText(QApplication::translate("mergeFeaturesDialog", "Cluster Tolerance", 0, QApplication::UnicodeUTF8));
    clusterToleranceLineEdit->setText(QApplication::translate("mergeFeaturesDialog", "0", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(mergeFeaturesDialog);
    } // retranslateUi

};

namespace Ui {
    class mergeFeaturesDialog: public Ui_mergeFeaturesDialog {};
} // namespace Ui

#endif // UI_MERGEFEATURESDIALOG_H
