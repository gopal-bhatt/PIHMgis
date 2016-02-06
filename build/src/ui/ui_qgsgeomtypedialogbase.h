/********************************************************************************
** Form generated from reading ui file 'qgsgeomtypedialogbase.ui'
**
** Created: Wed Jun 11 19:03:30 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGEOMTYPEDIALOGBASE_H
#define UI_QGSGEOMTYPEDIALOGBASE_H

#include <Qt3Support/Q3Header>
#include <Qt3Support/Q3ListView>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>

class Ui_QgsGeomTypeDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *mFileFormatLabel;
    QComboBox *mFileFormatComboBox;
    QPushButton *mRemoveAttributeButton;
    QSpacerItem *spacerItem;
    QLabel *mAttributeLabel;
    QPushButton *mAddAttributeButton;
    QGroupBox *buttonGroup1;
    QGridLayout *gridLayout1;
    QRadioButton *mPointRadioButton;
    QRadioButton *mLineRadioButton;
    QRadioButton *mPolygonRadioButton;
    Q3ListView *mAttributeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsGeomTypeDialogBase)
    {
    if (QgsGeomTypeDialogBase->objectName().isEmpty())
        QgsGeomTypeDialogBase->setObjectName(QString::fromUtf8("QgsGeomTypeDialogBase"));
    QgsGeomTypeDialogBase->resize(400, 427);
    QgsGeomTypeDialogBase->setModal(true);
    gridLayout = new QGridLayout(QgsGeomTypeDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    mFileFormatLabel = new QLabel(QgsGeomTypeDialogBase);
    mFileFormatLabel->setObjectName(QString::fromUtf8("mFileFormatLabel"));

    gridLayout->addWidget(mFileFormatLabel, 1, 0, 1, 2);

    mFileFormatComboBox = new QComboBox(QgsGeomTypeDialogBase);
    mFileFormatComboBox->setObjectName(QString::fromUtf8("mFileFormatComboBox"));

    gridLayout->addWidget(mFileFormatComboBox, 1, 2, 1, 2);

    mRemoveAttributeButton = new QPushButton(QgsGeomTypeDialogBase);
    mRemoveAttributeButton->setObjectName(QString::fromUtf8("mRemoveAttributeButton"));

    gridLayout->addWidget(mRemoveAttributeButton, 3, 1, 1, 2);

    spacerItem = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 3, 3, 1, 1);

    mAttributeLabel = new QLabel(QgsGeomTypeDialogBase);
    mAttributeLabel->setObjectName(QString::fromUtf8("mAttributeLabel"));

    gridLayout->addWidget(mAttributeLabel, 2, 0, 1, 3);

    mAddAttributeButton = new QPushButton(QgsGeomTypeDialogBase);
    mAddAttributeButton->setObjectName(QString::fromUtf8("mAddAttributeButton"));

    gridLayout->addWidget(mAddAttributeButton, 3, 0, 1, 1);

    buttonGroup1 = new QGroupBox(QgsGeomTypeDialogBase);
    buttonGroup1->setObjectName(QString::fromUtf8("buttonGroup1"));
    gridLayout1 = new QGridLayout(buttonGroup1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    mPointRadioButton = new QRadioButton(buttonGroup1);
    mPointRadioButton->setObjectName(QString::fromUtf8("mPointRadioButton"));

    gridLayout1->addWidget(mPointRadioButton, 0, 0, 1, 1);

    mLineRadioButton = new QRadioButton(buttonGroup1);
    mLineRadioButton->setObjectName(QString::fromUtf8("mLineRadioButton"));

    gridLayout1->addWidget(mLineRadioButton, 0, 1, 1, 1);

    mPolygonRadioButton = new QRadioButton(buttonGroup1);
    mPolygonRadioButton->setObjectName(QString::fromUtf8("mPolygonRadioButton"));

    gridLayout1->addWidget(mPolygonRadioButton, 0, 2, 1, 1);


    gridLayout->addWidget(buttonGroup1, 0, 0, 1, 4);

    mAttributeView = new Q3ListView(QgsGeomTypeDialogBase);
    mAttributeView->addColumn(QApplication::translate("QgsGeomTypeDialogBase", "Column 1", 0, QApplication::UnicodeUTF8));
    mAttributeView->setObjectName(QString::fromUtf8("mAttributeView"));

    gridLayout->addWidget(mAttributeView, 4, 0, 1, 4);

    buttonBox = new QDialogButtonBox(QgsGeomTypeDialogBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 5, 0, 1, 4);

    mFileFormatLabel->setBuddy(mFileFormatComboBox);
    mAttributeLabel->setBuddy(mAddAttributeButton);
    QWidget::setTabOrder(mPointRadioButton, mLineRadioButton);
    QWidget::setTabOrder(mLineRadioButton, mPolygonRadioButton);
    QWidget::setTabOrder(mPolygonRadioButton, mFileFormatComboBox);
    QWidget::setTabOrder(mFileFormatComboBox, mAddAttributeButton);
    QWidget::setTabOrder(mAddAttributeButton, mRemoveAttributeButton);

    retranslateUi(QgsGeomTypeDialogBase);

    QMetaObject::connectSlotsByName(QgsGeomTypeDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeomTypeDialogBase)
    {
    QgsGeomTypeDialogBase->setWindowTitle(QApplication::translate("QgsGeomTypeDialogBase", "New Vector Layer", 0, QApplication::UnicodeUTF8));
    mFileFormatLabel->setText(QApplication::translate("QgsGeomTypeDialogBase", "File Format:", 0, QApplication::UnicodeUTF8));
    mRemoveAttributeButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Remove", 0, QApplication::UnicodeUTF8));
    mAttributeLabel->setText(QApplication::translate("QgsGeomTypeDialogBase", "Attributes:", 0, QApplication::UnicodeUTF8));
    mAddAttributeButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Add", 0, QApplication::UnicodeUTF8));
    buttonGroup1->setTitle(QApplication::translate("QgsGeomTypeDialogBase", "Type", 0, QApplication::UnicodeUTF8));
    mPointRadioButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Point", 0, QApplication::UnicodeUTF8));
    mLineRadioButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Line", 0, QApplication::UnicodeUTF8));
    mPolygonRadioButton->setText(QApplication::translate("QgsGeomTypeDialogBase", "Polygon", 0, QApplication::UnicodeUTF8));
    mAttributeView->header()->setLabel(0, QApplication::translate("QgsGeomTypeDialogBase", "Column 1", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGeomTypeDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGeomTypeDialogBase: public Ui_QgsGeomTypeDialogBase {};
} // namespace Ui

#endif // UI_QGSGEOMTYPEDIALOGBASE_H
