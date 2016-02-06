/********************************************************************************
** Form generated from reading ui file 'qgscomposermapbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERMAPBASE_H
#define UI_QGSCOMPOSERMAPBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsComposerMapBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *mNameLabel;
    QFrame *line1;
    QLabel *textLabel1_3;
    QComboBox *mCalculateComboBox;
    QLabel *textLabel1;
    QLineEdit *mWidthLineEdit;
    QLabel *textLabel2;
    QLineEdit *mHeightLineEdit;
    Q3GroupBox *groupBox2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1_6;
    QLineEdit *mScaleLineEdit;
    QPushButton *mSetCurrentExtentButton;
    QLabel *textLabel1_4;
    QLineEdit *mWidthScaleLineEdit;
    QLabel *textLabel1_2;
    QLineEdit *mSymbolScaleLineEdit;
    QLabel *textLabel2_2;
    QLineEdit *mFontScaleLineEdit;
    QCheckBox *mFrameCheckBox;
    QLabel *textLabel1_5;
    QComboBox *mPreviewModeComboBox;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *QgsComposerMapBase)
    {
    if (QgsComposerMapBase->objectName().isEmpty())
        QgsComposerMapBase->setObjectName(QString::fromUtf8("QgsComposerMapBase"));
    QgsComposerMapBase->resize(271, 650);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerMapBase->sizePolicy().hasHeightForWidth());
    QgsComposerMapBase->setSizePolicy(sizePolicy);
    vboxLayout = new QVBoxLayout(QgsComposerMapBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(10);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    mNameLabel = new QLabel(QgsComposerMapBase);
    mNameLabel->setObjectName(QString::fromUtf8("mNameLabel"));

    vboxLayout->addWidget(mNameLabel);

    line1 = new QFrame(QgsComposerMapBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setFrameShape(QFrame::HLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::HLine);

    vboxLayout->addWidget(line1);

    textLabel1_3 = new QLabel(QgsComposerMapBase);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));

    vboxLayout->addWidget(textLabel1_3);

    mCalculateComboBox = new QComboBox(QgsComposerMapBase);
    mCalculateComboBox->setObjectName(QString::fromUtf8("mCalculateComboBox"));
    mCalculateComboBox->setEnabled(true);
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mCalculateComboBox->sizePolicy().hasHeightForWidth());
    mCalculateComboBox->setSizePolicy(sizePolicy1);
    mCalculateComboBox->setMinimumSize(QSize(0, 0));

    vboxLayout->addWidget(mCalculateComboBox);

    textLabel1 = new QLabel(QgsComposerMapBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    vboxLayout->addWidget(textLabel1);

    mWidthLineEdit = new QLineEdit(QgsComposerMapBase);
    mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));

    vboxLayout->addWidget(mWidthLineEdit);

    textLabel2 = new QLabel(QgsComposerMapBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    vboxLayout->addWidget(textLabel2);

    mHeightLineEdit = new QLineEdit(QgsComposerMapBase);
    mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));

    vboxLayout->addWidget(mHeightLineEdit);

    groupBox2 = new Q3GroupBox(QgsComposerMapBase);
    groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
    sizePolicy1.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
    groupBox2->setSizePolicy(sizePolicy1);
    groupBox2->setOrientation(Qt::Vertical);
    groupBox2->setColumnLayout(0, Qt::Vertical);
    groupBox2->layout()->setSpacing(6);
    groupBox2->layout()->setMargin(10);
    hboxLayout = new QHBoxLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(groupBox2->layout());
    if (boxlayout)
        boxlayout->addLayout(hboxLayout);
    hboxLayout->setAlignment(Qt::AlignTop);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel1_6 = new QLabel(groupBox2);
    textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(textLabel1_6->sizePolicy().hasHeightForWidth());
    textLabel1_6->setSizePolicy(sizePolicy2);

    hboxLayout->addWidget(textLabel1_6);

    mScaleLineEdit = new QLineEdit(groupBox2);
    mScaleLineEdit->setObjectName(QString::fromUtf8("mScaleLineEdit"));
    mScaleLineEdit->setEnabled(false);

    hboxLayout->addWidget(mScaleLineEdit);


    vboxLayout->addWidget(groupBox2);

    mSetCurrentExtentButton = new QPushButton(QgsComposerMapBase);
    mSetCurrentExtentButton->setObjectName(QString::fromUtf8("mSetCurrentExtentButton"));
    sizePolicy1.setHeightForWidth(mSetCurrentExtentButton->sizePolicy().hasHeightForWidth());
    mSetCurrentExtentButton->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(mSetCurrentExtentButton);

    textLabel1_4 = new QLabel(QgsComposerMapBase);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));

    vboxLayout->addWidget(textLabel1_4);

    mWidthScaleLineEdit = new QLineEdit(QgsComposerMapBase);
    mWidthScaleLineEdit->setObjectName(QString::fromUtf8("mWidthScaleLineEdit"));
    mWidthScaleLineEdit->setEnabled(true);

    vboxLayout->addWidget(mWidthScaleLineEdit);

    textLabel1_2 = new QLabel(QgsComposerMapBase);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));

    vboxLayout->addWidget(textLabel1_2);

    mSymbolScaleLineEdit = new QLineEdit(QgsComposerMapBase);
    mSymbolScaleLineEdit->setObjectName(QString::fromUtf8("mSymbolScaleLineEdit"));

    vboxLayout->addWidget(mSymbolScaleLineEdit);

    textLabel2_2 = new QLabel(QgsComposerMapBase);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    vboxLayout->addWidget(textLabel2_2);

    mFontScaleLineEdit = new QLineEdit(QgsComposerMapBase);
    mFontScaleLineEdit->setObjectName(QString::fromUtf8("mFontScaleLineEdit"));

    vboxLayout->addWidget(mFontScaleLineEdit);

    mFrameCheckBox = new QCheckBox(QgsComposerMapBase);
    mFrameCheckBox->setObjectName(QString::fromUtf8("mFrameCheckBox"));

    vboxLayout->addWidget(mFrameCheckBox);

    textLabel1_5 = new QLabel(QgsComposerMapBase);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));

    vboxLayout->addWidget(textLabel1_5);

    mPreviewModeComboBox = new QComboBox(QgsComposerMapBase);
    mPreviewModeComboBox->setObjectName(QString::fromUtf8("mPreviewModeComboBox"));
    sizePolicy1.setHeightForWidth(mPreviewModeComboBox->sizePolicy().hasHeightForWidth());
    mPreviewModeComboBox->setSizePolicy(sizePolicy1);

    vboxLayout->addWidget(mPreviewModeComboBox);

    spacerItem = new QSpacerItem(21, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem);

    textLabel1_3->setBuddy(mCalculateComboBox);
    textLabel1->setBuddy(mWidthLineEdit);
    textLabel2->setBuddy(mHeightLineEdit);
    textLabel1_4->setBuddy(mWidthScaleLineEdit);
    textLabel1_2->setBuddy(mSymbolScaleLineEdit);
    textLabel2_2->setBuddy(mFontScaleLineEdit);
    textLabel1_5->setBuddy(mPreviewModeComboBox);
    QWidget::setTabOrder(mCalculateComboBox, mWidthLineEdit);
    QWidget::setTabOrder(mWidthLineEdit, mHeightLineEdit);
    QWidget::setTabOrder(mHeightLineEdit, mScaleLineEdit);
    QWidget::setTabOrder(mScaleLineEdit, mSetCurrentExtentButton);
    QWidget::setTabOrder(mSetCurrentExtentButton, mWidthScaleLineEdit);
    QWidget::setTabOrder(mWidthScaleLineEdit, mSymbolScaleLineEdit);
    QWidget::setTabOrder(mSymbolScaleLineEdit, mFontScaleLineEdit);
    QWidget::setTabOrder(mFontScaleLineEdit, mFrameCheckBox);
    QWidget::setTabOrder(mFrameCheckBox, mPreviewModeComboBox);

    retranslateUi(QgsComposerMapBase);

    QMetaObject::connectSlotsByName(QgsComposerMapBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerMapBase)
    {
    QgsComposerMapBase->setWindowTitle(QApplication::translate("QgsComposerMapBase", "Map options", 0, QApplication::UnicodeUTF8));
    mNameLabel->setText(QApplication::translate("QgsComposerMapBase", "<b>Map</b>", 0, QApplication::UnicodeUTF8));
    textLabel1_3->setText(QApplication::translate("QgsComposerMapBase", "Set", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerMapBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsComposerMapBase", "Height", 0, QApplication::UnicodeUTF8));
    groupBox2->setTitle(QApplication::translate("QgsComposerMapBase", "Scale", 0, QApplication::UnicodeUTF8));
    textLabel1_6->setText(QApplication::translate("QgsComposerMapBase", "1 :", 0, QApplication::UnicodeUTF8));
    mSetCurrentExtentButton->setToolTip(QApplication::translate("QgsComposerMapBase", "Set map extent to current extent in QGIS map canvas", 0, QApplication::UnicodeUTF8));
    mSetCurrentExtentButton->setText(QApplication::translate("QgsComposerMapBase", "Set Extent", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("QgsComposerMapBase", "Line width scale", 0, QApplication::UnicodeUTF8));
    mWidthScaleLineEdit->setToolTip(QApplication::translate("QgsComposerMapBase", "Width of one unit in millimeters", 0, QApplication::UnicodeUTF8));
    textLabel1_2->setText(QApplication::translate("QgsComposerMapBase", "Symbol scale", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsComposerMapBase", "Font size scale", 0, QApplication::UnicodeUTF8));
    mFrameCheckBox->setText(QApplication::translate("QgsComposerMapBase", "Frame", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("QgsComposerMapBase", "Preview", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerMapBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerMapBase: public Ui_QgsComposerMapBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERMAPBASE_H
