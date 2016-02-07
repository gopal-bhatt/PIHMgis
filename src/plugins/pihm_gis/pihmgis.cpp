/***************************************************************************
  pihmgis.cpp 
  A Tightly Coupled GIS Interface to Penn State Integrated hydrologic Model (PIHM)
  -------------------
         begin                : [PluginDate]
         copyright            : [(C) Your Name and Date]
         email                : [Your Email]

 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
/*  $Id: plugin.cpp 6935 2007-05-07 14:29:51Z wonder $ */

//
// QGIS Specific includes
//
//#include "../../src/app/qgsabout.h"

#include <qgisinterface.h>
#include <qgisgui.h>

#include "pihmgis.h"
#include "pihmgisgui.h"

//
// Qt4 Related Includes
//
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QThread>
#include <QDesktopServices>

#include "Project/DefineProject/defineproject.h"
#include "Project/OpenProject/openproject.h"
#include "Project/CloseProject/closeproject.h"
#include "Project/ImportProject/importproject.h"

#include "RasterProcessing/RunAllRaster/runallraster.h"
#include "RasterProcessing/FillPits/fillpits.h"
#include "RasterProcessing/FlowGrid/flowgrid.h"
#include "RasterProcessing/StreamGrid/streamgrid.h"
#include "RasterProcessing/LinkGrid/linkgrid.h"
#include "RasterProcessing/StreamPolyLine/streampolyline.h"
#include "RasterProcessing/CatchmentGrid/catchmentgrid.h"
#include "RasterProcessing/CatchmentPolygon/catchmentpolygon.h"

#include "VectorProcessing/Dissolve/dissolve.h"
#include "VectorProcessing/PolygonToPolyLine/polygontopolylinedialog.h"
#include "VectorProcessing/SimplifyLine/simplifylinedialog.h"
#include "VectorProcessing/SplitLine/splitlinedialog.h"
#include "VectorProcessing/MergeFeatures/mergefeaturesdialog.h"

#include "DomainDecomposition/RunAllDomain/runnalldomain.h"
#include "DomainDecomposition/GenerateShapeTopology/generateshapetopology.h"
#include "DomainDecomposition/RunTriangle/runtriangle.h"
#include "DomainDecomposition/CreateTINs/createtins.h"

#include "DataModelLoader/MeshFile/mshfile.h"
#include "DataModelLoader/AttFile/attfile.h"
#include "DataModelLoader/RivFile/rivfile.h"
#include "DataModelLoader/Parafile/parafile.h"
#include "DataModelLoader/SoilFile/soilfile.h"
#include "DataModelLoader/GeolFile/geolfile.h"
#include "DataModelLoader/LCFile/lcfile.h"
#include "DataModelLoader/CalibFile/calibfile.h"
#include "DataModelLoader/InitFile/initfile.h"
#include "DataModelLoader/IbcFile/ibcfile.h"

#include "RunPIHM/runpihm.h"
//#include "MyNewThread.h"
#include "Analysis/SpatialPlot/spatialplot.h"
#include "Analysis/TimeSeries/timeseries.h"

#include "Help/About/about.h"

#ifdef WIN32
#define QGISEXTERN extern "C" __declspec( dllexport )
#else
#define QGISEXTERN extern "C"
#endif

static const char * const sIdent = "$Id: plugin.cpp 6935 2007-05-07 14:29:51Z wonder $";
static const QString sName = QObject::tr("PIHMgis");
static const QString sDescription = QObject::tr("A Tightly Coupled GIS Interface to Penn State Integrated hydrologic Model (PIHM)");
static const QString sPluginVersion = QObject::tr("Version 0.1");
static const QgisPlugin::PLUGINTYPE sPluginType = QgisPlugin::UI;

//////////////////////////////////////////////////////////////////////
//
// THE FOLLOWING METHODS ARE MANDATORY FOR ALL PLUGINS
//
//////////////////////////////////////////////////////////////////////

