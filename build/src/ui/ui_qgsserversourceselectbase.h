/********************************************************************************
** Form generated from reading ui file 'qgsserversourceselectbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSSERVERSOURCESELECTBASE_H
#define UI_QGSSERVERSOURCESELECTBASE_H

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
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

class Ui_QgsServerSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QPushButton *btnAddDefault;
    QSpacerItem *spacerItem;
    QComboBox *cmbConnections;
    QPushButton *btnConnect;
    QPushButton *btnEdit;
    QPushButton *btnDelete;
    QPushButton *btnNew;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QSpacerItem *spacerItem1;
    QPushButton *btnChangeSpatialRefSys;
    QLabel *labelStatus;
    QPushButton *btnAdd;
    QGroupBox *groupBox2;
    QVBoxLayout *vboxLayout;
    QTreeWidget *lstLayers;
    QGroupBox *btnGrpImageEncoding;
    QSpacerItem *spacerItem2;
    QPushButton *btnHelp;
    QPushButton *btnCancel;

    void setupUi(QDialog *QgsServerSourceSelectBase)
    {
    if (QgsServerSourceSelectBase->objectName().isEmpty())
        QgsServerSourceSelectBase->setObjectName(QString::fromUtf8("QgsServerSourceSelectBase"));
    QgsServerSourceSelectBase->resize(600, 505);
    QgsServerSourceSelectBase->setWindowIcon(QIcon());
    QgsServerSourceSelectBase->setSizeGripEnabled(true);
    QgsServerSourceSelectBase->setModal(true);
    gridLayout = new QGridLayout(QgsServerSourceSelectBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    GroupBox1 = new QGroupBox(QgsServerSourceSelectBase);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    btnAddDefault = new QPushButton(GroupBox1);
    btnAddDefault->setObjectName(QString::fromUtf8("btnAddDefault"));

    gridLayout1->addWidget(btnAddDefault, 1, 4, 1, 1);

    spacerItem = new QSpacerItem(131, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem, 1, 5, 1, 1);

    cmbConnections = new QComboBox(GroupBox1);
    cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

    gridLayout1->addWidget(cmbConnections, 0, 0, 1, 6);

    btnConnect = new QPushButton(GroupBox1);
    btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
    btnConnect->setEnabled(false);

    gridLayout1->addWidget(btnConnect, 1, 0, 1, 1);

    btnEdit = new QPushButton(GroupBox1);
    btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
    btnEdit->setEnabled(false);

    gridLayout1->addWidget(btnEdit, 1, 2, 1, 1);

    btnDelete = new QPushButton(GroupBox1);
    btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
    btnDelete->setEnabled(false);

    gridLayout1->addWidget(btnDelete, 1, 3, 1, 1);

    btnNew = new QPushButton(GroupBox1);
    btnNew->setObjectName(QString::fromUtf8("btnNew"));

    gridLayout1->addWidget(btnNew, 1, 1, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 4);

    gbCRS = new QGroupBox(QgsServerSourceSelectBase);
    gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
    hboxLayout = new QHBoxLayout(gbCRS);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(9);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    labelCoordRefSys = new QLabel(gbCRS);
    labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

    hboxLayout->addWidget(labelCoordRefSys);

    spacerItem1 = new QSpacerItem(441, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    btnChangeSpatialRefSys = new QPushButton(gbCRS);
    btnChangeSpatialRefSys->setObjectName(QString::fromUtf8("btnChangeSpatialRefSys"));
    btnChangeSpatialRefSys->setEnabled(false);

    hboxLayout->addWidget(btnChangeSpatialRefSys);


    gridLayout->addWidget(gbCRS, 3, 0, 1, 4);

    labelStatus = new QLabel(QgsServerSourceSelectBase);
    labelStatus->setObjectName(QString::fromUtf8("labelStatus"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(labelStatus->sizePolicy().hasHeightForWidth());
    labelStatus->setSizePolicy(sizePolicy);
    labelStatus->setWordWrap(false);

    gridLayout->addWidget(labelStatus, 5, 0, 1, 4);

    btnAdd = new QPushButton(QgsServerSourceSelectBase);
    btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
    btnAdd->setEnabled(false);
    btnAdd->setAutoDefault(true);
    btnAdd->setDefault(true);

    gridLayout->addWidget(btnAdd, 4, 2, 1, 1);

    groupBox2 = new QGroupBox(QgsServerSourceSelectBase);
    groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
    vboxLayout = new QVBoxLayout(groupBox2);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    lstLayers = new QTreeWidget(groupBox2);
    lstLayers->setObjectName(QString::fromUtf8("lstLayers"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(lstLayers->sizePolicy().hasHeightForWidth());
    lstLayers->setSizePolicy(sizePolicy1);
    lstLayers->setSelectionMode(QAbstractItemView::MultiSelection);
    lstLayers->setAllColumnsShowFocus(true);

    vboxLayout->addWidget(lstLayers);


    gridLayout->addWidget(groupBox2, 2, 0, 1, 4);

    btnGrpImageEncoding = new QGroupBox(QgsServerSourceSelectBase);
    btnGrpImageEncoding->setObjectName(QString::fromUtf8("btnGrpImageEncoding"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(btnGrpImageEncoding->sizePolicy().hasHeightForWidth());
    btnGrpImageEncoding->setSizePolicy(sizePolicy2);
    btnGrpImageEncoding->setMinimumSize(QSize(16, 64));

    gridLayout->addWidget(btnGrpImageEncoding, 1, 0, 1, 4);

    spacerItem2 = new QSpacerItem(284, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem2, 4, 1, 1, 1);

    btnHelp = new QPushButton(QgsServerSourceSelectBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
    btnHelp->setEnabled(true);
    btnHelp->setAutoDefault(true);

    gridLayout->addWidget(btnHelp, 4, 0, 1, 1);

    btnCancel = new QPushButton(QgsServerSourceSelectBase);
    btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
    btnCancel->setAutoDefault(true);

    gridLayout->addWidget(btnCancel, 4, 3, 1, 1);

    QWidget::setTabOrder(cmbConnections, btnConnect);
    QWidget::setTabOrder(btnConnect, btnNew);
    QWidget::setTabOrder(btnNew, btnEdit);
    QWidget::setTabOrder(btnEdit, btnDelete);
    QWidget::setTabOrder(btnDelete, btnChangeSpatialRefSys);
    QWidget::setTabOrder(btnChangeSpatialRefSys, btnHelp);
    QWidget::setTabOrder(btnHelp, btnAdd);
    QWidget::setTabOrder(btnAdd, btnCancel);

    retranslateUi(QgsServerSourceSelectBase);

    QMetaObject::connectSlotsByName(QgsServerSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsServerSourceSelectBase)
    {
    QgsServerSourceSelectBase->setWindowTitle(QApplication::translate("QgsServerSourceSelectBase", "Add Layer(s) from a Server", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("QgsServerSourceSelectBase", "Server Connections", 0, QApplication::UnicodeUTF8));
    btnAddDefault->setStatusTip(QApplication::translate("QgsServerSourceSelectBase", "Adds a few example WMS servers", 0, QApplication::UnicodeUTF8));
    btnAddDefault->setWhatsThis(QString());
    btnAddDefault->setText(QApplication::translate("QgsServerSourceSelectBase", "Add default servers", 0, QApplication::UnicodeUTF8));
    btnConnect->setText(QApplication::translate("QgsServerSourceSelectBase", "C&onnect", 0, QApplication::UnicodeUTF8));
    btnEdit->setText(QApplication::translate("QgsServerSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
    btnDelete->setText(QApplication::translate("QgsServerSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
    btnNew->setText(QApplication::translate("QgsServerSourceSelectBase", "&New", 0, QApplication::UnicodeUTF8));
    gbCRS->setTitle(QApplication::translate("QgsServerSourceSelectBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
    labelCoordRefSys->setText(QString());
    btnChangeSpatialRefSys->setText(QApplication::translate("QgsServerSourceSelectBase", "Change ...", 0, QApplication::UnicodeUTF8));
    labelStatus->setText(QApplication::translate("QgsServerSourceSelectBase", "Ready", 0, QApplication::UnicodeUTF8));
    btnAdd->setText(QApplication::translate("QgsServerSourceSelectBase", "&Add", 0, QApplication::UnicodeUTF8));
    btnAdd->setShortcut(QApplication::translate("QgsServerSourceSelectBase", "Alt+A", 0, QApplication::UnicodeUTF8));
    groupBox2->setTitle(QApplication::translate("QgsServerSourceSelectBase", "Layers", 0, QApplication::UnicodeUTF8));
    lstLayers->headerItem()->setText(0, QApplication::translate("QgsServerSourceSelectBase", "ID", 0, QApplication::UnicodeUTF8));
    lstLayers->headerItem()->setText(1, QApplication::translate("QgsServerSourceSelectBase", "Name", 0, QApplication::UnicodeUTF8));
    lstLayers->headerItem()->setText(2, QApplication::translate("QgsServerSourceSelectBase", "Title", 0, QApplication::UnicodeUTF8));
    lstLayers->headerItem()->setText(3, QApplication::translate("QgsServerSourceSelectBase", "Abstract", 0, QApplication::UnicodeUTF8));
    btnGrpImageEncoding->setTitle(QApplication::translate("QgsServerSourceSelectBase", "Image encoding", 0, QApplication::UnicodeUTF8));
    btnHelp->setText(QApplication::translate("QgsServerSourceSelectBase", "Help", 0, QApplication::UnicodeUTF8));
    btnHelp->setShortcut(QApplication::translate("QgsServerSourceSelectBase", "F1", 0, QApplication::UnicodeUTF8));
    btnCancel->setText(QApplication::translate("QgsServerSourceSelectBase", "C&lose", 0, QApplication::UnicodeUTF8));
    btnCancel->setShortcut(QApplication::translate("QgsServerSourceSelectBase", "Alt+L", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsServerSourceSelectBase);
    } // retranslateUi

};

namespace Ui {
    class QgsServerSourceSelectBase: public Ui_QgsServerSourceSelectBase {};
} // namespace Ui

#endif // UI_QGSSERVERSOURCESELECTBASE_H
