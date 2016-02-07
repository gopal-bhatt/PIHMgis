/********************************************************************************
** Form generated from reading ui file 'qgswfssourceselectbase.ui'
**
** Created: Tue Jun 22 23:12:23 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSWFSSOURCESELECTBASE_H
#define UI_QGSWFSSOURCESELECTBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

class Ui_QgsWFSSourceSelectBase
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;
    QGroupBox *gbCRS;
    QHBoxLayout *hboxLayout;
    QLabel *labelCoordRefSys;
    QSpacerItem *spacerItem;
    QPushButton *btnChangeSpatialRefSys;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QPushButton *btnNew;
    QPushButton *btnDelete;
    QPushButton *btnEdit;
    QSpacerItem *spacerItem1;
    QPushButton *btnConnect;
    QComboBox *cmbConnections;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsWFSSourceSelectBase)
    {
    if (QgsWFSSourceSelectBase->objectName().isEmpty())
        QgsWFSSourceSelectBase->setObjectName(QString::fromUtf8("QgsWFSSourceSelectBase"));
    QgsWFSSourceSelectBase->resize(577, 444);
    gridLayout = new QGridLayout(QgsWFSSourceSelectBase);
#ifndef Q_OS_MAC
    gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout->setMargin(9);
#endif
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    treeWidget = new QTreeWidget(QgsWFSSourceSelectBase);
    treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
    treeWidget->setColumnCount(3);

    gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

    gbCRS = new QGroupBox(QgsWFSSourceSelectBase);
    gbCRS->setObjectName(QString::fromUtf8("gbCRS"));
    hboxLayout = new QHBoxLayout(gbCRS);
#ifndef Q_OS_MAC
    hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    hboxLayout->setMargin(9);
#endif
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    labelCoordRefSys = new QLabel(gbCRS);
    labelCoordRefSys->setObjectName(QString::fromUtf8("labelCoordRefSys"));

    hboxLayout->addWidget(labelCoordRefSys);

    spacerItem = new QSpacerItem(441, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    btnChangeSpatialRefSys = new QPushButton(gbCRS);
    btnChangeSpatialRefSys->setObjectName(QString::fromUtf8("btnChangeSpatialRefSys"));
    btnChangeSpatialRefSys->setEnabled(false);

    hboxLayout->addWidget(btnChangeSpatialRefSys);


    gridLayout->addWidget(gbCRS, 2, 0, 1, 1);

    GroupBox1 = new QGroupBox(QgsWFSSourceSelectBase);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
#ifndef Q_OS_MAC
    gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    gridLayout1->setMargin(9);
#endif
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    btnNew = new QPushButton(GroupBox1);
    btnNew->setObjectName(QString::fromUtf8("btnNew"));

    gridLayout1->addWidget(btnNew, 1, 1, 1, 1);

    btnDelete = new QPushButton(GroupBox1);
    btnDelete->setObjectName(QString::fromUtf8("btnDelete"));
    btnDelete->setEnabled(false);

    gridLayout1->addWidget(btnDelete, 1, 3, 1, 1);

    btnEdit = new QPushButton(GroupBox1);
    btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
    btnEdit->setEnabled(false);

    gridLayout1->addWidget(btnEdit, 1, 2, 1, 1);

    spacerItem1 = new QSpacerItem(171, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem1, 1, 4, 1, 1);

    btnConnect = new QPushButton(GroupBox1);
    btnConnect->setObjectName(QString::fromUtf8("btnConnect"));
    btnConnect->setEnabled(false);

    gridLayout1->addWidget(btnConnect, 1, 0, 1, 1);

    cmbConnections = new QComboBox(GroupBox1);
    cmbConnections->setObjectName(QString::fromUtf8("cmbConnections"));

    gridLayout1->addWidget(cmbConnections, 0, 0, 1, 5);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsWFSSourceSelectBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


    retranslateUi(QgsWFSSourceSelectBase);

    QMetaObject::connectSlotsByName(QgsWFSSourceSelectBase);
    } // setupUi

    void retranslateUi(QDialog *QgsWFSSourceSelectBase)
    {
    QgsWFSSourceSelectBase->setWindowTitle(QApplication::translate("QgsWFSSourceSelectBase", "Add WFS Layer from a Server", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(0, QApplication::translate("QgsWFSSourceSelectBase", "Title", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(1, QApplication::translate("QgsWFSSourceSelectBase", "Name", 0, QApplication::UnicodeUTF8));
    treeWidget->headerItem()->setText(2, QApplication::translate("QgsWFSSourceSelectBase", "Abstract", 0, QApplication::UnicodeUTF8));
    gbCRS->setTitle(QApplication::translate("QgsWFSSourceSelectBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
    labelCoordRefSys->setText(QString());
    btnChangeSpatialRefSys->setText(QApplication::translate("QgsWFSSourceSelectBase", "Change ...", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("QgsWFSSourceSelectBase", "Server Connections", 0, QApplication::UnicodeUTF8));
    btnNew->setText(QApplication::translate("QgsWFSSourceSelectBase", "&New", 0, QApplication::UnicodeUTF8));
    btnDelete->setText(QApplication::translate("QgsWFSSourceSelectBase", "Delete", 0, QApplication::UnicodeUTF8));
    btnEdit->setText(QApplication::translate("QgsWFSSourceSelectBase", "Edit", 0, QApplication::UnicodeUTF8));
    btnConnect->setText(QApplication::translate("QgsWFSSourceSelectBase", "C&onnect", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsWFSSourceSelectBase);
    } // retranslateUi

};

namespace Ui {
    class QgsWFSSourceSelectBase: public Ui_QgsWFSSourceSelectBase {};
} // namespace Ui

#endif // UI_QGSWFSSOURCESELECTBASE_H
