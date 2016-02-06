/********************************************************************************
** Form generated from reading ui file 'qgsgeorefwarpoptionsdialogbase.ui'
**
** Created: Wed Jun 11 19:10:51 2008
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSGEOREFWARPOPTIONSDIALOGBASE_H
#define UI_QGSGEOREFWARPOPTIONSDIALOGBASE_H

#include <Qt3Support/Q3MimeSourceFactory>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

class Ui_QgsGeorefWarpOptionsDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QComboBox *cmbResampling;
    QPushButton *pbnOK;
    QCheckBox *cbxZeroAsTrans;

    void setupUi(QDialog *QgsGeorefWarpOptionsDialogBase)
    {
    if (QgsGeorefWarpOptionsDialogBase->objectName().isEmpty())
        QgsGeorefWarpOptionsDialogBase->setObjectName(QString::fromUtf8("QgsGeorefWarpOptionsDialogBase"));
    QgsGeorefWarpOptionsDialogBase->resize(348, 103);
    gridLayout = new QGridLayout(QgsGeorefWarpOptionsDialogBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(10);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(QgsGeorefWarpOptionsDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

    cmbResampling = new QComboBox(QgsGeorefWarpOptionsDialogBase);
    cmbResampling->setObjectName(QString::fromUtf8("cmbResampling"));

    gridLayout->addWidget(cmbResampling, 0, 1, 1, 2);

    pbnOK = new QPushButton(QgsGeorefWarpOptionsDialogBase);
    pbnOK->setObjectName(QString::fromUtf8("pbnOK"));
    pbnOK->setDefault(true);

    gridLayout->addWidget(pbnOK, 2, 2, 1, 1);

    cbxZeroAsTrans = new QCheckBox(QgsGeorefWarpOptionsDialogBase);
    cbxZeroAsTrans->setObjectName(QString::fromUtf8("cbxZeroAsTrans"));
    cbxZeroAsTrans->setChecked(false);

    gridLayout->addWidget(cbxZeroAsTrans, 1, 0, 1, 2);


    retranslateUi(QgsGeorefWarpOptionsDialogBase);

    cmbResampling->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(QgsGeorefWarpOptionsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *QgsGeorefWarpOptionsDialogBase)
    {
    QgsGeorefWarpOptionsDialogBase->setWindowTitle(QApplication::translate("QgsGeorefWarpOptionsDialogBase", "Warp options", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("QgsGeorefWarpOptionsDialogBase", "Resampling method:", 0, QApplication::UnicodeUTF8));
    cmbResampling->clear();
    cmbResampling->insertItems(0, QStringList()
     << QApplication::translate("QgsGeorefWarpOptionsDialogBase", "Nearest neighbour", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsGeorefWarpOptionsDialogBase", "Linear", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsGeorefWarpOptionsDialogBase", "Cubic", 0, QApplication::UnicodeUTF8)
    );
    pbnOK->setText(QApplication::translate("QgsGeorefWarpOptionsDialogBase", "OK", 0, QApplication::UnicodeUTF8));
    cbxZeroAsTrans->setText(QApplication::translate("QgsGeorefWarpOptionsDialogBase", "Use 0 for transparency when needed", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsGeorefWarpOptionsDialogBase);
    } // retranslateUi

};

namespace Ui {
    class QgsGeorefWarpOptionsDialogBase: public Ui_QgsGeorefWarpOptionsDialogBase {};
} // namespace Ui

#endif // UI_QGSGEOREFWARPOPTIONSDIALOGBASE_H
