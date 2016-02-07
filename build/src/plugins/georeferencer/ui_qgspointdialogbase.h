/********************************************************************************
** Form generated from reading ui file 'qgspointdialogbase.ui'
**
** Created: Tue Jun 22 23:12:32 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPOINTDIALOGBASE_H
#define UI_QGSPOINTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>

class Ui_QgsPointDialogBase
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbnSelectWorldFile;
    QPushButton *pbnSelectModifiedRaster;
    QLabel *lblSelectModifiedRaster;
    QLabel *textLabel1;
    QLineEdit *leSelectModifiedRaster;
    QLineEdit *leSelectWorldFile;
    QLabel *textLabel2;
    QComboBox *cmbTransformType;
    QPushButton *pbnGenerateWorldFile;
    QFrame *frame5;
    QHBoxLayout *hboxLayout;
    QToolButton *tbnAddPoint;
    QToolButton *tbnDeletePoint;
    QFrame *frame4;
    QHBoxLayout *hboxLayout1;
    QToolButton *tbnZoomIn;
    QToolButton *tbnZoomOut;
    QToolButton *tbnZoomToLayer;
    QToolButton *tbnPan;
    QFrame *canvasFrame;
    QPushButton *pbnGenerateAndLoad;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *QgsPointDialogBase)
    {
    if (QgsPointDialogBase->objectName().isEmpty())
        QgsPointDialogBase->setObjectName(QString::fromUtf8("QgsPointDialogBase"));
    QgsPointDialogBase->resize(335, 433);
    QgsPointDialogBase->setWindowIcon(QIcon(QString::fromUtf8(":/icon.png")));
    QgsPointDialogBase->setAutoFillBackground(true);
    gridLayout = new QGridLayout(QgsPointDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    pbnSelectWorldFile = new QPushButton(QgsPointDialogBase);
    pbnSelectWorldFile->setObjectName(QString::fromUtf8("pbnSelectWorldFile"));

    gridLayout->addWidget(pbnSelectWorldFile, 4, 3, 1, 1);

    pbnSelectModifiedRaster = new QPushButton(QgsPointDialogBase);
    pbnSelectModifiedRaster->setObjectName(QString::fromUtf8("pbnSelectModifiedRaster"));

    gridLayout->addWidget(pbnSelectModifiedRaster, 3, 3, 1, 1);

    lblSelectModifiedRaster = new QLabel(QgsPointDialogBase);
    lblSelectModifiedRaster->setObjectName(QString::fromUtf8("lblSelectModifiedRaster"));

    gridLayout->addWidget(lblSelectModifiedRaster, 3, 0, 1, 2);

    textLabel1 = new QLabel(QgsPointDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 4, 0, 1, 2);

    leSelectModifiedRaster = new QLineEdit(QgsPointDialogBase);
    leSelectModifiedRaster->setObjectName(QString::fromUtf8("leSelectModifiedRaster"));

    gridLayout->addWidget(leSelectModifiedRaster, 3, 2, 1, 1);

    leSelectWorldFile = new QLineEdit(QgsPointDialogBase);
    leSelectWorldFile->setObjectName(QString::fromUtf8("leSelectWorldFile"));

    gridLayout->addWidget(leSelectWorldFile, 4, 2, 1, 1);

    textLabel2 = new QLabel(QgsPointDialogBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 2, 0, 1, 2);

    cmbTransformType = new QComboBox(QgsPointDialogBase);
    cmbTransformType->setObjectName(QString::fromUtf8("cmbTransformType"));

    gridLayout->addWidget(cmbTransformType, 2, 2, 1, 2);

    pbnGenerateWorldFile = new QPushButton(QgsPointDialogBase);
    pbnGenerateWorldFile->setObjectName(QString::fromUtf8("pbnGenerateWorldFile"));

    gridLayout->addWidget(pbnGenerateWorldFile, 5, 0, 1, 1);

    frame5 = new QFrame(QgsPointDialogBase);
    frame5->setObjectName(QString::fromUtf8("frame5"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(frame5->sizePolicy().hasHeightForWidth());
    frame5->setSizePolicy(sizePolicy);
    frame5->setFrameShape(QFrame::NoFrame);
    frame5->setFrameShadow(QFrame::Raised);
    hboxLayout = new QHBoxLayout(frame5);
    hboxLayout->setSpacing(0);
    hboxLayout->setMargin(11);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    tbnAddPoint = new QToolButton(frame5);
    tbnAddPoint->setObjectName(QString::fromUtf8("tbnAddPoint"));
    tbnAddPoint->setIcon(QIcon());
    tbnAddPoint->setIconSize(QSize(22, 22));
    tbnAddPoint->setCheckable(true);

    hboxLayout->addWidget(tbnAddPoint);

    tbnDeletePoint = new QToolButton(frame5);
    tbnDeletePoint->setObjectName(QString::fromUtf8("tbnDeletePoint"));
    tbnDeletePoint->setEnabled(true);
    tbnDeletePoint->setIcon(QIcon());
    tbnDeletePoint->setIconSize(QSize(22, 22));
    tbnDeletePoint->setCheckable(true);

    hboxLayout->addWidget(tbnDeletePoint);


    gridLayout->addWidget(frame5, 0, 2, 1, 1);

    frame4 = new QFrame(QgsPointDialogBase);
    frame4->setObjectName(QString::fromUtf8("frame4"));
    sizePolicy.setHeightForWidth(frame4->sizePolicy().hasHeightForWidth());
    frame4->setSizePolicy(sizePolicy);
    frame4->setFrameShape(QFrame::NoFrame);
    frame4->setFrameShadow(QFrame::Raised);
    hboxLayout1 = new QHBoxLayout(frame4);
    hboxLayout1->setSpacing(0);
    hboxLayout1->setMargin(11);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    tbnZoomIn = new QToolButton(frame4);
    tbnZoomIn->setObjectName(QString::fromUtf8("tbnZoomIn"));
    tbnZoomIn->setIcon(QIcon());
    tbnZoomIn->setIconSize(QSize(22, 22));
    tbnZoomIn->setCheckable(true);

    hboxLayout1->addWidget(tbnZoomIn);

    tbnZoomOut = new QToolButton(frame4);
    tbnZoomOut->setObjectName(QString::fromUtf8("tbnZoomOut"));
    tbnZoomOut->setIcon(QIcon());
    tbnZoomOut->setIconSize(QSize(22, 22));
    tbnZoomOut->setCheckable(true);

    hboxLayout1->addWidget(tbnZoomOut);

    tbnZoomToLayer = new QToolButton(frame4);
    tbnZoomToLayer->setObjectName(QString::fromUtf8("tbnZoomToLayer"));
    tbnZoomToLayer->setIcon(QIcon());
    tbnZoomToLayer->setIconSize(QSize(22, 22));
    tbnZoomToLayer->setCheckable(false);

    hboxLayout1->addWidget(tbnZoomToLayer);

    tbnPan = new QToolButton(frame4);
    tbnPan->setObjectName(QString::fromUtf8("tbnPan"));
    tbnPan->setIcon(QIcon());
    tbnPan->setIconSize(QSize(22, 22));
    tbnPan->setCheckable(true);

    hboxLayout1->addWidget(tbnPan);


    gridLayout->addWidget(frame4, 0, 0, 1, 2);

    canvasFrame = new QFrame(QgsPointDialogBase);
    canvasFrame->setObjectName(QString::fromUtf8("canvasFrame"));
    canvasFrame->setAutoFillBackground(false);
    canvasFrame->setFrameShape(QFrame::StyledPanel);
    canvasFrame->setFrameShadow(QFrame::Raised);

    gridLayout->addWidget(canvasFrame, 1, 0, 1, 4);

    pbnGenerateAndLoad = new QPushButton(QgsPointDialogBase);
    pbnGenerateAndLoad->setObjectName(QString::fromUtf8("pbnGenerateAndLoad"));

    gridLayout->addWidget(pbnGenerateAndLoad, 5, 1, 1, 3);

    spacerItem = new QSpacerItem(41, 53, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 3, 1, 1);


    retranslateUi(QgsPointDialogBase);

    QMetaObject::connectSlotsByName(QgsPointDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPointDialogBase)
    {
    QgsPointDialogBase->setWindowTitle(QApplication::translate("QgsPointDialogBase", "Reference points", 0, QApplication::UnicodeUTF8));
    pbnSelectWorldFile->setText(QApplication::translate("QgsPointDialogBase", "...", 0, QApplication::UnicodeUTF8));
    pbnSelectModifiedRaster->setText(QApplication::translate("QgsPointDialogBase", "...", 0, QApplication::UnicodeUTF8));
    lblSelectModifiedRaster->setText(QApplication::translate("QgsPointDialogBase", "Modified raster:", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsPointDialogBase", "World file:", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsPointDialogBase", "Transform type:", 0, QApplication::UnicodeUTF8));
    pbnGenerateWorldFile->setText(QApplication::translate("QgsPointDialogBase", "Create", 0, QApplication::UnicodeUTF8));
    tbnAddPoint->setToolTip(QApplication::translate("QgsPointDialogBase", "Add points", 0, QApplication::UnicodeUTF8));
    tbnAddPoint->setText(QString());
    tbnDeletePoint->setToolTip(QApplication::translate("QgsPointDialogBase", "Delete points", 0, QApplication::UnicodeUTF8));
    tbnDeletePoint->setText(QString());
    tbnZoomIn->setToolTip(QApplication::translate("QgsPointDialogBase", "Zoom in", 0, QApplication::UnicodeUTF8));
    tbnZoomIn->setText(QString());
    tbnZoomOut->setToolTip(QApplication::translate("QgsPointDialogBase", "Zoom out", 0, QApplication::UnicodeUTF8));
    tbnZoomOut->setText(QString());
    tbnZoomToLayer->setToolTip(QApplication::translate("QgsPointDialogBase", "Zoom to the raster extents", 0, QApplication::UnicodeUTF8));
    tbnZoomToLayer->setText(QString());
    tbnPan->setToolTip(QApplication::translate("QgsPointDialogBase", "Pan", 0, QApplication::UnicodeUTF8));
    tbnPan->setText(QString());
    pbnGenerateAndLoad->setText(QApplication::translate("QgsPointDialogBase", "Create and load layer", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPointDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPointDialogBase: public Ui_QgsPointDialogBase {};
} // namespace Ui

#endif // UI_QGSPOINTDIALOGBASE_H
