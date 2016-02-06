/********************************************************************************
** Form generated from reading ui file 'qgscomposervectorlegendbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERVECTORLEGENDBASE_H
#define UI_QGSCOMPOSERVECTORLEGENDBASE_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsComposerVectorLegendBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1_2;
    QLineEdit *mTitleLineEdit;
    QLabel *textLabel1;
    QComboBox *mMapComboBox;
    QPushButton *mFontButton;
    QCheckBox *mFrameCheckBox;
    Q3ListView *mLayersListView;
    QLabel *textLabel1_5;
    QComboBox *mPreviewModeComboBox;

    void setupUi(QWidget *QgsComposerVectorLegendBase)
    {
    if (QgsComposerVectorLegendBase->objectName().isEmpty())
        QgsComposerVectorLegendBase->setObjectName(QString::fromUtf8("QgsComposerVectorLegendBase"));
    QgsComposerVectorLegendBase->resize(216, 419);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerVectorLegendBase->sizePolicy().hasHeightForWidth());
    QgsComposerVectorLegendBase->setSizePolicy(sizePolicy);
    vboxLayout = new QVBoxLayout(QgsComposerVectorLegendBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(10);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    textLabel1_2 = new QLabel(QgsComposerVectorLegendBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    vboxLayout->addWidget(textLabel1_2);

    mTitleLineEdit = new QLineEdit(QgsComposerVectorLegendBase);
    mTitleLineEdit->setObjectName(QString::fromUtf8("mTitleLineEdit"));

    vboxLayout->addWidget(mTitleLineEdit);

    textLabel1 = new QLabel(QgsComposerVectorLegendBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(textLabel1);

    mMapComboBox = new QComboBox(QgsComposerVectorLegendBase);
    mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));
    mMapComboBox->setEnabled(true);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mMapComboBox->sizePolicy().hasHeightForWidth());
    mMapComboBox->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(mMapComboBox);

    mFontButton = new QPushButton(QgsComposerVectorLegendBase);
    mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
    sizePolicy2.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
    mFontButton->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(mFontButton);

    mFrameCheckBox = new QCheckBox(QgsComposerVectorLegendBase);
    mFrameCheckBox->setObjectName(QString::fromUtf8("mFrameCheckBox"));

    vboxLayout->addWidget(mFrameCheckBox);

    mLayersListView = new Q3ListView(QgsComposerVectorLegendBase);
    mLayersListView->addColumn(QApplication::translate("QgsComposerVectorLegendBase", "Column 1", 0, QApplication::UnicodeUTF8));
    mLayersListView->setObjectName(QString::fromUtf8("mLayersListView"));

    vboxLayout->addWidget(mLayersListView);

    textLabel1_5 = new QLabel(QgsComposerVectorLegendBase);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
    sizePolicy1.setHeightForWidth(textLabel1_5->sizePolicy().hasHeightForWidth());
    textLabel1_5->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(textLabel1_5);

    mPreviewModeComboBox = new QComboBox(QgsComposerVectorLegendBase);
    mPreviewModeComboBox->setObjectName(QString::fromUtf8("mPreviewModeComboBox"));
    sizePolicy1.setHeightForWidth(mPreviewModeComboBox->sizePolicy().hasHeightForWidth());
    mPreviewModeComboBox->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(mPreviewModeComboBox);

    textLabel1_2->setBuddy(mTitleLineEdit);
    textLabel1->setBuddy(mMapComboBox);
    textLabel1_5->setBuddy(mPreviewModeComboBox);
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
    textLabel1_2->setText(QApplication::translate("QgsComposerVectorLegendBase", "Title", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerVectorLegendBase", "Map", 0, QApplication::UnicodeUTF8));
    mFontButton->setText(QApplication::translate("QgsComposerVectorLegendBase", "Font", 0, QApplication::UnicodeUTF8));
    mFrameCheckBox->setText(QApplication::translate("QgsComposerVectorLegendBase", "Box", 0, QApplication::UnicodeUTF8));
    mLayersListView->header()->setLabel(0, QApplication::translate("QgsComposerVectorLegendBase", "Column 1", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("QgsComposerVectorLegendBase", "Preview", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerVectorLegendBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerVectorLegendBase: public Ui_QgsComposerVectorLegendBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERVECTORLEGENDBASE_H
