/********************************************************************************
** Form generated from reading ui file 'qgsprojectionselectorbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
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
    QTreeWidget *lstCoordinateSystems;
    QTextEdit *teProjection;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QRadioButton *radEpsgCrsId;
    QRadioButton *radName;
    QLineEdit *leSearch;
    QPushButton *pbnFind;

    void setupUi(QWidget *QgsProjectionSelectorBase)
    {
    if (QgsProjectionSelectorBase->objectName().isEmpty())
        QgsProjectionSelectorBase->setObjectName(QString::fromUtf8("QgsProjectionSelectorBase"));
    QgsProjectionSelectorBase->resize(466, 416);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsProjectionSelectorBase->sizePolicy().hasHeightForWidth());
    QgsProjectionSelectorBase->setSizePolicy(sizePolicy);
    QgsProjectionSelectorBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsProjectionSelectorBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setVerticalSpacing(3);
    gridLayout->setContentsMargins(3, 3, 3, 3);
    lstCoordinateSystems = new QTreeWidget(QgsProjectionSelectorBase);
    lstCoordinateSystems->setObjectName(QString::fromUtf8("lstCoordinateSystems"));
    lstCoordinateSystems->setAlternatingRowColors(true);
    lstCoordinateSystems->setUniformRowHeights(true);
    lstCoordinateSystems->setColumnCount(3);

    gridLayout->addWidget(lstCoordinateSystems, 0, 0, 1, 1);

    teProjection = new QTextEdit(QgsProjectionSelectorBase);
    teProjection->setObjectName(QString::fromUtf8("teProjection"));
    QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(teProjection->sizePolicy().hasHeightForWidth());
    teProjection->setSizePolicy(sizePolicy1);
    teProjection->setMinimumSize(QSize(0, 30));
    teProjection->setMaximumSize(QSize(16777215, 50));
    teProjection->setBaseSize(QSize(0, 50));
    teProjection->setAutoFormatting(QTextEdit::AutoBulletList);
    teProjection->setReadOnly(true);

    gridLayout->addWidget(teProjection, 1, 0, 1, 1);

    groupBox = new QGroupBox(QgsProjectionSelectorBase);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
    sizePolicy2.setHorizontalStretch(0);
    sizePolicy2.setVerticalStretch(0);
    sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy2);
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    radEpsgCrsId = new QRadioButton(groupBox);
    radEpsgCrsId->setObjectName(QString::fromUtf8("radEpsgCrsId"));
    radEpsgCrsId->setIconSize(QSize(16, 10));
    radEpsgCrsId->setChecked(true);

    gridLayout1->addWidget(radEpsgCrsId, 0, 0, 1, 1);

    radName = new QRadioButton(groupBox);
    radName->setObjectName(QString::fromUtf8("radName"));
    radName->setIconSize(QSize(16, 10));

    gridLayout1->addWidget(radName, 0, 1, 1, 1);

    leSearch = new QLineEdit(groupBox);
    leSearch->setObjectName(QString::fromUtf8("leSearch"));

    gridLayout1->addWidget(leSearch, 0, 2, 1, 1);

    pbnFind = new QPushButton(groupBox);
    pbnFind->setObjectName(QString::fromUtf8("pbnFind"));
    pbnFind->setMaximumSize(QSize(100, 16777215));
    pbnFind->setDefault(true);

    gridLayout1->addWidget(pbnFind, 0, 3, 1, 1);


    gridLayout->addWidget(groupBox, 2, 0, 1, 1);


    retranslateUi(QgsProjectionSelectorBase);
    QObject::connect(leSearch, SIGNAL(editingFinished()), pbnFind, SLOT(click()));

    QMetaObject::connectSlotsByName(QgsProjectionSelectorBase);
    } // setupUi

    void retranslateUi(QWidget *QgsProjectionSelectorBase)
    {
    QgsProjectionSelectorBase->setWindowTitle(QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System Selector", 0, QApplication::UnicodeUTF8));
    lstCoordinateSystems->headerItem()->setText(0, QApplication::translate("QgsProjectionSelectorBase", "Coordinate Reference System", 0, QApplication::UnicodeUTF8));
    lstCoordinateSystems->headerItem()->setText(1, QApplication::translate("QgsProjectionSelectorBase", "EPSG", 0, QApplication::UnicodeUTF8));
    lstCoordinateSystems->headerItem()->setText(2, QApplication::translate("QgsProjectionSelectorBase", "ID", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("QgsProjectionSelectorBase", "Search", 0, QApplication::UnicodeUTF8));
    radEpsgCrsId->setText(QApplication::translate("QgsProjectionSelectorBase", "EPSG ID", 0, QApplication::UnicodeUTF8));
    radName->setText(QApplication::translate("QgsProjectionSelectorBase", "Name", 0, QApplication::UnicodeUTF8));
    pbnFind->setText(QApplication::translate("QgsProjectionSelectorBase", "Find", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsProjectionSelectorBase);
    } // retranslateUi

};

namespace Ui {
    class QgsProjectionSelectorBase: public Ui_QgsProjectionSelectorBase {};
} // namespace Ui

#endif // UI_QGSPROJECTIONSELECTORBASE_H
