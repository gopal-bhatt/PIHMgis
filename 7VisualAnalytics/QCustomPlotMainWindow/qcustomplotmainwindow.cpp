#include "qcustomplotmainwindow.h"
#include "ui_qcustomplotmainwindow.h"


QCustomPlotMainWindow::QCustomPlotMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QCustomPlotMainWindow)
{
    this->setWindowTitle("Hello");
    ui->setupUi(this);

    QAction *PrintAction = new QAction(tr("&Save..."),this);
    PrintAction->setShortcut(tr("Ctrl+S"));
    connect(PrintAction,SIGNAL(triggered()),this,SLOT(SaveAsPDF()));

    ui->QCustomPlotWidget->setStyleSheet("border: 1px solid black");

}

QCustomPlotMainWindow::~QCustomPlotMainWindow()
{
    //QMainWindow::menuBar()->clear();
    //ui->menuSave->menuAction()->setVisible(false);
    delete ui;
}

void QCustomPlotMainWindow::SaveAsPDF()
{
    QString OutputFileName = QFileDialog::getSaveFileName(this, "Save As PDF File", tr("."), tr(".pdf"));
}
