#ifndef UI_POLYGONTOPOLYLINEDIALOG_H
#define UI_POLYGONTOPOLYLINEDIALOG_H

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

class Ui_polygonToPolyLineDialog
{
public:
    Q3ButtonGroup *polygonToPolyLineGroup;
    Q3Table *inputOutputTable;
    QPushButton *cancelButton;
    QPushButton *okButton;
    QPushButton *helpButton;
    Q3TextBrowser *MessageLog;
    QPushButton *addFileButton;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;

    void setupUi(QDialog *polygonToPolyLineDialog)
    {
    polygonToPolyLineDialog->setObjectName(QString::fromUtf8("polygonToPolyLineDialog"));
    polygonToPolyLineDialog->resize(QSize(600, 390).expandedTo(polygonToPolyLineDialog->minimumSizeHint()));
    polygonToPolyLineDialog->setSizeGripEnabled(false);
    polygonToPolyLineGroup = new Q3ButtonGroup(polygonToPolyLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(10, 10, 580, 370));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    polygonToPolyLineGroup->setOrientation(Qt::Vertical);
    inputOutputTable = new Q3Table(polygonToPolyLineGroup);
    inputOutputTable->setNumCols(0);
    inputOutputTable->setObjectName(QString::fromUtf8("inputOutputTable"));
    inputOutputTable->setGeometry(QRect(10, 20, 500, 180));
    inputOutputTable->setLineWidth(2);
    inputOutputTable->setMidLineWidth(0);
    inputOutputTable->setMargin(0);
    inputOutputTable->setResizePolicy(Q3ScrollView::AutoOne);
    inputOutputTable->setDragAutoScroll(false);
    inputOutputTable->setNumRows(0);
    inputOutputTable->setNumCols(2);
    inputOutputTable->setShowGrid(true);
    inputOutputTable->setRowMovingEnabled(false);
    inputOutputTable->setColumnMovingEnabled(false);
    inputOutputTable->setFocusStyle(Q3Table::SpreadSheet);
    cancelButton = new QPushButton(polygonToPolyLineGroup);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(402, 222, 80, 34));
    cancelButton->setAutoDefault(false);
    okButton = new QPushButton(polygonToPolyLineGroup);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(488, 222, 80, 34));
    okButton->setAutoDefault(false);
    helpButton = new QPushButton(polygonToPolyLineGroup);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(12, 222, 80, 34));
    helpButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(polygonToPolyLineGroup);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(11, 271, 560, 92));
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
    retranslateUi(polygonToPolyLineDialog);

    QMetaObject::connectSlotsByName(polygonToPolyLineDialog);
    } // setupUi

    void retranslateUi(QDialog *polygonToPolyLineDialog)
    {
    polygonToPolyLineDialog->setWindowTitle(QApplication::translate("polygonToPolyLineDialog", "Polygon To Polyline", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QApplication::translate("polygonToPolyLineDialog", "", 0, QApplication::UnicodeUTF8));
    inputOutputTable->setNumRows(0);
    cancelButton->setText(QApplication::translate("polygonToPolyLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("polygonToPolyLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("polygonToPolyLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    addFileButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "addFile", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QApplication::translate("polygonToPolyLineDialog", "", 0, QApplication::UnicodeUTF8));
    removeFileButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QApplication::translate("polygonToPolyLineDialog", "", 0, QApplication::UnicodeUTF8));
    removeAllButton->setToolTip(QApplication::translate("polygonToPolyLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QApplication::translate("polygonToPolyLineDialog", "", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(polygonToPolyLineDialog);
    } // retranslateUi

};

namespace Ui {
    class polygonToPolyLineDialog: public Ui_polygonToPolyLineDialog {};
} // namespace Ui

#endif // UI_POLYGONTOPOLYLINEDIALOG_H
