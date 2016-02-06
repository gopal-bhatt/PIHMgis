/********************************************************************************
** Form generated from reading ui file 'qgsmapserverexportbase.ui'
**
** Created: Wed Jun 11 19:12:58 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSMAPSERVEREXPORTBASE_H
#define UI_QGSMAPSERVEREXPORTBASE_H

#include <Qt3Support/Q3GroupBox>
#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include "qgsfiledropedit.h"

class Ui_QgsMapserverExportBase
{
public:
    QGridLayout *gridLayout;
    Q3GroupBox *grpWeb;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel5_2;
    QgsFileDropEdit *txtWebTemplate;
    QPushButton *btnChooseTemplateFile;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel5;
    QgsFileDropEdit *txtWebHeader;
    QPushButton *btnChooseHeaderFile;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel5_3;
    QgsFileDropEdit *txtWebFooter;
    QPushButton *btnChooseFooterFile;
    Q3GroupBox *grpMap;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel3;
    QComboBox *cmbMapUnits;
    QLabel *textLabel4;
    QComboBox *cmbMapImageType;
    QHBoxLayout *hboxLayout4;
    QLabel *textLabel2;
    QLineEdit *txtMapWidth;
    QLabel *textLabel2_2;
    QLineEdit *txtMapHeight;
    QHBoxLayout *hboxLayout5;
    QLabel *textLabel1;
    QLineEdit *txtMapName;
    QLabel *textLabel7;
    QLineEdit *txtMapFilePath;
    QPushButton *btnChooseProjectFile;
    QgsFileDropEdit *txtQgisFilePath;
    QLabel *textLabel7_2;
    QPushButton *btnChooseFile;
    QCheckBox *chkExpLayersOnly;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsMapserverExportBase)
    {
    if (QgsMapserverExportBase->objectName().isEmpty())
        QgsMapserverExportBase->setObjectName(QString::fromUtf8("QgsMapserverExportBase"));
    QgsMapserverExportBase->resize(485, 493);
    QgsMapserverExportBase->setSizeGripEnabled(true);
    gridLayout = new QGridLayout(QgsMapserverExportBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    grpWeb = new Q3GroupBox(QgsMapserverExportBase);
    grpWeb->setObjectName(QString::fromUtf8("grpWeb"));
    grpWeb->setOrientation(Qt::Vertical);
    grpWeb->setColumnLayout(0, Qt::Vertical);
    grpWeb->layout()->setSpacing(0);
    grpWeb->layout()->setMargin(0);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(grpWeb->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(4);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel5_2 = new QLabel(grpWeb);
    textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));
    textLabel5_2->setMinimumSize(QSize(60, 0));

    hboxLayout->addWidget(textLabel5_2);

    txtWebTemplate = new QgsFileDropEdit(grpWeb);
    txtWebTemplate->setObjectName(QString::fromUtf8("txtWebTemplate"));

    hboxLayout->addWidget(txtWebTemplate);

    btnChooseTemplateFile = new QPushButton(grpWeb);
    btnChooseTemplateFile->setObjectName(QString::fromUtf8("btnChooseTemplateFile"));

    hboxLayout->addWidget(btnChooseTemplateFile);


    gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setSpacing(6);
    hboxLayout1->setMargin(4);
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    textLabel5 = new QLabel(grpWeb);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    textLabel5->setMinimumSize(QSize(60, 0));

    hboxLayout1->addWidget(textLabel5);

    txtWebHeader = new QgsFileDropEdit(grpWeb);
    txtWebHeader->setObjectName(QString::fromUtf8("txtWebHeader"));

    hboxLayout1->addWidget(txtWebHeader);

    btnChooseHeaderFile = new QPushButton(grpWeb);
    btnChooseHeaderFile->setObjectName(QString::fromUtf8("btnChooseHeaderFile"));

    hboxLayout1->addWidget(btnChooseHeaderFile);


    gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 1);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setSpacing(6);
    hboxLayout2->setMargin(4);
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel5_3 = new QLabel(grpWeb);
    textLabel5_3->setObjectName(QString::fromUtf8("textLabel5_3"));
    textLabel5_3->setMinimumSize(QSize(60, 0));

    hboxLayout2->addWidget(textLabel5_3);

    txtWebFooter = new QgsFileDropEdit(grpWeb);
    txtWebFooter->setObjectName(QString::fromUtf8("txtWebFooter"));

    hboxLayout2->addWidget(txtWebFooter);

    btnChooseFooterFile = new QPushButton(grpWeb);
    btnChooseFooterFile->setObjectName(QString::fromUtf8("btnChooseFooterFile"));

    hboxLayout2->addWidget(btnChooseFooterFile);


    gridLayout1->addLayout(hboxLayout2, 2, 0, 1, 1);


    gridLayout->addWidget(grpWeb, 4, 0, 1, 3);

    grpMap = new Q3GroupBox(QgsMapserverExportBase);
    grpMap->setObjectName(QString::fromUtf8("grpMap"));
    grpMap->setOrientation(Qt::Vertical);
    grpMap->setColumnLayout(0, Qt::Vertical);
    grpMap->layout()->setSpacing(0);
    grpMap->layout()->setMargin(0);
    gridLayout2 = new QGridLayout();
    QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(grpMap->layout());
    if (boxlayout1)
        boxlayout1->addLayout(gridLayout2);
    gridLayout2->setAlignment(Qt::AlignTop);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setSpacing(6);
    hboxLayout3->setMargin(4);
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    textLabel3 = new QLabel(grpMap);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    textLabel3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    hboxLayout3->addWidget(textLabel3);

    cmbMapUnits = new QComboBox(grpMap);
    cmbMapUnits->setObjectName(QString::fromUtf8("cmbMapUnits"));

    hboxLayout3->addWidget(cmbMapUnits);

    textLabel4 = new QLabel(grpMap);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    textLabel4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

    hboxLayout3->addWidget(textLabel4);

    cmbMapImageType = new QComboBox(grpMap);
    cmbMapImageType->setObjectName(QString::fromUtf8("cmbMapImageType"));

    hboxLayout3->addWidget(cmbMapImageType);


    gridLayout2->addLayout(hboxLayout3, 2, 0, 1, 1);

    hboxLayout4 = new QHBoxLayout();
    hboxLayout4->setSpacing(6);
    hboxLayout4->setMargin(4);
    hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
    textLabel2 = new QLabel(grpMap);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    hboxLayout4->addWidget(textLabel2);

    txtMapWidth = new QLineEdit(grpMap);
    txtMapWidth->setObjectName(QString::fromUtf8("txtMapWidth"));

    hboxLayout4->addWidget(txtMapWidth);

    textLabel2_2 = new QLabel(grpMap);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    hboxLayout4->addWidget(textLabel2_2);

    txtMapHeight = new QLineEdit(grpMap);
    txtMapHeight->setObjectName(QString::fromUtf8("txtMapHeight"));

    hboxLayout4->addWidget(txtMapHeight);


    gridLayout2->addLayout(hboxLayout4, 1, 0, 1, 1);

    hboxLayout5 = new QHBoxLayout();
    hboxLayout5->setSpacing(6);
    hboxLayout5->setMargin(4);
    hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
    textLabel1 = new QLabel(grpMap);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    hboxLayout5->addWidget(textLabel1);

    txtMapName = new QLineEdit(grpMap);
    txtMapName->setObjectName(QString::fromUtf8("txtMapName"));

    hboxLayout5->addWidget(txtMapName);


    gridLayout2->addLayout(hboxLayout5, 0, 0, 1, 1);


    gridLayout->addWidget(grpMap, 3, 0, 1, 3);

    textLabel7 = new QLabel(QgsMapserverExportBase);
    textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

    gridLayout->addWidget(textLabel7, 0, 0, 1, 1);

    txtMapFilePath = new QLineEdit(QgsMapserverExportBase);
    txtMapFilePath->setObjectName(QString::fromUtf8("txtMapFilePath"));

    gridLayout->addWidget(txtMapFilePath, 0, 1, 1, 1);

    btnChooseProjectFile = new QPushButton(QgsMapserverExportBase);
    btnChooseProjectFile->setObjectName(QString::fromUtf8("btnChooseProjectFile"));

    gridLayout->addWidget(btnChooseProjectFile, 1, 2, 1, 1);

    txtQgisFilePath = new QgsFileDropEdit(QgsMapserverExportBase);
    txtQgisFilePath->setObjectName(QString::fromUtf8("txtQgisFilePath"));

    gridLayout->addWidget(txtQgisFilePath, 1, 1, 1, 1);

    textLabel7_2 = new QLabel(QgsMapserverExportBase);
    textLabel7_2->setObjectName(QString::fromUtf8("textLabel7_2"));

    gridLayout->addWidget(textLabel7_2, 1, 0, 1, 1);

    btnChooseFile = new QPushButton(QgsMapserverExportBase);
    btnChooseFile->setObjectName(QString::fromUtf8("btnChooseFile"));

    gridLayout->addWidget(btnChooseFile, 0, 2, 1, 1);

    chkExpLayersOnly = new QCheckBox(QgsMapserverExportBase);
    chkExpLayersOnly->setObjectName(QString::fromUtf8("chkExpLayersOnly"));

    gridLayout->addWidget(chkExpLayersOnly, 2, 1, 1, 2);

    buttonBox = new QDialogButtonBox(QgsMapserverExportBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 5, 0, 1, 3);

    textLabel5_2->setBuddy(txtWebTemplate);
    textLabel5->setBuddy(txtWebHeader);
    textLabel5_3->setBuddy(txtWebFooter);
    textLabel3->setBuddy(cmbMapUnits);
    textLabel4->setBuddy(cmbMapImageType);
    textLabel2->setBuddy(txtMapWidth);
    textLabel2_2->setBuddy(txtMapHeight);
    textLabel1->setBuddy(txtMapName);
    textLabel7->setBuddy(txtMapFilePath);
    textLabel7_2->setBuddy(txtQgisFilePath);
    QWidget::setTabOrder(txtMapFilePath, btnChooseFile);
    QWidget::setTabOrder(btnChooseFile, txtQgisFilePath);
    QWidget::setTabOrder(txtQgisFilePath, btnChooseProjectFile);
    QWidget::setTabOrder(btnChooseProjectFile, chkExpLayersOnly);
    QWidget::setTabOrder(chkExpLayersOnly, txtMapName);
    QWidget::setTabOrder(txtMapName, txtMapWidth);
    QWidget::setTabOrder(txtMapWidth, txtMapHeight);
    QWidget::setTabOrder(txtMapHeight, cmbMapUnits);
    QWidget::setTabOrder(cmbMapUnits, cmbMapImageType);
    QWidget::setTabOrder(cmbMapImageType, txtWebTemplate);
    QWidget::setTabOrder(txtWebTemplate, btnChooseTemplateFile);
    QWidget::setTabOrder(btnChooseTemplateFile, txtWebHeader);
    QWidget::setTabOrder(txtWebHeader, btnChooseHeaderFile);
    QWidget::setTabOrder(btnChooseHeaderFile, txtWebFooter);
    QWidget::setTabOrder(txtWebFooter, btnChooseFooterFile);

    retranslateUi(QgsMapserverExportBase);
    QObject::connect(buttonBox, SIGNAL(accepted()), QgsMapserverExportBase, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), QgsMapserverExportBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsMapserverExportBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMapserverExportBase)
    {
    QgsMapserverExportBase->setWindowTitle(QApplication::translate("QgsMapserverExportBase", "Export to Mapserver", 0, QApplication::UnicodeUTF8));
    grpWeb->setTitle(QApplication::translate("QgsMapserverExportBase", "Web Interface Definition", 0, QApplication::UnicodeUTF8));
    textLabel5_2->setText(QApplication::translate("QgsMapserverExportBase", "Template", 0, QApplication::UnicodeUTF8));
    txtWebTemplate->setToolTip(QApplication::translate("QgsMapserverExportBase", "Path to the MapServer template file", 0, QApplication::UnicodeUTF8));
    btnChooseTemplateFile->setText(QApplication::translate("QgsMapserverExportBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsMapserverExportBase", "Header", 0, QApplication::UnicodeUTF8));
    btnChooseHeaderFile->setText(QApplication::translate("QgsMapserverExportBase", "Browse...", 0, QApplication::UnicodeUTF8));
    textLabel5_3->setText(QApplication::translate("QgsMapserverExportBase", "Footer", 0, QApplication::UnicodeUTF8));
    btnChooseFooterFile->setText(QApplication::translate("QgsMapserverExportBase", "Browse...", 0, QApplication::UnicodeUTF8));
    grpMap->setTitle(QApplication::translate("QgsMapserverExportBase", "Map", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsMapserverExportBase", "Units", 0, QApplication::UnicodeUTF8));
    cmbMapUnits->clear();
    cmbMapUnits->insertItems(0, QStringList()
     << QApplication::translate("QgsMapserverExportBase", "dd", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "feet", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "meters", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "miles", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "inches", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "kilometers", 0, QApplication::UnicodeUTF8)
    );
    textLabel4->setText(QApplication::translate("QgsMapserverExportBase", "Image type", 0, QApplication::UnicodeUTF8));
    cmbMapImageType->clear();
    cmbMapImageType->insertItems(0, QStringList()
     << QApplication::translate("QgsMapserverExportBase", "gif", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "gtiff", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "jpeg", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "png", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "swf", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "userdefined", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsMapserverExportBase", "wbmp", 0, QApplication::UnicodeUTF8)
    );
    textLabel2->setText(QApplication::translate("QgsMapserverExportBase", "Width", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsMapserverExportBase", "Height", 0, QApplication::UnicodeUTF8));
    textLabel1->setToolTip(QString());
    textLabel1->setText(QApplication::translate("QgsMapserverExportBase", "Name", 0, QApplication::UnicodeUTF8));
    txtMapName->setToolTip(QApplication::translate("QgsMapserverExportBase", "Prefix attached to map, scalebar and legend GIF filenames created using this MapFile", 0, QApplication::UnicodeUTF8));
    textLabel7->setText(QApplication::translate("QgsMapserverExportBase", "Map file", 0, QApplication::UnicodeUTF8));
    txtMapFilePath->setToolTip(QApplication::translate("QgsMapserverExportBase", "Name for the map file to be created from the QGIS project file", 0, QApplication::UnicodeUTF8));
    btnChooseProjectFile->setText(QApplication::translate("QgsMapserverExportBase", "Browse...", 0, QApplication::UnicodeUTF8));
    txtQgisFilePath->setToolTip(QApplication::translate("QgsMapserverExportBase", "Full path to the QGIS project file to export to MapServer map format", 0, QApplication::UnicodeUTF8));
    textLabel7_2->setText(QApplication::translate("QgsMapserverExportBase", "QGIS project file", 0, QApplication::UnicodeUTF8));
    btnChooseFile->setText(QApplication::translate("QgsMapserverExportBase", "Save As...", 0, QApplication::UnicodeUTF8));
    chkExpLayersOnly->setToolTip(QApplication::translate("QgsMapserverExportBase", "If checked, only the layer information will be processed", 0, QApplication::UnicodeUTF8));
    chkExpLayersOnly->setText(QApplication::translate("QgsMapserverExportBase", "Export LAYER information only", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsMapserverExportBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMapserverExportBase: public Ui_QgsMapserverExportBase {};
} // namespace Ui

#endif // UI_QGSMAPSERVEREXPORTBASE_H
