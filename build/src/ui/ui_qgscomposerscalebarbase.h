/********************************************************************************
** Form generated from reading ui file 'qgscomposerscalebarbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERSCALEBARBASE_H
#define UI_QGSCOMPOSERSCALEBARBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsComposerScalebarBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *textLabel1_3;
    QLineEdit *mSegmentLengthLineEdit;
    QLabel *textLabel2;
    QLineEdit *mNumSegmentsLineEdit;
    QLabel *textLabel2_2;
    QLineEdit *mMapUnitsPerUnitLineEdit;
    QLabel *textLabel1_2;
    QLineEdit *mUnitLabelLineEdit;
    QLabel *textLabel1;
    QComboBox *mMapComboBox;
    QPushButton *mFontButton;
    QLabel *textLabel1_4;
    QDoubleSpinBox *mLineWidthSpinBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *QgsComposerScalebarBase)
    {
    if (QgsComposerScalebarBase->objectName().isEmpty())
        QgsComposerScalebarBase->setObjectName(QString::fromUtf8("QgsComposerScalebarBase"));
    QgsComposerScalebarBase->resize(222, 487);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerScalebarBase->sizePolicy().hasHeightForWidth());
    QgsComposerScalebarBase->setSizePolicy(sizePolicy);
    vboxLayout = new QVBoxLayout(QgsComposerScalebarBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    textLabel1_3 = new QLabel(QgsComposerScalebarBase);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    vboxLayout->addWidget(textLabel1_3);

    mSegmentLengthLineEdit = new QLineEdit(QgsComposerScalebarBase);
    mSegmentLengthLineEdit->setObjectName(QString::fromUtf8("mSegmentLengthLineEdit"));

    vboxLayout->addWidget(mSegmentLengthLineEdit);

    textLabel2 = new QLabel(QgsComposerScalebarBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    vboxLayout->addWidget(textLabel2);

    mNumSegmentsLineEdit = new QLineEdit(QgsComposerScalebarBase);
    mNumSegmentsLineEdit->setObjectName(QString::fromUtf8("mNumSegmentsLineEdit"));

    vboxLayout->addWidget(mNumSegmentsLineEdit);

    textLabel2_2 = new QLabel(QgsComposerScalebarBase);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    vboxLayout->addWidget(textLabel2_2);

    mMapUnitsPerUnitLineEdit = new QLineEdit(QgsComposerScalebarBase);
    mMapUnitsPerUnitLineEdit->setObjectName(QString::fromUtf8("mMapUnitsPerUnitLineEdit"));

    vboxLayout->addWidget(mMapUnitsPerUnitLineEdit);

    textLabel1_2 = new QLabel(QgsComposerScalebarBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    vboxLayout->addWidget(textLabel1_2);

    mUnitLabelLineEdit = new QLineEdit(QgsComposerScalebarBase);
    mUnitLabelLineEdit->setObjectName(QString::fromUtf8("mUnitLabelLineEdit"));

    vboxLayout->addWidget(mUnitLabelLineEdit);

    textLabel1 = new QLabel(QgsComposerScalebarBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(textLabel1->sizePolicy().hasHeightForWidth());
    textLabel1->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(textLabel1);

    mMapComboBox = new QComboBox(QgsComposerScalebarBase);
    mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));
    mMapComboBox->setEnabled(true);
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mMapComboBox->sizePolicy().hasHeightForWidth());
    mMapComboBox->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(mMapComboBox);

    mFontButton = new QPushButton(QgsComposerScalebarBase);
    mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
    sizePolicy2.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
    mFontButton->setSizePolicy(sizePolicy2);

    vboxLayout->addWidget(mFontButton);

    textLabel1_4 = new QLabel(QgsComposerScalebarBase);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));

    vboxLayout->addWidget(textLabel1_4);

    mLineWidthSpinBox = new QDoubleSpinBox(QgsComposerScalebarBase);
    mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
    sizePolicy1.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
    mLineWidthSpinBox->setSizePolicy(sizePolicy1);
    mLineWidthSpinBox->setMinimum(0.01);
    mLineWidthSpinBox->setSingleStep(0.1);
    mLineWidthSpinBox->setValue(0.2);

    vboxLayout->addWidget(mLineWidthSpinBox);

    spacerItem = new QSpacerItem(26, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    textLabel1_3->setBuddy(mSegmentLengthLineEdit);
    textLabel2->setBuddy(mNumSegmentsLineEdit);
    textLabel2_2->setBuddy(mMapUnitsPerUnitLineEdit);
    textLabel1_2->setBuddy(mUnitLabelLineEdit);
    textLabel1->setBuddy(mMapComboBox);
    textLabel1_4->setBuddy(mLineWidthSpinBox);
    QWidget::setTabOrder(mSegmentLengthLineEdit, mNumSegmentsLineEdit);
    QWidget::setTabOrder(mNumSegmentsLineEdit, mMapUnitsPerUnitLineEdit);
    QWidget::setTabOrder(mMapUnitsPerUnitLineEdit, mUnitLabelLineEdit);
    QWidget::setTabOrder(mUnitLabelLineEdit, mMapComboBox);
    QWidget::setTabOrder(mMapComboBox, mFontButton);

    retranslateUi(QgsComposerScalebarBase);

    QMetaObject::connectSlotsByName(QgsComposerScalebarBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerScalebarBase)
    {
    QgsComposerScalebarBase->setWindowTitle(QApplication::translate("QgsComposerScalebarBase", "Barscale Options", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsComposerScalebarBase", "Segment size", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsComposerScalebarBase", "Number of segments", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsComposerScalebarBase", "Map units per scalebar unit", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsComposerScalebarBase", "Unit label", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerScalebarBase", "Map", 0, QApplication::UnicodeUTF8));
    mFontButton->setText(QApplication::translate("QgsComposerScalebarBase", "Font", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("QgsComposerScalebarBase", "Line width", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerScalebarBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerScalebarBase: public Ui_QgsComposerScalebarBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERSCALEBARBASE_H
