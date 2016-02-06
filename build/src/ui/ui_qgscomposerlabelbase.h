/********************************************************************************
** Form generated from reading ui file 'qgscomposerlabelbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERLABELBASE_H
#define UI_QGSCOMPOSERLABELBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_QgsComposerLabelBase
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QCheckBox *mBoxCheckBox;
    QPushButton *mFontButton;
    QLineEdit *mTextLineEdit;

    void setupUi(QWidget *QgsComposerLabelBase)
    {
    if (QgsComposerLabelBase->objectName().isEmpty())
        QgsComposerLabelBase->setObjectName(QString::fromUtf8("QgsComposerLabelBase"));
    QgsComposerLabelBase->resize(215, 151);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerLabelBase->sizePolicy().hasHeightForWidth());
    QgsComposerLabelBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerLabelBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 3, 0, 1, 1);

    mBoxCheckBox = new QCheckBox(QgsComposerLabelBase);
    mBoxCheckBox->setObjectName(QString::fromUtf8("mBoxCheckBox"));

    gridLayout->addWidget(mBoxCheckBox, 2, 0, 1, 1);

    mFontButton = new QPushButton(QgsComposerLabelBase);
    mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
    mFontButton->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(mFontButton, 1, 0, 1, 1);

    mTextLineEdit = new QLineEdit(QgsComposerLabelBase);
    mTextLineEdit->setObjectName(QString::fromUtf8("mTextLineEdit"));
    sizePolicy1.setHeightForWidth(mTextLineEdit->sizePolicy().hasHeightForWidth());
    mTextLineEdit->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(mTextLineEdit, 0, 0, 1, 1);

    QWidget::setTabOrder(mTextLineEdit, mFontButton);
    QWidget::setTabOrder(mFontButton, mBoxCheckBox);

    retranslateUi(QgsComposerLabelBase);

    QMetaObject::connectSlotsByName(QgsComposerLabelBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerLabelBase)
    {
    QgsComposerLabelBase->setWindowTitle(QApplication::translate("QgsComposerLabelBase", "Label Options", 0, QApplication::UnicodeUTF8));
    mBoxCheckBox->setText(QApplication::translate("QgsComposerLabelBase", "Box", 0, QApplication::UnicodeUTF8));
    mFontButton->setText(QApplication::translate("QgsComposerLabelBase", "Font", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerLabelBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerLabelBase: public Ui_QgsComposerLabelBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERLABELBASE_H
