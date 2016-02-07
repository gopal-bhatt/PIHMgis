#include "meshtemporal.h"
#include "ui_meshtemporal.h"

#include <QApplication>
#include <QMainWindow>

#include "7VisualAnalytics/QCustomPlot/qcustomplot.h"
#include "7VisualAnalytics/QCustomPlotMainWindow/qcustomplotmainwindow.h"

#include "0LibsIO/IOProjectFile.h"

MeshTemporal::MeshTemporal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MeshTemporal)
{
    ui->setupUi(this);

    QAction *PrintAction = new QAction(tr("&Save..."),this);
    PrintAction->setShortcut(tr("Ctrl+S"));
    connect(PrintAction,SIGNAL(triggered()),this,SLOT(on_pushButtonRun_clicked()));

    // ** Start: Set Defaults
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if ( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Open File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
    }
    QTextStream ProjectFileTextStream(&ProjectFile);
    QString ProjectFolder   = ProjectFileTextStream.readLine();
    QString ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();


    QStringList ModuleStringList;
    QString TempFileName;

    // **
    ModuleStringList = ReadModuleLine(ProjectFileName,tr("PIHMSimulation"));
    if ( ModuleStringList.length() > 0  )
    {
        TempFileName = ModuleStringList.at(4);
        ui->lineEditOutputDataFolder->setText(TempFileName);

        TempFileName = ModuleStringList.at(2);
        ui->lineEditDataKey->setText(TempFileName);
    }
    // ** End: Set Defaults


    // ** Start: Fill Form If Module Has Been Run Previously

    ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshTemporal"));

    if ( ModuleStringList.length() > 0 )
    {
        ui->lineEditOutputDataFolder->setText(ModuleStringList.at(1));
        ui->lineEditOutputDataFolder->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditDataKey->setText(ModuleStringList.at(2));
        ui->lineEditDataKey->setStyleSheet("color: rgb(0, 180, 0);");

        ui->lineEditModelSegments->setStyleSheet("color: rgb(0, 180, 0);");
        ui->lineEditModelSegments->setText(ModuleStringList.at(5));
    }

    verifyInputOutputFile();
    pushButtonSetFocus();
}

MeshTemporal::~MeshTemporal()
{
    delete ui;
}

void MeshTemporal::on_pushButtonOutputDataFolder_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Processing ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    LogsString = tr("");

    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if ( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Open File: </span>")+QDir::homePath()+"/.PIHMgis/OpenProject.txt"+tr("<br>"));
        ui->textBrowserLogs->setHtml(LogsString);
        ui->textBrowserLogs->repaint();
        return;
    }
    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();
    qDebug() << ProjectFolder;

    QString OutputDataFolder = QFileDialog::getExistingDirectory(this, "PIHM Input Data Folder", ProjectFolder+"/5PIHMSimulation", 0);

    if( OutputDataFolder != NULL )
    {
        ui->lineEditOutputDataFolder->setStyleSheet("color: black;");
        ui->lineEditOutputDataFolder->setText(OutputDataFolder);

        QStringList ModuleStringList;
        QString TempFileName;

        if( ui->lineEditDataKey->text() == NULL )
        {
            // ** Data Model INPUT File Name
            ModuleStringList = ReadModuleLine(ProjectFileName,tr("TINShapeLayer"));
            if ( ModuleStringList.length() > 0  )
            {
                TempFileName = ModuleStringList.at(3);
                TempFileName = TempFileName.right(TempFileName.length()-TempFileName.lastIndexOf("/")-1);

                TempFileName.replace( QString(".shp"), QString("") );
                if ( QFile(ui->lineEditOutputDataFolder->text()+"/"+TempFileName+".para").exists() )
                {
                    ui->lineEditDataKey->setText(TempFileName);
                }

            }

            ModuleStringList = ReadModuleLine(ProjectFileName,tr("MeshDataFile"));
            if ( ModuleStringList.length() > 0  )
            {
                TempFileName = ModuleStringList.at(9);
                if ( QFile(ui->lineEditOutputDataFolder->text()+"/"+TempFileName+".para").exists() )
                {
                    ui->lineEditDataKey->setText(TempFileName);
                }
            }
        }
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    pushButtonSetFocus();
}

