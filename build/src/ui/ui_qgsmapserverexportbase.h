/********************************************************************************
** Form generated from reading ui file 'qgsmapserverexportbase.ui'
**
** Created: Tue Jun 22 23:03:10 2010
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
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

class Ui_QgsMapserverExportBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel7;
    QCheckBox *chkExpLayersOnly;
    QHBoxLayout *hboxLayout;
    QPushButton *buttonHelp;
    QSpacerItem *spacerItem;
    QPushButton *buttonOk;
    QPushButton *buttonCancel;
    QPushButton *btnChooseFile;
    QLineEdit *txtMapFilePath;
    Q3GroupBox *grpMap;
    QGridLayout *gridLayout1;
    QLabel *textLabel1;
    QLabel *textLabel2_2;
    QComboBox *cmbMapUnits;
    QLabel *textLabel3;
    QLabel *textLabel4;
    QComboBox *cmbMapImageType;
    QLabel *textLabel6;
    QLabel *textLabel6_2;
    QLineEdit *txtMinScale;
    QLineEdit *txtMaxScale;
    QLineEdit *txtMapName;
    QLineEdit *txtMapWidth;
    QLineEdit *txtMapHeight;
    QLabel *textLabel2;
    Q3GroupBox *grpWeb;
    QGridLayout *gridLayout2;
    QLabel *textLabel5;
    QLabel *textLabel5_3;
    QLabel *textLabel5_2;
    QLineEdit *txtWebHeader;
    QLineEdit *txtWebTemplate;
    QLineEdit *txtWebFooter;

    void setupUi(QDialog *QgsMapserverExportBase)
    {
    if (QgsMapserverExportBase->objectName().isEmpty())
        QgsMapserverExportBase->setObjectName(QString::fromUtf8("QgsMapserverExportBase"));
    QgsMapserverExportBase->resize(483, 433);
    QgsMapserverExportBase->setSizeGripEnabled(true);
    QgsMapserverExportBase->setModal(true);
    gridLayout = new QGridLayout(QgsMapserverExportBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel7 = new QLabel(QgsMapserverExportBase);
    textLabel7->setObjectName(QString::fromUtf8("textLabel7"));

    gridLayout->addWidget(textLabel7, 0, 0, 1, 1);

    chkExpLayersOnly = new QCheckBox(QgsMapserverExportBase);
    chkExpLayersOnly->setObjectName(QString::fromUtf8("chkExpLayersOnly"));

    gridLayout->addWidget(chkExpLayersOnly, 1, 0, 1, 2);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    buttonHelp = new QPushButton(QgsMapserverExportBase);
    buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
    buttonHelp->setAutoDefault(true);

    hboxLayout->addWidget(buttonHelp);

    spacerItem = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    buttonOk = new QPushButton(QgsMapserverExportBase);
    buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
    buttonOk->setAutoDefault(true);
    buttonOk->setDefault(true);

    hboxLayout->addWidget(buttonOk);

    buttonCancel = new QPushButton(QgsMapserverExportBase);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout->addWidget(buttonCancel);


    gridLayout->addLayout(hboxLayout, 4, 0, 1, 3);

    btnChooseFile = new QPushButton(QgsMapserverExportBase);
    btnChooseFile->setObjectName(QString::fromUtf8("btnChooseFile"));

    gridLayout->addWidget(btnChooseFile, 0, 2, 1, 1);

    txtMapFilePath = new QLineEdit(QgsMapserverExportBase);
    txtMapFilePath->setObjectName(QString::fromUtf8("txtMapFilePath"));

    gridLayout->addWidget(txtMapFilePath, 0, 1, 1, 1);

    grpMap = new Q3GroupBox(QgsMapserverExportBase);
    grpMap->setObjectName(QString::fromUtf8("grpMap"));
    grpMap->setOrientation(Qt::Vertical);
    grpMap->setColumnLayout(0, Qt::Vertical);
    grpMap->layout()->setSpacing(6);
    grpMap->layout()->setMargin(10);
    gridLayout1 = new QGridLayout();
    QBoxLayout *boxlayout = qobject_cast<QBoxLayout *>(grpMap->layout());
    if (boxlayout)
        boxlayout->addLayout(gridLayout1);
    gridLayout1->setAlignment(Qt::AlignTop);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textLabel1 = new QLabel(grpMap);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

    textLabel2_2 = new QLabel(grpMap);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));

    gridLayout1->addWidget(textLabel2_2, 0, 7, 1, 1);

    cmbMapUnits = new QComboBox(grpMap);
    cmbMapUnits->setObjectName(QString::fromUtf8("cmbMapUnits"));

    gridLayout1->addWidget(cmbMapUnits, 1, 1, 1, 2);

    textLabel3 = new QLabel(grpMap);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));

    gridLayout1->addWidget(textLabel3, 1, 0, 1, 1);

    textLabel4 = new QLabel(grpMap);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));

    gridLayout1->addWidget(textLabel4, 1, 3, 1, 2);

    cmbMapImageType = new QComboBox(grpMap);
    cmbMapImageType->setObjectName(QString::fromUtf8("cmbMapImageType"));

    gridLayout1->addWidget(cmbMapImageType, 1, 5, 1, 3);

    textLabel6 = new QLabel(grpMap);
    textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

    gridLayout1->addWidget(textLabel6, 2, 0, 1, 2);

    textLabel6_2 = new QLabel(grpMap);
    textLabel6_2->setObjectName(QString::fromUtf8("textLabel6_2"));

    gridLayout1->addWidget(textLabel6_2, 2, 5, 1, 2);

    txtMinScale = new QLineEdit(grpMap);
    txtMinScale->setObjectName(QString::fromUtf8("txtMinScale"));

    gridLayout1->addWidget(txtMinScale, 2, 2, 1, 2);

    txtMaxScale = new QLineEdit(grpMap);
    txtMaxScale->setObjectName(QString::fromUtf8("txtMaxScale"));

    gridLayout1->addWidget(txtMaxScale, 2, 7, 1, 2);

    txtMapName = new QLineEdit(grpMap);
    txtMapName->setObjectName(QString::fromUtf8("txtMapName"));

    gridLayout1->addWidget(txtMapName, 0, 1, 1, 3);

    txtMapWidth = new QLineEdit(grpMap);
    txtMapWidth->setObjectName(QString::fromUtf8("txtMapWidth"));

    gridLayout1->addWidget(txtMapWidth, 0, 6, 1, 1);

    txtMapHeight = new QLineEdit(grpMap);
    txtMapHeight->setObjectName(QString::fromUtf8("txtMapHeight"));

    gridLayout1->addWidget(txtMapHeight, 0, 8, 1, 1);

    textLabel2 = new QLabel(grpMap);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout1->addWidget(textLabel2, 0, 4, 1, 2);


    gridLayout->addWidget(grpMap, 2, 0, 1, 3);

    grpWeb = new Q3GroupBox(QgsMapserverExportBase);
    grpWeb->setObjectName(QString::fromUtf8("grpWeb"));
    grpWeb->setOrientation(Qt::Vertical);
    grpWeb->setColumnLayout(0, Qt::Vertical);
    grpWeb->layout()->setSpacing(6);
    grpWeb->layout()->setMargin(10);
    gridLayout2 = new QGridLayout();
    QBoxLayout *boxlayout1 = qobject_cast<QBoxLayout *>(grpWeb->layout());
    if (boxlayout1)
        boxlayout1->addLayout(gridLayout2);
    gridLayout2->setAlignment(Qt::AlignTop);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    textLabel5 = new QLabel(grpWeb);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));

    gridLayout2->addWidget(textLabel5, 0, 0, 1, 1);

    textLabel5_3 = new QLabel(grpWeb);
    textLabel5_3->setObjectName(QString::fromUtf8("textLabel5_3"));

    gridLayout2->addWidget(textLabel5_3, 2, 0, 1, 1);

    textLabel5_2 = new QLabel(grpWeb);
    textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));

    gridLayout2->addWidget(textLabel5_2, 1, 0, 1, 1);

    txtWebHeader = new QLineEdit(grpWeb);
    txtWebHeader->setObjectName(QString::fromUtf8("txtWebHeader"));

    gridLayout2->addWidget(txtWebHeader, 0, 1, 1, 1);

    txtWebTemplate = new QLineEdit(grpWeb);
    txtWebTemplate->setObjectName(QString::fromUtf8("txtWebTemplate"));

    gridLayout2->addWidget(txtWebTemplate, 1, 1, 1, 1);

    txtWebFooter = new QLineEdit(grpWeb);
    txtWebFooter->setObjectName(QString::fromUtf8("txtWebFooter"));

    gridLayout2->addWidget(txtWebFooter, 2, 1, 1, 1);


    gridLayout->addWidget(grpWeb, 3, 0, 1, 3);

    textLabel7->setBuddy(txtMapFilePath);
    textLabel1->setBuddy(txtMapName);
    textLabel2_2->setBuddy(txtMapHeight);
    textLabel3->setBuddy(cmbMapUnits);
    textLabel4->setBuddy(cmbMapImageType);
    textLabel6->setBuddy(txtMinScale);
    textLabel6_2->setBuddy(txtMaxScale);
    textLabel2->setBuddy(txtMapWidth);
    textLabel5->setBuddy(txtWebHeader);
    textLabel5_3->setBuddy(txtWebFooter);
    textLabel5_2->setBuddy(txtWebTemplate);
    QWidget::setTabOrder(txtMapFilePath, btnChooseFile);
    QWidget::setTabOrder(btnChooseFile, chkExpLayersOnly);
    QWidget::setTabOrder(chkExpLayersOnly, txtMapName);
    QWidget::setTabOrder(txtMapName, txtMapWidth);
    QWidget::setTabOrder(txtMapWidth, txtMapHeight);
    QWidget::setTabOrder(txtMapHeight, cmbMapUnits);
    QWidget::setTabOrder(cmbMapUnits, cmbMapImageType);
    QWidget::setTabOrder(cmbMapImageType, txtMinScale);
    QWidget::setTabOrder(txtMinScale, txtMaxScale);
    QWidget::setTabOrder(txtMaxScale, txtWebHeader);
    QWidget::setTabOrder(txtWebHeader, txtWebTemplate);
    QWidget::setTabOrder(txtWebTemplate, txtWebFooter);
    QWidget::setTabOrder(txtWebFooter, buttonHelp);
    QWidget::setTabOrder(buttonHelp, buttonOk);
    QWidget::setTabOrder(buttonOk, buttonCancel);

    retranslateUi(QgsMapserverExportBase);

    QMetaObject::connectSlotsByName(QgsMapserverExportBase);
    } // setupUi

    void retranslateUi(QDialog *QgsMapserverExportBase)
    {
    QgsMapserverExportBase->setWindowTitle(QApplication::translate("QgsMapserverExportBase", "Export to Mapserver", 0, QApplication::UnicodeUTF8));
    textLabel7->setText(QApplication::translate("QgsMapserverExportBase", "Map file", 0, QApplication::UnicodeUTF8));
    chkExpLayersOnly->setText(QApplication::translate("QgsMapserverExportBase", "Export LAYER information only", 0, QApplication::UnicodeUTF8));
    buttonHelp->setText(QApplication::translate("QgsMapserverExportBase", "&Help", 0, QApplication::UnicodeUTF8));
    buttonHelp->setShortcut(QApplication::translate("QgsMapserverExportBase", "F1", 0, QApplication::UnicodeUTF8));
    buttonOk->setText(QApplication::translate("QgsMapserverExportBase", "&OK", 0, QApplication::UnicodeUTF8));
    buttonOk->setShortcut(QString());
    buttonCancel->setText(QApplication::translate("QgsMapserverExportBase", "&Cancel", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    btnChooseFile->setText(QApplication::translate("QgsMapserverExportBase", "...", 0, QApplication::UnicodeUTF8));
    grpMap->setTitle(QApplication::translate("QgsMapserverExportBase", "Map", 0, QApplication::UnicodeUTF8));
    textLabel1->setToolTip(QString());
    textLabel1->setText(QApplication::translate("QgsMapserverExportBase", "Name", 0, QApplication::UnicodeUTF8));
    textLabel2_2->setText(QApplication::translate("QgsMapserverExportBase", "Height", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("QgsMapserverExportBase", "Units", 0, QApplication::UnicodeUTF8));
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
    textLabel6->setText(QApplication::translate("QgsMapserverExportBase", "MinScale", 0, QApplication::UnicodeUTF8));
    textLabel6_2->setText(QApplication::translate("QgsMapserverExportBase", "MaxScale", 0, QApplication::UnicodeUTF8));
    txtMapName->setToolTip(QApplication::translate("QgsMapserverExportBase", "Prefix attached to map, scalebar and legend GIF filenames created using this MapFile. It should be kept short.", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("QgsMapserverExportBase", "Width", 0, QApplication::UnicodeUTF8));
    grpWeb->setTitle(QApplication::translate("QgsMapserverExportBase", "Web Interface Definition", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("QgsMapserverExportBase", "Header", 0, QApplication::UnicodeUTF8));
    textLabel5_3->setText(QApplication::translate("QgsMapserverExportBase", "Footer", 0, QApplication::UnicodeUTF8));
    textLabel5_2->setText(QApplication::translate("QgsMapserverExportBase", "Template", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsMapserverExportBase);
    } // retranslateUi

};

namespace Ui {
    class QgsMapserverExportBase: public Ui_QgsMapserverExportBase {};
} // namespace Ui

#endif // UI_QGSMAPSERVEREXPORTBASE_H
