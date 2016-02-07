/********************************************************************************
** Form generated from reading ui file 'qgscomposeritemwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERITEMWIDGETBASE_H
#define UI_QGSCOMPOSERITEMWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

class Ui_QgsComposerItemWidgetBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mComposerItemPropertiesGroupBox;
    QGridLayout *gridLayout1;
    QLabel *mColorLabel;
    QPushButton *mFrameColorButton;
    QPushButton *mBackgroundColorButton;
    QLabel *mOpacityLabel;
    QSlider *mOpacitySlider;
    QLabel *mOutlineWidthLabel;
    QDoubleSpinBox *mOutlineWidthSpinBox;
    QCheckBox *mFrameCheckBox;

    void setupUi(QWidget *QgsComposerItemWidgetBase)
    {
    if (QgsComposerItemWidgetBase->objectName().isEmpty())
        QgsComposerItemWidgetBase->setObjectName(QString::fromUtf8("QgsComposerItemWidgetBase"));
    QgsComposerItemWidgetBase->resize(355, 203);
    gridLayout = new QGridLayout(QgsComposerItemWidgetBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mComposerItemPropertiesGroupBox = new QGroupBox(QgsComposerItemWidgetBase);
    mComposerItemPropertiesGroupBox->setObjectName(QString::fromUtf8("mComposerItemPropertiesGroupBox"));
    gridLayout1 = new QGridLayout(mComposerItemPropertiesGroupBox);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    mColorLabel = new QLabel(mComposerItemPropertiesGroupBox);
    mColorLabel->setObjectName(QString::fromUtf8("mColorLabel"));

    gridLayout1->addWidget(mColorLabel, 0, 0, 1, 1);

    mFrameColorButton = new QPushButton(mComposerItemPropertiesGroupBox);
    mFrameColorButton->setObjectName(QString::fromUtf8("mFrameColorButton"));

    gridLayout1->addWidget(mFrameColorButton, 0, 1, 1, 2);

    mBackgroundColorButton = new QPushButton(mComposerItemPropertiesGroupBox);
    mBackgroundColorButton->setObjectName(QString::fromUtf8("mBackgroundColorButton"));

    gridLayout1->addWidget(mBackgroundColorButton, 0, 3, 1, 1);

    mOpacityLabel = new QLabel(mComposerItemPropertiesGroupBox);
    mOpacityLabel->setObjectName(QString::fromUtf8("mOpacityLabel"));

    gridLayout1->addWidget(mOpacityLabel, 1, 0, 1, 2);

    mOpacitySlider = new QSlider(mComposerItemPropertiesGroupBox);
    mOpacitySlider->setObjectName(QString::fromUtf8("mOpacitySlider"));
    mOpacitySlider->setMaximum(255);
    mOpacitySlider->setOrientation(Qt::Horizontal);

    gridLayout1->addWidget(mOpacitySlider, 1, 2, 1, 2);

    mOutlineWidthLabel = new QLabel(mComposerItemPropertiesGroupBox);
    mOutlineWidthLabel->setObjectName(QString::fromUtf8("mOutlineWidthLabel"));

    gridLayout1->addWidget(mOutlineWidthLabel, 2, 0, 1, 2);

    mOutlineWidthSpinBox = new QDoubleSpinBox(mComposerItemPropertiesGroupBox);
    mOutlineWidthSpinBox->setObjectName(QString::fromUtf8("mOutlineWidthSpinBox"));

    gridLayout1->addWidget(mOutlineWidthSpinBox, 2, 2, 1, 2);

    mFrameCheckBox = new QCheckBox(mComposerItemPropertiesGroupBox);
    mFrameCheckBox->setObjectName(QString::fromUtf8("mFrameCheckBox"));

    gridLayout1->addWidget(mFrameCheckBox, 3, 0, 1, 2);


    gridLayout->addWidget(mComposerItemPropertiesGroupBox, 0, 0, 1, 1);


    retranslateUi(QgsComposerItemWidgetBase);

    QMetaObject::connectSlotsByName(QgsComposerItemWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerItemWidgetBase)
    {
    QgsComposerItemWidgetBase->setWindowTitle(QApplication::translate("QgsComposerItemWidgetBase", "Form", 0, QApplication::UnicodeUTF8));
    mComposerItemPropertiesGroupBox->setTitle(QApplication::translate("QgsComposerItemWidgetBase", "Composer item properties", 0, QApplication::UnicodeUTF8));
    mColorLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Color:", 0, QApplication::UnicodeUTF8));
    mFrameColorButton->setText(QApplication::translate("QgsComposerItemWidgetBase", "Frame...", 0, QApplication::UnicodeUTF8));
    mBackgroundColorButton->setText(QApplication::translate("QgsComposerItemWidgetBase", "Background...", 0, QApplication::UnicodeUTF8));
    mOpacityLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Opacity:", 0, QApplication::UnicodeUTF8));
    mOutlineWidthLabel->setText(QApplication::translate("QgsComposerItemWidgetBase", "Outline width: ", 0, QApplication::UnicodeUTF8));
    mFrameCheckBox->setText(QApplication::translate("QgsComposerItemWidgetBase", "Frame", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerItemWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerItemWidgetBase: public Ui_QgsComposerItemWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERITEMWIDGETBASE_H
