/********************************************************************************
** Form generated from reading ui file 'qgsnewconnectionbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSNEWCONNECTIONBASE_H
#define UI_QGSNEWCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

class Ui_QgsNewConnectionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QFrame *frame_2;
    QCheckBox *cb_publicSchemaOnly;
    QFrame *frame;
    QCheckBox *cb_geometryColumnsOnly;
    QHBoxLayout *hboxLayout;
    QCheckBox *chkStorePassword;
    QPushButton *btnConnect;
    QHBoxLayout *hboxLayout1;
    QVBoxLayout *vboxLayout;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QLabel *TextLabel2;
    QLabel *TextLabel2_2;
    QLabel *TextLabel3;
    QLabel *TextLabel3_2;
    QVBoxLayout *vboxLayout1;
    QLineEdit *txtName;
    QLineEdit *txtHost;
    QLineEdit *txtDatabase;
    QLineEdit *txtPort;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QVBoxLayout *vboxLayout2;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *QgsNewConnectionBase)
    {
    if (QgsNewConnectionBase->objectName().isEmpty())
        QgsNewConnectionBase->setObjectName(QString::fromUtf8("QgsNewConnectionBase"));
    QgsNewConnectionBase->resize(509, 335);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(3));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsNewConnectionBase->sizePolicy().hasHeightForWidth());
    QgsNewConnectionBase->setSizePolicy(sizePolicy);
    QgsNewConnectionBase->setSizeGripEnabled(true);
    QgsNewConnectionBase->setModal(true);
    gridLayout = new QGridLayout(QgsNewConnectionBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    GroupBox1 = new QGroupBox(QgsNewConnectionBase);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setSpacing(5);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    frame_2 = new QFrame(GroupBox1);
    frame_2->setObjectName(QString::fromUtf8("frame_2"));
    frame_2->setFrameShape(QFrame::NoFrame);
    frame_2->setFrameShadow(QFrame::Raised);

    gridLayout1->addWidget(frame_2, 0, 2, 4, 1);

    cb_publicSchemaOnly = new QCheckBox(GroupBox1);
    cb_publicSchemaOnly->setObjectName(QString::fromUtf8("cb_publicSchemaOnly"));

    gridLayout1->addWidget(cb_publicSchemaOnly, 3, 1, 1, 1);

    frame = new QFrame(GroupBox1);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setFrameShape(QFrame::NoFrame);
    frame->setFrameShadow(QFrame::Raised);

    gridLayout1->addWidget(frame, 0, 0, 4, 1);

    cb_geometryColumnsOnly = new QCheckBox(GroupBox1);
    cb_geometryColumnsOnly->setObjectName(QString::fromUtf8("cb_geometryColumnsOnly"));

    gridLayout1->addWidget(cb_geometryColumnsOnly, 2, 1, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    chkStorePassword = new QCheckBox(GroupBox1);
    chkStorePassword->setObjectName(QString::fromUtf8("chkStorePassword"));

    hboxLayout->addWidget(chkStorePassword);

    btnConnect = new QPushButton(GroupBox1);
    btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

    hboxLayout->addWidget(btnConnect);


    gridLayout1->addLayout(hboxLayout, 1, 1, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(0);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    TextLabel1_2 = new QLabel(GroupBox1);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));

    vboxLayout->addWidget(TextLabel1_2);

    TextLabel1 = new QLabel(GroupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));

    vboxLayout->addWidget(TextLabel1);

    TextLabel2 = new QLabel(GroupBox1);
    TextLabel2->setObjectName(QString::fromUtf8("TextLabel2"));

    vboxLayout->addWidget(TextLabel2);

    TextLabel2_2 = new QLabel(GroupBox1);
    TextLabel2_2->setObjectName(QString::fromUtf8("TextLabel2_2"));

    vboxLayout->addWidget(TextLabel2_2);

    TextLabel3 = new QLabel(GroupBox1);
    TextLabel3->setObjectName(QString::fromUtf8("TextLabel3"));

    vboxLayout->addWidget(TextLabel3);

    TextLabel3_2 = new QLabel(GroupBox1);
    TextLabel3_2->setObjectName(QString::fromUtf8("TextLabel3_2"));

    vboxLayout->addWidget(TextLabel3_2);


    hboxLayout1->addLayout(vboxLayout);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setMargin(0);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    txtName = new QLineEdit(GroupBox1);
    txtName->setObjectName(QString::fromUtf8("txtName"));

    vboxLayout1->addWidget(txtName);

    txtHost = new QLineEdit(GroupBox1);
    txtHost->setObjectName(QString::fromUtf8("txtHost"));

    vboxLayout1->addWidget(txtHost);

    txtDatabase = new QLineEdit(GroupBox1);
    txtDatabase->setObjectName(QString::fromUtf8("txtDatabase"));

    vboxLayout1->addWidget(txtDatabase);

    txtPort = new QLineEdit(GroupBox1);
    txtPort->setObjectName(QString::fromUtf8("txtPort"));

    vboxLayout1->addWidget(txtPort);

    txtUsername = new QLineEdit(GroupBox1);
    txtUsername->setObjectName(QString::fromUtf8("txtUsername"));

    vboxLayout1->addWidget(txtUsername);

    txtPassword = new QLineEdit(GroupBox1);
    txtPassword->setObjectName(QString::fromUtf8("txtPassword"));
    txtPassword->setEchoMode(QLineEdit::Password);

    vboxLayout1->addWidget(txtPassword);


    hboxLayout1->addLayout(vboxLayout1);


    gridLayout1->addLayout(hboxLayout1, 0, 1, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(6);
    vboxLayout2->setMargin(0);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    btnOk = new QPushButton(QgsNewConnectionBase);
    btnOk->setObjectName(QString::fromUtf8("btnOk"));
    btnOk->setAutoDefault(true);
    btnOk->setDefault(true);

    vboxLayout2->addWidget(btnOk);

    btnCancel = new QPushButton(QgsNewConnectionBase);
    btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
    btnCancel->setAutoDefault(true);

    vboxLayout2->addWidget(btnCancel);

    btnHelp = new QPushButton(QgsNewConnectionBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
    btnHelp->setEnabled(true);
    btnHelp->setAutoDefault(true);

    vboxLayout2->addWidget(btnHelp);

    spacerItem = new QSpacerItem(87, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout2->addItem(spacerItem);


    gridLayout->addLayout(vboxLayout2, 0, 1, 1, 1);

    TextLabel1_2->setBuddy(txtName);
    TextLabel1->setBuddy(txtHost);
    TextLabel2->setBuddy(txtDatabase);
    TextLabel2_2->setBuddy(txtPort);
    TextLabel3->setBuddy(txtUsername);
    TextLabel3_2->setBuddy(txtPassword);
    QWidget::setTabOrder(txtName, txtHost);
    QWidget::setTabOrder(txtHost, txtDatabase);
    QWidget::setTabOrder(txtDatabase, txtPort);
    QWidget::setTabOrder(txtPort, txtUsername);
    QWidget::setTabOrder(txtUsername, txtPassword);
    QWidget::setTabOrder(txtPassword, chkStorePassword);
    QWidget::setTabOrder(chkStorePassword, btnConnect);
    QWidget::setTabOrder(btnConnect, btnOk);
    QWidget::setTabOrder(btnOk, btnCancel);
    QWidget::setTabOrder(btnCancel, btnHelp);

    retranslateUi(QgsNewConnectionBase);

    QMetaObject::connectSlotsByName(QgsNewConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewConnectionBase)
    {
    QgsNewConnectionBase->setWindowTitle(QApplication::translate("QgsNewConnectionBase", "Create a New PostGIS connection", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("QgsNewConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
    cb_publicSchemaOnly->setToolTip(QApplication::translate("QgsNewConnectionBase", "Restrict the search to the public schema for spatial tables not in the geometry_columns table", 0, QApplication::UnicodeUTF8));
    cb_publicSchemaOnly->setWhatsThis(QApplication::translate("QgsNewConnectionBase", "When searching for spatial tables that are not in the geometry_columns tables, restrict the search to tables that are in the public schema (for some databases this can save lots of time)", 0, QApplication::UnicodeUTF8));
    cb_publicSchemaOnly->setText(QApplication::translate("QgsNewConnectionBase", "Only look in the 'public' schema", 0, QApplication::UnicodeUTF8));
    cb_geometryColumnsOnly->setToolTip(QApplication::translate("QgsNewConnectionBase", "Restrict the displayed tables to those that are in the geometry_columns table", 0, QApplication::UnicodeUTF8));
    cb_geometryColumnsOnly->setWhatsThis(QApplication::translate("QgsNewConnectionBase", "Restricts the displayed tables to those that are in the geometry_columns table. This can speed up the initial display of spatial tables.", 0, QApplication::UnicodeUTF8));
    cb_geometryColumnsOnly->setText(QApplication::translate("QgsNewConnectionBase", "Only look in the geometry_columns table", 0, QApplication::UnicodeUTF8));
    chkStorePassword->setText(QApplication::translate("QgsNewConnectionBase", "Save Password", 0, QApplication::UnicodeUTF8));
    btnConnect->setText(QApplication::translate("QgsNewConnectionBase", "Test Connect", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("QgsNewConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("QgsNewConnectionBase", "Host", 0, QApplication::UnicodeUTF8));
    TextLabel2->setText(QApplication::translate("QgsNewConnectionBase", "Database", 0, QApplication::UnicodeUTF8));
    TextLabel2_2->setText(QApplication::translate("QgsNewConnectionBase", "Port", 0, QApplication::UnicodeUTF8));
    TextLabel3->setText(QApplication::translate("QgsNewConnectionBase", "Username", 0, QApplication::UnicodeUTF8));
    TextLabel3_2->setText(QApplication::translate("QgsNewConnectionBase", "Password", 0, QApplication::UnicodeUTF8));
    txtName->setToolTip(QApplication::translate("QgsNewConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
    txtPort->setText(QApplication::translate("QgsNewConnectionBase", "5432", 0, QApplication::UnicodeUTF8));
    btnOk->setText(QApplication::translate("QgsNewConnectionBase", "OK", 0, QApplication::UnicodeUTF8));
    btnOk->setShortcut(QString());
    btnCancel->setText(QApplication::translate("QgsNewConnectionBase", "Cancel", 0, QApplication::UnicodeUTF8));
    btnCancel->setShortcut(QString());
    btnHelp->setText(QApplication::translate("QgsNewConnectionBase", "Help", 0, QApplication::UnicodeUTF8));
    btnHelp->setShortcut(QApplication::translate("QgsNewConnectionBase", "F1", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsNewConnectionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNewConnectionBase: public Ui_QgsNewConnectionBase {};
} // namespace Ui

#endif // UI_QGSNEWCONNECTIONBASE_H
