/********************************************************************************
** Form generated from reading ui file 'qgspythondialog.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPYTHONDIALOG_H
#define UI_QGSPYTHONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

class Ui_QgsPythonDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *lblInfo;
    QTextBrowser *txtHistory;
    QHBoxLayout *hboxLayout;
    QLabel *lblPrompt;
    QLineEdit *edtCmdLine;

    void setupUi(QDialog *QgsPythonDialog)
    {
    if (QgsPythonDialog->objectName().isEmpty())
        QgsPythonDialog->setObjectName(QString::fromUtf8("QgsPythonDialog"));
    QgsPythonDialog->resize(541, 338);
    vboxLayout = new QVBoxLayout(QgsPythonDialog);
#ifndef Q_OS_MAC
    vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
    vboxLayout->setMargin(9);
#endif
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    lblInfo = new QLabel(QgsPythonDialog);
    lblInfo->setObjectName(QString::fromUtf8("lblInfo"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(lblInfo->sizePolicy().hasHeightForWidth());
    lblInfo->setSizePolicy(sizePolicy);
    lblInfo->setWordWrap(true);

    vboxLayout->addWidget(lblInfo);

    txtHistory = new QTextBrowser(QgsPythonDialog);
    txtHistory->setObjectName(QString::fromUtf8("txtHistory"));

    vboxLayout->addWidget(txtHistory);

    hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
    hboxLayout->setSpacing(6);
#endif
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    lblPrompt = new QLabel(QgsPythonDialog);
    lblPrompt->setObjectName(QString::fromUtf8("lblPrompt"));

    hboxLayout->addWidget(lblPrompt);

    edtCmdLine = new QLineEdit(QgsPythonDialog);
    edtCmdLine->setObjectName(QString::fromUtf8("edtCmdLine"));

    hboxLayout->addWidget(edtCmdLine);


    vboxLayout->addLayout(hboxLayout);

    QWidget::setTabOrder(edtCmdLine, txtHistory);

    retranslateUi(QgsPythonDialog);

    QMetaObject::connectSlotsByName(QgsPythonDialog);
    } // setupUi

    void retranslateUi(QDialog *QgsPythonDialog)
    {
    QgsPythonDialog->setWindowTitle(QApplication::translate("QgsPythonDialog", "Python console", 0, QApplication::UnicodeUTF8));
    lblInfo->setText(QApplication::translate("QgsPythonDialog", "To access Quantum GIS environment from this python console use object from global scope which is an instance of QgisInterface class.<br>Usage e.g.: iface.zoomFull()", 0, QApplication::UnicodeUTF8));
    txtHistory->setHtml(QString());
    lblPrompt->setText(QApplication::translate("QgsPythonDialog", ">>>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPythonDialog);
    } // retranslateUi

};

namespace Ui {
    class QgsPythonDialog: public Ui_QgsPythonDialog {};
} // namespace Ui

#endif // UI_QGSPYTHONDIALOG_H
