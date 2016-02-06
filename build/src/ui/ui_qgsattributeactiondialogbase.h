/********************************************************************************
** Form generated from reading ui file 'qgsattributeactiondialogbase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTEACTIONDIALOGBASE_H
#define UI_QGSATTRIBUTEACTIONDIALOGBASE_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3MimeSourceFactory>
#include <Qt3Support/Q3Table>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_QgsAttributeActionDialogBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QPushButton *removeButton;
    QPushButton *moveDownButton;
    QPushButton *moveUpButton;
    Q3Table *attributeActionTable;
    QFrame *line;
    QComboBox *fieldComboBox;
    QPushButton *browseButton;
    QPushButton *insertFieldButton;
    QSpacerItem *spacerItem1;
    QPushButton *updateButton;
    QPushButton *insertButton;
    QCheckBox *captureCB;
    QLineEdit *actionAction;
    QLabel *textLabel2;
    QLineEdit *actionName;
    QLabel *textLabel1;

    void setupUi(QWidget *QgsAttributeActionDialogBase)
    {
    if (QgsAttributeActionDialogBase->objectName().isEmpty())
        QgsAttributeActionDialogBase->setObjectName(QString::fromUtf8("QgsAttributeActionDialogBase"));
    QgsAttributeActionDialogBase->resize(513, 432);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsAttributeActionDialogBase->sizePolicy().hasHeightForWidth());
    QgsAttributeActionDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsAttributeActionDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(85, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 8, 6, 1, 2);

    removeButton = new QPushButton(QgsAttributeActionDialogBase);
    removeButton->setObjectName(QString::fromUtf8("removeButton"));

    gridLayout->addWidget(removeButton, 7, 7, 1, 1);

    moveDownButton = new QPushButton(QgsAttributeActionDialogBase);
    moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));

    gridLayout->addWidget(moveDownButton, 6, 7, 1, 1);

    moveUpButton = new QPushButton(QgsAttributeActionDialogBase);
    moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));

    gridLayout->addWidget(moveUpButton, 5, 7, 1, 1);

    attributeActionTable = new Q3Table(QgsAttributeActionDialogBase);
    attributeActionTable->setObjectName(QString::fromUtf8("attributeActionTable"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(attributeActionTable->sizePolicy().hasHeightForWidth());
    attributeActionTable->setSizePolicy(sizePolicy1);
    attributeActionTable->setResizePolicy(Q3ScrollView::Default);
    attributeActionTable->setNumRows(0);
    attributeActionTable->setNumCols(3);
    attributeActionTable->setReadOnly(false);
    attributeActionTable->setSelectionMode(Q3Table::SingleRow);
    attributeActionTable->setFocusStyle(Q3Table::FollowStyle);

    gridLayout->addWidget(attributeActionTable, 5, 0, 4, 6);

    line = new QFrame(QgsAttributeActionDialogBase);
    line->setObjectName(QString::fromUtf8("line"));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);

    gridLayout->addWidget(line, 4, 0, 1, 8);

    fieldComboBox = new QComboBox(QgsAttributeActionDialogBase);
    fieldComboBox->setObjectName(QString::fromUtf8("fieldComboBox"));

    gridLayout->addWidget(fieldComboBox, 3, 5, 1, 3);

    browseButton = new QPushButton(QgsAttributeActionDialogBase);
    browseButton->setObjectName(QString::fromUtf8("browseButton"));

    gridLayout->addWidget(browseButton, 1, 7, 1, 1);

    insertFieldButton = new QPushButton(QgsAttributeActionDialogBase);
    insertFieldButton->setObjectName(QString::fromUtf8("insertFieldButton"));

    gridLayout->addWidget(insertFieldButton, 3, 4, 1, 1);

    spacerItem1 = new QSpacerItem(51, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 3, 3, 1, 1);

    updateButton = new QPushButton(QgsAttributeActionDialogBase);
    updateButton->setObjectName(QString::fromUtf8("updateButton"));

    gridLayout->addWidget(updateButton, 3, 2, 1, 1);

    insertButton = new QPushButton(QgsAttributeActionDialogBase);
    insertButton->setObjectName(QString::fromUtf8("insertButton"));

    gridLayout->addWidget(insertButton, 3, 0, 1, 2);

    captureCB = new QCheckBox(QgsAttributeActionDialogBase);
    captureCB->setObjectName(QString::fromUtf8("captureCB"));

    gridLayout->addWidget(captureCB, 2, 0, 1, 3);

    actionAction = new QLineEdit(QgsAttributeActionDialogBase);
    actionAction->setObjectName(QString::fromUtf8("actionAction"));

    gridLayout->addWidget(actionAction, 1, 1, 1, 6);

    textLabel2 = new QLabel(QgsAttributeActionDialogBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

    actionName = new QLineEdit(QgsAttributeActionDialogBase);
    actionName->setObjectName(QString::fromUtf8("actionName"));

    gridLayout->addWidget(actionName, 0, 1, 1, 6);

    textLabel1 = new QLabel(QgsAttributeActionDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    textLabel2->setBuddy(actionAction);
    textLabel1->setBuddy(actionName);
    QWidget::setTabOrder(moveUpButton, moveDownButton);
    QWidget::setTabOrder(moveDownButton, removeButton);
    QWidget::setTabOrder(removeButton, actionName);
    QWidget::setTabOrder(actionName, actionAction);
    QWidget::setTabOrder(actionAction, browseButton);
    QWidget::setTabOrder(browseButton, captureCB);
    QWidget::setTabOrder(captureCB, insertButton);
    QWidget::setTabOrder(insertButton, updateButton);
    QWidget::setTabOrder(updateButton, insertFieldButton);
    QWidget::setTabOrder(insertFieldButton, fieldComboBox);

    retranslateUi(QgsAttributeActionDialogBase);

    QMetaObject::connectSlotsByName(QgsAttributeActionDialogBase);
    } // setupUi

    void retranslateUi(QWidget *QgsAttributeActionDialogBase)
    {
    QgsAttributeActionDialogBase->setWindowTitle(QApplication::translate("QgsAttributeActionDialogBase", "Form1", 0, QApplication::UnicodeUTF8));
    removeButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Remove the selected action", 0, QApplication::UnicodeUTF8));
    removeButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
    moveDownButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action down", 0, QApplication::UnicodeUTF8));
    moveDownButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Move down", 0, QApplication::UnicodeUTF8));
    moveUpButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Move the selected action up", 0, QApplication::UnicodeUTF8));
    moveUpButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Move up", 0, QApplication::UnicodeUTF8));
    attributeActionTable->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "This list contains all actions that have been defined for the current layer. Add actions by entering the details in the controls below and then pressing the Insert action button. Actions can be edited here by double clicking on the item.", 0, QApplication::UnicodeUTF8));
    fieldComboBox->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "The valid attribute names for this layer", 0, QApplication::UnicodeUTF8));
    browseButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Browse for action commands", 0, QApplication::UnicodeUTF8));
    browseButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Browse", 0, QApplication::UnicodeUTF8));
    insertFieldButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the selected field into the action, prepended with a %", 0, QApplication::UnicodeUTF8));
    insertFieldButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert field", 0, QApplication::UnicodeUTF8));
    updateButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Update the selected action", 0, QApplication::UnicodeUTF8));
    updateButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Update action", 0, QApplication::UnicodeUTF8));
    insertButton->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Inserts the action into the list above", 0, QApplication::UnicodeUTF8));
    insertButton->setText(QApplication::translate("QgsAttributeActionDialogBase", "Insert action", 0, QApplication::UnicodeUTF8));
    captureCB->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Captures any output from the action", 0, QApplication::UnicodeUTF8));
    captureCB->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Captures the standard output or error generated by the action and displays it in a dialog box", 0, QApplication::UnicodeUTF8));
    captureCB->setText(QApplication::translate("QgsAttributeActionDialogBase", "Capture output", 0, QApplication::UnicodeUTF8));
    actionAction->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action command here", 0, QApplication::UnicodeUTF8));
    actionAction->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if preceeded by a backslash", 0, QApplication::UnicodeUTF8));
    textLabel2->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action here. This can be any program, script or command that is available on your system. When the action is invoked any set of characters that start with a % and then have the name of a field will be replaced by the value of that field. The special characters %% will replaced by the value of the field that was selected. Double quote marks group text into single arguments to the program, script or command. Double quotes will be ignored if preceeded by a backslash", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsAttributeActionDialogBase", "Action:", 0, QApplication::UnicodeUTF8));
    actionName->setToolTip(QApplication::translate("QgsAttributeActionDialogBase", "Enter the action name here", 0, QApplication::UnicodeUTF8));
    actionName->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
    textLabel1->setWhatsThis(QApplication::translate("QgsAttributeActionDialogBase", "Enter the name of an action here. The name should be unique (qgis will make it unique if necessary).", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsAttributeActionDialogBase", "Name:", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAttributeActionDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeActionDialogBase: public Ui_QgsAttributeActionDialogBase {};
} // namespace Ui

#endif // UI_QGSATTRIBUTEACTIONDIALOGBASE_H
