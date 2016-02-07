#ifndef UI_SIMPLIFYLINEDIALOG_H
#define UI_SIMPLIFYLINEDIALOG_H

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

class Ui_simplifyLineDialog
{
public:
    Q3ButtonGroup *polygonToPolyLineGroup;
    QPushButton *helpButton;
    Q3TextBrowser *MessageLog;
    Q3Table *inputOutputTable;
    QPushButton *removeFileButton;
    QPushButton *removeAllButton;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QPushButton *editToleranceButton;
    Q3ButtonGroup *buttonGroup8;
    QLabel *InputPolyline;
    QLabel *tolerance;
    QLineEdit *InputPolylineEdit;
    QLineEdit *toleranceEdit;
    QPushButton *addFileButton;
    QPushButton *inputPolylineButton;

    void setupUi(QDialog *simplifyLineDialog)
    {
    simplifyLineDialog->setObjectName(QString::fromUtf8("simplifyLineDialog"));
    simplifyLineDialog->resize(QSize(589, 528).expandedTo(simplifyLineDialog->minimumSizeHint()));
    polygonToPolyLineGroup = new Q3ButtonGroup(simplifyLineDialog);
    polygonToPolyLineGroup->setObjectName(QString::fromUtf8("polygonToPolyLineGroup"));
    polygonToPolyLineGroup->setGeometry(QRect(5, 140, 580, 380));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(polygonToPolyLineGroup->sizePolicy().hasHeightForWidth());
    polygonToPolyLineGroup->setSizePolicy(sizePolicy);
    polygonToPolyLineGroup->setOrientation(Qt::Vertical);
    helpButton = new QPushButton(polygonToPolyLineGroup);
    helpButton->setObjectName(QString::fromUtf8("helpButton"));
    helpButton->setGeometry(QRect(12, 222, 80, 34));
    helpButton->setAutoDefault(false);
    MessageLog = new Q3TextBrowser(polygonToPolyLineGroup);
    MessageLog->setObjectName(QString::fromUtf8("MessageLog"));
    MessageLog->setGeometry(QRect(11, 271, 560, 92));
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
    inputOutputTable->setNumCols(3);
    inputOutputTable->setShowGrid(true);
    inputOutputTable->setRowMovingEnabled(false);
    inputOutputTable->setColumnMovingEnabled(false);
    inputOutputTable->setFocusStyle(Q3Table::SpreadSheet);
    removeFileButton = new QPushButton(polygonToPolyLineGroup);
    removeFileButton->setObjectName(QString::fromUtf8("removeFileButton"));
    removeFileButton->setGeometry(QRect(530, 10, 40, 32));
    removeFileButton->setIcon(QIcon(QString::fromUtf8("./icons/Minus32.png")));
    removeFileButton->setAutoDefault(false);
    removeAllButton = new QPushButton(polygonToPolyLineGroup);
    removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
    removeAllButton->setGeometry(QRect(530, 90, 40, 32));
    removeAllButton->setIcon(QIcon(QString::fromUtf8("./icons/Delete32.png")));
    removeAllButton->setAutoDefault(false);
    okButton = new QPushButton(polygonToPolyLineGroup);
    okButton->setObjectName(QString::fromUtf8("okButton"));
    okButton->setGeometry(QRect(488, 222, 80, 34));
    okButton->setAutoDefault(false);
    cancelButton = new QPushButton(polygonToPolyLineGroup);
    cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
    cancelButton->setGeometry(QRect(402, 222, 80, 34));
    cancelButton->setAutoDefault(false);
    editToleranceButton = new QPushButton(polygonToPolyLineGroup);
    editToleranceButton->setObjectName(QString::fromUtf8("editToleranceButton"));
    editToleranceButton->setGeometry(QRect(530, 50, 40, 32));
    editToleranceButton->setIcon(QIcon(QString::fromUtf8("./icons/Properties32.png")));
    editToleranceButton->setAutoDefault(false);
    buttonGroup8 = new Q3ButtonGroup(simplifyLineDialog);
    buttonGroup8->setObjectName(QString::fromUtf8("buttonGroup8"));
    buttonGroup8->setGeometry(QRect(5, 10, 580, 121));
    buttonGroup8->setOrientation(Qt::Vertical);
    InputPolyline = new QLabel(buttonGroup8);
    InputPolyline->setObjectName(QString::fromUtf8("InputPolyline"));
    InputPolyline->setGeometry(QRect(15, 10, 110, 48));
    tolerance = new QLabel(buttonGroup8);
    tolerance->setObjectName(QString::fromUtf8("tolerance"));
    tolerance->setGeometry(QRect(15, 60, 110, 48));
    InputPolylineEdit = new QLineEdit(buttonGroup8);
    InputPolylineEdit->setObjectName(QString::fromUtf8("InputPolylineEdit"));
    InputPolylineEdit->setGeometry(QRect(125, 20, 350, 29));
    toleranceEdit = new QLineEdit(buttonGroup8);
    toleranceEdit->setObjectName(QString::fromUtf8("toleranceEdit"));
    toleranceEdit->setGeometry(QRect(125, 70, 90, 29));
    addFileButton = new QPushButton(buttonGroup8);
    addFileButton->setObjectName(QString::fromUtf8("addFileButton"));
    addFileButton->setGeometry(QRect(227, 70, 80, 32));
    addFileButton->setIcon(QIcon(QString::fromUtf8("./icons/Plus32.png")));
    addFileButton->setAutoDefault(false);
    inputPolylineButton = new QPushButton(buttonGroup8);
    inputPolylineButton->setObjectName(QString::fromUtf8("inputPolylineButton"));
    inputPolylineButton->setGeometry(QRect(487, 20, 81, 32));
    inputPolylineButton->setAutoDefault(false);
    retranslateUi(simplifyLineDialog);

    QMetaObject::connectSlotsByName(simplifyLineDialog);
    } // setupUi

    void retranslateUi(QDialog *simplifyLineDialog)
    {
    simplifyLineDialog->setWindowTitle(QApplication::translate("simplifyLineDialog", "Simplify Line", 0, QApplication::UnicodeUTF8));
    polygonToPolyLineGroup->setTitle(QApplication::translate("simplifyLineDialog", "", 0, QApplication::UnicodeUTF8));
    helpButton->setText(QApplication::translate("simplifyLineDialog", "Help", 0, QApplication::UnicodeUTF8));
    inputOutputTable->setNumRows(0);
    removeFileButton->setToolTip(QApplication::translate("simplifyLineDialog", "removeFile", 0, QApplication::UnicodeUTF8));
    removeFileButton->setText(QApplication::translate("simplifyLineDialog", "", 0, QApplication::UnicodeUTF8));
    removeAllButton->setToolTip(QApplication::translate("simplifyLineDialog", "remove All Files", 0, QApplication::UnicodeUTF8));
    removeAllButton->setText(QApplication::translate("simplifyLineDialog", "", 0, QApplication::UnicodeUTF8));
    okButton->setText(QApplication::translate("simplifyLineDialog", "Run!", 0, QApplication::UnicodeUTF8));
    cancelButton->setText(QApplication::translate("simplifyLineDialog", "Close", 0, QApplication::UnicodeUTF8));
    editToleranceButton->setToolTip(QApplication::translate("simplifyLineDialog", "Edit Tolerance", 0, QApplication::UnicodeUTF8));
    editToleranceButton->setText(QApplication::translate("simplifyLineDialog", "", 0, QApplication::UnicodeUTF8));
    buttonGroup8->setTitle(QApplication::translate("simplifyLineDialog", "", 0, QApplication::UnicodeUTF8));
    InputPolyline->setText(QApplication::translate("simplifyLineDialog", "Input Polyline", 0, QApplication::UnicodeUTF8));
    tolerance->setText(QApplication::translate("simplifyLineDialog", "Tolerance", 0, QApplication::UnicodeUTF8));
    addFileButton->setText(QApplication::translate("simplifyLineDialog", "     Add", 0, QApplication::UnicodeUTF8));
    inputPolylineButton->setText(QApplication::translate("simplifyLineDialog", "Browse...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(simplifyLineDialog);
    } // retranslateUi

};

namespace Ui {
    class simplifyLineDialog: public Ui_simplifyLineDialog {};
} // namespace Ui

#endif // UI_SIMPLIFYLINEDIALOG_H
