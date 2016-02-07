/********************************************************************************
** Form generated from reading ui file 'qgspastetransformationsbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPASTETRANSFORMATIONSBASE_H
#define UI_QGSPASTETRANSFORMATIONSBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

class Ui_QgsPasteTransformationsBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1_2;
    QGridLayout *gridLayout;
    QLabel *textLabel3;
    QComboBox *destinationLayerComboBox;
    QLabel *textLabel4;
    QComboBox *sourceLayerComboBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonHelp;
    QSpacerItem *spacerItem1;
    QPushButton *newTransferPushButton;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;

    void setupUi(QDialog *QgsPasteTransformationsBase)
    {
    if (QgsPasteTransformationsBase->objectName().isEmpty())
        QgsPasteTransformationsBase->setObjectName(QString::fromUtf8("QgsPasteTransformationsBase"));
    QgsPasteTransformationsBase->resize(564, 426);
    QgsPasteTransformationsBase->setMouseTracking(true);
    QgsPasteTransformationsBase->setSizeGripEnabled(true);
    vboxLayout = new QVBoxLayout(QgsPasteTransformationsBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(10);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    textLabel1_2 = new QLabel(QgsPasteTransformationsBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy);

    vboxLayout->addWidget(textLabel1_2);

    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel3 = new QLabel(QgsPasteTransformationsBase);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(textLabel3, 0, 0, 1, 1);

    destinationLayerComboBox = new QComboBox(QgsPasteTransformationsBase);
    destinationLayerComboBox->setObjectName(QString::fromUtf8("destinationLayerComboBox"));

    gridLayout->addWidget(destinationLayerComboBox, 1, 1, 1, 1);

    textLabel4 = new QLabel(QgsPasteTransformationsBase);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    sizePolicy1.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(textLabel4, 0, 1, 1, 1);

    sourceLayerComboBox = new QComboBox(QgsPasteTransformationsBase);
    sourceLayerComboBox->setObjectName(QString::fromUtf8("sourceLayerComboBox"));

    gridLayout->addWidget(sourceLayerComboBox, 1, 0, 1, 1);


    vboxLayout->addLayout(gridLayout);

    spacerItem = new QSpacerItem(20, 251, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    buttonHelp = new QPushButton(QgsPasteTransformationsBase);
    buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
    buttonHelp->setAutoDefault(true);

    hboxLayout->addWidget(buttonHelp);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    newTransferPushButton = new QPushButton(QgsPasteTransformationsBase);
    newTransferPushButton->setObjectName(QString::fromUtf8("newTransferPushButton"));

    hboxLayout->addWidget(newTransferPushButton);

    buttonOk = new QPushButton(QgsPasteTransformationsBase);
    buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
    buttonOk->setAutoDefault(true);
    buttonOk->setDefault(true);

    hboxLayout->addWidget(buttonOk);

    buttonCancel = new QPushButton(QgsPasteTransformationsBase);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout->addWidget(buttonCancel);


    vboxLayout->addLayout(hboxLayout);

    textLabel3->setBuddy(sourceLayerComboBox);
    textLabel4->setBuddy(destinationLayerComboBox);
    QWidget::setTabOrder(sourceLayerComboBox, destinationLayerComboBox);
    QWidget::setTabOrder(destinationLayerComboBox, buttonHelp);
    QWidget::setTabOrder(buttonHelp, newTransferPushButton);
    QWidget::setTabOrder(newTransferPushButton, buttonOk);
    QWidget::setTabOrder(buttonOk, buttonCancel);

    retranslateUi(QgsPasteTransformationsBase);

    QMetaObject::connectSlotsByName(QgsPasteTransformationsBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPasteTransformationsBase)
    {
    QgsPasteTransformationsBase->setWindowTitle(QApplication::translate("QgsPasteTransformationsBase", "Paste Transformations", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsPasteTransformationsBase", "<b>Note: This function is not useful yet!</b>", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsPasteTransformationsBase", "Source", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsPasteTransformationsBase", "Destination", 0, QApplication::UnicodeUTF8));
    buttonHelp->setText(QApplication::translate("QgsPasteTransformationsBase", "&Help", 0, QApplication::UnicodeUTF8));
    buttonHelp->setShortcut(QApplication::translate("QgsPasteTransformationsBase", "F1", 0, QApplication::UnicodeUTF8));
    newTransferPushButton->setText(QApplication::translate("QgsPasteTransformationsBase", "Add New Transfer", 0, QApplication::UnicodeUTF8));
    buttonOk->setText(QApplication::translate("QgsPasteTransformationsBase", "&OK", 0, QApplication::UnicodeUTF8));
    buttonOk->setShortcut(QString());
    buttonCancel->setText(QApplication::translate("QgsPasteTransformationsBase", "&Cancel", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    Q_UNUSED(QgsPasteTransformationsBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPasteTransformationsBase: public Ui_QgsPasteTransformationsBase {};
} // namespace Ui

#endif // UI_QGSPASTETRANSFORMATIONSBASE_H
