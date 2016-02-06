/********************************************************************************
** Form generated from reading ui file 'qgsmeasurebase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSMEASUREBASE_H
#define UI_QGSMEASUREBASE_H

#include <Qt3Support/Q3Frame>
#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3Table>
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

class Ui_QgsMeasureBase
{
public:
    QGridLayout *gridLayout;
    QLineEdit *editTotal;
    QSpacerItem *spacerItem;
    QLabel *textLabel2;
    Q3Table *mTable;
    Q3Frame *frame4;
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

    mTable = new Q3Table(QgsMeasureBase);
    mTable->setObjectName(QString::fromUtf8("mTable"));
    mTable->setResizePolicy(Q3ScrollView::Manual);
    mTable->setNumRows(0);
    mTable->setNumCols(1);
    mTable->setShowGrid(true);
    mTable->setReadOnly(true);

    gridLayout->addWidget(mTable, 0, 0, 1, 3);

    frame4 = new Q3Frame(QgsMeasureBase);
    frame4->setObjectName(QString::fromUtf8("frame4"));
    frame4->setMinimumSize(QSize(150, 0));
    frame4->setFrameShape(QFrame::StyledPanel);
    frame4->setFrameShadow(QFrame::Plain);
    frame4->setLineWidth(0);
    hboxLayout = new QHBoxLayout(frame4);
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(4);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    btnHelp = new QPushButton(frame4);
    btnHelp->setObjectName(QString::fromUtf8("btnHelp"));

    hboxLayout->addWidget(btnHelp);

    spacerItem1 = new QSpacerItem(30, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);

    mRestartButton = new QPushButton(frame4);
    mRestartButton->setObjectName(QString::fromUtf8("mRestartButton"));

    hboxLayout->addWidget(mRestartButton);

    mCloseButton = new QPushButton(frame4);
    mCloseButton->setObjectName(QString::fromUtf8("mCloseButton"));

    hboxLayout->addWidget(mCloseButton);


    gridLayout->addWidget(frame4, 2, 0, 1, 3);

    textLabel2->setBuddy(editTotal);

    retranslateUi(QgsMeasureBase);

    QMetaObject::connectSlotsByName(QgsMeasureBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMeasureBase)
    {
    QgsMeasureBase->setWindowTitle(QApplication::translate("QgsMeasureBase", "Measure", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsMeasureBase", "Total:", 0, QApplication::UnicodeUTF8));
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
