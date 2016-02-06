/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Wed Jun 11 19:10:51 2008
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
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include "qgsfiledropedit.h"

class Ui_QgsGeorefPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QTextEdit *textEdit;
    QLabel *pixmapLabel2;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *pbnClose;
    QFrame *line1;
    QPushButton *pbnEnterWorldCoords;
    QPushButton *pbnSelectRaster;
    QgsFileDropEdit *leSelectRaster;

    void setupUi(QDialog *QgsGeorefPluginGuiBase)
    {
    if (QgsGeorefPluginGuiBase->objectName().isEmpty())
        QgsGeorefPluginGuiBase->setObjectName(QString::fromUtf8("QgsGeorefPluginGuiBase"));
    QgsGeorefPluginGuiBase->resize(542, 258);
    QgsGeorefPluginGuiBase->setWindowIcon(QIcon(QString::fromUtf8(":/icon.png")));
    gridLayout = new QGridLayout(QgsGeorefPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(QgsGeorefPluginGuiBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 1, 2, 1, 1);

    textEdit = new QTextEdit(QgsGeorefPluginGuiBase);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));

    gridLayout->addWidget(textEdit, 0, 2, 1, 3);

    pixmapLabel2 = new QLabel(QgsGeorefPluginGuiBase);
    pixmapLabel2->setObjectName(QString::fromUtf8("pixmapLabel2"));
    pixmapLabel2->setMaximumSize(QSize(150, 32767));
    pixmapLabel2->setPixmap(QPixmap(QString::fromUtf8(":/georef.png")));
    pixmapLabel2->setScaledContents(true);

    gridLayout->addWidget(pixmapLabel2, 0, 0, 3, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    spacerItem = new QSpacerItem(441, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    pbnClose = new QPushButton(QgsGeorefPluginGuiBase);
    pbnClose->setObjectName(QString::fromUtf8("pbnClose"));

    hboxLayout->addWidget(pbnClose);


    gridLayout->addLayout(hboxLayout, 3, 0, 1, 5);

    line1 = new QFrame(QgsGeorefPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setMaximumSize(QSize(2, 32767));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    gridLayout->addWidget(line1, 0, 1, 3, 1);

    pbnEnterWorldCoords = new QPushButton(QgsGeorefPluginGuiBase);
    pbnEnterWorldCoords->setObjectName(QString::fromUtf8("pbnEnterWorldCoords"));

    gridLayout->addWidget(pbnEnterWorldCoords, 2, 3, 1, 2);

    pbnSelectRaster = new QPushButton(QgsGeorefPluginGuiBase);
    pbnSelectRaster->setObjectName(QString::fromUtf8("pbnSelectRaster"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(pbnSelectRaster->sizePolicy().hasHeightForWidth());
    pbnSelectRaster->setSizePolicy(sizePolicy);

    gridLayout->addWidget(pbnSelectRaster, 1, 4, 1, 1);

    leSelectRaster = new QgsFileDropEdit(QgsGeorefPluginGuiBase);
    leSelectRaster->setObjectName(QString::fromUtf8("leSelectRaster"));
    QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(0));
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(leSelectRaster->sizePolicy().hasHeightForWidth());
    leSelectRaster->setSizePolicy(sizePolicy1);

    gridLayout->addWidget(leSelectRaster, 1, 3, 1, 1);


    retranslateUi(QgsGeorefPluginGuiBase);

    QMetaObject::connectSlotsByName(QgsGeorefPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefPluginGuiBase)
    {
    QgsGeorefPluginGuiBase->setWindowTitle(QApplication::translate("QgsGeorefPluginGuiBase", "Georeferencer", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Raster file:", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("QgsGeorefPluginGuiBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:Sans Serif; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600;\">Description</span></p><p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This plugin can generate world files for rasters. You select points on the raster and give their world coordinates, and the plugin will compute the world file parameters. The more coordinates you can provide the better the result will be.</p></body></html>", 0, QApplication::UnicodeUTF8));
    pbnClose->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Close", 0, QApplication::UnicodeUTF8));
    pbnEnterWorldCoords->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Enter world coordinates", 0, QApplication::UnicodeUTF8));
    pbnSelectRaster->setText(QApplication::translate("QgsGeorefPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGeorefPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefPluginGuiBase: public Ui_QgsGeorefPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
