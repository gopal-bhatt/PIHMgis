/********************************************************************************
** Form generated from reading ui file 'qgscomposervectorlegendbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERVECTORLEGENDBASE_H
#define UI_QGSCOMPOSERVECTORLEGENDBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

class Ui_QgsComposerVectorLegendBase
{
public:
    QGridLayout *gridLayout;
    QComboBox *mPreviewModeComboBox;
    QLabel *textLabel1_5;
    QComboBox *mMapComboBox;
    QLineEdit *mTitleLineEdit;
    QLabel *textLabel1;
    QLabel *textLabel1_2;
    QSpacerItem *spacerItem;
    QTreeWidget *mLayersListView;
    QCheckBox *mFrameCheckBox;
    QPushButton *mFontButton;

    void setupUi(QWidget *QgsComposerVectorLegendBase)
    {
    if (QgsComposerVectorLegendBase->objectName().isEmpty())
        QgsComposerVectorLegendBase->setObjectName(QString::fromUtf8("QgsComposerVectorLegendBase"));
    QgsComposerVectorLegendBase->resize(285, 419);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerVectorLegendBase->sizePolicy().hasHeightForWidth());
    QgsComposerVectorLegendBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerVectorLegendBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mPreviewModeComboBox = new QComboBox(QgsComposerVectorLegendBase);
    mPreviewModeComboBox->setObjectName(QString::fromUtf8("mPreviewModeComboBox"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mPreviewModeComboBox->sizePolicy().hasHeightForWidth());
    mPreviewModeComboBox->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(mPreviewModeComboBox, 5, 2, 1, 1);

    textLabel1_5 = new QLabel(QgsComposerVectorLegendBase);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel1_5->sizePolicy().hasHeightForWidth());
    textLabel1_5->setSizePolicy(sizePolicy2);
    textLabel1_5->setWordWrap(true);

    gridLayout->addWidget(textLabel1_5, 5, 0, 1, 2);

    mMapComboBox = new QComboBox(QgsComposerVectorLegendBase);
    mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));
    mMapComboBox->setEnabled(true);
    QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy3.setHorizontalStretch(0);
    sizePolicy3.setVerticalStretch(0);
    sizePolicy3.setHeightForWidth(mMapComboBox->sizePolicy().hasHeightForWidth());
    mMapComboBox->setSizePolicy(sizePolicy3);

    gridLayout->addWidget(mMapComboBox, 1, 1, 1, 2);

    mTitleLineEdit = new QLineEdit(QgsComposerVectorLegendBase);
    mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

    gridLayout->addWidget(mTitleLineEdit, 0, 1, 1, 2);

    textLabel1 = new QLabel(QgsComposerVectorLegendBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    sizePolicy2.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy2);
    textLabel1->setWordWrap(true);

    gridLayout->addWidget(textLabel1, 1, 0, 1, 1);

    textLabel1_2 = new QLabel(QgsComposerVectorLegendBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(5));
    sizePolicy4.setHorizontalStretch(0);
    sizePolicy4.setVerticalStretch(0);
    sizePolicy4.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
    textLabel1_2->setSizePolicy(sizePolicy4);
    textLabel1_2->setWordWrap(true);

    gridLayout->addWidget(textLabel1_2, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem, 6, 2, 1, 1);

    mLayersListView = new QTreeWidget(QgsComposerVectorLegendBase);
    mLayersListView->setObjectName(QString::fromUtf8("mLayersListView"));
    mLayersListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    mLayersListView->setRootIsDecorated(false);
    mLayersListView->setColumnCount(3);

    gridLayout->addWidget(mLayersListView, 4, 0, 1, 3);

    mFrameCheckBox = new QCheckBox(QgsComposerVectorLegendBase);
    mFrameCheckBox->setObjectName(QString::fromUtf8("mFrameCheckBox"));

    gridLayout->addWidget(mFrameCheckBox, 3, 0, 1, 3);

    mFontButton = new QPushButton(QgsComposerVectorLegendBase);
    mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
    sizePolicy3.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
    mFontButton->setSizePolicy(sizePolicy3);

    gridLayout->addWidget(mFontButton, 2, 0, 1, 3);

    textLabel1_5->setBuddy(mPreviewModeComboBox);
    textLabel1->setBuddy(mMapComboBox);
    textLabel1_2->setBuddy(mTitleLineEdit);
    QWidget::setTabOrder(mTitleLineEdit, mMapComboBox);
    QWidget::setTabOrder(mMapComboBox, mFontButton);
    QWidget::setTabOrder(mFontButton, mFrameCheckBox);
    QWidget::setTabOrder(mFrameCheckBox, mPreviewModeComboBox);

    retranslateUi(QgsComposerVectorLegendBase);

    QMetaObject::connectSlotsByName(QgsComposerVectorLegendBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerVectorLegendBase)
    {
    QgsComposerVectorLegendBase->setWindowTitle(QApplication::translate("QgsComposerVectorLegendBase", "Vector Legend Options", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("QgsComposerVectorLegendBase", "Preview", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerVectorLegendBase", "Map", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsComposerVectorLegendBase", "Title", 0, QApplication::UnicodeUTF8));
    mLayersListView->headerItem()->setText(0, QApplication::translate("QgsComposerVectorLegendBase", "Layers", 0, QApplication::UnicodeUTF8));
    mLayersListView->headerItem()->setText(1, QApplication::translate("QgsComposerVectorLegendBase", "Group", 0, QApplication::UnicodeUTF8));
    mLayersListView->headerItem()->setText(2, QApplication::translate("QgsComposerVectorLegendBase", "ID", 0, QApplication::UnicodeUTF8));
    mFrameCheckBox->setText(QApplication::translate("QgsComposerVectorLegendBase", "Box", 0, QApplication::UnicodeUTF8));
    mFontButton->setText(QApplication::translate("QgsComposerVectorLegendBase", "Font", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerVectorLegendBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerVectorLegendBase: public Ui_QgsComposerVectorLegendBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERVECTORLEGENDBASE_H
