/********************************************************************************
** Form generated from reading ui file 'qgsattributeactiondialogbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

class Ui_QgsAttributeActionDialogBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    QLineEdit *actionName;
    QLabel *textLabel2;
    QLineEdit *actionAction;
    QToolButton *browseButton;
    QComboBox *fieldComboBox;
    QPushButton *insertFieldButton;
    QCheckBox *captureCB;
    QTableWidget *attributeActionTable;
    QPushButton *insertButton;
    QPushButton *updateButton;
    QSpacerItem *spacerItem;
    QPushButton *moveUpButton;
    QPushButton *moveDownButton;
    QSpacerItem *spacerItem1;
    QPushButton *removeButton;

    void setupUi(QWidget *QgsAttributeActionDialogBase)
    {
    if (QgsAttributeActionDialogBase->objectName().isEmpty())
        QgsAttributeActionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeActionDialogBase"));
    QgsAttributeActionDialogBase->resize(596, 560);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsAttributeActionDialogBase->sizePolicy().hasHeightForWidth());
    QgsAttributeActionDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsAttributeActionDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 0, 0, 0);
    groupBox = new QGroupBox(QgsAttributeActionDialogBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textLabel1 = new QLabel(groupBox);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

    actionName = new QLineEdit(groupBox);
    actionName->setObjectName(QString::fromUtf8("actionName"));

    gridLayout1->addWidget(actionName, 0, 1, 1, 3);

    textLabel2 = new QLabel(groupBox);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout1->addWidget(textLabel2, 1, 0, 1, 1);

    actionAction = new QLineEdit(groupBox);
    actionAction->setObjectName(QString::fromUtf8("actionAction"));

    gridLayout1->addWidget(actionAction, 1, 1, 1, 2);

    browseButton = new QToolButton(groupBox);
    browseButton->setObjectName(QString::fromUtf8("browseButton"));

    gridLayout1->addWidget(browseButton, 1, 3, 1, 1);

    fieldComboBox = new QComboBox(groupBox);
    fieldComboBox->setObjectName(QString::fromUtf8("fieldComboBox"));

    gridLayout1->addWidget(fieldComboBox, 2, 1, 1, 1);

    insertFieldButton = new QPushButton(groupBox);
    insertFieldButton->setObjectName(QString::fromUtf8("insertFieldButton"));

    gridLayout1->addWidget(insertFieldButton, 2, 2, 1, 2);

    captureCB = new QCheckBox(groupBox);
    captureCB->setObjectName(QString::fromUtf8("captureCB"));

    gridLayout1->addWidget(captureCB, 3, 1, 1, 2);


    gridLayout->addWidget(groupBox, 0, 0, 1, 2);

    attributeActionTable = new QTableWidget(QgsAttributeActionDialogBase);
    attributeActionTable->setObjectName(QString::fromUtf8("attributeActionTable"));
    sizePolicy.setHeightForWidth(attributeActionTable->sizePolicy().hasHeightForWidth());
    attributeActionTable->setSizePolicy(sizePolicy);
    attributeActionTable->setSelectionMode(QAbstractItemView::SingleSelection);
    attributeActionTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    attributeActionTable->setColumnCount(3);

    gridLayout->addWidget(attributeActionTable, 1, 0, 7, 1);

    insertButton = new QPushButton(QgsAttributeActionDialogBase);
    insertButton->setObjectName(QString::fromUtf8("insertButton"));

    gridLayout->addWidget(insertButton, 1, 1, 1, 1);

    updateButton = new QPushButton(QgsAttributeActionDialogBase);
    updateButton->setObjectName(QString::fromUtf8("updateButton"));

    gridLayout->addWidget(updateButton, 2, 1, 1, 1);

    spacerItem = new QSpacerItem(85, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 3, 1, 1, 1);

    moveUpButton = new QPushButton(QgsAttributeActionDialogBase);
    moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));

    gridLayout->addWidget(moveUpButton, 4, 1, 1, 1);

    moveDownButton = new QPushButton(QgsAttributeActionDialogBase);
    moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));

    gridLayout->addWidget(moveDownButton, 5, 1, 1, 1);

    spacerItem1 = new QSpacerItem(85, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 6, 1, 1, 1);

    removeButton = new QPushButton(QgsAttributeActionDialogBase);
    removeButton->setObjectName(QString::fromUtf8("removeButton"));

    gridLayout->addWidget(removeButton, 7, 1, 1, 1);

    textLabel1->setBuddy(actionName);
    textLabel2->setBuddy(actionAction);
    QWidget::setTabOrder(actionName, actionAction);
    QWidget::setTabOrder(actionAction, browseButton);
    QWidget::setTabOrder(browseButton, fieldComboBox);
    QWidget::setTabOrder(fieldComboBox, insertFieldButton);
    QWidget::setTabOrder(insertFieldButton, captureCB);
    QWidget::setTabOrder(captureCB, insertButton);
    QWidget::setTabOrder(insertButton, updateButton);
    QWidget::setTabOrder(updateButton, moveUpButton);
    QWidget::setTabOrder(moveUpButton, moveDownButton);
    QWidget::setTabOrder(moveDownButton, attributeActionTable);
    QWidget::setTabOrder(attributeActionTable, removeButton);

    retranslateUi(QgsAttributeActionDialogBase);

    QMetaObject::connectSlotsByName(QgsAttributeActionDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeActionDialogBase)
    {
    QgsAttributeActionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeActionDialogBase", "Attribute Actions", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsAttributeActionDialogBase", "Action properties", 0, QApplication::UnicodeUTF8));
    textLabel1->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
    actionName->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action name here", 0, QApplication::UnicodeUTF8));
    actionName->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
    textLabel2->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will be replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if preceeded by a backslash", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", 0, QApplication::UnicodeUTF8));
    actionAction->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action command here", 0, QApplication::UnicodeUTF8));
    actionAction->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will be replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if preceeded by a backslash", 0, QApplication::UnicodeUTF8));
    browseButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Browse for action", 0, QApplication::UnicodeUTF8));
    browseButton->setStatusTip(QApplication::translate("QgsAttributeActionDialogBase", "Click to browse for an action", 0, QApplication::UnicodeUTF8));
    browseButton->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Clicking the button will let you select an application to use as the action", 0, QApplication::UnicodeUTF8));
    browseButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "...", 0, QApplication::UnicodeUTF8));
    fieldComboBox->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "The valid attribute names for this layer", 0, QApplication::UnicodeUTF8));
    insertFieldButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the selected field into the action, prepended with a %", 0, QApplication::UnicodeUTF8));
    insertFieldButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert field", 0, QApplication::UnicodeUTF8));
    captureCB->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Captures any output from the action", 0, QApplication::UnicodeUTF8));
    captureCB->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Captures the standard output or error generated by the action and displays it in a dialog box", 0, QApplication::UnicodeUTF8));
    captureCB->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture output", 0, QApplication::UnicodeUTF8));
    if (attributeActionTable->columnCount() < 3)
        attributeActionTable->setColumnCount(3);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name", 0, QApplication::UnicodeUTF8));
    attributeActionTable->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action", 0, QApplication::UnicodeUTF8));
    attributeActionTable->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture", 0, QApplication::UnicodeUTF8));
    attributeActionTable->setHorizontalHeaderItem(2, __colItem2);
    attributeActionTable->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "This list contains all actions that have been defined for the current layer. Add actions by entering the details in the controls below and then pressing the Insert action button. Actions can be edited here by double clicking on the item.", 0, QApplication::UnicodeUTF8));
    insertButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the action into the list above", 0, QApplication::UnicodeUTF8));
    insertButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert action", 0, QApplication::UnicodeUTF8));
    updateButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Update the selected action", 0, QApplication::UnicodeUTF8));
    updateButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Update action", 0, QApplication::UnicodeUTF8));
    moveUpButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action up", 0, QApplication::UnicodeUTF8));
    moveUpButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Move up", 0, QApplication::UnicodeUTF8));
    moveDownButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action down", 0, QApplication::UnicodeUTF8));
    moveDownButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Move down", 0, QApplication::UnicodeUTF8));
    removeButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Remove the selected action", 0, QApplication::UnicodeUTF8));
    removeButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAttributeActionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionDialogBase: public Ui_QgsAttributeActionDialogBase {};
} // namespace Ui

#endif // UI_QGSATTRIBUTEACTIONDIALOGBASE_H
