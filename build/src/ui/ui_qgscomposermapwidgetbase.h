/********************************************************************************
** Form generated from reading ui file 'qgscomposermapwidgetbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSCOMPOSERMAPWIDGETBASE_H
#define UI_QGSCOMPOSERMAPWIDGETBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsComposerMapWidgetBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mNameLabel;
    QFrame *line1;
    QLabel *textLabel1;
    QLineEdit *mWidthLineEdit;
    QLabel *textLabel2;
    QLineEdit *mHeightLineEdit;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *mScaleLineEdit;
    QGroupBox *mMapExtentGroupBox;
    QGridLayout *gridLayout1;
    QVBoxLayout *vboxLayout;
    QLabel *mXMinLabel;
    QLabel *mYMinLabel;
    QVBoxLayout *vboxLayout1;
    QLineEdit *mXMinLineEdit;
    QLineEdit *mYMinLineEdit;
    QVBoxLayout *vboxLayout2;
    QLabel *mXMaxLabel;
    QLabel *mYMaxLabel;
    QVBoxLayout *vboxLayout3;
    QLineEdit *mXMaxLineEdit;
    QLineEdit *mYMaxLineEdit;
    QPushButton *mSetToMapCanvasExtentButton;
    QSpacerItem *spacerItem;
    QLabel *mPreviewModeLabel;
    QComboBox *mPreviewModeComboBox;
    QPushButton *mUpdatePreviewButton;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *QgsComposerMapWidgetBase)
    {
    if (QgsComposerMapWidgetBase->objectName().isEmpty())
        QgsComposerMapWidgetBase->setObjectName(QString::fromUtf8("QgsComposerMapWidgetBase"));
    QgsComposerMapWidgetBase->resize(546, 374);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsComposerMapWidgetBase->sizePolicy().hasHeightForWidth());
    QgsComposerMapWidgetBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsComposerMapWidgetBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mNameLabel = new QLabel(QgsComposerMapWidgetBase);
    mNameLabel->setObjectName(QString::fromUtf8("mNameLabel"));

    gridLayout->addWidget(mNameLabel, 0, 0, 1, 4);

    line1 = new QFrame(QgsComposerMapWidgetBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setFrameShape(QFrame::HLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::HLine);

    gridLayout->addWidget(line1, 1, 0, 1, 4);

    textLabel1 = new QLabel(QgsComposerMapWidgetBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setWordWrap(true);

    gridLayout->addWidget(textLabel1, 2, 0, 1, 1);

    mWidthLineEdit = new QLineEdit(QgsComposerMapWidgetBase);
    mWidthLineEdit->setObjectName(QString::fromUtf8("mWidthLineEdit"));

    gridLayout->addWidget(mWidthLineEdit, 2, 2, 1, 2);

    textLabel2 = new QLabel(QgsComposerMapWidgetBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    textLabel2->setWordWrap(true);

    gridLayout->addWidget(textLabel2, 3, 0, 1, 1);

    mHeightLineEdit = new QLineEdit(QgsComposerMapWidgetBase);
    mHeightLineEdit->setObjectName(QString::fromUtf8("mHeightLineEdit"));

    gridLayout->addWidget(mHeightLineEdit, 3, 2, 1, 2);

    label_2 = new QLabel(QgsComposerMapWidgetBase);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
    label_2->setSizePolicy(sizePolicy1);
    label_2->setWordWrap(true);

    gridLayout->addWidget(label_2, 4, 0, 1, 1);

    label = new QLabel(QgsComposerMapWidgetBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    gridLayout->addWidget(label, 4, 1, 1, 1);

    mScaleLineEdit = new QLineEdit(QgsComposerMapWidgetBase);
    mScaleLineEdit->setObjectName(QString::fromUtf8("mScaleLineEdit"));

    gridLayout->addWidget(mScaleLineEdit, 4, 2, 1, 2);

    mMapExtentGroupBox = new QGroupBox(QgsComposerMapWidgetBase);
    mMapExtentGroupBox->setObjectName(QString::fromUtf8("mMapExtentGroupBox"));
    gridLayout1 = new QGridLayout(mMapExtentGroupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    vboxLayout = new QVBoxLayout();
    vboxLayout->setSpacing(6);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    mXMinLabel = new QLabel(mMapExtentGroupBox);
    mXMinLabel->setObjectName(QString::fromUtf8("mXMinLabel"));
    mXMinLabel->setEnabled(true);

    vboxLayout->addWidget(mXMinLabel);

    mYMinLabel = new QLabel(mMapExtentGroupBox);
    mYMinLabel->setObjectName(QString::fromUtf8("mYMinLabel"));

    vboxLayout->addWidget(mYMinLabel);


    gridLayout1->addLayout(vboxLayout, 0, 0, 1, 1);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setSpacing(6);
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    mXMinLineEdit = new QLineEdit(mMapExtentGroupBox);
    mXMinLineEdit->setObjectName(QString::fromUtf8("mXMinLineEdit"));

    vboxLayout1->addWidget(mXMinLineEdit);

    mYMinLineEdit = new QLineEdit(mMapExtentGroupBox);
    mYMinLineEdit->setObjectName(QString::fromUtf8("mYMinLineEdit"));

    vboxLayout1->addWidget(mYMinLineEdit);


    gridLayout1->addLayout(vboxLayout1, 0, 1, 1, 2);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setSpacing(6);
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    mXMaxLabel = new QLabel(mMapExtentGroupBox);
    mXMaxLabel->setObjectName(QString::fromUtf8("mXMaxLabel"));

    vboxLayout2->addWidget(mXMaxLabel);

    mYMaxLabel = new QLabel(mMapExtentGroupBox);
    mYMaxLabel->setObjectName(QString::fromUtf8("mYMaxLabel"));
    mYMaxLabel->setWindowModality(Qt::NonModal);

    vboxLayout2->addWidget(mYMaxLabel);


    gridLayout1->addLayout(vboxLayout2, 0, 3, 1, 1);

    vboxLayout3 = new QVBoxLayout();
    vboxLayout3->setSpacing(6);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    mXMaxLineEdit = new QLineEdit(mMapExtentGroupBox);
    mXMaxLineEdit->setObjectName(QString::fromUtf8("mXMaxLineEdit"));

    vboxLayout3->addWidget(mXMaxLineEdit);

    mYMaxLineEdit = new QLineEdit(mMapExtentGroupBox);
    mYMaxLineEdit->setObjectName(QString::fromUtf8("mYMaxLineEdit"));

    vboxLayout3->addWidget(mYMaxLineEdit);


    gridLayout1->addLayout(vboxLayout3, 0, 4, 1, 1);

    mSetToMapCanvasExtentButton = new QPushButton(mMapExtentGroupBox);
    mSetToMapCanvasExtentButton->setObjectName(QString::fromUtf8("mSetToMapCanvasExtentButton"));

    gridLayout1->addWidget(mSetToMapCanvasExtentButton, 1, 0, 1, 2);

    spacerItem = new QSpacerItem(311, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem, 1, 2, 1, 3);


    gridLayout->addWidget(mMapExtentGroupBox, 5, 0, 1, 4);

    mPreviewModeLabel = new QLabel(QgsComposerMapWidgetBase);
    mPreviewModeLabel->setObjectName(QString::fromUtf8("mPreviewModeLabel"));
    mPreviewModeLabel->setWordWrap(true);

    gridLayout->addWidget(mPreviewModeLabel, 6, 0, 1, 2);

    mPreviewModeComboBox = new QComboBox(QgsComposerMapWidgetBase);
    mPreviewModeComboBox->setObjectName(QString::fromUtf8("mPreviewModeComboBox"));
    QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mPreviewModeComboBox->sizePolicy().hasHeightForWidth());
    mPreviewModeComboBox->setSizePolicy(sizePolicy2);

    gridLayout->addWidget(mPreviewModeComboBox, 6, 2, 1, 1);

    mUpdatePreviewButton = new QPushButton(QgsComposerMapWidgetBase);
    mUpdatePreviewButton->setObjectName(QString::fromUtf8("mUpdatePreviewButton"));

    gridLayout->addWidget(mUpdatePreviewButton, 6, 3, 1, 1);

    spacerItem1 = new QSpacerItem(458, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem1, 7, 2, 1, 2);

    textLabel1->setBuddy(mWidthLineEdit);
    textLabel2->setBuddy(mHeightLineEdit);
    mPreviewModeLabel->setBuddy(mPreviewModeComboBox);
    QWidget::setTabOrder(mWidthLineEdit, mHeightLineEdit);
    QWidget::setTabOrder(mHeightLineEdit, mPreviewModeComboBox);

    retranslateUi(QgsComposerMapWidgetBase);

    QMetaObject::connectSlotsByName(QgsComposerMapWidgetBase);
    } // setupUi

    void retranslateUi(QWidget *QgsComposerMapWidgetBase)
    {
    QgsComposerMapWidgetBase->setWindowTitle(QApplication::translate("QgsComposerMapWidgetBase", "Map options", 0, QApplication::UnicodeUTF8));
    mNameLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "<b>Map</b>", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsComposerMapWidgetBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Height", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("QgsComposerMapWidgetBase", "Scale:", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("QgsComposerMapWidgetBase", "1:", 0, QApplication::UnicodeUTF8));
    mMapExtentGroupBox->setTitle(QApplication::translate("QgsComposerMapWidgetBase", "Map extent", 0, QApplication::UnicodeUTF8));
    mXMinLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "X min:", 0, QApplication::UnicodeUTF8));
    mYMinLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Y min:", 0, QApplication::UnicodeUTF8));
    mXMaxLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "X max:", 0, QApplication::UnicodeUTF8));
    mYMaxLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Y max:", 0, QApplication::UnicodeUTF8));
    mSetToMapCanvasExtentButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "set to map canvas extent", 0, QApplication::UnicodeUTF8));
    mPreviewModeLabel->setText(QApplication::translate("QgsComposerMapWidgetBase", "Preview", 0, QApplication::UnicodeUTF8));
    mUpdatePreviewButton->setText(QApplication::translate("QgsComposerMapWidgetBase", "Update preview", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsComposerMapWidgetBase);
    } // retranslateUi

};

namespace Ui {
    class QgsComposerMapWidgetBase: public Ui_QgsComposerMapWidgetBase {};
} // namespace Ui

#endif // UI_QGSCOMPOSERMAPWIDGETBASE_H