/**
 * Constructor for the plugin. The plugin is passed a pointer 
 * an interface object that provides access to exposed functions in QGIS.
 * @param theQGisInterface - Pointer to the QGIS interface object
 */
PIHMgis::PIHMgis(QgisInterface * theQgisInterface):
                 QgisPlugin(sName,sDescription,sPluginVersion,sPluginType),
                 mQGisIface(theQgisInterface)
{
}

PIHMgis::~PIHMgis()
{

}

/*
 * Initialize the GUI interface for the plugin - this is only called once when the plugin is 
 * added to the plugin registry in the QGIS application.
 */
void PIHMgis::initGui()
{
/*
  // Create the action for tool
  mQActionPointer = new QAction(QIcon(":/pihmgis/pihmgis.png"),"PIHMgis", this);
  // Set the what's this text
  mQActionPointer->setWhatsThis(tr("Replace this with a short description of the what the plugin does"));
  // Connect the action to the run
  connect(mQActionPointer, SIGNAL(activated()), this, SLOT(run()));
  // Add the toolbar
  mToolBarPointer = new QToolBar(mQGisIface->getMainWindow(), "PIHMgis");
  mToolBarPointer->setLabel("PIHMgis");
  // Add the icon to the toolbar
  mQGisIface->addToolBarIcon(mQActionPointer);
  mQGisIface->addPluginMenu("&PIHMgis", mQActionPointer);
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* projMenu = new QMenu("&PIHMgis-Project");
  projMenu->addAction("New Project", this, SLOT(runDefineProject()));
  projMenu->addAction("Open Project", this, SLOT(runOpenProject()));
  projMenu->addAction("Close Project", this, SLOT(runCloseProject()));
  projMenu->addAction("Import Project", this, SLOT(runImportProject()));

  QAction *projAction = new QAction("PIHMgis Project", this);
  projAction->setMenu(projMenu);
  mQGisIface->addToolBarIcon(projAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* rastMenu = new QMenu("&Raster-Processing");//, mQGisIface->app());
  rastMenu->addAction("Run All", this, SLOT(runRunAllRaster()));
  rastMenu->addSeparator();
//      rastMenu->addAction(QIcon(":/pihmgis/pihmgis.png"), "Fill Pits", this, SLOT(runFillPits()));
  rastMenu->addAction( "Fill Pits", this, SLOT(runFillPits()));
  rastMenu->addAction( "Flow Grid", this, SLOT(runFlowGrid()));
  rastMenu->addAction( "Stream Grid", this, SLOT(runStreamGrid()));
  rastMenu->addAction( "Link Grid", this, SLOT(runLinkGrid()));
  rastMenu->addAction( "Stream Polyline", this, SLOT(runStreamPolyLine()));
  rastMenu->addAction( "Catchment Grid", this, SLOT(runCatchmentGrid()));
  rastMenu->addAction( "Catchment Polygon", this, SLOT(runCatchmentPolygon()));

  QAction *rastAction = new QAction(" Raster Processing ", this);
  rastAction->setMenu(rastMenu);
  mQGisIface->addToolBarIcon(rastAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* vectMenu = new QMenu("&Vector-Processing");//, mQGisIface->app());
  QAction* vp0 = vectMenu->addAction( "Run All", this, SLOT(runDoNothing())); vp0->setDisabled(1);
  vectMenu->addSeparator();
  //vectMenu->addAction( "Input Files", this, SLOT(runShpFileInput()));
  vectMenu->addAction( "Dissolve Polygon", this, SLOT(runDissolve()));
  vectMenu->addAction( "Polygon To Line", this, SLOT(runPolygonToPolyline()));
  vectMenu->addAction( "Simplify Line", this, SLOT(runSimplifyLine()));
  vectMenu->addAction( "Split Line", this, SLOT(runSplitLine()));
  vectMenu->addAction( "Vector Merge", this, SLOT(runVectorMerge()));

  QAction *vectAction = new QAction(" Vector Processing ", this);
  vectAction->setMenu(vectMenu);
  mQGisIface->addToolBarIcon(vectAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* domainMenu = new QMenu("&Domain-Decomposition");//??, mQGisIface->app());
  domainMenu->addAction( "Run All", this, SLOT(runRunAllDomain()));
  domainMenu->addSeparator();
  domainMenu->addAction( "Read ShapeTopology", this, SLOT(runGenerateShapeTopology()));
  domainMenu->addAction( "Run Triangle", this, SLOT(runRunTriangle()));
  domainMenu->addAction( "TIN Generation", this, SLOT(runCreateTINs()));

  QAction *domainAction = new QAction("Domain Decomposition", this);
  domainAction->setMenu(domainMenu);
  mQGisIface->addToolBarIcon(domainAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* xtractMenu = new QMenu("&Extract-Data");//??, mQGisIface->app());
  QAction* xt0 = xtractMenu->addAction( "Run All", this, SLOT(runMshFile())); xt0->setDisabled(1);
  xtractMenu->addSeparator();
  xtractMenu->addAction( "Generate MeshFile", this, SLOT(runMshFile()));
  xtractMenu->addAction( "Generate AttFile", this, SLOT(runAttFile()));
  xtractMenu->addAction( "Generate RivFile", this, SLOT(runRivFile()));
  xtractMenu->addAction( "Generate ParaFile", this, SLOT(runParaFile()));
  xtractMenu->addAction( "Generate SoilFile", this, SLOT(runSoilFile()));
  xtractMenu->addAction( "Generate GeolFile", this, SLOT(runGeolFile()));
  xtractMenu->addAction( "Generate LCFile",   this, SLOT(runLCFile()));
  xtractMenu->addAction( "Generate CalibFile", this,SLOT(runCalibFile()));
  xtractMenu->addAction( "Generate InitFile", this, SLOT(runInitFile()));
  xtractMenu->addAction( "Generate IBCFile", this, SLOT(runIBCFile()));
  QAction* forc = xtractMenu->addAction( "Generate ForcFile", this, SLOT(runForcFile())); forc->setDisabled(1);
  QAction *xtractAction = new QAction("&DataModel Loader", this);
  xtractAction->setMenu(xtractMenu);
  mQGisIface->addToolBarIcon(xtractAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* pihmMenu = new QMenu("&PIHM");//??, mQGisIface->app());
  pihmMenu->addAction( "Run PIHM", this, SLOT(runPIHM()));
  //pihmMenu->addAction( "Run PIHM", this, SLOT(runDoNothing()));
  QAction *pihmAction = new QAction("      &PIHM      ", this);
  pihmAction->setMenu(pihmMenu);
  mQGisIface->addToolBarIcon(pihmAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* analysisMenu = new QMenu("&Analysis");//??, mQGisIface->app());
  analysisMenu->addAction("TimeSeries Plots", this, SLOT(runTimeSeriesPlots()));
  analysisMenu->addAction("Spatial Plots", this, SLOT(runSpatialPlots()));

  QAction *analysisAction = new QAction("      InfoViz      ", this);
  analysisAction->setMenu(analysisMenu);
  mQGisIface->addToolBarIcon(analysisAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////
  QMenu* helpMenu = new QMenu("&HELP");//??, mQGisIface->app());
  helpMenu->addAction( "Online Help", this, SLOT(runOnlineHelp()));
  helpMenu->addAction( "PIHMgis Homepage", this, SLOT(runHomePage()));
  helpMenu->addAction( "About", this, SLOT(runAbout()));
  QAction *helpAction = new QAction("      Help      ", this);
  helpAction->setMenu(helpMenu);
  mQGisIface->addToolBarIcon(helpAction);
/////////////////////////////////////////////////////////////////////////////////////////////////////////

  

}
//method defined in interface
void PIHMgis::help()
{
  //implement me!
}

// Slot called when the menu item is activated
// If you created more menu items / toolbar buttons in initiGui, you should 
// create a separate handler for each action - this single run() method will
// not be enough
void PIHMgis::run()
{
  PIHMgisGui *myPluginGui=new PIHMgisGui(mQGisIface->mainWindow(), QgisGui::ModalDialogFlags);
  myPluginGui->setAttribute(Qt::WA_DeleteOnClose);
  myPluginGui->show();
}

// Unload the plugin by cleaning up the GUI
void PIHMgis::unload()
{
  // remove the GUI
  //mQGisIface->removePluginMenu("&PIHMgis",mQActionPointer);
  //mQGisIface->removeToolBarIcon(mQActionPointer);
  //delete mQActionPointer;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PIHMgis::runDefineProject(){
	DefineProject *Dlg = new DefineProject;
	//Dlg->setApplicationPointer(mQGisIface);
	Dlg->show();
}

void PIHMgis::runOpenProject(){
	OpenProject *Dlg = new OpenProject;
	Dlg->show();
}

void PIHMgis::runCloseProject(){
	CloseProject *Dlg = new CloseProject;
	Dlg->show();
}

void PIHMgis::runImportProject(){
	ImportProject *Dlg = new ImportProject;
	Dlg->show();
}

void PIHMgis::runRunAllRaster(){
	RunAllRaster* Dlg = new RunAllRaster;
	Dlg->setApplicationPointer(mQGisIface);
	Dlg->show();
}

void PIHMgis::runFillPits(){
        fillpitsDlg* Dlg = new fillpitsDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
        //??Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
}

void PIHMgis::runFlowGrid(){
        FlowGridDlg* Dlg = new FlowGridDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
        //??Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
}

void PIHMgis::runStreamGrid(){
        StreamGridDlg* Dlg = new StreamGridDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
        //??Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
} 

void PIHMgis::runLinkGrid(){
        LinkGridDlg* Dlg = new LinkGridDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
//??        Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
}

void PIHMgis::runStreamPolyLine(){
        StreamPolyLineDlg* Dlg = new StreamPolyLineDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
//??        Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
}

void PIHMgis::runCatchmentGrid(){
        CatchmentGridDlg* Dlg = new CatchmentGridDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
//??        Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
}

void PIHMgis::runCatchmentPolygon(){
        CatchmentPolygonDlg* Dlg = new CatchmentPolygonDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        Dlg->setApplicationPointer(mQGisIface);//->app());
//??        Dlg->setApplicationPointer(mQGisApp);
        Dlg->show();
}

void PIHMgis::runDissolve(){
	Dissolve* Dlg = new Dissolve;
	Dlg->setApplicationPointer(mQGisIface);
	Dlg->show();
}

void PIHMgis::runPolygonToPolyline(){
        polygonToPolyLineDialogDlg* Dlg = new polygonToPolyLineDialogDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}    

void PIHMgis::runSimplifyLine(){
        simplifyLineDialogDlg* Dlg = new simplifyLineDialogDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}

void PIHMgis::runSplitLine(){
        splitLineDialogDlg* Dlg = new splitLineDialogDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}

void PIHMgis::runVectorMerge(){
        mergeFeaturesDialogDlg* Dlg = new mergeFeaturesDialogDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}

void PIHMgis::runRunAllDomain(){
	RunnAllDomain* Dlg = new RunnAllDomain;
	Dlg->show();
}

void PIHMgis::runGenerateShapeTopology(){
        generateShapeTopologyDlg* Dlg = new generateShapeTopologyDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
        Dlg->show();
}

void PIHMgis::runRunTriangle(){
        runTriangleDlg* Dlg = new runTriangleDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
        Dlg->show();
}

void PIHMgis::runCreateTINs(){
        createTINsDlg* Dlg = new createTINsDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}

void PIHMgis::runMshFile(){
        mshFileDlg* Dlg = new mshFileDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
        Dlg->show();
}
 
void PIHMgis::runAttFile(){
        attFileDlg* Dlg = new attFileDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
        Dlg->show();
}

void PIHMgis::runRivFile(){
        rivFileDlg* Dlg = new rivFileDlg;
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}

void PIHMgis::runParaFile(){
        paraFileDlg* Dlg = new paraFileDlg; //(NULL,NULL,TRUE,0); //,"/opt3/helpDialog/poly.html","Help Caption");
        //Dlg->setApplicationPointer(mQGisIface->app());
        Dlg->show();
}

void PIHMgis::runSoilFile(){
	SoilFile* Dlg = new SoilFile;
	Dlg->show();	
}

void PIHMgis::runGeolFile(){
	GeolFile* Dlg = new GeolFile;
	Dlg->show();
}

void PIHMgis::runLCFile(){
	LCFile* Dlg = new LCFile;
	Dlg->show();
}

void PIHMgis::runCalibFile(){
	CalibFile* Dlg = new CalibFile;
	Dlg->show();
}

void PIHMgis::runInitFile(){
	InitFile* Dlg = new InitFile;
	Dlg->show();
}

void PIHMgis::runIBCFile(){
	IbcFile* Dlg = new IbcFile;
	Dlg->show();	
}

void PIHMgis::runForcFile(){

}


void PIHMgis::runPIHM(){
        runPIHMDlg* Dlg = new runPIHMDlg;
        Dlg->show();
	//MyNewThread* thread = new MyNewThread;
	//thread->start();
}

void PIHMgis::runSpatialPlots(){
        spatialPlotDlg* Dlg = new spatialPlotDlg;
//??        Dlg->setApplicationPointer(mQGisApp);
	Dlg->setApplicationPointer(mQGisIface);
        Dlg->show();
}

void PIHMgis::runTimeSeriesPlots(){
      timeSeriesDlg *Dlg = new timeSeriesDlg;
      Dlg->show();
}

void PIHMgis::runAbout(){
        AboutDlg* Dlg = new AboutDlg; 
        Dlg->show();
} 

void PIHMgis::runHomePage(){
	QUrl url("http://www.pihm.psu.edu");
	QDesktopServices::openUrl( url);
}

void PIHMgis::runOnlineHelp(){
        QUrl url("http://www.pihm.psu.edu/pihmgis_documents.html");
        QDesktopServices::openUrl( url);
}
//////////////////////////////////////////////////////////////////////////
//
//
//  THE FOLLOWING CODE IS AUTOGENERATED BY THE PLUGIN BUILDER SCRIPT
//    YOU WOULD NORMALLY NOT NEED TO MODIFY THIS, AND YOUR PLUGIN
//      MAY NOT WORK PROPERLY IF YOU MODIFY THIS INCORRECTLY
//
//
//////////////////////////////////////////////////////////////////////////


/** 
 * Required extern functions needed  for every plugin 
 * These functions can be called prior to creating an instance
 * of the plugin class
 */
// Class factory to return a new instance of the plugin class
QGISEXTERN QgisPlugin * classFactory(QgisInterface * theQgisInterfacePointer)
{
  return new PIHMgis(theQgisInterfacePointer);
}
// Return the name of the plugin - note that we do not user class members as
// the class may not yet be insantiated when this method is called.
QGISEXTERN QString name()
{
  return sName;
}

// Return the description
QGISEXTERN QString description()
{
  return sDescription;
}

// Return the type (either UI or MapLayer plugin)
QGISEXTERN int type()
{
  return sPluginType;
}

// Return the version number for the plugin
QGISEXTERN QString version()
{
  return sPluginVersion;
}

// Delete ourself
QGISEXTERN void unload(QgisPlugin * thePluginPointer)
{
  delete thePluginPointer;
}
