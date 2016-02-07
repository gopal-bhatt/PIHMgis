/********************************************************************************
** Form generated from reading ui file 'qgsmeasurebase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSMEASUREBASE_H
#define UI_QGSMEASUREBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>

class Ui_QgsMeasureBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *editTotal;
    QSpacerItem *spacerItem;
    QLabel *textLabel2;
    QTreeWidget *mTable;
    QHBoxLayout *hboxLayout;
    QPushButton *btnHelp;
    QSpacerItem *spacerItem1;
    QPushButton *mRestartButton;
    QPushButton *mCloseButton;

    void setupUi(QDialog *QgsMeasureBase)
    {
    if (QgsMeasureBase->objectName().isEmpty())
        QgsMeasureBase->setObjectName(QString::fromUtf8("QgsMeasureBase"));
    QgsMeasureBase->resize(252, 272);
    QgsMeasureBase->setBaseSize(QSize(150, 200));
    QgsMeasureBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsMeasureBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    editTotal = new QLineEdit(QgsMeasureBase);
    editTotal->setObjectName(QString::fromUtf8("editTotal"));
    QFont font;
    font.setBold(true);
    font.setWeight(75);
    editTotal->setFont(font);
    editTotal->setAlignment(Qt::AlignRight);
    editTotal->setReadOnly(true);

    gridLayout->addWidget(editTotal, 1, 2, 1, 1);

    spacerItem = new QSpacerItem(41, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 1, 1, 1, 1);

    textLabel2 = new QLabel(QgsMeasureBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 1, 0, 1, 1);

    mTable = new QTreeWidget(QgsMeasureBase);
    mTable->setObjectName(QString::fromUtf8("mTable"));
    mTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    mTable->setRootIsDecorated(false);
    mTable->setColumnCount(1);

    gridLayout->addWidget(mTable, 0, 0, 1, 3);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(4);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    btnHelp = new QPushButton(QgsMeasureBase);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));

    hboxLayout->addWidget(btnHelp);

    spacerItem1 = new QSpacerItem(30, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    mRestartButton = new QPushButton(QgsMeasureBase);
    mRestartButton->setObjectName(QString::fromUtf8("mRestartButton"));

    hboxLayout->addWidget(mRestartButton);

    mCloseButton = new QPushButton(QgsMeasureBase);
    mCloseButton->setObjectName(QString::fromUtf8("mCloseButton"));

    hboxLayout->addWidget(mCloseButton);


    gridLayout->addLayout(hboxLayout, 2, 0, 1, 3);

    textLabel2->setBuddy(editTotal);

    retranslateUi(QgsMeasureBase);

    QMetaObject::connectSlotsByName(QgsMeasureBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeasureBase)
    {
    QgsMeasureBase->setWindowTitle(QApplication::translate("QgsMeasureBase", "Measure", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsMeasureBase", "Total:", 0, QApplication::UnicodeUTF8));
    mTable->headerItem()->setText(0, QApplication::translate("QgsMeasureBase", "Segments", 0, QApplication::UnicodeUTF8));
    btnHelp->setText(QApplication::translate("QgsMeasureBase", "Help", 0, QApplication::UnicodeUTF8));
    mRestartButton->setText(QApplication::translate("QgsMeasureBase", "New", 0, QApplication::UnicodeUTF8));
    mCloseButton->setText(QApplication::translate("QgsMeasureBase", "Cl&ose", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsMeasureBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMeasureBase: public Ui_QgsMeasureBase {};
} // namespace Ui

#endif // UI_QGSMEASUREBASE_H
