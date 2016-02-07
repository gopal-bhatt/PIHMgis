/********************************************************************************
** Form generated from reading ui file 'qgsattributetablebase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
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
#include <QtGui/QDialogButtonBox>
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
    QToolButton *mRemoveSelectionButton;
    QToolButton *mSelectedToTopButton;
    QToolButton *mInvertSelectionButton;
    QToolButton *mCopySelectedRowsButton;
    QToolButton *mZoomMapToSelectedRowsButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QLineEdit *mSearchText;
    QLabel *textLabel2;
    QComboBox *mSearchColumns;
    QPushButton *mSearchButton;
    QComboBox *mSearchShowResults;
    QPushButton *btnAdvancedSearch;
    QDialogButtonBox *buttonBox;
    QgsAttributeTable *tblAttributes;
    QToolButton *mToggleEditingButton;

    void setupUi(QDialog *QgsAttributeTableBase)
    {
    if (QgsAttributeTableBase->objectName().isEmpty())
        QgsAttributeTableBase->setObjectName(QString::fromUtf8("QgsAttributeTableBase"));
    QgsAttributeTableBase->resize(687, 583);
    QgsAttributeTableBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsAttributeTableBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setHorizontalSpacing(6);
    gridLayout->setVerticalSpacing(2);
    mRemoveSelectionButton = new QToolButton(QgsAttributeTableBase);
    mRemoveSelectionButton->setObjectName(QString::fromUtf8("mRemoveSelectionButton"));
    mRemoveSelectionButton->setIcon(QIcon(QString::fromUtf8("../xpm/remove_selection.xpm")));

    gridLayout->addWidget(mRemoveSelectionButton, 0, 0, 1, 1);

    mSelectedToTopButton = new QToolButton(QgsAttributeTableBase);
    mSelectedToTopButton->setObjectName(QString::fromUtf8("mSelectedToTopButton"));
    mSelectedToTopButton->setIcon(QIcon(QString::fromUtf8("../xpm/selected_to_top.png")));

    gridLayout->addWidget(mSelectedToTopButton, 0, 1, 1, 1);

    mInvertSelectionButton = new QToolButton(QgsAttributeTableBase);
    mInvertSelectionButton->setObjectName(QString::fromUtf8("mInvertSelectionButton"));
    mInvertSelectionButton->setIcon(QIcon(QString::fromUtf8("../xpm/switch_selection.png")));

    gridLayout->addWidget(mInvertSelectionButton, 0, 2, 1, 1);

    mCopySelectedRowsButton = new QToolButton(QgsAttributeTableBase);
    mCopySelectedRowsButton->setObjectName(QString::fromUtf8("mCopySelectedRowsButton"));
    mCopySelectedRowsButton->setIcon(QIcon(QString::fromUtf8("../xpm/copy_selection.png")));

    gridLayout->addWidget(mCopySelectedRowsButton, 0, 3, 1, 1);

    mZoomMapToSelectedRowsButton = new QToolButton(QgsAttributeTableBase);
    mZoomMapToSelectedRowsButton->setObjectName(QString::fromUtf8("mZoomMapToSelectedRowsButton"));

    gridLayout->addWidget(mZoomMapToSelectedRowsButton, 0, 4, 1, 1);

    spacerItem = new QSpacerItem(421, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 6, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
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
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
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


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 7);

    buttonBox = new QDialogButtonBox(QgsAttributeTableBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Help);

    gridLayout->addWidget(buttonBox, 3, 0, 1, 7);

    tblAttributes = new QgsAttributeTable(QgsAttributeTableBase);
    tblAttributes->setObjectName(QString::fromUtf8("tblAttributes"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(tblAttributes->sizePolicy().hasHeightForWidth());
    tblAttributes->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(tblAttributes, 1, 0, 1, 7);

    mToggleEditingButton = new QToolButton(QgsAttributeTableBase);
    mToggleEditingButton->setObjectName(QString::fromUtf8("mToggleEditingButton"));
    mToggleEditingButton->setCheckable(true);

    gridLayout->addWidget(mToggleEditingButton, 0, 5, 1, 1);

    textLabel1->setBuddy(mSearchText);
    textLabel2->setBuddy(mSearchColumns);
    QWidget::setTabOrder(mRemoveSelectionButton, mSelectedToTopButton);
    QWidget::setTabOrder(mSelectedToTopButton, mInvertSelectionButton);
    QWidget::setTabOrder(mInvertSelectionButton, mCopySelectedRowsButton);
    QWidget::setTabOrder(mCopySelectedRowsButton, mZoomMapToSelectedRowsButton);
    QWidget::setTabOrder(mZoomMapToSelectedRowsButton, mSearchText);
    QWidget::setTabOrder(mSearchText, mSearchColumns);
    QWidget::setTabOrder(mSearchColumns, mSearchButton);
    QWidget::setTabOrder(mSearchButton, mSearchShowResults);
    QWidget::setTabOrder(mSearchShowResults, btnAdvancedSearch);
    QWidget::setTabOrder(btnAdvancedSearch, buttonBox);

    retranslateUi(QgsAttributeTableBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsAttributeTableBase, SLOT(accept()));

    QMetaObject::connectSlotsByName(QgsAttributeTableBase);
    } // setupUi

    void retranslateUi(QDialog *QgsAttributeTableBase)
    {
    QgsAttributeTableBase->setWindowTitle(QApplication::translate("QgsAttributeTableBase", "Attribute Table", 0, QApplication::UnicodeUTF8));
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
    mZoomMapToSelectedRowsButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Zoom map to the selected rows (Ctrl-J)", 0, QApplication::UnicodeUTF8));
    mZoomMapToSelectedRowsButton->setWhatsThis(QApplication::translate("QgsAttributeTableBase", "Zoom map to the selected rows", 0, QApplication::UnicodeUTF8));
    mZoomMapToSelectedRowsButton->setText(QString());
    mZoomMapToSelectedRowsButton->setShortcut(QApplication::translate("QgsAttributeTableBase", "Ctrl+J", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsAttributeTableBase", "Search for", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsAttributeTableBase", "in", 0, QApplication::UnicodeUTF8));
    mSearchButton->setText(QApplication::translate("QgsAttributeTableBase", "Search", 0, QApplication::UnicodeUTF8));
    btnAdvancedSearch->setText(QApplication::translate("QgsAttributeTableBase", "Adva&nced...", 0, QApplication::UnicodeUTF8));
    btnAdvancedSearch->setShortcut(QApplication::translate("QgsAttributeTableBase", "Alt+N", 0, QApplication::UnicodeUTF8));
    mToggleEditingButton->setToolTip(QApplication::translate("QgsAttributeTableBase", "Toggle editing mode", 0, QApplication::UnicodeUTF8));
    mToggleEditingButton->setWhatsThis(QApplication::translate("QgsAttributeTableBase", "Click to toggle table editing", 0, QApplication::UnicodeUTF8));
    mToggleEditingButton->setText(QString());
    Q_UNUSED(QgsAttributeTableBase);
    } // retranslateUi

};

namespace Ui {
    class QgsAttributeTableBase: public Ui_QgsAttributeTableBase {};
} // namespace Ui

#endif // UI_QGSATTRIBUTETABLEBASE_H
