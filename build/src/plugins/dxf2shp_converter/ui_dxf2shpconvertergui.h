/********************************************************************************
** Form generated from reading ui file 'dxf2shpconvertergui.ui'
**
** Created: Tue Jun 22 23:13:09 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DXF2SHPCONVERTERGUI_H
#define UI_DXF2SHPCONVERTERGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>

class Ui_dxf2shpConverterGui
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name;
    QToolButton *btnBrowseForFile;
    QLabel *label_2;
    QLineEdit *dirout;
    QToolButton *btnBrowseOutputDir;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QRadioButton *polyline;
    QRadioButton *polygon;
    QRadioButton *point;
    QCheckBox *convertTextCheck;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *dxf2shpConverterGui)
    {
    if (dxf2shpConverterGui->objectName().isEmpty())
        dxf2shpConverterGui->setObjectName(QString::fromUtf8("dxf2shpConverterGui"));
    dxf2shpConverterGui->resize(500, 220);
    dxf2shpConverterGui->setMinimumSize(QSize(350, 220));
    dxf2shpConverterGui->setMaximumSize(QSize(500, 300));
    dxf2shpConverterGui->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(dxf2shpConverterGui);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(dxf2shpConverterGui);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    name = new QLineEdit(dxf2shpConverterGui);
    name->setObjectName(QString::fromUtf8("name"));

    gridLayout->addWidget(name, 0, 1, 1, 2);

    btnBrowseForFile = new QToolButton(dxf2shpConverterGui);
    btnBrowseForFile->setObjectName(QString::fromUtf8("btnBrowseForFile"));

    gridLayout->addWidget(btnBrowseForFile, 0, 3, 1, 1);

    label_2 = new QLabel(dxf2shpConverterGui);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    dirout = new QLineEdit(dxf2shpConverterGui);
    dirout->setObjectName(QString::fromUtf8("dirout"));

    gridLayout->addWidget(dirout, 1, 1, 1, 2);

    btnBrowseOutputDir = new QToolButton(dxf2shpConverterGui);
    btnBrowseOutputDir->setObjectName(QString::fromUtf8("btnBrowseOutputDir"));

    gridLayout->addWidget(btnBrowseOutputDir, 1, 3, 1, 1);

    groupBox = new QGroupBox(dxf2shpConverterGui);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
    groupBox->setSizePolicy(sizePolicy);
    groupBox->setMinimumSize(QSize(0, 50));
    gridLayout1 = new QGridLayout(groupBox);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    polyline = new QRadioButton(groupBox);
    polyline->setObjectName(QString::fromUtf8("polyline"));
    polyline->setChecked(true);

    gridLayout1->addWidget(polyline, 0, 0, 1, 1);

    polygon = new QRadioButton(groupBox);
    polygon->setObjectName(QString::fromUtf8("polygon"));

    gridLayout1->addWidget(polygon, 0, 1, 1, 1);

    point = new QRadioButton(groupBox);
    point->setObjectName(QString::fromUtf8("point"));

    gridLayout1->addWidget(point, 0, 2, 1, 1);


    gridLayout->addWidget(groupBox, 2, 0, 1, 4);

    convertTextCheck = new QCheckBox(dxf2shpConverterGui);
    convertTextCheck->setObjectName(QString::fromUtf8("convertTextCheck"));

    gridLayout->addWidget(convertTextCheck, 3, 0, 1, 2);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 3, 2, 1, 1);

    buttonBox = new QDialogButtonBox(dxf2shpConverterGui);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 4, 0, 1, 4);


    retranslateUi(dxf2shpConverterGui);
    QObject::connect(buttonBox, SIGNAL(accepted()), dxf2shpConverterGui, SLOT(accept()));
    QObject::connect(buttonBox, SIGNAL(rejected()), dxf2shpConverterGui, SLOT(reject()));

    QMetaObject::connectSlotsByName(dxf2shpConverterGui);
    } // setupUi

    void retranslateUi(QDialog *dxf2shpConverterGui)
    {
    dxf2shpConverterGui->setWindowTitle(QApplication::translate("dxf2shpConverterGui", "Dxf Importer", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("dxf2shpConverterGui", "Input Dxf file", 0, QApplication::UnicodeUTF8));
    btnBrowseForFile->setText(QApplication::translate("dxf2shpConverterGui", "...", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("dxf2shpConverterGui", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><span style=\" font-size:10pt;\">Output file</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    btnBrowseOutputDir->setText(QApplication::translate("dxf2shpConverterGui", "...", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("dxf2shpConverterGui", "Output file type", 0, QApplication::UnicodeUTF8));
    polyline->setText(QApplication::translate("dxf2shpConverterGui", "Polyline", 0, QApplication::UnicodeUTF8));
    polygon->setText(QApplication::translate("dxf2shpConverterGui", "Polygon", 0, QApplication::UnicodeUTF8));
    point->setText(QApplication::translate("dxf2shpConverterGui", "Point", 0, QApplication::UnicodeUTF8));
    convertTextCheck->setText(QApplication::translate("dxf2shpConverterGui", "Export text labels", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(dxf2shpConverterGui);
    } // retranslateUi

};

namespace Ui {
    class dxf2shpConverterGui: public Ui_dxf2shpConverterGui {};
} // namespace Ui

#endif // UI_DXF2SHPCONVERTERGUI_H
