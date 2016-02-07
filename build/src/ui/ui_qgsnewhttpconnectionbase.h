/********************************************************************************
** Form generated from reading ui file 'qgsnewhttpconnectionbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSNEWHTTPCONNECTIONBASE_H
#define UI_QGSNEWHTTPCONNECTIONBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

class Ui_QgsNewHttpConnectionBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *GroupBox1;
    QGridLayout *gridLayout1;
    QLabel *TextLabel1_2;
    QLineEdit *txtName;
    QLabel *TextLabel1;
    QLineEdit *txtUrl;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNewHttpConnectionBase)
    {
    if (QgsNewHttpConnectionBase->objectName().isEmpty())
        QgsNewHttpConnectionBase->setObjectName(QString::fromUtf8("QgsNewHttpConnectionBase"));
    QgsNewHttpConnectionBase->resize(431, 159);
    QgsNewHttpConnectionBase->setSizeGripEnabled(true);
    QgsNewHttpConnectionBase->setModal(true);
    gridLayout = new QGridLayout(QgsNewHttpConnectionBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    GroupBox1 = new QGroupBox(QgsNewHttpConnectionBase);
    GroupBox1->setObjectName(QString::fromUtf8("GroupBox1"));
    gridLayout1 = new QGridLayout(GroupBox1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    TextLabel1_2 = new QLabel(GroupBox1);
    TextLabel1_2->setObjectName(QString::fromUtf8("TextLabel1_2"));
    TextLabel1_2->setMargin(5);

    gridLayout1->addWidget(TextLabel1_2, 0, 0, 1, 1);

    txtName = new QLineEdit(GroupBox1);
    txtName->setObjectName(QString::fromUtf8("txtName"));
    txtName->setMinimumSize(QSize(0, 0));
    txtName->setFrame(true);

    gridLayout1->addWidget(txtName, 0, 1, 1, 1);

    TextLabel1 = new QLabel(GroupBox1);
    TextLabel1->setObjectName(QString::fromUtf8("TextLabel1"));
    TextLabel1->setMargin(5);

    gridLayout1->addWidget(TextLabel1, 1, 0, 1, 1);

    txtUrl = new QLineEdit(GroupBox1);
    txtUrl->setObjectName(QString::fromUtf8("txtUrl"));

    gridLayout1->addWidget(txtUrl, 1, 1, 1, 1);


    gridLayout->addWidget(GroupBox1, 0, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsNewHttpConnectionBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

    TextLabel1_2->setBuddy(txtName);
    TextLabel1->setBuddy(txtUrl);
    QWidget::setTabOrder(txtName, txtUrl);

    retranslateUi(QgsNewHttpConnectionBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsNewHttpConnectionBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsNewHttpConnectionBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsNewHttpConnectionBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNewHttpConnectionBase)
    {
    QgsNewHttpConnectionBase->setWindowTitle(QApplication::translate("QgsNewHttpConnectionBase", "Create a new WMS connection", 0, QApplication::UnicodeUTF8));
    GroupBox1->setTitle(QApplication::translate("QgsNewHttpConnectionBase", "Connection details", 0, QApplication::UnicodeUTF8));
    TextLabel1_2->setText(QApplication::translate("QgsNewHttpConnectionBase", "Name", 0, QApplication::UnicodeUTF8));
    txtName->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "Name of the new connection", 0, QApplication::UnicodeUTF8));
    TextLabel1->setText(QApplication::translate("QgsNewHttpConnectionBase", "URL", 0, QApplication::UnicodeUTF8));
    txtUrl->setToolTip(QApplication::translate("QgsNewHttpConnectionBase", "HTTP address of the Web Map Server", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsNewHttpConnectionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNewHttpConnectionBase: public Ui_QgsNewHttpConnectionBase {};
} // namespace Ui

#endif // UI_QGSNEWHTTPCONNECTIONBASE_H
