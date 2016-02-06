/********************************************************************************
** Form generated from reading ui file 'qgsdbsourceselectbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
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
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>

class Ui_QgsDbSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;
    QPushButton *btnAdd;
    QPushButton *btnCancel;
    QComboBox *mEncodingComboBox;
    QLabel *mEncodingLabel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QTableWidget *lstTables;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QPushButton *btnDelete;
    QPushButton *btnEdit;
    QPushButton *btnNew;
    QPushButton *btnConnect;
    QComboBox *cmbConnections;

    void setupUi(QDialog *QgsDbSourceSelectBase)
    {
    if (QgsDbSourceSelectBase->objectName().isEmpty())
        QgsDbSourceSelectBase->setObjectName(QString::fromUtf8("QgsDbSourceSelectBase"));
    QgsDbSourceSelectBase->resize(494, 481);
    QgsDbSourceSelectBase->setWindowIcon(QIcon());
    QgsDbSourceSelectBase->setSizeGripEnabled(true);
    QgsDbSourceSelectBase->setModal(true);
    gridLayout = new QGridLayout(QgsDbSourceSelectBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    btnHelp = new QPushButton(QgsDbSourceSelectBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
    btnHelp->setEnabled(true);
    btnHelp->setAutoDefault(true);

    hboxLayout->addWidget(btnHelp);

    spacerItem = new QSpacerItem(141, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    btnAdd = new QPushButton(QgsDbSourceSelectBase);
    btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
    btnAdd->setAutoDefault(true);
    btnAdd->setDefault(true);

    hboxLayout->addWidget(btnAdd);

    btnCancel = new QPushButton(QgsDbSourceSelectBase);
    btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
    btnCancel->setAutoDefault(true);

    hboxLayout->addWidget(btnCancel);


    gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

    mEncodingComboBox = new QComboBox(QgsDbSourceSelectBase);
    mEncodingComboBox->setObjectName(QString::fromUtf8("mEncodingComboBox"));

    gridLayout->addWidget(mEncodingComboBox, 2, 1, 1, 1);

    mEncodingLabel = new QLabel(QgsDbSourceSelectBase);
    mEncodingLabel->setObjectName(QString::fromUtf8("mEncodingLabel"));

    gridLayout->addWidget(mEncodingLabel, 2, 0, 1, 1);

    groupBox_2 = new QGroupBox(QgsDbSourceSelectBase);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout1 = new QGridLayout(groupBox_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    lstTables = new QTableWidget(groupBox_2);
    lstTables->setObjectName(QString::fromUtf8("lstTables"));
    lstTables->setMouseTracking(true);
    lstTables->setEditTriggers(QAbstractItemView::NoEditTriggers);
    lstTables->setSelectionMode(QAbstractItemView::MultiSelection);
    lstTables->setSelectionBehavior(QAbstractItemView::SelectRows);
    lstTables->setShowGrid(false);
    lstTables->setGridStyle(Qt::SolidLine);

    gridLayout1->addWidget(lstTables, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

    groupBox = new QGroupBox(QgsDbSourceSelectBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout2 = new QGridLayout(groupBox);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(9);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    btnDelete = new QPushButton(groupBox);
    btnDelete->setObjectName(QString::fromUtf8("btnDelete"));

    gridLayout2->addWidget(btnDelete, 1, 3, 1, 1);

    btnEdit = new QPushButton(groupBox);
    btnEdit->setObjectName(QString::fromUtf8("btnEdit"));

    gridLayout2->addWidget(btnEdit, 1, 2, 1, 1);

    btnNew = new QPushButton(groupBox);
    btnNew->setObjectName(QString::fromUtf8("btnNew"));

    gridLayout2->addWidget(btnNew, 1, 1, 1, 1);

    btnConnect = new QPushButton(groupBox);
    btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

    gridLayout2->addWidget(btnConnect, 1, 0, 1, 1);

    cmbConnections = new QComboBox(groupBox);
    cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

    gridLayout2->addWidget(cmbConnections, 0, 0, 1, 4);


    gridLayout->addWidget(groupBox, 0, 0, 1, 2);

    QWidget::setTabOrder(cmbConnections, btnConnect);
    QWidget::setTabOrder(btnConnect, btnNew);
    QWidget::setTabOrder(btnNew, btnEdit);
    QWidget::setTabOrder(btnEdit, btnDelete);
    QWidget::setTabOrder(btnDelete, lstTables);
    QWidget::setTabOrder(lstTables, mEncodingComboBox);
    QWidget::setTabOrder(mEncodingComboBox, btnHelp);
    QWidget::setTabOrder(btnHelp, btnAdd);
    QWidget::setTabOrder(btnAdd, btnCancel);

    retranslateUi(QgsDbSourceSelectBase);
    QObject::connect(btnCancel, SIGNAL(clicked()), QgsDbSourceSelectBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsDbSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsDbSourceSelectBase)
    {
    QgsDbSourceSelectBase->setWindowTitle(QApplication::translate("QgsDbSourceSelectBase", "Add PostGIS Table(s)", 0, QApplication::UnicodeUTF8));
    btnHelp->setText(QApplication::translate("QgsDbSourceSelectBase", "Help", 0, QApplication::UnicodeUTF8));
    btnHelp->setShortcut(QApplication::translate("QgsDbSourceSelectBase", "F1", 0, QApplication::UnicodeUTF8));
    btnAdd->setText(QApplication::translate("QgsDbSourceSelectBase", "Add", 0, QApplication::UnicodeUTF8));
    btnAdd->setShortcut(QString());
    btnCancel->setText(QApplication::translate("QgsDbSourceSelectBase", "Close", 0, QApplication::UnicodeUTF8));
    btnCancel->setShortcut(QString());
    mEncodingLabel->setText(QApplication::translate("QgsDbSourceSelectBase", "Encoding:", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsDbSourceSelectBase", "Tables:", 0, QApplication::UnicodeUTF8));
    if (lstTables->columnCount() < 3)
        lstTables->setColumnCount(3);

    QTableWidgetItem *__colItem = new QTableWidgetItem();
    __colItem->setText(QApplication::translate("QgsDbSourceSelectBase", "Type", 0, QApplication::UnicodeUTF8));
    lstTables->setHorizontalHeaderItem(0, __colItem);

    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    __colItem1->setText(QApplication::translate("QgsDbSourceSelectBase", "Name", 0, QApplication::UnicodeUTF8));
    lstTables->setHorizontalHeaderItem(1, __colItem1);

    QTableWidgetItem *__colItem2 = new QTableWidgetItem();
    __colItem2->setText(QApplication::translate("QgsDbSourceSelectBase", "Sql", 0, QApplication::UnicodeUTF8));
    lstTables->setHorizontalHeaderItem(2, __colItem2);
    groupBox->setTitle(QApplication::translate("QgsDbSourceSelectBase", "PostgreSQL Connections", 0, QApplication::UnicodeUTF8));
    btnDelete->setText(QApplication::translate("QgsDbSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
    btnEdit->setText(QApplication::translate("QgsDbSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
    btnNew->setText(QApplication::translate("QgsDbSourceSelectBase", "New", 0, QApplication::UnicodeUTF8));
    btnConnect->setText(QApplication::translate("QgsDbSourceSelectBase", "Connect", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsDbSourceSelectBase);
    } // retranslateUi

};

namespace Ui {
    class QgsDbSourceSelectBase: public Ui_QgsDbSourceSelectBase {};
} // namespace Ui

#endif // UI_QGSDBSOURCESELECTBASE_H
