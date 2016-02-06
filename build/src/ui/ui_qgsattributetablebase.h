/********************************************************************************
** Form generated from reading ui file 'qgsattributetablebase.ui'
**
** Created: Wed Jun 11 19:03:29 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSATTRIBUTETABLEBASE_H
#define UI_QGSATTRIBUTETABLEBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include "qgsattributetable.h"

class Ui_QgsAttributeTableBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *btnHelp;
    QLabel *textLabel1;
    QLineEdit *mSearchText;
    QLabel *textLabel2;
    QComboBox *mSearchColumns;
    QPushButton *mSearchButton;
    QComboBox *mSearchShowResults;
    QPushButton *btnAdvancedSearch;
    QPushButton *btnClose;
    QgsAttributeTable *tblAttributes;
    QHBoxLayout *hboxLayout1;
    QToolButton *mRemoveSelectionButton;
    QToolButton *mSelectedToTopButton;
    QToolButton *mInvertSelectionButton;
    QToolButton *mCopySelectedRowsButton;
    QToolButton *mAddAttributeButton;
    QToolButton *mDeleteAttributeButton;
    QSpacerItem *spacerItem;
    QPushButton *btnStartEditing;
    QPushButton *btnStopEditing;

    void setupUi(QDialog *QgsAttributeTableBase)
    {
    if (QgsAttributeTableBase->objectName().isEmpty())
        QgsAttributeTableBase->setObjectName(QString::fromUtf8("QgsAttributeTableBase"));
    QgsAttributeTableBase->resize(686, 547);
    QgsAttributeTableBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsAttributeTableBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    btnHelp = new QPushButton(QgsAttributeTableBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));

    hboxLayout->addWidget(btnHelp);

    textLabel1 = new QLabel(QgsAttributeTableBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout->addWidget(textLabel1);

    mSearchText = new QLineEdit(QgsAttributeTableBase);
    mSearchText->setObjectName(QString::fromUtf8("mSearchText"));

    hboxLayout->addWidget(mSearchText);

    textLabel2 = new QLabel(QgsAttributeTableBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    hboxLayout->addWidget(textLabel2);

    mSearchColumns = new QComboBox(QgsAttributeTableBase);
    mSearchColumns->setObjectName(QString::fromUtf8("mSearchColumns"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(mSearchColumns->sizePolicy().hasHeightForWidth());
    mSearchColumns->setSizePolicy(sizePolicy);

    hboxLayout->addWidget(mSearchColumns);

    mSearchButton = new QPushButton(QgsAttributeTableBase);
    mSearchButton->setObjectName(QString::fromUtf8("mSearchButton"));

    hboxLayout->addWidget(mSearchButton);

    mSearchShowResults = new QComboBox(QgsAttributeTableBase);
    mSearchShowResults->setObjectName(QString::fromUtf8("mSearchShowResults"));

    hboxLayout->addWidget(mSearchShowResults);

    btnAdvancedSearch = new QPushButton(QgsAttributeTableBase);
    btnAdvancedSearch->setObjectName(QString::fromUtf8("btnAdvancedSearch"));

    hboxLayout->addWidget(btnAdvancedSearch);

    btnClose = new QPushButton(QgsAttributeTableBase);
    btnClose->setObjectName(QString::fromUtf8("btnClose"));

    hboxLayout->addWidget(btnClose);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

    tblAttributes = new QgsAttributeTable(QgsAttributeTableBase);
    tblAttributes->setObjectName(QString::fromUtf8("tblAttributes"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(tblAttributes->sizePolicy().hasHeightForWidth());
    tblAttributes->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(tblAttributes, 1, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    mRemoveSelectionButton = new QToolButton(QgsAttributeTableBase);
    mRemoveSelectionButton->setObjectName(QString::fromUtf8("mRemoveSelectionButton"));
    mRemoveSelectionButton->setIcon(QIcon(QString::fromUtf8("../xpm/remove_selection.xpm")));

    hboxLayout1->addWidget(mRemoveSelectionButton);

    mSelectedToTopButton = new QToolButton(QgsAttributeTableBase);
    mSelectedToTopButton->setObjectName(QString::fromUtf8("mSelectedToTopButton"));
    mSelectedToTopButton->setIcon(QIcon(QString::fromUtf8("../xpm/selected_to_top.png")));

    hboxLayout1->addWidget(mSelectedToTopButton);

    mInvertSelectionButton = new QToolButton(QgsAttributeTableBase);
    mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));
    mInvertSelectionButton->setIcon(QIcon(QString::fromUtf8("../xpm/switch_selection.png")));

    hboxLayout1->addWidget(mInvertSelectionButton);

    mCopySelectedRowsButton = new QToolButton(QgsAttributeTableBase);
    mCopySelectedRowsButton->setObjectName(QString::fromUtf8("mCopySelectedRowsButton"));
    mCopySelectedRowsButton->setIcon(QIcon(QString::fromUtf8("../xpm/copy_selection.png")));

    hboxLayout1->addWidget(mCopySelectedRowsButton);

    mAddAttributeButton = new QToolButton(QgsAttributeTableBase);
    mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));
    mAddAttributeButton->setIcon(QIcon(QString::fromUtf8("../xpm/new_attribute.png")));

    hboxLayout1->addWidget(mAddAttributeButton);

    mDeleteAttributeButton = new QToolButton(QgsAttributeTableBase);
    mDeleteAttributeButton->setObjectName(QString::fromUtf8("mDeleteAttributeButton"));
    mDeleteAttributeButton->setIcon(QIcon(QString::fromUtf8("../xpm/delete_attribute.png")));

    hboxLayout1->addWidget(mDeleteAttributeButton);

    spacerItem = new QSpacerItem(210, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout1->addItem(spacerItem);

    btnStartEditing = new QPushButton(QgsAttributeTableBase);
    btnStartEditing->setObjectName(QString::fromUtf8("btnStartEditing"));

    hboxLayout1->addWidget(btnStartEditing);

    btnStopEditing = new QPushButton(QgsAttributeTableBase);
    btnStopEditing->setObjectName(QString::fromUtf8("btnStopEditing"));

    hboxLayout1->addWidget(btnStopEditing);


    gridLayout->addLayout(hboxLayout1, 0, 0, 1, 1);

    textLabel1->setBuddy(mSearchText);
    textLabel2->setBuddy(mSearchColumns);
    QWidget::setTabOrder(mRemoveSelectionButton, mSelectedToTopButton);
    QWidget::setTabOrder(mSelectedToTopButton, mInvertSelectionButton);
    QWidget::setTabOrder(mInvertSelectionButton, mCopySelectedRowsButton);
    QWidget::setTabOrder(mCopySelectedRowsButton, mAddAttributeButton);
    QWidget::setTabOrder(mAddAttributeButton, mDeleteAttributeButton);
    QWidget::setTabOrder(mDeleteAttributeButton, btnStartEditing);
    QWidget::setTabOrder(btnStartEditing, btnStopEditing);
    QWidget::setTabOrder(btnStopEditing, mSearchText);
    QWidget::setTabOrder(mSearchText, mSearchColumns);
    QWidget::setTabOrder(mSearchColumns, mSearchButton);
    QWidget::setTabOrder(mSearchButton, mSearchShowResults);
    QWidget::setTabOrder(mSearchShowResults, btnAdvancedSearch);
    QWidget::setTabOrder(btnAdvancedSearch, btnClose);

    retranslateUi(QgsAttributeTableBase);

    QMetaObject::connectSlotsByName(QgsAttributeTableBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeTableBase)
    {
    QgsAttributeTableBase->setWindowTitle(QApplication::translate("QgsAttributeTableBase", "Attribute Table", 0, QApplication::UnicodeUTF8));
    btnHelp->setText(QApplication::translate("QgsAttributeTableBase", "&Help", 0, QApplication::UnicodeUTF8));
    btnHelp->setShortcut(QApplication::translate("QgsAttributeTableBase", "Alt+C", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsAttributeTableBase", "Search for:", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsAttributeTableBase", "in", 0, QApplication::UnicodeUTF8));
    mSearchButton->setText(QApplication::translate("QgsAttributeTableBase", "Search", 0, QApplication::UnicodeUTF8));
    btnAdvancedSearch->setText(QApplication::translate("QgsAttributeTableBase", "Adva&nced...", 0, QApplication::UnicodeUTF8));
    btnAdvancedSearch->setShortcut(QApplication::translate("QgsAttributeTableBase", "Alt+N", 0, QApplication::UnicodeUTF8));
    btnClose->setText(QApplication::translate("QgsAttributeTableBase", "&Close", 0, QApplication::UnicodeUTF8));
    btnClose->setShortcut(QApplication::translate("QgsAttributeTableBase", "Alt+C", 0, QApplication::UnicodeUTF8));
    mRemoveSelectionButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Remove selection", 0, QApplication::UnicodeUTF8));
    mRemoveSelectionButton->setText(QString());
    mRemoveSelectionButton->setShortcut(QString());
    mSelectedToTopButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Move selected to top", 0, QApplication::UnicodeUTF8));
    mSelectedToTopButton->setText(QString());
    mSelectedToTopButton->setShortcut(QApplication::translate("QgsAttributeTableBase", "Ctrl+T", 0, QApplication::UnicodeUTF8));
    mInvertSelectionButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Invert selection", 0, QApplication::UnicodeUTF8));
    mInvertSelectionButton->setText(QString());
    mInvertSelectionButton->setShortcut(QApplication::translate("QgsAttributeTableBase", "Ctrl+S", 0, QApplication::UnicodeUTF8));
    mCopySelectedRowsButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Copy selected rows to clipboard (Ctrl+C)", 0, QApplication::UnicodeUTF8));
    mCopySelectedRowsButton->setWhatsThis(QApplication::translate("QgsAttributeTableBase", "Copies the selected rows to the clipboard", 0, QApplication::UnicodeUTF8));
    mCopySelectedRowsButton->setText(QString());
    mCopySelectedRowsButton->setShortcut(QApplication::translate("QgsAttributeTableBase", "Ctrl+C", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "New column", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setText(QString());
    mAddAttributeButton->setShortcut(QApplication::translate("QgsAttributeTableBase", "Ctrl+N", 0, QApplication::UnicodeUTF8));
    mDeleteAttributeButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Delete column", 0, QApplication::UnicodeUTF8));
    mDeleteAttributeButton->setText(QString());
    mDeleteAttributeButton->setShortcut(QApplication::translate("QgsAttributeTableBase", "Ctrl+X", 0, QApplication::UnicodeUTF8));
    btnStartEditing->setText(QApplication::translate("QgsAttributeTableBase", "Start editing", 0, QApplication::UnicodeUTF8));
    btnStopEditing->setText(QApplication::translate("QgsAttributeTableBase", "Stop editin&g", 0, QApplication::UnicodeUTF8));
    btnStopEditing->setShortcut(QApplication::translate("QgsAttributeTableBase", "Alt+G", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsAttributeTableBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTableBase: public Ui_QgsAttributeTableBase {};
} // namespace Ui

#endif // UI_QGSATTRIBUTETABLEBASE_H