void MeshTemporal::on_comboBoxModelSegments_currentIndexChanged(int index)
{
    if ( index == 2 || index == 4 )
        ui->lineEditModelSegments->hide();
    else
        ui->lineEditModelSegments->show();
    pushButtonSetFocus();
}

void MeshTemporal::on_lineEditOutputDataFolder_textChanged(const QString &arg1)
{
    ui->lineEditOutputDataFolder->setStyleSheet("color: rgb(0, 0, 0);");
    verifyInputOutputFile();
}

void MeshTemporal::on_lineEditDataKey_textChanged(const QString &arg1)
{
    ui->lineEditDataKey->setStyleSheet("color: rgb(0, 0, 0);");
    verifyInputOutputFile();
}

void MeshTemporal::on_lineEditModelSegments_textChanged(const QString &arg1)
{
    ui->lineEditModelSegments->setStyleSheet("color: rgb(0, 0, 0);");
}

void MeshTemporal::on_comboBoxPlotVariable_currentIndexChanged(int index)
{
    verifyInputOutputFile();
}

void MeshTemporal::verifyInputOutputFile()
{
    LogsString = tr("");
    if ( ! QDir(ui->lineEditOutputDataFolder->text()).exists() )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Folder Does Not Exist ... </span>")+ui->lineEditOutputDataFolder->text()+tr("<br>"));
    }
    else
    {
        LogsString.append(tr("Output Folder Exists ... ")+ui->lineEditOutputDataFolder->text()+tr("<br>"));

    }


    QString FileName, Extension;

    FileName = ui->lineEditOutputDataFolder->text() + "/" + ui->lineEditDataKey->text();
    Extension = tr(".para");

    if ( ! QFile(FileName + Extension).exists() )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Para File Does Not Exist ... </span>")+ FileName + Extension +tr("<br>"));
    }
    else
    {
        LogsString.append(tr("Para File Exists ... ")+ FileName + Extension +tr("<br>"));

    }

    QStringList Extensions;
    if (ui->comboBoxPlotVariable->currentIndex() ==  0) Extensions << ".surf.dat";  //surface storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  1) Extensions << ".unsat.dat"; //soil moisture storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  2) Extensions << ".gw.dat";    //groundwater storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) Extensions << ".is.dat";    //interception strorage
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) Extensions << ".snow.dat";  //snowpack storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et0.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et1.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et2.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  6) Extensions << ".et0.dat";   //interception loss
    if (ui->comboBoxPlotVariable->currentIndex() ==  7) Extensions << ".et1.dat";   //transpiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  8) Extensions << ".et2.dat";   //evaporation
    if (ui->comboBoxPlotVariable->currentIndex() ==  9) Extensions << ".infil.dat"; //infiltration
    if (ui->comboBoxPlotVariable->currentIndex() == 10) Extensions << ".rech.dat";  //recharge

    for( int i=0; i < Extensions.length(); i++)
    {
        if ( ! QFile(FileName + Extensions.at(i)).exists() )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Output File Does Not Exist ... </span>")+ FileName + Extensions.at(i) +tr("<br>"));
        }
        else
        {
            LogsString.append(tr("Output File Exists ... ")+ FileName + Extensions.at(i) +tr("<br>"));
        }
    }

    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
    //pushButtonSetFocus();
}

void MeshTemporal::pushButtonSetFocus()
{
    ui->pushButtonOutputDataFolder->setDefault(false);

    if (ui->lineEditOutputDataFolder->text() == NULL)
    {
        ui->pushButtonOutputDataFolder->setDefault(true);
        ui->pushButtonOutputDataFolder->setFocus();
        return;
    }

    if (ui->lineEditDataKey->text() == NULL)
    {
        ui->lineEditDataKey->setFocus();
        return;
    }

    if (ui->comboBoxModelSegments->currentIndex() == 0 || ui->comboBoxModelSegments->currentIndex() == 1 || ui->comboBoxModelSegments->currentIndex() == 3)
    {
        if (ui->lineEditModelSegments->text() == NULL)
        {
            ui->lineEditModelSegments->setFocus();
            return;
        }
    }

    ui->pushButtonRun->setDefault(true);
    ui->pushButtonRun->setFocus();
}

