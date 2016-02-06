/********************************************************************************
** Form generated from reading ui file 'qgsnewhttpconnectionbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSNEWHTTPCONNECTIONBASE_H
#define UI_QGSNEWHTTPCONNECTIONBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

class Ui_QgsNewHttpConnectionBase
{
public:
    QGridLayout *gridLayout;
    Q3GroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QFrame *frame;
    QLineEdit *txtName;
    QLabel *TextLabel1_2;
    QLabel *TextLabel1;
    QLabel *TextLabel1_3;
    QLabel *TextLabel1_3_2;
    QLabel *TextLabel1_3_3;
    QLabel *TextLabel1_3_4;
    QLineEdit *txtProxyUser;
    QLineEdit *txtProxyPass;
    QLineEdit *txtUrl;
    QLineEdit *txtProxyHost;
    QLineEdit *txtProxyPort;
    QVBoxLayout *vboxLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *QgsNewHttpConnectionBase)
    {
    if (QgsNewHttpConnectionBase->objectName().isEmpty())
        QgsNewHttpConnectionBase->setObjectName(QString::fromUtf8("QgsNewHttpConnectionBase"));
    QgsNewHttpConnectionBase->resize(437, 256);
    QgsNewHttpConnectionBase->setSizeGripEnabled(true);
    QgsNewHttpConnectionBase->setModal(true);
    gridLayout = new QGridLayout(QgsNewHttpConnectionBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    GroupBox1 = new Q3GroupBox(QgsNewHttpConnectionBase);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    GroupBox1->setOrientation(Qt::Vertical);
    GroupBox1->setColumnLayout(0, Qt::Vertical);
    GroupBox1->layout()->setSpacing(5);
    GroupBox1->layout()->setMargin(0);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(GroupBox1->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    frame = new QFrame(GroupBox1);
    frame->setObjectName(QString::fromUtf8("frame"));
    frame->setFrameShape(QFrame::NoFrame);
    frame->setFrameShadow(QFrame::Plain);

    gridLayout1->addWidget(frame, 0, 2, 6, 1);

    txtName = new QLineEdit(GroupBox1);
    txtName->setObjectName(QString::fromUtf8("txtName"));
    txtName->setMinimumSize(QSize(0, 0));
    txtName->setFrame(true);

    gridLayout1->addWidget(txtName, 0, 1, 1, 1);

    TextLabel1_2 = new QLabel(GroupBox1);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setMargin(5);

    gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);

    TextLabel1 = new QLabel(GroupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setMargin(5);

    gridLayout1->addWidget(TextLabel1, 1, 0, 1, 1);

    TextLabel1_3 = new QLabel(GroupBox1);
    TextLabel1_3->setObjectName(QString::fromUtf8("TextLabel1_3"));
    TextLabel1_3->setMargin(5);

    gridLayout1->addWidget(TextLabel1_3, 2, 0, 1, 1);

    TextLabel1_3_2 = new QLabel(GroupBox1);
    TextLabel1_3_2->setObjectName(QString::fromUtf8("TextLabel1_3_2"));
    TextLabel1_3_2->setMargin(5);

    gridLayout1->addWidget(TextLabel1_3_2, 3, 0, 1, 1);

    TextLabel1_3_3 = new QLabel(GroupBox1);
    TextLabel1_3_3->setObjectName(QString::fromUtf8("TextLabel1_3_3"));
    TextLabel1_3_3->setMargin(5);

    gridLayout1->addWidget(TextLabel1_3_3, 4, 0, 1, 1);

    TextLabel1_3_4 = new QLabel(GroupBox1);
    TextLabel1_3_4->setObjectName(QString::fromUtf8("TextLabel1_3_4"));
    TextLabel1_3_4->setMargin(5);

    gridLayout1->addWidget(TextLabel1_3_4, 5, 0, 1, 1);

    txtProxyUser = new QLineEdit(GroupBox1);
    txtProxyUser->setObjectName(QString::fromUtf8("txtProxyUser"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(1);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(txtProxyUser->sizePolicy().hasHeightForWidth());
    txtProxyUser->setSizePolicy(sizePolicy);

    gridLayout1->addWidget(txtProxyUser, 4, 1, 1, 1);

    txtProxyPass = new QLineEdit(GroupBox1);
    txtProxyPass->setObjectName(QString::fromUtf8("txtProxyPass"));
    sizePolicy.setHeightForWidth(txtProxyPass->sizePolicy().hasHeightForWidth());
    txtProxyPass->setSizePolicy(sizePolicy);
    txtProxyPass->setEchoMode(QLineEdit::Password);

    gridLayout1->addWidget(txtProxyPass, 5, 1, 1, 1);

    txtUrl = new QLineEdit(GroupBox1);
    txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

    gridLayout1->addWidget(txtUrl, 1, 1, 1, 1);

    txtProxyHost = new QLineEdit(GroupBox1);
    txtProxyHost->setObjectName(QString::fromUtf8("txtProxyHost"));

    gridLayout1->addWidget(txtProxyHost, 2, 1, 1, 1);

    txtProxyPort = new QLineEdit(GroupBox1);
    txtProxyPort->setObjectName(QString::fromUtf8("txtProxyPort"));
    sizePolicy.setHeightForWidth(txtProxyPort->sizePolicy().hasHeightForWidth());
    txtProxyPort->setSizePolicy(sizePolicy);
    txtProxyPort->setMaxLength(5);

    gridLayout1->addWidget(txtProxyPort, 3, 1, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    btnOk = new QPushButton(QgsNewHttpConnectionBase);
    btnOk->setObjectName(QString::fromUtf8("btnOk"));
    btnOk->setAutoDefault(true);
    btnOk->setDefault(true);

    vboxLayout->addWidget(btnOk);

    btnCancel = new QPushButton(QgsNewHttpConnectionBase);
    btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
    btnCancel->setAutoDefault(true);

    vboxLayout->addWidget(btnCancel);

    btnHelp = new QPushButton(QgsNewHttpConnectionBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
    btnHelp->setEnabled(true);
    btnHelp->setAutoDefault(true);

    vboxLayout->addWidget(btnHelp);

    spacerItem = new QSpacerItem(0, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);


    gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

    TextLabel1_2->setBuddy(txtName);
    TextLabel1->setBuddy(txtUrl);
    TextLabel1_3->setBuddy(txtProxyHost);
    TextLabel1_3_2->setBuddy(txtProxyPort);
    TextLabel1_3_3->setBuddy(txtProxyUser);
    TextLabel1_3_4->setBuddy(txtProxyPass);
    QWidget::setTabOrder(txtName, txtUrl);
    QWidget::setTabOrder(txtUrl, txtProxyHost);
    QWidget::setTabOrder(txtProxyHost, txtProxyPort);
    QWidget::setTabOrder(txtProxyPort, txtProxyUser);
    QWidget::setTabOrder(txtProxyUser, txtProxyPass);
    QWidget::setTabOrder(txtProxyPass, btnOk);
    QWidget::setTabOrder(btnOk, btnCancel);
    QWidget::setTabOrder(btnCancel, btnHelp);

    retranslateUi(QgsNewHttpConnectionBase);

    QMetaObject::connectSlotsByName(QgsNewHttpConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewHttpConnectionBase)
    {
    QgsNewHttpConnectionBase->setWindowTitle(QApplication::translate("QgsNewHttpConnectionBase", "Create a New WMS connection", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "Connection Information", 0, QApplication::UnicodeUTF8));
    txtName->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("QgsNewHttpConnectionBase", "URL", 0, QApplication::UnicodeUTF8));
    TextLabel1_3->setText(QApplication::translate("QgsNewHttpConnectionBase", "Proxy Host", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "Proxy Port", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_3->setText(QApplication::translate("QgsNewHttpConnectionBase", "Proxy User", 0, QApplication::UnicodeUTF8));
    TextLabel1_3_4->setText(QApplication::translate("QgsNewHttpConnectionBase", "Proxy Password", 0, QApplication::UnicodeUTF8));
    txtProxyUser->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Your user name for the HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
    txtProxyPass->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Password for your HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
    txtUrl->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "HTTP address of the Web Map Server", 0, QApplication::UnicodeUTF8));
    txtProxyHost->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Name of your HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
    txtProxyPort->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Port number of your HTTP proxy (optional)", 0, QApplication::UnicodeUTF8));
    btnOk->setText(QApplication::translate("QgsNewHttpConnectionBase", "OK", 0, QApplication::UnicodeUTF8));
    btnOk->setShortcut(QString());
    btnCancel->setText(QApplication::translate("QgsNewHttpConnectionBase", "Cancel", 0, QApplication::UnicodeUTF8));
    btnCancel->setShortcut(QString());
    btnHelp->setText(QApplication::translate("QgsNewHttpConnectionBase", "Help", 0, QApplication::UnicodeUTF8));
    btnHelp->setShortcut(QApplication::translate("QgsNewHttpConnectionBase", "F1", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsNewHttpConnectionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNewHttpConnectionBase: public Ui_QgsNewHttpConnectionBase {};
} // namespace Ui

#endif // UI_QGSNEWHTTPCONNECTIONBASE_H
