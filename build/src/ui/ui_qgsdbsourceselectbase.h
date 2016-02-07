/********************************************************************************
** Form generated from reading ui file 'qgsdbsourceselectbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSDBSOURCESELECTBASE_H
#define UI_QGSDBSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>

class Ui_QgsDbSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QTreeView *mTablesTreeView;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QPushButton *btnDelete;
    QPushButton *btnEdit;
    QPushButton *btnNew;
    QPushButton *btnConnect;
    QComboBox *cmbConnections;
    QHBoxLayout *hboxLayout;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem1;
    QPushButton *btnAdd;
    QPushButton *btnCancel;
    QGroupBox *mSearchGroupBox;
    QGridLayout *gridLayout2;
    QLabel *mSearchLabel;
    QLabel *mSearchModeLabel;
    QComboBox *mSearchModeComboBox;
    QLabel *mSearchColumnsLabel;
    QComboBox *mSearchColumnComboBox;
    QLineEdit *mSearchTableEdit;
    QPushButton *mSearchOptionsButton;

    void setupUi(QDialog *QgsDbSourceSelectBase)
    {
    if (QgsDbSourceSelectBase->objectName().isEmpty())
        QgsDbSourceSelectBase->setObjectName(QString::fromUtf8("QgsDbSourceSelectBase"));
    QgsDbSourceSelectBase->resize(472, 687);
    QgsDbSourceSelectBase->setWindowIcon(QIcon());
    QgsDbSourceSelectBase->setSizeGripEnabled(true);
    QgsDbSourceSelectBase->setModal(true);
    gridLayout = new QGridLayout(QgsDbSourceSelectBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    mTablesTreeView = new QTreeView(QgsDbSourceSelectBase);
    mTablesTreeView->setObjectName(QString::fromUtf8("mTablesTreeView"));
    mTablesTreeView->setSelectionMode(QAbstractItemView::MultiSelection);

    gridLayout->addWidget(mTablesTreeView, 1, 0, 1, 2);

    groupBox = new QGroupBox(QgsDbSourceSelectBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    btnDelete = new QPushButton(groupBox);
    btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

    gridLayout1->addWidget(btnDelete, 1, 3, 1, 1);

    btnEdit = new QPushButton(groupBox);
    btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

    gridLayout1->addWidget(btnEdit, 1, 2, 1, 1);

    btnNew = new QPushButton(groupBox);
    btnNew->setObjectName(QString::fromUtf8("btnNew"));

    gridLayout1->addWidget(btnNew, 1, 1, 1, 1);

    btnConnect = new QPushButton(groupBox);
    btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

    gridLayout1->addWidget(btnConnect, 1, 0, 1, 1);

    cmbConnections = new QComboBox(groupBox);
    cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

    gridLayout1->addWidget(cmbConnections, 0, 0, 1, 4);


    gridLayout->addWidget(groupBox, 0, 0, 1, 2);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    btnHelp = new QPushButton(QgsDbSourceSelectBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
    btnHelp->setEnabled(true);
    btnHelp->setAutoDefault(true);

    hboxLayout->addWidget(btnHelp);

    spacerItem1 = new QSpacerItem(141, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    btnAdd = new QPushButton(QgsDbSourceSelectBase);
    btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
    btnAdd->setAutoDefault(true);
    btnAdd->setDefault(true);

    hboxLayout->addWidget(btnAdd);

    btnCancel = new QPushButton(QgsDbSourceSelectBase);
    btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
    btnCancel->setAutoDefault(true);

    hboxLayout->addWidget(btnCancel);


    gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

    mSearchGroupBox = new QGroupBox(QgsDbSourceSelectBase);
    mSearchGroupBox->setObjectName(QString::fromUtf8("mSearchGroupBox"));
    gridLayout2 = new QGridLayout(mSearchGroupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    mSearchLabel = new QLabel(mSearchGroupBox);
    mSearchLabel->setObjectName(QString::fromUtf8("mSearchLabel"));

    gridLayout2->addWidget(mSearchLabel, 0, 0, 1, 1);

    mSearchModeLabel = new QLabel(mSearchGroupBox);
    mSearchModeLabel->setObjectName(QString::fromUtf8("mSearchModeLabel"));

    gridLayout2->addWidget(mSearchModeLabel, 2, 0, 1, 2);

    mSearchModeComboBox = new QComboBox(mSearchGroupBox);
    mSearchModeComboBox->setObjectName(QString::fromUtf8("mSearchModeComboBox"));

    gridLayout2->addWidget(mSearchModeComboBox, 2, 2, 1, 1);

    mSearchColumnsLabel = new QLabel(mSearchGroupBox);
    mSearchColumnsLabel->setObjectName(QString::fromUtf8("mSearchColumnsLabel"));

    gridLayout2->addWidget(mSearchColumnsLabel, 1, 0, 1, 2);

    mSearchColumnComboBox = new QComboBox(mSearchGroupBox);
    mSearchColumnComboBox->setObjectName(QString::fromUtf8("mSearchColumnComboBox"));

    gridLayout2->addWidget(mSearchColumnComboBox, 1, 2, 1, 1);

    mSearchTableEdit = new QLineEdit(mSearchGroupBox);
    mSearchTableEdit->setObjectName(QString::fromUtf8("mSearchTableEdit"));

    gridLayout2->addWidget(mSearchTableEdit, 0, 1, 1, 2);


    gridLayout->addWidget(mSearchGroupBox, 3, 0, 1, 2);

    mSearchOptionsButton = new QPushButton(QgsDbSourceSelectBase);
    mSearchOptionsButton->setObjectName(QString::fromUtf8("mSearchOptionsButton"));

    gridLayout->addWidget(mSearchOptionsButton, 2, 1, 1, 1);

    QWidget::setTabOrder(cmbConnections, btnConnect);
    QWidget::setTabOrder(btnConnect, btnNew);
    QWidget::setTabOrder(btnNew, btnEdit);
    QWidget::setTabOrder(btnEdit, btnDelete);
    QWidget::setTabOrder(btnDelete, btnHelp);
    QWidget::setTabOrder(btnHelp, btnAdd);
    QWidget::setTabOrder(btnAdd, btnCancel);

    retranslateUi(QgsDbSourceSelectBase);
    QObject::connect(btnCancel, SIGNAL(clicked()), QgsDbSourceSelectBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsDbSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDbSourceSelectBase)
    {
    QgsDbSourceSelectBase->setWindowTitle(QApplication::translate("QgsDbSourceSelectBase", "Add PostGIS Table(s)", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsDbSourceSelectBase", "PostgreSQL Connections", 0, QApplication::UnicodeUTF8));
    btnDelete->setText(QApplication::translate("QgsDbSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
    btnEdit->setText(QApplication::translate("QgsDbSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
    btnNew->setText(QApplication::translate("QgsDbSourceSelectBase", "New", 0, QApplication::UnicodeUTF8));
    btnConnect->setText(QApplication::translate("QgsDbSourceSelectBase", "Connect", 0, QApplication::UnicodeUTF8));
    btnHelp->setText(QApplication::translate("QgsDbSourceSelectBase", "Help", 0, QApplication::UnicodeUTF8));
    btnHelp->setShortcut(QApplication::translate("QgsDbSourceSelectBase", "F1", 0, QApplication::UnicodeUTF8));
    btnAdd->setText(QApplication::translate("QgsDbSourceSelectBase", "Add", 0, QApplication::UnicodeUTF8));
    btnAdd->setShortcut(QString());
    btnCancel->setText(QApplication::translate("QgsDbSourceSelectBase", "Close", 0, QApplication::UnicodeUTF8));
    btnCancel->setShortcut(QString());
    mSearchGroupBox->setTitle(QString());
    mSearchLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search:", 0, QApplication::UnicodeUTF8));
    mSearchModeLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search mode:", 0, QApplication::UnicodeUTF8));
    mSearchColumnsLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Search in columns:", 0, QApplication::UnicodeUTF8));
    mSearchOptionsButton->setText(QApplication::translate("QgsDbSourceSelectBase", "Search options...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsDbSourceSelectBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDbSourceSelectBase: public Ui_QgsDbSourceSelectBase {};
} // namespace Ui

#endif // UI_QGSDBSOURCESELECTBASE_H
