/********************************************************************************
** Form generated from reading ui file 'qgsprojectionselectorbase.ui'
**
** Created: Wed Jun 11 19:03:31 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPROJECTIONSELECTORBASE_H
#define UI_QGSPROJECTIONSELECTORBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

class Ui_QgsProjectionSelectorBase
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout2;
    QPushButton *pbnFind;
    QLineEdit *leSearch;
    QRadioButton *radName;
    QRadioButton *radSRSID;
    QRadioButton *radEPSGID;
    QRadioButton *radSRID;
    QTextEdit *teProjection;
    QTreeWidget *lstCoordinateSystems;

    void setupUi(QWidget *QgsProjectionSelectorBase)
    {
    if (QgsProjectionSelectorBase->objectName().isEmpty())
        QgsProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsProjectionSelectorBase"));
    QgsProjectionSelectorBase->resize(468, 428);
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsProjectionSelectorBase->sizePolicy().hasHeightForWidth());
    QgsProjectionSelectorBase->setSizePolicy(sizePolicy);
    QgsProjectionSelectorBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsProjectionSelectorBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    groupBox_2 = new QGroupBox(QgsProjectionSelectorBase);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
    groupBox_2->setSizePolicy(sizePolicy1);
    gridLayout1 = new QGridLayout(groupBox_2);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(9);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    groupBox = new QGroupBox(groupBox_2);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(1));
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy2);
    gridLayout2 = new QGridLayout(groupBox);
    gridLayout2->setSpacing(0);
    gridLayout2->setMargin(2);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    pbnFind = new QPushButton(groupBox);
    pbnFind->setObjectName(QString::fromUtf8("pbnFind"));
    pbnFind->setMaximumSize(QSize(100, 16777215));
    pbnFind->setDefault(true);

    gridLayout2->addWidget(pbnFind, 1, 3, 1, 1);

    leSearch = new QLineEdit(groupBox);
    leSearch->setObjectName(QString::fromUtf8("leSearch"));

    gridLayout2->addWidget(leSearch, 1, 0, 1, 3);

    radName = new QRadioButton(groupBox);
    radName->setObjectName(QString::fromUtf8("radName"));
    radName->setIconSize(QSize(16, 10));

    gridLayout2->addWidget(radName, 0, 3, 1, 1);

    radSRSID = new QRadioButton(groupBox);
    radSRSID->setObjectName(QString::fromUtf8("radSRSID"));
    radSRSID->setIconSize(QSize(16, 10));

    gridLayout2->addWidget(radSRSID, 0, 2, 1, 1);

    radEPSGID = new QRadioButton(groupBox);
    radEPSGID->setObjectName(QString::fromUtf8("radEPSGID"));
    radEPSGID->setIconSize(QSize(16, 10));

    gridLayout2->addWidget(radEPSGID, 0, 1, 1, 1);

    radSRID = new QRadioButton(groupBox);
    radSRID->setObjectName(QString::fromUtf8("radSRID"));
    radSRID->setIconSize(QSize(16, 10));
    radSRID->setChecked(true);

    gridLayout2->addWidget(radSRID, 0, 0, 1, 1);


    gridLayout1->addWidget(groupBox, 2, 0, 1, 1);

    teProjection = new QTextEdit(groupBox_2);
    teProjection->setObjectName(QString::fromUtf8("teProjection"));
    sizePolicy1.setHeightForWidth(teProjection->sizePolicy().hasHeightForWidth());
    teProjection->setSizePolicy(sizePolicy1);
    teProjection->setMinimumSize(QSize(0, 100));
    teProjection->setMaximumSize(QSize(16777215, 80));
    teProjection->setAutoFormatting(QTextEdit::AutoBulletList);
    teProjection->setReadOnly(true);

    gridLayout1->addWidget(teProjection, 1, 0, 1, 1);

    lstCoordinateSystems = new QTreeWidget(groupBox_2);
    lstCoordinateSystems->setObjectName(QString::fromUtf8("lstCoordinateSystems"));
    lstCoordinateSystems->setAlternatingRowColors(true);
    lstCoordinateSystems->setUniformRowHeights(true);
    lstCoordinateSystems->setColumnCount(2);

    gridLayout1->addWidget(lstCoordinateSystems, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);


    retranslateUi(QgsProjectionSelectorBase);

    QMetaObject::connectSlotsByName(QgsProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectionSelectorBase)
    {
    QgsProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsProjectionSelectorBase", "Projection Selector", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("QgsProjectionSelectorBase", "Projection", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsProjectionSelectorBase", "Search", 0, QApplication::UnicodeUTF8));
    pbnFind->setText(QApplication::translate("QgsProjectionSelectorBase", "Find", 0, QApplication::UnicodeUTF8));
    radName->setText(QApplication::translate("QgsProjectionSelectorBase", "Name", 0, QApplication::UnicodeUTF8));
    radSRSID->setText(QApplication::translate("QgsProjectionSelectorBase", "QGIS SRSID", 0, QApplication::UnicodeUTF8));
    radEPSGID->setText(QApplication::translate("QgsProjectionSelectorBase", "EPSG ID", 0, QApplication::UnicodeUTF8));
    radSRID->setText(QApplication::translate("QgsProjectionSelectorBase", "Postgis SRID", 0, QApplication::UnicodeUTF8));
    lstCoordinateSystems->headerItem()->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Spatial Reference System", 0, QApplication::UnicodeUTF8));
    lstCoordinateSystems->headerItem()->setText(1, QApplication::translate("QgsProjectionSelectorBase", "Id", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsProjectionSelectorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProjectionSelectorBase: public Ui_QgsProjectionSelectorBase {};
} // namespace Ui

#endif // UI_QGSPROJECTIONSELECTORBASE_H
