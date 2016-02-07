/*
Query builder for PostgreSQL layers (using PostGIS)	
*/

/********************************************************************************
** Form generated from reading ui file 'qgspgquerybuilderbase.ui'
**
** Created: Tue Jun 22 23:03:11 2010
**      by: Qt User Interface Compiler version 4.3.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QGSPGQUERYBUILDERBASE_H
#define UI_QGSPGQUERYBUILDERBASE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>

class Ui_QgsPgQueryBuilderBase
{
public:
    QGridLayout *gridLayout;
    QLabel *lblDataUri;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QListView *lstFields;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QListView *lstValues;
    QPushButton *btnSampleValues;
    QPushButton *btnGetAllValues;
    QGroupBox *groupBox4;
    QGridLayout *gridLayout3;
    QPushButton *btnEqual;
    QPushButton *btnLessThan;
    QPushButton *btnNot;
    QPushButton *btnOr;
    QPushButton *btnAnd;
    QPushButton *btnPct;
    QPushButton *btnIn;
    QPushButton *btnNotIn;
    QPushButton *btnNotEqual;
    QPushButton *btnGreaterThan;
    QPushButton *btnLike;
    QPushButton *btnILike;
    QPushButton *btnGreaterEqual;
    QPushButton *btnLessEqual;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout4;
    QTextEdit *txtSQL;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnClear;
    QPushButton *btnTest;
    QPushButton *btnOk;
    QPushButton *Cancel;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *QgsPgQueryBuilderBase)
    {
    if (QgsPgQueryBuilderBase->objectName().isEmpty())
        QgsPgQueryBuilderBase->setObjectName(QString::fromUtf8("QgsPgQueryBuilderBase"));
    QgsPgQueryBuilderBase->resize(645, 608);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(QgsPgQueryBuilderBase->sizePolicy().hasHeightForWidth());
    QgsPgQueryBuilderBase->setSizePolicy(sizePolicy);
    QgsPgQueryBuilderBase->setWindowIcon(QIcon());
    QgsPgQueryBuilderBase->setModal(true);
    gridLayout = new QGridLayout(QgsPgQueryBuilderBase);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    lblDataUri = new QLabel(QgsPgQueryBuilderBase);
    lblDataUri->setObjectName(QString::fromUtf8("lblDataUri"));

    gridLayout->addWidget(lblDataUri, 0, 0, 1, 2);

    groupBox1 = new QGroupBox(QgsPgQueryBuilderBase);
    groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
    groupBox1->setSizePolicy(sizePolicy1);
    gridLayout1 = new QGridLayout(groupBox1);
    gridLayout1->setSpacing(6);
    gridLayout1->setMargin(11);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    gridLayout1->setContentsMargins(11, 11, 11, 11);
    lstFields = new QListView(groupBox1);
    lstFields->setObjectName(QString::fromUtf8("lstFields"));

    gridLayout1->addWidget(lstFields, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox1, 1, 0, 1, 1);

    groupBox2 = new QGroupBox(QgsPgQueryBuilderBase);
    groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
    sizePolicy1.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
    groupBox2->setSizePolicy(sizePolicy1);
    gridLayout2 = new QGridLayout(groupBox2);
    gridLayout2->setSpacing(6);
    gridLayout2->setMargin(11);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    gridLayout2->setContentsMargins(11, 11, 11, 11);
    lstValues = new QListView(groupBox2);
    lstValues->setObjectName(QString::fromUtf8("lstValues"));
    lstValues->setAutoFillBackground(true);
    lstValues->setSelectionBehavior(QAbstractItemView::SelectRows);
    lstValues->setUniformItemSizes(true);

    gridLayout2->addWidget(lstValues, 0, 0, 1, 2);

    btnSampleValues = new QPushButton(groupBox2);
    btnSampleValues->setObjectName(QString::fromUtf8("btnSampleValues"));

    gridLayout2->addWidget(btnSampleValues, 1, 0, 1, 1);

    btnGetAllValues = new QPushButton(groupBox2);
    btnGetAllValues->setObjectName(QString::fromUtf8("btnGetAllValues"));

    gridLayout2->addWidget(btnGetAllValues, 1, 1, 1, 1);


    gridLayout->addWidget(groupBox2, 1, 1, 1, 1);

    groupBox4 = new QGroupBox(QgsPgQueryBuilderBase);
    groupBox4->setObjectName(QString::fromUtf8("groupBox4"));
    gridLayout3 = new QGridLayout(groupBox4);
    gridLayout3->setSpacing(6);
    gridLayout3->setMargin(11);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    gridLayout3->setContentsMargins(11, 11, 11, 11);
    btnEqual = new QPushButton(groupBox4);
    btnEqual->setObjectName(QString::fromUtf8("btnEqual"));

    gridLayout3->addWidget(btnEqual, 0, 0, 1, 1);

    btnLessThan = new QPushButton(groupBox4);
    btnLessThan->setObjectName(QString::fromUtf8("btnLessThan"));

    gridLayout3->addWidget(btnLessThan, 0, 1, 1, 1);

    btnNot = new QPushButton(groupBox4);
    btnNot->setObjectName(QString::fromUtf8("btnNot"));

    gridLayout3->addWidget(btnNot, 1, 6, 1, 1);

    btnOr = new QPushButton(groupBox4);
    btnOr->setObjectName(QString::fromUtf8("btnOr"));

    gridLayout3->addWidget(btnOr, 1, 5, 1, 1);

    btnAnd = new QPushButton(groupBox4);
    btnAnd->setObjectName(QString::fromUtf8("btnAnd"));

    gridLayout3->addWidget(btnAnd, 1, 4, 1, 1);

    btnPct = new QPushButton(groupBox4);
    btnPct->setObjectName(QString::fromUtf8("btnPct"));

    gridLayout3->addWidget(btnPct, 0, 4, 1, 1);

    btnIn = new QPushButton(groupBox4);
    btnIn->setObjectName(QString::fromUtf8("btnIn"));

    gridLayout3->addWidget(btnIn, 0, 5, 1, 1);

    btnNotIn = new QPushButton(groupBox4);
    btnNotIn->setObjectName(QString::fromUtf8("btnNotIn"));

    gridLayout3->addWidget(btnNotIn, 0, 6, 1, 1);

    btnNotEqual = new QPushButton(groupBox4);
    btnNotEqual->setObjectName(QString::fromUtf8("btnNotEqual"));

    gridLayout3->addWidget(btnNotEqual, 1, 2, 1, 1);

    btnGreaterThan = new QPushButton(groupBox4);
    btnGreaterThan->setObjectName(QString::fromUtf8("btnGreaterThan"));

    gridLayout3->addWidget(btnGreaterThan, 0, 2, 1, 1);

    btnLike = new QPushButton(groupBox4);
    btnLike->setObjectName(QString::fromUtf8("btnLike"));

    gridLayout3->addWidget(btnLike, 0, 3, 1, 1);

    btnILike = new QPushButton(groupBox4);
    btnILike->setObjectName(QString::fromUtf8("btnILike"));

    gridLayout3->addWidget(btnILike, 1, 3, 1, 1);

    btnGreaterEqual = new QPushButton(groupBox4);
    btnGreaterEqual->setObjectName(QString::fromUtf8("btnGreaterEqual"));

    gridLayout3->addWidget(btnGreaterEqual, 1, 1, 1, 1);

    btnLessEqual = new QPushButton(groupBox4);
    btnLessEqual->setObjectName(QString::fromUtf8("btnLessEqual"));

    gridLayout3->addWidget(btnLessEqual, 1, 0, 1, 1);


    gridLayout->addWidget(groupBox4, 2, 0, 1, 2);

    groupBox3 = new QGroupBox(QgsPgQueryBuilderBase);
    groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
    groupBox3->setMaximumSize(QSize(32767, 116));
    gridLayout4 = new QGridLayout(groupBox3);
    gridLayout4->setSpacing(6);
    gridLayout4->setMargin(11);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    gridLayout4->setContentsMargins(11, 11, 11, 11);
    txtSQL = new QTextEdit(groupBox3);
    txtSQL->setObjectName(QString::fromUtf8("txtSQL"));

    gridLayout4->addWidget(txtSQL, 0, 0, 1, 1);


    gridLayout->addWidget(groupBox3, 3, 0, 1, 2);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setSpacing(6);
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    hboxLayout->setContentsMargins(11, 11, 11, 11);
    spacerItem = new QSpacerItem(30, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem);

    btnClear = new QPushButton(QgsPgQueryBuilderBase);
    btnClear->setObjectName(QString::fromUtf8("btnClear"));
    btnClear->setDefault(false);

    hboxLayout->addWidget(btnClear);

    btnTest = new QPushButton(QgsPgQueryBuilderBase);
    btnTest->setObjectName(QString::fromUtf8("btnTest"));
    btnTest->setDefault(false);

    hboxLayout->addWidget(btnTest);

    btnOk = new QPushButton(QgsPgQueryBuilderBase);
    btnOk->setObjectName(QString::fromUtf8("btnOk"));
    btnOk->setDefault(true);

    hboxLayout->addWidget(btnOk);

    Cancel = new QPushButton(QgsPgQueryBuilderBase);
    Cancel->setObjectName(QString::fromUtf8("Cancel"));

    hboxLayout->addWidget(Cancel);

    spacerItem1 = new QSpacerItem(30, 21, QSizePolicy::Fixed, QSizePolicy::Minimum);

    hboxLayout->addItem(spacerItem1);


    gridLayout->addLayout(hboxLayout, 4, 0, 1, 2);

    QWidget::setTabOrder(btnSampleValues, btnGetAllValues);
    QWidget::setTabOrder(btnGetAllValues, btnEqual);
    QWidget::setTabOrder(btnEqual, btnLessThan);
    QWidget::setTabOrder(btnLessThan, btnGreaterThan);
    QWidget::setTabOrder(btnGreaterThan, btnLike);
    QWidget::setTabOrder(btnLike, btnPct);
    QWidget::setTabOrder(btnPct, btnIn);
    QWidget::setTabOrder(btnIn, btnNotIn);
    QWidget::setTabOrder(btnNotIn, btnLessEqual);
    QWidget::setTabOrder(btnLessEqual, btnGreaterEqual);
    QWidget::setTabOrder(btnGreaterEqual, btnNotEqual);
    QWidget::setTabOrder(btnNotEqual, btnILike);
    QWidget::setTabOrder(btnILike, btnAnd);
    QWidget::setTabOrder(btnAnd, btnOr);
    QWidget::setTabOrder(btnOr, btnNot);
    QWidget::setTabOrder(btnNot, btnClear);
    QWidget::setTabOrder(btnClear, btnTest);
    QWidget::setTabOrder(btnTest, btnOk);
    QWidget::setTabOrder(btnOk, Cancel);

    retranslateUi(QgsPgQueryBuilderBase);
    QObject::connect(Cancel, SIGNAL(clicked()), QgsPgQueryBuilderBase, SLOT(reject()));

    QMetaObject::connectSlotsByName(QgsPgQueryBuilderBase);
    } // setupUi

    void retranslateUi(QDialog *QgsPgQueryBuilderBase)
    {
    QgsPgQueryBuilderBase->setWindowTitle(QApplication::translate("QgsPgQueryBuilderBase", "PostgreSQL Query Builder", 0, QApplication::UnicodeUTF8));
    lblDataUri->setText(QApplication::translate("QgsPgQueryBuilderBase", "Datasource", 0, QApplication::UnicodeUTF8));
    groupBox1->setTitle(QApplication::translate("QgsPgQueryBuilderBase", "Fields", 0, QApplication::UnicodeUTF8));
    lstFields->setWhatsThis(QApplication::translate("QgsPgQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of fields in this vector file</p></body></html>", 0, QApplication::UnicodeUTF8));
    groupBox2->setTitle(QApplication::translate("QgsPgQueryBuilderBase", "Values", 0, QApplication::UnicodeUTF8));
    lstValues->setWhatsThis(QApplication::translate("QgsPgQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">List of values for the current field.</p></body></html>", 0, QApplication::UnicodeUTF8));
    btnSampleValues->setToolTip(QApplication::translate("QgsPgQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Take a <span style=\" font-weight:600;\">sample</span> of records in the vector file</p></body></html>", 0, QApplication::UnicodeUTF8));
    btnSampleValues->setText(QApplication::translate("QgsPgQueryBuilderBase", "Sample", 0, QApplication::UnicodeUTF8));
    btnGetAllValues->setToolTip(QApplication::translate("QgsPgQueryBuilderBase", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Retrieve <span style=\" font-weight:600;\">all</span> the record in the vector file (<span style=\" font-style:italic;\">if the table is big, the operation can consume some time</span>)</p></body></html>", 0, QApplication::UnicodeUTF8));
    btnGetAllValues->setText(QApplication::translate("QgsPgQueryBuilderBase", "All", 0, QApplication::UnicodeUTF8));
    groupBox4->setTitle(QApplication::translate("QgsPgQueryBuilderBase", "Operators", 0, QApplication::UnicodeUTF8));
    btnEqual->setText(QApplication::translate("QgsPgQueryBuilderBase", "=", 0, QApplication::UnicodeUTF8));
    btnLessThan->setText(QApplication::translate("QgsPgQueryBuilderBase", "<", 0, QApplication::UnicodeUTF8));
    btnNot->setText(QApplication::translate("QgsPgQueryBuilderBase", "NOT", 0, QApplication::UnicodeUTF8));
    btnOr->setText(QApplication::translate("QgsPgQueryBuilderBase", "OR", 0, QApplication::UnicodeUTF8));
    btnAnd->setText(QApplication::translate("QgsPgQueryBuilderBase", "AND", 0, QApplication::UnicodeUTF8));
    btnPct->setText(QApplication::translate("QgsPgQueryBuilderBase", "%", 0, QApplication::UnicodeUTF8));
    btnIn->setText(QApplication::translate("QgsPgQueryBuilderBase", "IN", 0, QApplication::UnicodeUTF8));
    btnNotIn->setText(QApplication::translate("QgsPgQueryBuilderBase", "NOT IN", 0, QApplication::UnicodeUTF8));
    btnNotEqual->setText(QApplication::translate("QgsPgQueryBuilderBase", "!=", 0, QApplication::UnicodeUTF8));
    btnGreaterThan->setText(QApplication::translate("QgsPgQueryBuilderBase", ">", 0, QApplication::UnicodeUTF8));
    btnLike->setText(QApplication::translate("QgsPgQueryBuilderBase", "LIKE", 0, QApplication::UnicodeUTF8));
    btnILike->setText(QApplication::translate("QgsPgQueryBuilderBase", "ILIKE", 0, QApplication::UnicodeUTF8));
    btnGreaterEqual->setText(QApplication::translate("QgsPgQueryBuilderBase", ">=", 0, QApplication::UnicodeUTF8));
    btnLessEqual->setText(QApplication::translate("QgsPgQueryBuilderBase", "<=", 0, QApplication::UnicodeUTF8));
    groupBox3->setTitle(QApplication::translate("QgsPgQueryBuilderBase", "SQL where clause", 0, QApplication::UnicodeUTF8));
    btnClear->setText(QApplication::translate("QgsPgQueryBuilderBase", "Clear", 0, QApplication::UnicodeUTF8));
    btnTest->setText(QApplication::translate("QgsPgQueryBuilderBase", "Test", 0, QApplication::UnicodeUTF8));
    btnOk->setText(QApplication::translate("QgsPgQueryBuilderBase", "Ok", 0, QApplication::UnicodeUTF8));
    Cancel->setText(QApplication::translate("QgsPgQueryBuilderBase", "Cancel", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QgsPgQueryBuilderBase);
    } // retranslateUi

};

namespace Ui {
    class QgsPgQueryBuilderBase: public Ui_QgsPgQueryBuilderBase {};
} // namespace Ui

#endif // UI_QGSPGQUERYBUILDERBASE_H
