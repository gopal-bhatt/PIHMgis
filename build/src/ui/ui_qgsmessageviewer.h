/********************************************************************************
** Form generated from reading ui file 'qgsmessageviewer.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSMESSAGEVIEWER_H
#define UI_QGSMESSAGEVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

class Ui_QgsMessageViewer
{
public:
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QTextEdit *txtMessage;
    QPushButton *btnClose;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QgsMessageViewer)
    {
    if (QgsMessageViewer->objectName().isEmpty())
        QgsMessageViewer->setObjectName(QString::fromUtf8("QgsMessageViewer"));
    QgsMessageViewer->resize(499, 283);
    QgsMessageViewer->setModal(true);
    gridLayout = new QGridLayout(QgsMessageViewer);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    checkBox = new QCheckBox(QgsMessageViewer);
    checkBox->setObjectName(QString::fromUtf8("checkBox"));

    gridLayout->addWidget(checkBox, 1, 0, 1, 1);

    txtMessage = new QTextEdit(QgsMessageViewer);
    txtMessage->setObjectName(QString::fromUtf8("txtMessage"));
    txtMessage->setLineWidth(2);
    txtMessage->setAutoFormatting(QTextEdit::AutoNone);
    txtMessage->setReadOnly(true);

    gridLayout->addWidget(txtMessage, 0, 0, 1, 3);

    btnClose = new QPushButton(QgsMessageViewer);
    btnClose->setObjectName(QString::fromUtf8("btnClose"));

    gridLayout->addWidget(btnClose, 2, 1, 1, 1);

    spacerItem = new QSpacerItem(191, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    spacerItem1 = new QSpacerItem(191, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 2, 2, 1, 1);


    retranslateUi(QgsMessageViewer);
    QObject::connect(btnClose, SIGNAL(clicked()), QgsMessageViewer, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsMessageViewer);
    } // setupUi

    void retranslateUi(QDialog *QgsMessageViewer)
    {
    QgsMessageViewer->setWindowTitle(QApplication::translate("QgsMessageViewer", "QGIS Message", 0, QApplication::UnicodeUTF8));
    checkBox->setText(QApplication::translate("QgsMessageViewer", "Don't show this message again", 0, QApplication::UnicodeUTF8));
    btnClose->setText(QApplication::translate("QgsMessageViewer", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsMessageViewer);
    } // retranslateUi

};

namespace Ui {
    class QgsMessageViewer: public Ui_QgsMessageViewer {};
} // namespace Ui

#endif // UI_QGSMESSAGEVIEWER_H
