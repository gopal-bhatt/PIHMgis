/********************************************************************************
** Form generated from reading ui file 'qgsinterpolationdialogbase.ui'
**
** Created: Tue Jun 22 23:11:24 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSINTERPOLATIONDIALOGBASE_H
#define UI_QGSINTERPOLATIONDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>

class Ui_QgsInterpolationDialogBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *mInputGroupBox;
    QGridLayout *gridLayout1;
    QLabel *mInputVectorLayerLabel;
    QComboBox *mInputLayerComboBox;
    QLabel *label;
    QCheckBox *mUseZCoordCheckBox;
    QLabel *mInterpolationAttributeLabel;
    QComboBox *mInterpolationAttributeComboBox;
    QGroupBox *mOutputGroupBox;
    QGridLayout *gridLayout2;
    QLabel *mInterpolationLabel;
    QComboBox *mInterpolationMethodComboBox;
    QToolButton *mConfigureInterpolationButton;
    QLabel *mNumberOfColumnsLabel;
    QSpinBox *mNumberOfColumnsSpinBox;
    QLabel *mNumberOfRowsLabel;
    QSpinBox *mNumberOfRowsSpinBox;
    QLabel *mOutputFileLabel;
    QLineEdit *mOutputFileLineEdit;
    QToolButton *mOutputFileButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsInterpolationDialogBase)
    {
    if (QgsInterpolationDialogBase->objectName().isEmpty())
        QgsInterpolationDialogBase->setObjectName(QString::fromUtf8("QgsInterpolationDialogBase"));
    QgsInterpolationDialogBase->resize(485, 372);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsInterpolationDialogBase->sizePolicy().hasHeightForWidth());
    QgsInterpolationDialogBase->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(QgsInterpolationDialogBase);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mInputGroupBox = new QGroupBox(QgsInterpolationDialogBase);
    mInputGroupBox->setObjectName(QString::fromUtf8("mInputGroupBox"));
    QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(mInputGroupBox->sizePolicy().hasHeightForWidth());
    mInputGroupBox->setSizePolicy(sizePolicy1);
    gridLayout1 = new QGridLayout(mInputGroupBox);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    mInputVectorLayerLabel = new QLabel(mInputGroupBox);
    mInputVectorLayerLabel->setObjectName(QString::fromUtf8("mInputVectorLayerLabel"));

    gridLayout1->addWidget(mInputVectorLayerLabel, 0, 0, 1, 1);

    mInputLayerComboBox = new QComboBox(mInputGroupBox);
    mInputLayerComboBox->setObjectName(QString::fromUtf8("mInputLayerComboBox"));
    QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(mInputLayerComboBox->sizePolicy().hasHeightForWidth());
    mInputLayerComboBox->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(mInputLayerComboBox, 0, 1, 1, 1);

    label = new QLabel(mInputGroupBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout1->addWidget(label, 1, 0, 1, 1);

    mUseZCoordCheckBox = new QCheckBox(mInputGroupBox);
    mUseZCoordCheckBox->setObjectName(QString::fromUtf8("mUseZCoordCheckBox"));

    gridLayout1->addWidget(mUseZCoordCheckBox, 1, 1, 1, 1);

    mInterpolationAttributeLabel = new QLabel(mInputGroupBox);
    mInterpolationAttributeLabel->setObjectName(QString::fromUtf8("mInterpolationAttributeLabel"));

    gridLayout1->addWidget(mInterpolationAttributeLabel, 2, 0, 1, 1);

    mInterpolationAttributeComboBox = new QComboBox(mInputGroupBox);
    mInterpolationAttributeComboBox->setObjectName(QString::fromUtf8("mInterpolationAttributeComboBox"));
    sizePolicy2.setHeightForWidth(mInterpolationAttributeComboBox->sizePolicy().hasHeightForWidth());
    mInterpolationAttributeComboBox->setSizePolicy(sizePolicy2);

    gridLayout1->addWidget(mInterpolationAttributeComboBox, 2, 1, 1, 1);


    gridLayout->addWidget(mInputGroupBox, 0, 0, 1, 1);

    mOutputGroupBox = new QGroupBox(QgsInterpolationDialogBase);
    mOutputGroupBox->setObjectName(QString::fromUtf8("mOutputGroupBox"));
    sizePolicy1.setHeightForWidth(mOutputGroupBox->sizePolicy().hasHeightForWidth());
    mOutputGroupBox->setSizePolicy(sizePolicy1);
    gridLayout2 = new QGridLayout(mOutputGroupBox);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    mInterpolationLabel = new QLabel(mOutputGroupBox);
    mInterpolationLabel->setObjectName(QString::fromUtf8("mInterpolationLabel"));

    gridLayout2->addWidget(mInterpolationLabel, 0, 0, 1, 1);

    mInterpolationMethodComboBox = new QComboBox(mOutputGroupBox);
    mInterpolationMethodComboBox->setObjectName(QString::fromUtf8("mInterpolationMethodComboBox"));

    gridLayout2->addWidget(mInterpolationMethodComboBox, 0, 1, 1, 1);

    mConfigureInterpolationButton = new QToolButton(mOutputGroupBox);
    mConfigureInterpolationButton->setObjectName(QString::fromUtf8("mConfigureInterpolationButton"));
    mConfigureInterpolationButton->setIcon(QIcon(QString::fromUtf8(":/interpolator/options.png")));

    gridLayout2->addWidget(mConfigureInterpolationButton, 0, 2, 1, 1);

    mNumberOfColumnsLabel = new QLabel(mOutputGroupBox);
    mNumberOfColumnsLabel->setObjectName(QString::fromUtf8("mNumberOfColumnsLabel"));

    gridLayout2->addWidget(mNumberOfColumnsLabel, 1, 0, 1, 1);

    mNumberOfColumnsSpinBox = new QSpinBox(mOutputGroupBox);
    mNumberOfColumnsSpinBox->setObjectName(QString::fromUtf8("mNumberOfColumnsSpinBox"));
    mNumberOfColumnsSpinBox->setMaximum(10000000);

    gridLayout2->addWidget(mNumberOfColumnsSpinBox, 1, 1, 1, 2);

    mNumberOfRowsLabel = new QLabel(mOutputGroupBox);
    mNumberOfRowsLabel->setObjectName(QString::fromUtf8("mNumberOfRowsLabel"));

    gridLayout2->addWidget(mNumberOfRowsLabel, 2, 0, 1, 1);

    mNumberOfRowsSpinBox = new QSpinBox(mOutputGroupBox);
    mNumberOfRowsSpinBox->setObjectName(QString::fromUtf8("mNumberOfRowsSpinBox"));
    mNumberOfRowsSpinBox->setMaximum(10000000);

    gridLayout2->addWidget(mNumberOfRowsSpinBox, 2, 1, 1, 2);

    mOutputFileLabel = new QLabel(mOutputGroupBox);
    mOutputFileLabel->setObjectName(QString::fromUtf8("mOutputFileLabel"));

    gridLayout2->addWidget(mOutputFileLabel, 3, 0, 1, 1);

    mOutputFileLineEdit = new QLineEdit(mOutputGroupBox);
    mOutputFileLineEdit->setObjectName(QString::fromUtf8("mOutputFileLineEdit"));

    gridLayout2->addWidget(mOutputFileLineEdit, 3, 1, 1, 1);

    mOutputFileButton = new QToolButton(mOutputGroupBox);
    mOutputFileButton->setObjectName(QString::fromUtf8("mOutputFileButton"));

    gridLayout2->addWidget(mOutputFileButton, 3, 2, 1, 1);


    gridLayout->addWidget(mOutputGroupBox, 1, 0, 1, 1);

    buttonBox = new QDialogButtonBox(QgsInterpolationDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

    mInputVectorLayerLabel->setBuddy(mInputLayerComboBox);
    mInterpolationAttributeLabel->setBuddy(mInterpolationAttributeComboBox);
    mInterpolationLabel->setBuddy(mInterpolationMethodComboBox);
    mNumberOfColumnsLabel->setBuddy(mNumberOfColumnsSpinBox);
    mNumberOfRowsLabel->setBuddy(mNumberOfRowsSpinBox);
    mOutputFileLabel->setBuddy(mOutputFileLineEdit);
    QWidget::setTabOrder(mInputLayerComboBox, mUseZCoordCheckBox);
    QWidget::setTabOrder(mUseZCoordCheckBox, mInterpolationAttributeComboBox);
    QWidget::setTabOrder(mInterpolationAttributeComboBox, mInterpolationMethodComboBox);
    QWidget::setTabOrder(mInterpolationMethodComboBox, mConfigureInterpolationButton);
    QWidget::setTabOrder(mConfigureInterpolationButton, mNumberOfColumnsSpinBox);
    QWidget::setTabOrder(mNumberOfColumnsSpinBox, mNumberOfRowsSpinBox);
    QWidget::setTabOrder(mNumberOfRowsSpinBox, mOutputFileLineEdit);
    QWidget::setTabOrder(mOutputFileLineEdit, mOutputFileButton);
    QWidget::setTabOrder(mOutputFileButton, buttonBox);

    retranslateUi(QgsInterpolationDialogBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsInterpolationDialogBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsInterpolationDialogBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsInterpolationDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsInterpolationDialogBase)
    {
    QgsInterpolationDialogBase->setWindowTitle(QApplication::translate("QgsInterpolationDialogBase", "Interpolation plugin", 0, QApplication::UnicodeUTF8));
    mInputGroupBox->setTitle(QApplication::translate("QgsInterpolationDialogBase", "Input", 0, QApplication::UnicodeUTF8));
    mInputVectorLayerLabel->setText(QApplication::translate("QgsInterpolationDialogBase", "Input vector layer", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    mUseZCoordCheckBox->setText(QApplication::translate("QgsInterpolationDialogBase", "Use z-Coordinate for interpolation", 0, QApplication::UnicodeUTF8));
    mInterpolationAttributeLabel->setText(QApplication::translate("QgsInterpolationDialogBase", "Interpolation attribute ", 0, QApplication::UnicodeUTF8));
    mOutputGroupBox->setTitle(QApplication::translate("QgsInterpolationDialogBase", "Output", 0, QApplication::UnicodeUTF8));
    mInterpolationLabel->setText(QApplication::translate("QgsInterpolationDialogBase", "Interpolation method", 0, QApplication::UnicodeUTF8));
    mConfigureInterpolationButton->setText(QApplication::translate("QgsInterpolationDialogBase", "...", 0, QApplication::UnicodeUTF8));
    mNumberOfColumnsLabel->setText(QApplication::translate("QgsInterpolationDialogBase", "Number of columns", 0, QApplication::UnicodeUTF8));
    mNumberOfRowsLabel->setText(QApplication::translate("QgsInterpolationDialogBase", "Number of rows", 0, QApplication::UnicodeUTF8));
    mOutputFileLabel->setText(QApplication::translate("QgsInterpolationDialogBase", "Output file ", 0, QApplication::UnicodeUTF8));
    mOutputFileButton->setText(QApplication::translate("QgsInterpolationDialogBase", "...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsInterpolationDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsInterpolationDialogBase: public Ui_QgsInterpolationDialogBase {};
} // namespace Ui

#endif // UI_QGSINTERPOLATIONDIALOGBASE_H
