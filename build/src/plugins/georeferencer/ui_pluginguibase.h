/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Tue Jun 22 23:12:32 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PLUGINGUIBASE_H
#define UI_PLUGINGUIBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsGeorefPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLineEdit *leSelectRaster;
    QPushButton *pbnSelectRaster;
    QHBoxLayout *hboxLayout;
    QPushButton *pbnDescription;
    QPushButton *mArrangeWindowsButton;
    QSpacerItem *spacerItem;
    QPushButton *pbnClose;

    void setupUi(QDialog *QgsGeorefPluginGuiBase)
    {
    if (QgsGeorefPluginGuiBase->objectName().isEmpty())
        QgsGeorefPluginGuiBase->setObjectName(QString::fromUtf8("QgsGeorefPluginGuiBase"));
    QgsGeorefPluginGuiBase->resize(424, 131);
    QgsGeorefPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsGeorefPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(QgsGeorefPluginGuiBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    leSelectRaster = new QLineEdit(QgsGeorefPluginGuiBase);
    leSelectRaster->setObjectName(QString::fromUtf8("leSelectRaster"));
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(leSelectRaster->sizePolicy().hasHeightForWidth());
    leSelectRaster->setSizePolicy(sizePolicy);

    gridLayout->addWidget(leSelectRaster, 0, 1, 1, 1);

    pbnSelectRaster = new QPushButton(QgsGeorefPluginGuiBase);
    pbnSelectRaster->setObjectName(QString::fromUtf8("pbnSelectRaster"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(pbnSelectRaster->sizePolicy().hasHeightForWidth());
    pbnSelectRaster->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(pbnSelectRaster, 0, 2, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(0, 0, 0, 0);
    pbnDescription = new QPushButton(QgsGeorefPluginGuiBase);
    pbnDescription->setObjectName(QString::fromUtf8("pbnDescription"));

    hboxLayout->addWidget(pbnDescription);

    mArrangeWindowsButton = new QPushButton(QgsGeorefPluginGuiBase);
    mArrangeWindowsButton->setObjectName(QString::fromUtf8("mArrangeWindowsButton"));

    hboxLayout->addWidget(mArrangeWindowsButton);

    spacerItem = new QSpacerItem(141, 36, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    pbnClose = new QPushButton(QgsGeorefPluginGuiBase);
    pbnClose->setObjectName(QString::fromUtf8("pbnClose"));

    hboxLayout->addWidget(pbnClose);


    gridLayout->addLayout(hboxLayout, 1, 0, 1, 3);


    retranslateUi(QgsGeorefPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsGeorefPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefPluginGuiBase)
    {
    QgsGeorefPluginGuiBase->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Georeferencer", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Raster file:", 0, QApplication::UnicodeUTF8));
    pbnSelectRaster->setText(QApplication::translate("QgsGeorefPluginGuiBase", "...", 0, QApplication::UnicodeUTF8));
    pbnDescription->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Description...", 0, QApplication::UnicodeUTF8));
    mArrangeWindowsButton->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Arrange plugin windows", 0, QApplication::UnicodeUTF8));
    pbnClose->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGeorefPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefPluginGuiBase: public Ui_QgsGeorefPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
