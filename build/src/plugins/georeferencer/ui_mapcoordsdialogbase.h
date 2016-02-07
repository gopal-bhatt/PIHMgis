/********************************************************************************
** Form generated from reading ui file 'mapcoordsdialogbase.ui'
**
** Created: Tue Jun 22 23:12:33 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAPCOORDSDIALOGBASE_H
#define UI_MAPCOORDSDIALOGBASE_H

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
#include <QtGui/QVBoxLayout>

class Ui_MapCoordsDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QSpacerItem *spacerItem;
    QGridLayout *gridLayout;
    QLabel *textLabel1;
    QLabel *textLabel2;
    QLineEdit *leXCoord;
    QLineEdit *leYCoord;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QSpacerItem *spacerItem3;
    QHBoxLayout *hboxLayout;
    QPushButton *btnPointFromCanvas;
    QSpacerItem *spacerItem4;
    QPushButton *buttonCancel;
    QPushButton *buttonOk;

    void setupUi(QDialog *MapCoordsDialogBase)
    {
    if (MapCoordsDialogBase->objectName().isEmpty())
        MapCoordsDialogBase->setObjectName(QString::fromUtf8("MapCoordsDialogBase"));
    MapCoordsDialogBase->resize(389, 203);
    MapCoordsDialogBase->setSizeGripEnabled(true);
    vboxLayout = new QVBoxLayout(MapCoordsDialogBase);
    vboxLayout->setSpacing(6);
    vboxLayout->setMargin(9);
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    label = new QLabel(MapCoordsDialogBase);
    label->setObjectName(QString::fromUtf8("label"));
    label->setWordWrap(true);

    vboxLayout->addWidget(label);

    spacerItem = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

    vboxLayout->addItem(spacerItem);

    gridLayout = new QGridLayout();
    gridLayout->setSpacing(6);
    gridLayout->setMargin(0);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    textLabel1 = new QLabel(MapCoordsDialogBase);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));

    gridLayout->addWidget(textLabel1, 0, 1, 1, 1);

    textLabel2 = new QLabel(MapCoordsDialogBase);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));

    gridLayout->addWidget(textLabel2, 1, 1, 1, 1);

    leXCoord = new QLineEdit(MapCoordsDialogBase);
    leXCoord->setObjectName(QString::fromUtf8("leXCoord"));

    gridLayout->addWidget(leXCoord, 0, 2, 1, 1);

    leYCoord = new QLineEdit(MapCoordsDialogBase);
    leYCoord->setObjectName(QString::fromUtf8("leYCoord"));

    gridLayout->addWidget(leYCoord, 1, 2, 1, 1);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 0, 3, 2, 1);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem2, 0, 0, 2, 1);


    vboxLayout->addLayout(gridLayout);

    spacerItem3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem3);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setMargin(0);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    btnPointFromCanvas = new QPushButton(MapCoordsDialogBase);
    btnPointFromCanvas->setObjectName(QString::fromUtf8("btnPointFromCanvas"));
    btnPointFromCanvas->setIcon(QIcon(QString::fromUtf8(":/pencil.png")));
    btnPointFromCanvas->setIconSize(QSize(18, 18));
    btnPointFromCanvas->setCheckable(true);

    hboxLayout->addWidget(btnPointFromCanvas);

    spacerItem4 = new QSpacerItem(21, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem4);

    buttonCancel = new QPushButton(MapCoordsDialogBase);
    buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
    buttonCancel->setAutoDefault(true);

    hboxLayout->addWidget(buttonCancel);

    buttonOk = new QPushButton(MapCoordsDialogBase);
    buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
    buttonOk->setAutoDefault(true);
    buttonOk->setDefault(true);

    hboxLayout->addWidget(buttonOk);


    vboxLayout->addLayout(hboxLayout);

    QWidget::setTabOrder(leXCoord, leYCoord);
    QWidget::setTabOrder(leYCoord, buttonCancel);
    QWidget::setTabOrder(buttonCancel, buttonOk);

    retranslateUi(MapCoordsDialogBase);

    QMetaObject::connectSlotsByName(MapCoordsDialogBase);
    } // setupUi

    void retranslateUi(QDialog *MapCoordsDialogBase)
    {
    MapCoordsDialogBase->setWindowTitle(QApplication::translate("MapCoordsDialogBase", "Enter map coordinates", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("MapCoordsDialogBase", "Enter X and Y coordinates which correspond with the selected point on the image. Alternatively, click the button with icon of a pencil and then click a corresponding point on map canvas of QGIS to fill in coordinates of that point.", 0, QApplication::UnicodeUTF8));
    textLabel1->setText(QApplication::translate("MapCoordsDialogBase", "X:", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("MapCoordsDialogBase", "Y:", 0, QApplication::UnicodeUTF8));
    btnPointFromCanvas->setText(QApplication::translate("MapCoordsDialogBase", " from map canvas", 0, QApplication::UnicodeUTF8));
    buttonCancel->setText(QApplication::translate("MapCoordsDialogBase", "&Cancel", 0, QApplication::UnicodeUTF8));
    buttonCancel->setShortcut(QString());
    buttonOk->setText(QApplication::translate("MapCoordsDialogBase", "&OK", 0, QApplication::UnicodeUTF8));
    buttonOk->setShortcut(QString());
    Q_UNUSED(MapCoordsDialogBase);
    } // retranslateUi

};

namespace Ui {
    class MapCoordsDialogBase: public Ui_MapCoordsDialogBase {};
} // namespace Ui

#endif // UI_MAPCOORDSDIALOGBASE_H
