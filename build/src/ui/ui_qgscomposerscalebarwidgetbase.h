/********************************************************************************
** Form generated from reading ui file 'qgscomposerscalebarwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERSCALEBARWIDGETBASE_H
#define UI_QGSCOMPOSERSCALEBARWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

class Ui_QgsComposerScaleBarWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mSegmentSizeLabel;
    QDoubleSpinBox *mSegmentSizeSpinBox;
    QLabel *mMapUnitsPerBarUnitLabel;
    QDoubleSpinBox *mMapUnitsPerBarUnitSpinBox;
    QLabel *mNumbereOfSegmentsLabel;
    QSpinBox *mNumberOfSegmentsSpinBox;
    QLabel *mSegmentsLeftLabel;
    QSpinBox *mSegmentsLeftSpinBox;
    QLabel *mStyleLabel;
    QComboBox *mStyleComboBox;
    QLabel *mMapLabel;
    QComboBox *mMapComboBox;
    QLabel *mHeightLabel;
    QSpinBox *mHeightSpinBox;
    QLabel *mLineWidthLabel;
    QDoubleSpinBox *mLineWidthSpinBox;
    QLabel *mLabelBarSpaceLabel;
    QDoubleSpinBox *mLabelBarSpaceSpinBox;
    QLabel *mBoxSpaceLabel;
    QDoubleSpinBox *mBoxSizeSpinBox;
    QLabel *mUnitLabelLabel;
    QLineEdit *mUnitLabelLineEdit;
    QPushButton *mFontButton;
    QPushButton *mColorPushButton;

    void setupUi(QWidget *QgsComposerScaleBarWidgetBase)
    {
    if (QgsComposerScaleBarWidgetBase->objectName().isEmpty())
        QgsComposerScaleBarWidgetBase->setObjectName(QString::fromUtf8("QgsComposerScaleBarWidgetBase"));
    QgsComposerScaleBarWidgetBase->resize(561, 228);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerScaleBarWidgetBase->sizePolicy().hasHeightForWidth());
    QgsComposerScaleBarWidgetBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerScaleBarWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mSegmentSizeLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mSegmentSizeLabel->setObjectName(QString::fromUtf8("mSegmentSizeLabel"));
    mSegmentSizeLabel->setWordWrap(true);

    gridLayout->addWidget(mSegmentSizeLabel, 0, 0, 1, 1);

    mSegmentSizeSpinBox = new QDoubleSpinBox(QgsComposerScaleBarWidgetBase);
    mSegmentSizeSpinBox->setObjectName(QString::fromUtf8("mSegmentSizeSpinBox"));
    mSegmentSizeSpinBox->setDecimals(4);
    mSegmentSizeSpinBox->setMaximum(1e+13);

    gridLayout->addWidget(mSegmentSizeSpinBox, 0, 1, 1, 1);

    mMapUnitsPerBarUnitLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mMapUnitsPerBarUnitLabel->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitLabel"));
    mMapUnitsPerBarUnitLabel->setWordWrap(true);

    gridLayout->addWidget(mMapUnitsPerBarUnitLabel, 0, 2, 1, 2);

    mMapUnitsPerBarUnitSpinBox = new QDoubleSpinBox(QgsComposerScaleBarWidgetBase);
    mMapUnitsPerBarUnitSpinBox->setObjectName(QString::fromUtf8("mMapUnitsPerBarUnitSpinBox"));
    mMapUnitsPerBarUnitSpinBox->setMaximum(1e+13);

    gridLayout->addWidget(mMapUnitsPerBarUnitSpinBox, 0, 4, 1, 1);

    mNumbereOfSegmentsLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mNumbereOfSegmentsLabel->setObjectName(QString::fromUtf8("mNumbereOfSegmentsLabel"));
    mNumbereOfSegmentsLabel->setWordWrap(true);

    gridLayout->addWidget(mNumbereOfSegmentsLabel, 1, 0, 1, 1);

    mNumberOfSegmentsSpinBox = new QSpinBox(QgsComposerScaleBarWidgetBase);
    mNumberOfSegmentsSpinBox->setObjectName(QString::fromUtf8("mNumberOfSegmentsSpinBox"));

    gridLayout->addWidget(mNumberOfSegmentsSpinBox, 1, 1, 1, 1);

    mSegmentsLeftLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mSegmentsLeftLabel->setObjectName(QString::fromUtf8("mSegmentsLeftLabel"));

    gridLayout->addWidget(mSegmentsLeftLabel, 1, 2, 1, 2);

    mSegmentsLeftSpinBox = new QSpinBox(QgsComposerScaleBarWidgetBase);
    mSegmentsLeftSpinBox->setObjectName(QString::fromUtf8("mSegmentsLeftSpinBox"));

    gridLayout->addWidget(mSegmentsLeftSpinBox, 1, 4, 1, 1);

    mStyleLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mStyleLabel->setObjectName(QString::fromUtf8("mStyleLabel"));

    gridLayout->addWidget(mStyleLabel, 2, 0, 1, 1);

    mStyleComboBox = new QComboBox(QgsComposerScaleBarWidgetBase);
    mStyleComboBox->setObjectName(QString::fromUtf8("mStyleComboBox"));

    gridLayout->addWidget(mStyleComboBox, 2, 1, 1, 1);

    mMapLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mMapLabel->setObjectName(QString::fromUtf8("mMapLabel"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mMapLabel->sizePolicy().hasHeightForWidth());
    mMapLabel->setSizePolicy(sizePolicy1);
    mMapLabel->setWordWrap(true);

    gridLayout->addWidget(mMapLabel, 2, 2, 1, 1);

    mMapComboBox = new QComboBox(QgsComposerScaleBarWidgetBase);
    mMapComboBox->setObjectName(QString::fromUtf8("mMapComboBox"));
    mMapComboBox->setEnabled(true);
    sizePolicy1.setHeightForWidth(mMapComboBox->sizePolicy().hasHeightForWidth());
    mMapComboBox->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(mMapComboBox, 2, 4, 1, 1);

    mHeightLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mHeightLabel->setObjectName(QString::fromUtf8("mHeightLabel"));

    gridLayout->addWidget(mHeightLabel, 3, 0, 1, 1);

    mHeightSpinBox = new QSpinBox(QgsComposerScaleBarWidgetBase);
    mHeightSpinBox->setObjectName(QString::fromUtf8("mHeightSpinBox"));

    gridLayout->addWidget(mHeightSpinBox, 3, 1, 1, 1);

    mLineWidthLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mLineWidthLabel->setObjectName(QString::fromUtf8("mLineWidthLabel"));
    mLineWidthLabel->setWordWrap(true);

    gridLayout->addWidget(mLineWidthLabel, 3, 2, 1, 2);

    mLineWidthSpinBox = new QDoubleSpinBox(QgsComposerScaleBarWidgetBase);
    mLineWidthSpinBox->setObjectName(QString::fromUtf8("mLineWidthSpinBox"));
    sizePolicy1.setHeightForWidth(mLineWidthSpinBox->sizePolicy().hasHeightForWidth());
    mLineWidthSpinBox->setSizePolicy(sizePolicy1);
    mLineWidthSpinBox->setMinimum(0.01);
    mLineWidthSpinBox->setSingleStep(0.1);
    mLineWidthSpinBox->setValue(0.2);

    gridLayout->addWidget(mLineWidthSpinBox, 3, 4, 1, 1);

    mLabelBarSpaceLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mLabelBarSpaceLabel->setObjectName(QString::fromUtf8("mLabelBarSpaceLabel"));

    gridLayout->addWidget(mLabelBarSpaceLabel, 4, 0, 1, 1);

    mLabelBarSpaceSpinBox = new QDoubleSpinBox(QgsComposerScaleBarWidgetBase);
    mLabelBarSpaceSpinBox->setObjectName(QString::fromUtf8("mLabelBarSpaceSpinBox"));

    gridLayout->addWidget(mLabelBarSpaceSpinBox, 4, 1, 1, 1);

    mBoxSpaceLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mBoxSpaceLabel->setObjectName(QString::fromUtf8("mBoxSpaceLabel"));

    gridLayout->addWidget(mBoxSpaceLabel, 4, 2, 1, 2);

    mBoxSizeSpinBox = new QDoubleSpinBox(QgsComposerScaleBarWidgetBase);
    mBoxSizeSpinBox->setObjectName(QString::fromUtf8("mBoxSizeSpinBox"));

    gridLayout->addWidget(mBoxSizeSpinBox, 4, 4, 1, 1);

    mUnitLabelLabel = new QLabel(QgsComposerScaleBarWidgetBase);
    mUnitLabelLabel->setObjectName(QString::fromUtf8("mUnitLabelLabel"));
    mUnitLabelLabel->setWordWrap(true);

    gridLayout->addWidget(mUnitLabelLabel, 5, 0, 1, 1);

    mUnitLabelLineEdit = new QLineEdit(QgsComposerScaleBarWidgetBase);
    mUnitLabelLineEdit->setObjectName(QString::fromUtf8("mUnitLabelLineEdit"));

    gridLayout->addWidget(mUnitLabelLineEdit, 5, 1, 1, 1);

    mFontButton = new QPushButton(QgsComposerScaleBarWidgetBase);
    mFontButton->setObjectName(QString::fromUtf8("mFontButton"));
    QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mFontButton->sizePolicy().hasHeightForWidth());
    mFontButton->setSizePolicy(sizePolicy2);

    gridLayout->addWidget(mFontButton, 5, 2, 1, 1);

    mColorPushButton = new QPushButton(QgsComposerScaleBarWidgetBase);
    mColorPushButton->setObjectName(QString::fromUtf8("mColorPushButton"));

    gridLayout->addWidget(mColorPushButton, 5, 3, 1, 2);

    mMapLabel->setBuddy(mMapComboBox);
    mLineWidthLabel->setBuddy(mLineWidthSpinBox);
    mUnitLabelLabel->setBuddy(mUnitLabelLineEdit);
    QWidget::setTabOrder(mUnitLabelLineEdit, mMapComboBox);
    QWidget::setTabOrder(mMapComboBox, mFontButton);

    retranslateUi(QgsComposerScaleBarWidgetBase);

    QMetaObject::connectSlotsByName(QgsComposerScaleBarWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerScaleBarWidgetBase)
    {
    QgsComposerScaleBarWidgetBase->setWindowTitle(QApplication::translate("QgsComposerScaleBarWidgetBase", "Barscale Options", 0, QApplication::UnicodeUTF8));
    mSegmentSizeLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Segment size (map units):", 0, QApplication::UnicodeUTF8));
    mMapUnitsPerBarUnitLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Map units per bar unit:", 0, QApplication::UnicodeUTF8));
    mNumbereOfSegmentsLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Number of segments:", 0, QApplication::UnicodeUTF8));
    mSegmentsLeftLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Segments left:", 0, QApplication::UnicodeUTF8));
    mStyleLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Style:", 0, QApplication::UnicodeUTF8));
    mMapLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Map:", 0, QApplication::UnicodeUTF8));
    mHeightLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Height (mm):", 0, QApplication::UnicodeUTF8));
    mLineWidthLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Line width:", 0, QApplication::UnicodeUTF8));
    mLabelBarSpaceLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Label space:", 0, QApplication::UnicodeUTF8));
    mBoxSpaceLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Box space:", 0, QApplication::UnicodeUTF8));
    mUnitLabelLabel->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Unit label:", 0, QApplication::UnicodeUTF8));
    mFontButton->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Font...", 0, QApplication::UnicodeUTF8));
    mColorPushButton->setText(QApplication::translate("QgsComposerScaleBarWidgetBase", "Color...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerScaleBarWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerScaleBarWidgetBase: public Ui_QgsComposerScaleBarWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERSCALEBARWIDGETBASE_H
