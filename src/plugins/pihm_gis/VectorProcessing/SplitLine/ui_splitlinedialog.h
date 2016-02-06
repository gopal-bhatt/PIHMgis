#ifndef UI_SPLITLINEDIALOG_H
#define UI_SPLITLINEDIALOG_H

#include "Qt3Support/Q3ButtonGroup"
#include <Qt3Support/Q3Header>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QPushButton>
#include "Qt3Support/Q3Table"
#include "Qt3Support/Q3TextBrowser"

class Ui_splitLineDialog
{
public:
    Q3ButtonGroup *polygonToPolyLineGroup;
    Q3TextBrowser *MessageLog;
    QPushButton *helpButton;
    QPushButton *okButton;
    QPushButton *cancelButton;
    Q3Table *inputOutputTable;
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;

    void setupUi(QDialog *splitLineDialog)
    {
    splitLineDialog->setObjectName(QString::fromUtf8("splitLineDialog"));
    splitLineDialog->resize(QSize(600, 390).expandedTo(splitLineDialog->minimumSizeHint()));
    splitLineDialog->setSizeGripEnabled(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(splitLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 10, 580, 370));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    polygonToPolyLineGroup->setOrientation(Qt::Vertical);
    MessageLog = new Q3TextBrowser(polygonToPolyLineGroup);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(11, 271, 560, 92));
    helpButton = new QPushButton(polygonToPolyLineGroup);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(12, 222, 80, 34));
    helpButton->setAutoDefault(false);
    okButton = new QPushButton(polygonToPolyLineGroup);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(488, 222, 80, 34));
    okButton->setAutoDefault(false);
    cancelButton = new QPushButton(polygonToPolyLineGroup);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(402, 222, 80, 34));
    cancelButton->setAutoDefault(false);
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
    inputOutputTable->setNumCols(2);
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
    retranslateUi(splitLineDialog);

    QMetaObject::connectSlotsByName(splitLineDialog);
    } // setupUi

    void retranslateUi(QDialog *splitLineDialog)
    {
    splitLineDialog->setWindowTitle(QApplication::translate("splitLineDialog", "Split Lines", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QApplication::translate("splitLineDialog", "", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("splitLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("splitLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("splitLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    inputOutputTable->setNumRows(0);
    addFileButton->setToolTip(QApplication::translate("splitLineDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QApplication::translate("splitLineDialog", "", 0, QApplication::UnicodeUTF8));
    removeFileButton->setToolTip(QApplication::translate("splitLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QApplication::translate("splitLineDialog", "", 0, QApplication::UnicodeUTF8));
    removeAllButton->setToolTip(QApplication::translate("splitLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QApplication::translate("splitLineDialog", "", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(splitLineDialog);
    } // retranslateUi

};

namespace Ui {
    class splitLineDialog: public Ui_splitLineDialog {};
} // namespace Ui

#endif // UI_SPLITLINEDIALOG_H
