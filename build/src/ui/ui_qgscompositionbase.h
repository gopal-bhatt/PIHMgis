/********************************************************************************
** Form generated from reading ui file 'qgscompositionbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSITIONBASE_H
#define UI_QGSCOMPOSITIONBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsCompositionBase
{
public:
    QVBoxLayout *vboxLayout;
    Q3GroupBox *groupBox1;
    QVBoxLayout *vboxLayout1;
    QLabel *textLabel3;
    QComboBox *mPaperSizeComboBox;
    QLabel *textLabel5;
    QComboBox *mPaperUnitsComboBox;
    QLabel *textLabel4;
    QLineEdit *mPaperWidthLineEdit;
    QLabel *textLabel6;
    QLineEdit *mPaperHeightLineEdit;
    QLabel *textLabel7;
    QComboBox *mPaperOrientationComboBox;
    QLabel *textLabel1;
    QLineEdit *mResolutionLineEdit;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *QgsCompositionBase)
    {
    if (QgsCompositionBase->objectName().isEmpty())
        QgsCompositionBase->setObjectName(QString::fromUtf8("QgsCompositionBase"));
    QgsCompositionBase->resize(243, 422);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsCompositionBase->sizePolicy().hasHeightForWidth());
    QgsCompositionBase->setSizePolicy(sizePolicy);
    vboxLayout = new QVBoxLayout(QgsCompositionBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(10);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    groupBox1 = new Q3GroupBox(QgsCompositionBase);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    groupBox1->setOrientation(Qt::Vertical);
    groupBox1->setColumnLayout(0, Qt::Vertical);
    groupBox1->layout()->setSpacing(6);
    groupBox1->layout()->setMargin(10);
    vboxLayout1 = new QVBoxLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox1->layout());
    if (boxlayout)
        boxlayout->addLayout(vboxLayout1);
    vboxLayout1->setAlignment(Qt::AlignTop);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    textLabel3 = new QLabel(groupBox1);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel3->sizePolicy().hasHeightForWidth());
    textLabel3->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(textLabel3);

    mPaperSizeComboBox = new QComboBox(groupBox1);
    mPaperSizeComboBox->setObjectName(QString::fromUtf8("mPaperSizeComboBox"));
    mPaperSizeComboBox->setEnabled(true);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mPaperSizeComboBox->sizePolicy().hasHeightForWidth());
    mPaperSizeComboBox->setSizePolicy(sizePolicy2);

    vboxLayout1->addWidget(mPaperSizeComboBox);

    textLabel5 = new QLabel(groupBox1);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    sizePolicy1.setHeightForWidth(textLabel5->sizePolicy().hasHeightForWidth());
    textLabel5->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(textLabel5);

    mPaperUnitsComboBox = new QComboBox(groupBox1);
    mPaperUnitsComboBox->setObjectName(QString::fromUtf8("mPaperUnitsComboBox"));
    mPaperUnitsComboBox->setEnabled(false);
    sizePolicy2.setHeightForWidth(mPaperUnitsComboBox->sizePolicy().hasHeightForWidth());
    mPaperUnitsComboBox->setSizePolicy(sizePolicy2);

    vboxLayout1->addWidget(mPaperUnitsComboBox);

    textLabel4 = new QLabel(groupBox1);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    sizePolicy1.setHeightForWidth(textLabel4->sizePolicy().hasHeightForWidth());
    textLabel4->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(textLabel4);

    mPaperWidthLineEdit = new QLineEdit(groupBox1);
    mPaperWidthLineEdit->setObjectName(QString::fromUtf8("mPaperWidthLineEdit"));

    vboxLayout1->addWidget(mPaperWidthLineEdit);

    textLabel6 = new QLabel(groupBox1);
    textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
    sizePolicy1.setHeightForWidth(textLabel6->sizePolicy().hasHeightForWidth());
    textLabel6->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(textLabel6);

    mPaperHeightLineEdit = new QLineEdit(groupBox1);
    mPaperHeightLineEdit->setObjectName(QString::fromUtf8("mPaperHeightLineEdit"));

    vboxLayout1->addWidget(mPaperHeightLineEdit);

    textLabel7 = new QLabel(groupBox1);
    textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
    sizePolicy1.setHeightForWidth(textLabel7->sizePolicy().hasHeightForWidth());
    textLabel7->setSizePolicy(sizePolicy1);

    vboxLayout1->addWidget(textLabel7);

    mPaperOrientationComboBox = new QComboBox(groupBox1);
    mPaperOrientationComboBox->setObjectName(QString::fromUtf8("mPaperOrientationComboBox"));
    mPaperOrientationComboBox->setEnabled(true);
    sizePolicy2.setHeightForWidth(mPaperOrientationComboBox->sizePolicy().hasHeightForWidth());
    mPaperOrientationComboBox->setSizePolicy(sizePolicy2);

    vboxLayout1->addWidget(mPaperOrientationComboBox);


    vboxLayout->addWidget(groupBox1);

    textLabel1 = new QLabel(QgsCompositionBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(textLabel1);

    mResolutionLineEdit = new QLineEdit(QgsCompositionBase);
    mResolutionLineEdit->setObjectName(QString::fromUtf8("mResolutionLineEdit"));

    vboxLayout->addWidget(mResolutionLineEdit);

    spacerItem = new QSpacerItem(21, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    textLabel3->setBuddy(mPaperSizeComboBox);
    textLabel5->setBuddy(mPaperUnitsComboBox);
    textLabel4->setBuddy(mPaperWidthLineEdit);
    textLabel6->setBuddy(mPaperHeightLineEdit);
    textLabel7->setBuddy(mPaperOrientationComboBox);
    textLabel1->setBuddy(mResolutionLineEdit);

    retranslateUi(QgsCompositionBase);

    QMetaObject::connectSlotsByName(QgsCompositionBase);
    } // setupUi

    void retranslateUi(QWidget *QgsCompositionBase)
    {
    QgsCompositionBase->setWindowTitle(QApplication::translate("QgsCompositionBase", "Composition", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("QgsCompositionBase", "Paper", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsCompositionBase", "Size", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsCompositionBase", "Units", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("QgsCompositionBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel6->setText(QApplication::translate("QgsCompositionBase", "Height", 0, QApplication::UnicodeUTF8));
    textLabel7->setText(QApplication::translate("QgsCompositionBase", "Orientation", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsCompositionBase", "Resolution (dpi)", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsCompositionBase);
    } // retranslateUi

};

namespace Ui {
    class QgsCompositionBase: public Ui_QgsCompositionBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSITIONBASE_H