void MeshTemporal::on_pushButtonRun_clicked()
{
    LogsString = tr("");
    LogsString.append(tr("Mesh Time Series Processing Started ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text);
    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();


    LogsString.append(tr("Verifying Data Files ... <br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    int runFlag = 1;

    QStringList Extensions;
    if (ui->comboBoxPlotVariable->currentIndex() ==  0) Extensions << ".surf.dat";  //surface storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  1) Extensions << ".unsat.dat"; //soil moisture storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  2) Extensions << ".gw.dat";    //groundwater storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) Extensions << ".is.dat";    //interception strorage
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) Extensions << ".snow.dat";  //snowpack storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et0.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et1.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) Extensions << ".et2.dat";   //evapotranspiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  6) Extensions << ".et0.dat";   //interception loss
    if (ui->comboBoxPlotVariable->currentIndex() ==  7) Extensions << ".et1.dat";   //transpiration
    if (ui->comboBoxPlotVariable->currentIndex() ==  8) Extensions << ".et2.dat";   //evaporation
    if (ui->comboBoxPlotVariable->currentIndex() ==  9) Extensions << ".infil.dat"; //infiltration
    if (ui->comboBoxPlotVariable->currentIndex() == 10) Extensions << ".rech.dat";  //recharge

    QString PlotParameter;
    if (ui->comboBoxPlotVariable->currentIndex() ==  0) PlotParameter = "Surface Storage"; //outflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  1) PlotParameter = "Soil Moisture Storage"; //inflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  2) PlotParameter = "Groundwater Storage";    //storage
    if (ui->comboBoxPlotVariable->currentIndex() ==  3) PlotParameter = "Interception Storage"; //surfaceflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  4) PlotParameter = "Snowpack Storage"; //baseflow
    if (ui->comboBoxPlotVariable->currentIndex() ==  5) PlotParameter = "Evapotranspiration"; //surfaceflow left
    if (ui->comboBoxPlotVariable->currentIndex() ==  6) PlotParameter = "Interception Loss"; //surfaceflow right
    if (ui->comboBoxPlotVariable->currentIndex() ==  7) PlotParameter = "Transpiration"; //baseflow left
    if (ui->comboBoxPlotVariable->currentIndex() ==  8) PlotParameter = "Evaporation from Ground"; //baseflow right
    if (ui->comboBoxPlotVariable->currentIndex() ==  9) PlotParameter = "Infiltration"; //seepage bed
    if (ui->comboBoxPlotVariable->currentIndex() == 10) PlotParameter = "Recharge"; //bed outflow


    QString OutputFileName;
    int NUMELEMENTS, NUMRIVERS;
    int TIMESTEP; QString TIMESTEPUNITS;
    int NGRAPHS, NTIMESTEPS;


    NTIMESTEPS = 999999999;
    if( ui->lineEditOutputDataFolder->text() == NULL || ui->lineEditDataKey->text() == NULL )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Input Folder and/or Data Key Input(s) Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    else
    {
        OutputFileName = ui->lineEditOutputDataFolder->text() + "/" + ui->lineEditDataKey->text();

        if ( ! CheckFileAccess(OutputFileName+".mesh", "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+OutputFileName+".mesh"+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(OutputFileName+".mesh" + " ... <br>");

        if ( ! CheckFileAccess(OutputFileName+".riv", "ReadOnly") )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+OutputFileName+".riv"+tr("<br>"));
            runFlag = 0;
        }
        LogsString.append(OutputFileName+".riv" + " ... <br>");

        for (int i=0; i<Extensions.length(); i++)
        {
            if ( ! CheckFileAccess(OutputFileName+Extensions.at(i), "ReadOnly") )
            {
                LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Read Access ... </span>")+OutputFileName+Extensions.at(i)+tr("<br>"));
                runFlag = 0;
            }
            LogsString.append(OutputFileName+Extensions.at(i) + " ... <br>");
        }

        QFile TempFile;
        QTextStream TempFileTextStream;

        TempFile.setFileName(OutputFileName+".mesh");
        TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
        TempFileTextStream.setDevice(&TempFile);
        TempFileTextStream >> NUMELEMENTS;
        TempFile.close();
        LogsString.append(tr("Number of Elements = ")+QString::number(NUMELEMENTS)+tr("<br>"));
        if ( NUMELEMENTS < 1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Number of Elements Less Than One... </span>")+QString::number(NUMELEMENTS)+tr("<br>"));
            runFlag = 0;
        }

        TempFile.setFileName(OutputFileName+".riv");
        TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
        TempFileTextStream.setDevice(&TempFile);
        TempFileTextStream >> NUMRIVERS;
        TempFile.close();
        LogsString.append(tr("Number of River Segments = ")+QString::number(NUMRIVERS)+tr("<br>"));
        if ( NUMRIVERS < 1 )
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">WARNING: Number of River Segments Less Than One... </span>")+QString::number(NUMRIVERS)+tr("<br>"));
            //runFlag = 0;
        }


        int TIMESTEP1, TIMESTEP2;
        double TempDouble;
        QString TempQString;
        TempFile.setFileName(OutputFileName+Extensions.at(0));
        TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
        TempFileTextStream.setDevice(&TempFile);

        TempFileTextStream >> TIMESTEP1;
        qDebug() << "Time Step1 = " << TIMESTEP1 << "\n";
        for (int i=0; i<NUMELEMENTS+1; i++)
        {
            TempFileTextStream >> TempDouble;
            qDebug() << TempDouble << ", ";
        }
        TempFileTextStream >> TIMESTEP2;
        qDebug() << "\nTime Step2 = " << TIMESTEP2 << "\n";
        TempFile.close();

        TIMESTEP = TIMESTEP2 - TIMESTEP1;
        qDebug() << "Time Step = " << TIMESTEP << "\n";
        if ( TIMESTEP/(60*24*365)      >= 1 ) { TIMESTEP = 60*24*365; TIMESTEPUNITS = tr("years");   }
        else if ( TIMESTEP/(60*24*30)  >= 1 ) { TIMESTEP = 60*24*30;  TIMESTEPUNITS = tr("months");  }
        else if ( TIMESTEP/(60*24*7)   >= 1 ) { TIMESTEP = 60*24*7;   TIMESTEPUNITS = tr("weeks");   }
        else if ( TIMESTEP/(60*24*1)   >= 1 ) { TIMESTEP = 60*24*1;   TIMESTEPUNITS = tr("days");    }
        else if ( TIMESTEP/(60*1*1)    >= 1 ) { TIMESTEP = 60*1*1;    TIMESTEPUNITS = tr("hours");   }
        else if ( TIMESTEP/(1*1*1)     >= 1 ) { TIMESTEP = 1*1*1;     TIMESTEPUNITS = tr("minutes"); }

        LogsString.append(tr("TIME STEP UNIT = ")+TIMESTEPUNITS+tr("<br>"));

        int TempInt;
        for (int i=0; i<Extensions.length(); i++)
        {
            TempInt = 0;
            TempFile.setFileName(OutputFileName+Extensions.at(i));
            TempFile.open(QIODevice::ReadOnly | QIODevice::Text);
            TempFileTextStream.setDevice(&TempFile);
            while ( ! TempFileTextStream.atEnd() )
            {
                TempQString = TempFileTextStream.readLine();
                TempInt++;
            }
            if (TempInt < NTIMESTEPS) NTIMESTEPS = TempInt;
            TempFile.close();
        }
        LogsString.append(tr("NUMBER OF TIMESTEP = ")+QString::number(NTIMESTEPS)+tr("<br>"));
        if (NTIMESTEPS < 2)
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Not enough data points to plot </span>")+tr("<br>"));
            runFlag = 0;
        }
    }

    qDebug() << "Current Index Model Segments " << ui->comboBoxModelSegments->currentIndex() << "\n";
    QStringList ModelSegments;
    if ( ui->comboBoxModelSegments->currentIndex() == 2 || ui->comboBoxModelSegments->currentIndex() == 4 )
    {
        for (int i=1; i<=NUMELEMENTS; i++)
            ModelSegments << QString::number(i);
    }
    else
    {
        ModelSegments = ui->lineEditModelSegments->text().split(QRegExp("\\s+"),QString::SkipEmptyParts);
    }
    qDebug() << "Number of Segments " << ModelSegments.length() << "\n";

    NGRAPHS = ModelSegments.length();
    if ( NGRAPHS < 1 )
    {
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Model Segments Input Missing </span>")+tr("<br>"));
        runFlag = 0;
    }
    for (int i=0; i<NGRAPHS; i++)
    {
        if(ModelSegments.at(i).toInt() > NUMELEMENTS)
        {
            LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Segment ID greater than Max Segments (")+QString::number(NUMELEMENTS)+tr(")</span>")+tr("<br>"));
            runFlag = 0;
        }
    }
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();

    if (runFlag == 1)
    {
        ui->pushButtonRun->setText("Running");

        // 2. TODO SET LABELS
        QString XLabel, YLabel, WindowTitle;
        WindowTitle = tr("Mesh Time Series  ::  ") + PlotParameter;
        XLabel = tr("Time steps (")+TIMESTEPUNITS+tr(")");
        if ( PlotParameter.contains("Storage",Qt::CaseInsensitive) )
            //YLabel = PlotParameter + tr(" (m)");
            YLabel = ui->comboBoxPlotVariable->currentText() + tr(" (m)");
        else
            //YLabel = PlotParameter + tr(" (cmd)");
            YLabel = ui->comboBoxPlotVariable->currentText() + tr(" (m/day)");

        QVector<QString> Legends(NGRAPHS);
        QVector<QVector<double>> datax(NGRAPHS), datay(NGRAPHS);
        for (int j=0; j<NGRAPHS; j++)
        {
            datax[j].resize(NTIMESTEPS);
            datay[j].resize(NTIMESTEPS);
        }

        for (int i=0; i<NGRAPHS; i++)
            Legends[i] = tr("Segment ") + ModelSegments.at(i);
        if(ui->comboBoxModelSegments->currentIndex() > 0)
            Legends[0] = ui->comboBoxModelSegments->currentText();


        //** READ DATA
        QFile DataFile;
        QTextStream DataFileTextStream;
        QString DataString;
        QStringList Data;
        for (int i=0; i<Extensions.length(); i++)
        {
            DataFile.setFileName(OutputFileName+Extensions.at(i));
            DataFile.open(QIODevice::ReadOnly | QIODevice::Text);
            DataFileTextStream.setDevice(&DataFile);
            int k=0;
            while ( ! DataFileTextStream.atEnd() )
            {
                DataString = DataFileTextStream.readLine();
                Data = DataString.split(QRegExp("\\s+"),QString::SkipEmptyParts);
                for (int j=0; j<NGRAPHS; j++)
                {
                    datax[j][k] = Data.at(0).toDouble() / TIMESTEP;
                    datay[j][k] = datay[j][k] + Data.at(ModelSegments.at(j).toInt()).toDouble();
                    qDebug() << i << "," << j << "," << k << "," << ModelSegments.at(j).toInt() << ", "<< datax[j][k] << "," << datay[j][k] << "\n";
                }
                k++;
            }
            DataFile.close();
        }
        /*
        for (int j=0; j<NGRAPHS; j++)
        {
            datax[j].resize(NTIMESTEPS);
            datay[j].resize(NTIMESTEPS);
            for (int i=0; i<NTIMESTEPS; i++)
            {
                datax[j][i] = j + i/50.0 - 1; // x goes from -1 to 1
                datay[j][i] = 10*datax[j][i]*datax[j][i]; // let's plot a quadratic function
            }
        }*/

        if ( ui->comboBoxModelSegments->currentIndex() != 0 )
        {
            if( NGRAPHS > 1 )
            {
                for (int i=0; i<NTIMESTEPS; i++)
                {
                    for (int j=1; j<NGRAPHS; j++)
                    {
                        datay[0][i] += datay[j][i];
                    }
                    if( ui->comboBoxModelSegments->currentIndex() == 1 || ui->comboBoxModelSegments->currentIndex() == 2)
                        datay[0][i] = datay[0][i] / NGRAPHS;
                }
            }
            NGRAPHS = 1;
        }



        QCustomPlotMainWindow *window = new QCustomPlotMainWindow;
        QCustomPlot *customPlot = new QCustomPlot;

        window->setCentralWidget(customPlot);

        QFont tickLabelFont = font();
        tickLabelFont.setPointSize(12);
        customPlot->xAxis->setTickLabelFont(tickLabelFont);
        customPlot->yAxis->setTickLabelFont(tickLabelFont);

        customPlot->xAxis2->setVisible(true);
        customPlot->yAxis2->setVisible(true);
        customPlot->xAxis2->setTicks(false);
        customPlot->yAxis2->setTicks(false);
        customPlot->xAxis2->setTickLabels(false);
        customPlot->yAxis2->setTickLabels(false);

        QPen gridPen = QPen();
        gridPen.setStyle(Qt::SolidLine);
        gridPen.setColor(QColor(200,200,200,255));
        //??gridPen.setWidthF(0.5);
        customPlot->xAxis->grid()->setPen(gridPen);
        customPlot->yAxis->grid()->setPen(gridPen);

        customPlot->xAxis->grid()->setSubGridVisible(true);
        customPlot->yAxis->grid()->setSubGridVisible(true);

        QFont legendFont = font();
        legendFont.setPointSize(11);
        customPlot->legend->setFont(legendFont);
        customPlot->legend->setVisible(true);

        // create graph and assign data to it:
        QVector<double> x(NTIMESTEPS), y(NTIMESTEPS);
        double xmin=9E9, xmax=-9E9, ymin=9E9, ymax=-9E9;
        for (int j=0; j<NGRAPHS; j++)
        {
            for (int i=0; i<NTIMESTEPS; i++)
            {
                x[i] = datax[j][i];
                y[i] = datay[j][i];
                if (x[i] < xmin) xmin = x[i];
                if (y[i] < ymin) ymin = y[i];
                if (x[i] > xmax) xmax = x[i];
                if (y[i] > ymax) ymax = y[i];
            }
            customPlot->addGraph();
            customPlot->graph(j)->setPen(QPen(QColor(rand()%255,rand()%255,rand()%255,255)));
            customPlot->graph(j)->setData(x, y);
            customPlot->graph(j)->setName(Legends[j]);
        }

        // give the axes some labels:
        QFont labelFont = font();
        labelFont.setPointSize(14);
        labelFont.setBold(true);
        labelFont.setCapitalization(QFont::AllUppercase);
        //labelFont.setCapitalization(QFont::SmallCaps);
        customPlot->xAxis->setLabelFont(labelFont);
        customPlot->yAxis->setLabelFont(labelFont);
        customPlot->xAxis->setLabel(XLabel);
        customPlot->yAxis->setLabel(YLabel);


        // set axes ranges, so we see all data:
        customPlot->xAxis->setRange(xmin, xmax);
        customPlot->yAxis->setRange(ymin, ymax);
        //customPlot->graph(0)->rescaleAxes();
        customPlot->replot();

        customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
        customPlot->setInteraction(QCP::iMultiSelect, true);

        ui->pushButtonRun->setText("Run");

        ProjectIOStringList << "MeshTemporal" << ui->lineEditOutputDataFolder->text() << ui->lineEditDataKey->text();
        ProjectIOStringList << QString::number(ui->comboBoxModelSegments->currentIndex());
        ProjectIOStringList << QString::number(ui->comboBoxPlotVariable->currentIndex());
        ProjectIOStringList << ui->lineEditModelSegments->text();
        WriteModuleLine(ProjectFileName, ProjectIOStringList);
        ProjectIOStringList.clear();

        //pushButtonSetFocus();
        ui->pushButtonRun->setDefault(false);
        ui->pushButtonClose->setDefault(true);
        ui->pushButtonClose->setFocus();

        window->setWindowTitle(WindowTitle);
        window->show();
    }
}

void MeshTemporal::on_pushButtonClose_clicked()
{
    close();
}

void MeshTemporal::on_pushButtonHelp_clicked()
{
    LogsString = tr("");
    if ( ! QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#Temporal_Analysis:_Mesh_Elements")) )
        LogsString.append(tr("<span style=\"color:#FF0000\">ERROR: Unable to Load HTTP Link ... </span>")+tr("<br>"));
    ui->textBrowserLogs->setHtml(LogsString);
    ui->textBrowserLogs->repaint();
}
