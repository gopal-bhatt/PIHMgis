/********************************************************************************
** Form generated from reading ui file 'pluginguibase.ui'
**
** Created: Tue Jun 22 23:11:52 2010
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_QgsNorthArrowPluginGuiBase
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabNorthArrowOptions;
    QWidget *tabProperties;
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout1;
    QLabel *textLabel6;
    QLabel *textLabel8;
    QCheckBox *cboxAutomatic;
    QCheckBox *cboxShow;
    QGridLayout *gridLayout2;
    QSlider *sliderRotation;
    QSpinBox *spinAngle;
    QComboBox *cboPlacement;
    QLabel *pixmapLabel;
    QWidget *tabIcon;
    QGridLayout *gridLayout3;
    QLineEdit *txtDirectory;
    QPushButton *btnBrowse;
    QListView *iconView;
    QLabel *txtHeading;
    QFrame *line1;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QgsNorthArrowPluginGuiBase)
    {
    if (QgsNorthArrowPluginGuiBase->objectName().isEmpty())
        QgsNorthArrowPluginGuiBase->setObjectName(QString::fromUtf8("QgsNorthArrowPluginGuiBase"));
    QgsNorthArrowPluginGuiBase->resize(457, 424);
    QgsNorthArrowPluginGuiBase->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(QgsNorthArrowPluginGuiBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(9);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabNorthArrowOptions = new QTabWidget(QgsNorthArrowPluginGuiBase);
    tabNorthArrowOptions->setObjectName(QString::fromUtf8("tabNorthArrowOptions"));
    tabNorthArrowOptions->setEnabled(true);
    tabNorthArrowOptions->setTabShape(QTabWidget::Rounded);
    tabProperties = new QWidget();
    tabProperties->setObjectName(QString::fromUtf8("tabProperties"));
    vboxLayout = new QVBoxLayout(tabProperties);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(0);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    gridLayout1 = new QGridLayout();
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(0);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textLabel6 = new QLabel(tabProperties);
    textLabel6->setObjectName(QString::fromUtf8("textLabel6"));

    gridLayout1->addWidget(textLabel6, 1, 0, 1, 1);

    textLabel8 = new QLabel(tabProperties);
    textLabel8->setObjectName(QString::fromUtf8("textLabel8"));

    gridLayout1->addWidget(textLabel8, 2, 0, 1, 1);

    cboxAutomatic = new QCheckBox(tabProperties);
    cboxAutomatic->setObjectName(QString::fromUtf8("cboxAutomatic"));
    cboxAutomatic->setChecked(true);

    gridLayout1->addWidget(cboxAutomatic, 4, 1, 1, 1);

    cboxShow = new QCheckBox(tabProperties);
    cboxShow->setObjectName(QString::fromUtf8("cboxShow"));
    cboxShow->setChecked(true);

    gridLayout1->addWidget(cboxShow, 3, 1, 1, 1);

    gridLayout2 = new QGridLayout();
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(0);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    sliderRotation = new QSlider(tabProperties);
    sliderRotation->setObjectName(QString::fromUtf8("sliderRotation"));
    sliderRotation->setMaximum(360);
    sliderRotation->setSingleStep(1);
    sliderRotation->setPageStep(10);
    sliderRotation->setOrientation(Qt::Horizontal);

    gridLayout2->addWidget(sliderRotation, 0, 0, 1, 1);

    spinAngle = new QSpinBox(tabProperties);
    spinAngle->setObjectName(QString::fromUtf8("spinAngle"));
    spinAngle->setMaximum(360);
    spinAngle->setSingleStep(1);
    spinAngle->setValue(0);

    gridLayout2->addWidget(spinAngle, 0, 1, 1, 1);


    gridLayout1->addLayout(gridLayout2, 1, 1, 1, 1);

    cboPlacement = new QComboBox(tabProperties);
    cboPlacement->setObjectName(QString::fromUtf8("cboPlacement"));

    gridLayout1->addWidget(cboPlacement, 2, 1, 1, 1);

    pixmapLabel = new QLabel(tabProperties);
    pixmapLabel->setObjectName(QString::fromUtf8("pixmapLabel"));
    pixmapLabel->setFrameShape(QFrame::Box);
    pixmapLabel->setScaledContents(false);
    pixmapLabel->setAlignment(Qt::AlignCenter);

    gridLayout1->addWidget(pixmapLabel, 0, 0, 1, 2);


    vboxLayout->addLayout(gridLayout1);

    tabNorthArrowOptions->addTab(tabProperties, QString());
    tabIcon = new QWidget();
    tabIcon->setObjectName(QString::fromUtf8("tabIcon"));
    gridLayout3 = new QGridLayout(tabIcon);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(0);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    txtDirectory = new QLineEdit(tabIcon);
    txtDirectory->setObjectName(QString::fromUtf8("txtDirectory"));

    gridLayout3->addWidget(txtDirectory, 0, 0, 1, 1);

    btnBrowse = new QPushButton(tabIcon);
    btnBrowse->setObjectName(QString::fromUtf8("btnBrowse"));

    gridLayout3->addWidget(btnBrowse, 0, 1, 1, 1);

    iconView = new QListView(tabIcon);
    iconView->setObjectName(QString::fromUtf8("iconView"));
    iconView->setViewMode(QListView::IconMode);

    gridLayout3->addWidget(iconView, 1, 0, 1, 2);

    tabNorthArrowOptions->addTab(tabIcon, QString());

    gridLayout->addWidget(tabNorthArrowOptions, 1, 2, 1, 1);

    txtHeading = new QLabel(QgsNorthArrowPluginGuiBase);
    txtHeading->setObjectName(QString::fromUtf8("txtHeading"));
    QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(txtHeading->sizePolicy().hasHeightForWidth());
    txtHeading->setSizePolicy(sizePolicy);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(24);
    font.setBold(false);
    font.setItalic(false);
    font.setUnderline(false);
    font.setWeight(50);
    font.setStrikeOut(false);
    txtHeading->setFont(font);
    txtHeading->setAlignment(Qt::AlignCenter);

    gridLayout->addWidget(txtHeading, 0, 2, 1, 1);

    line1 = new QFrame(QgsNorthArrowPluginGuiBase);
    line1->setObjectName(QString::fromUtf8("line1"));
    line1->setMaximumSize(QSize(2, 32767));
    line1->setFrameShape(QFrame::VLine);
    line1->setFrameShadow(QFrame::Sunken);
    line1->setFrameShape(QFrame::VLine);

    gridLayout->addWidget(line1, 0, 1, 2, 1);

    label = new QLabel(QgsNorthArrowPluginGuiBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setPixmap(QPixmap(QString::fromUtf8(":/northarrow.png")));

    gridLayout->addWidget(label, 0, 0, 2, 1);

    buttonBox = new QDialogButtonBox(QgsNorthArrowPluginGuiBase);
    buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
    buttonBox->setOrientation(Qt::Horizontal);
    buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

    gridLayout->addWidget(buttonBox, 2, 0, 1, 3);


    retranslateUi(QgsNorthArrowPluginGuiBase);
    QObject::connect(sliderRotation, SIGNAL(sliderMoved(int)), spinAngle, SLOT(setValue(int)));
    QObject::connect(spinAngle, SIGNAL(valueChanged(int)), sliderRotation, SLOT(setValue(int)));

    QMetaObject::connectSlotsByName(QgsNorthArrowPluginGuiBase);
    } // setupUi

    void retranslateUi(QDialog *QgsNorthArrowPluginGuiBase)
    {
    QgsNorthArrowPluginGuiBase->setWindowTitle(QApplication::translate("QgsNorthArrowPluginGuiBase", "North Arrow Plugin", 0, QApplication::UnicodeUTF8));
    textLabel6->setText(QApplication::translate("QgsNorthArrowPluginGuiBase", "Angle", 0, QApplication::UnicodeUTF8));
    textLabel8->setText(QApplication::translate("QgsNorthArrowPluginGuiBase", "Placement", 0, QApplication::UnicodeUTF8));
    cboxAutomatic->setToolTip(QString());
    cboxAutomatic->setWhatsThis(QString());
    cboxAutomatic->setText(QApplication::translate("QgsNorthArrowPluginGuiBase", "Set direction automatically", 0, QApplication::UnicodeUTF8));
    cboxShow->setText(QApplication::translate("QgsNorthArrowPluginGuiBase", "Enable North Arrow", 0, QApplication::UnicodeUTF8));
    sliderRotation->setToolTip(QString());
    cboPlacement->clear();
    cboPlacement->insertItems(0, QStringList()
     << QApplication::translate("QgsNorthArrowPluginGuiBase", "Top Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsNorthArrowPluginGuiBase", "Top Right", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsNorthArrowPluginGuiBase", "Bottom Left", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("QgsNorthArrowPluginGuiBase", "Bottom Right", 0, QApplication::UnicodeUTF8)
    );
    cboPlacement->setToolTip(QApplication::translate("QgsNorthArrowPluginGuiBase", "Placement on screen", 0, QApplication::UnicodeUTF8));
    pixmapLabel->setToolTip(QApplication::translate("QgsNorthArrowPluginGuiBase", "Preview of north arrow", 0, QApplication::UnicodeUTF8));
    tabNorthArrowOptions->setTabText(tabNorthArrowOptions->indexOf(tabProperties), QApplication::translate("QgsNorthArrowPluginGuiBase", "Properties", 0, QApplication::UnicodeUTF8));
    btnBrowse->setText(QApplication::translate("QgsNorthArrowPluginGuiBase", "Browse...", 0, QApplication::UnicodeUTF8));
    tabNorthArrowOptions->setTabText(tabNorthArrowOptions->indexOf(tabIcon), QApplication::translate("QgsNorthArrowPluginGuiBase", "Icon", 0, QApplication::UnicodeUTF8));
    txtHeading->setText(QApplication::translate("QgsNorthArrowPluginGuiBase", "North Arrow Plugin", 0, QApplication::UnicodeUTF8));
    label->setText(QString());
    Q_UNUSED(QgsNorthArrowPluginGuiBase);
    } // retranslateUi

};

namespace Ui {
    class QgsNorthArrowPluginGuiBase: public Ui_QgsNorthArrowPluginGuiBase {};
} // namespace Ui

#endif // UI_PLUGINGUIBASE_H
