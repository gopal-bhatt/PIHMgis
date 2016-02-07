#include "pihmgisdialog.h"
#include "ui_pihmgisdialog.h"

#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QThread>

#include "1ProjectManagement/1NewProject/newproject.h"
#include "1ProjectManagement/2OpenProject/openproject.h"
#include "1ProjectManagement/3ImportProject/importproject.h"
#include "1ProjectManagement/4CloseProject/closeproject.h"

#include "2RasterProcessing/1FillPits/fillpits.h"
#include "2RasterProcessing/2FlowGrids/flowgrids.h"
#include "2RasterProcessing/3StreamGrids/streamgrids.h"
#include "2RasterProcessing/4LinkGrids/linkgrids.h"
#include "2RasterProcessing/5CatchmentGrids/catchmentgrids.h"
#include "2RasterProcessing/6StreamPolyline/streampolyline.h"
#include "2RasterProcessing/7CatchmentPolygon/catchmentpolygon.h"

#include "3VectorProcessing/1DissolvePolygons/dissolvepolygons.h"
#include "3VectorProcessing/2PolygonToPolylines/polygontopolylines.h"
#include "3VectorProcessing/3SimplifyPolylines/simplifypolylines.h"
#include "3VectorProcessing/4PolylineToLines/polylinetolines.h"
#include "3VectorProcessing/5MergeVectorLayers/mergevectorlayers.h"

#include "4DomainDecomposition/1ReadTopology/readtopology.h"
#include "4DomainDecomposition/2DelaunayTriangulation/delaunaytriangulation.h"
#include "4DomainDecomposition/3TINShapeLayer/tinshapelayer.h"

#include "5DataModelLoader/1MeshDataFile/meshdatafile.h"
#include "5DataModelLoader/2AttDataFile/attdatafile.h"
#include "5DataModelLoader/3RivDataFile/rivdatafile.h"
#include "5DataModelLoader/4SoilDataFile/soildatafile.h"
#include "5DataModelLoader/5GeolDataFile/geoldatafile.h"
#include "5DataModelLoader/6LcDataFile/lcdatafile.h"
#include "5DataModelLoader/7InitDataFile/initdatafile.h"
#include "5DataModelLoader/8IbcDataFile/ibcdatafile.h"
#include "5DataModelLoader/9ParaDataFile/paradatafile.h"
#include "5DataModelLoader/10CalibDataFile/calibdatafile.h"

#include "6PIHMSimulation/1PIHM_v2.2/PIHMSimulation.h"

#include "7VisualAnalytics/1MeshSpatial/meshspatial.h"
#include "7VisualAnalytics/2MeshTemporal/meshtemporal.h"
#include "7VisualAnalytics/3RiverSpatial/riverspatial.h"
#include "7VisualAnalytics/4RiverTemporal/rivertemporal.h"


PIHMgisDialog::PIHMgisDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PIHMgisDialog)
{
    QStringList args;
    args.append(QString("file://")+":/misc/Misc/usa.shp");
    args.append(QString("file://")+"/Users/bhattgopal/Developments/PIHMgis/PIHMgis_v3.0/PIHMgis/Misc/usa.shp");
    bool success;
    //success = QDesktopServices::openUrl(QUrl(args.value(1)));
    this->setWindowIcon(QIcon("Icons/PIHMgis000.icns"));
    ui->setupUi(this);

    QDir dir;
    success = dir.mkpath(QDir::homePath()+"/.PIHMgis/");
    if(success == true)
    {
        qDebug() << "Successfully Created Folder: " << QDir::homePath()+"/.PIHMgis/";
    }
    else
    {
        qDebug() << "Unable to Create Director: " << QDir::homePath()+"/.PIHMgis/";
        qDebug() << "Please Check File/Folder Permissions";
        QMessageBox::critical(this,tr("Critical Error"),tr("Unable to Create Folder in the Home Directory.\nPlease Close & Open PIHMgis After Fixing Permissions!"),QMessageBox::Ok);
    }

    ui->PIHMgisToolBox->setCurrentIndex(8-1);
    ui->pushButtonWorkFlow1->setDefault(1);
    ui->pushButtonWorkFlow1->setFocus();
}

PIHMgisDialog::~PIHMgisDialog()
{
    delete ui;
}


/*void PIHMgisDialog::set_defaults(QStringList DEFAULT_PARAM)
{
    bool boolWORKFLOW0, boolWORKFLOW1, boolWORKFLOW2, boolWORKFLOW3, boolWORKFLOW4, boolWORKFLOW5, boolWORKFLOW6, boolWORKFLOW7;
    bool boolNEWPRJ, boolOPENPRJ, boolIMPORTPRJ, boolCLOSEPRJ;
    bool boolFILLPITS, boolFLOWGRIDS, boolSTRGRIDS, boolLINKGRIDS, boolCATGRIDS, boolSTRPOLY, boolCATPOLY;
    bool boolDISSOLVE, boolPOLYGON, boolSIMPLIFY, boolPOLYLINE, boolMERGE;
    bool boolREADSHP, boolTRIANGLE, boolTINSHP;
    bool boolMESH, boolATTX, boolSOIL, boolRIVX, boolGEOL, boolLCXX, boolPARA, boolINIT, boolIBCX, boolCALI, boolFORC;
    bool boolPIHM;
    bool boolSPATIALW, boolSPATIALR, boolTIMEW, boolTIMER;

    boolWORKFLOW0 = boolWORKFLOW1 = boolWORKFLOW2 = boolWORKFLOW3 = boolWORKFLOW4 = boolWORKFLOW5 = boolWORKFLOW6 = boolWORKFLOW7 = false;
    boolNEWPRJ = boolOPENPRJ = boolIMPORTPRJ = boolCLOSEPRJ = false;
    boolFILLPITS = boolFLOWGRIDS = boolSTRGRIDS = boolLINKGRIDS = boolCATGRIDS = boolSTRPOLY = boolCATPOLY = false;
    boolDISSOLVE = boolPOLYGON = boolSIMPLIFY = boolPOLYLINE = boolMERGE = false;
    boolREADSHP = boolTRIANGLE = boolTINSHP = false;
    boolMESH = boolATTX = boolSOIL = boolRIVX = boolGEOL = boolLCXX = boolPARA = boolINIT = boolIBCX = boolCALI = boolFORC = false;
    boolPIHM = false;
    boolSPATIALW = boolSPATIALR = boolTIMEW = boolTIMER = false;

    qDebug() << "Function set_defaults: " << DEFAULT_PARAM;
    for(int i=0; i<DEFAULT_PARAM.size(); i++)
    {
        if (DEFAULT_PARAM.at(i) == "WORKFLOW0") { boolWORKFLOW0 = true; ui->pushButtonWorkFlow0->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW1") { boolWORKFLOW1 = true; ui->pushButtonWorkFlow1->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW2") { boolWORKFLOW2 = true; ui->pushButtonWorkFlow2->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW3") { boolWORKFLOW3 = true; ui->pushButtonWorkFlow3->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW4") { boolWORKFLOW4 = true; ui->pushButtonWorkFlow4->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW5") { boolWORKFLOW5 = true; ui->pushButtonWorkFlow5->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW6") { boolWORKFLOW6 = true; ui->pushButtonWorkFlow6->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW7") { boolWORKFLOW7 = true; ui->pushButtonWorkFlow7->setFocus(); continue; }

        if (DEFAULT_PARAM.at(i) == "NEWPRJ")    { boolNEWPRJ    = true; ui->pushButtonPIHMgisProjectNew->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "OPENPRJ")   { boolOPENPRJ   = true; ui->pushButtonPIHMgisProjectOpen->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "IMPORTPRJ") { boolIMPORTPRJ = true; ui->pushButtonPIHMgisProjectImport->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "CLOSEPRJ")  { boolCLOSEPRJ  = true; ui->pushButtonPIHMgisProjectClose->setFocus();  continue; }

        if (DEFAULT_PARAM.at(i) == "FILLPITS")  { boolFILLPITS  = true; ui->pushButtonRasterProcessingFillPits->setFocus();         continue; }
        if (DEFAULT_PARAM.at(i) == "FLOWGRIDS") { boolFLOWGRIDS = true; ui->pushButtonRasterProcessingFlowGrids->setFocus();        continue; }
        if (DEFAULT_PARAM.at(i) == "STRGRIDS")  { boolSTRGRIDS  = true; ui->pushButtonRasterProcessingStreamGrids->setFocus();      continue; }
        if (DEFAULT_PARAM.at(i) == "LINKGRIDS") { boolLINKGRIDS = true; ui->pushButtonRasterProcessingLinkGrids->setFocus();        continue; }
        if (DEFAULT_PARAM.at(i) == "CATGRIDS")  { boolCATGRIDS  = true; ui->pushButtonRasterProcessingCatchmentGrids->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "STRPOLY")   { boolSTRPOLY   = true; ui->pushButtonRasterProcessingStreamPolyline->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "CATPOLY")   { boolCATPOLY   = true; ui->pushButtonRasterProcessingCatchmentPolygon->setFocus(); continue; }

        if (DEFAULT_PARAM.at(i) == "DISSOLVE")  { boolDISSOLVE = true; ui->pushButtonVectorProcessingDissolvePolygons->setFocus();      continue; }
        if (DEFAULT_PARAM.at(i) == "POLYGON")   { boolPOLYGON  = true; ui->pushButtonVectorProcessingPolygonToPolylines->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "SIMPLIFY")  { boolSIMPLIFY = true; ui->pushButtonVectorProcessingSimplifyPolylines->setFocus();     continue; }
        if (DEFAULT_PARAM.at(i) == "POLYLINE")  { boolPOLYLINE = true; ui->pushButtonVectorProcessingPolylineToLines->setFocus();       continue; }
        if (DEFAULT_PARAM.at(i) == "MERGE")     { boolMERGE    = true; ui->pushButtonVectorProcessingMergeVectorLayers->setFocus();     continue; }

        if (DEFAULT_PARAM.at(i) == "READSHP")   { boolREADSHP  = true; ui->pushButtonDomainDecompositionReadTopology->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "TRIANGLE")  { boolTRIANGLE = true; ui->pushButtonDomainDecompositionTriangulation->setFocus();  continue; }
        if (DEFAULT_PARAM.at(i) == "TINSHP")    { boolTINSHP   = true; ui->pushButtonDomainDecompositionTINShapeLayer->setFocus();  continue; }

        if (DEFAULT_PARAM.at(i) == "MESH")  { boolMESH = true; ui->pushButtonDataModelLoaderMeshDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "ATTX")  { boolATTX = true; ui->pushButtonDataModelLoaderAttDataFile->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "RIVX")  { boolRIVX = true; ui->pushButtonDataModelLoaderRivDataFile->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "SOIL")  { boolSOIL = true; ui->pushButtonDataModelLoaderSoilDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "GEOL")  { boolGEOL = true; ui->pushButtonDataModelLoaderGeolDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "LCXX")  { boolLCXX = true; ui->pushButtonDataModelLoaderLcDataFile->setFocus();     continue; }
        if (DEFAULT_PARAM.at(i) == "INIT")  { boolINIT = true; ui->pushButtonDataModelLoaderInitDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "IBCX")  { boolIBCX = true; ui->pushButtonDataModelLoaderIbcDataFile->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "PARA")  { boolPARA = true; ui->pushButtonDataModelLoaderParamDataFile->setFocus();  continue; }
        if (DEFAULT_PARAM.at(i) == "CALI")  { boolCALI = true; ui->pushButtonDataModelLoaderCalibDataFile->setFocus();  continue; }
        if (DEFAULT_PARAM.at(i) == "FORC")  { boolFORC = true; ui->pushButtonDataModelLoaderForcDataFile->setFocus();   continue; }

        if (DEFAULT_PARAM.at(i) == "PIHM")  { boolPIHM = true; ui->pushButtonPIHMSimulation->setFocus();    continue; }

        if (DEFAULT_PARAM.at(i) == "SPATIALW")  { boolSPATIALW = true; ui->pushButtonVisualAnalyticsSpatialWatershed->setFocus();       continue; }
        if (DEFAULT_PARAM.at(i) == "SPATIALR")  { boolSPATIALR = true; ui->pushButtonVisualAnalyticsSpatialRiverNetwork->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "TIMEW")     { boolTIMEW    = true; ui->pushButtonVisualAnalyticsTemporalWatershed->setFocus();      continue; }
        if (DEFAULT_PARAM.at(i) == "TIMER")     { boolTIMER    = true; ui->pushButtonVisualAnalyticsTemporalRiverNetwork->setFocus();   continue; }
    }

    ui->pushButtonWorkFlow0->setDefault(boolWORKFLOW0);
    ui->pushButtonWorkFlow1->setDefault(boolWORKFLOW1);
    ui->pushButtonWorkFlow2->setDefault(boolWORKFLOW2);
    ui->pushButtonWorkFlow3->setDefault(boolWORKFLOW3);
    ui->pushButtonWorkFlow4->setDefault(boolWORKFLOW4);
    ui->pushButtonWorkFlow5->setDefault(boolWORKFLOW5);
    ui->pushButtonWorkFlow6->setDefault(boolWORKFLOW6);
    ui->pushButtonWorkFlow7->setDefault(boolWORKFLOW7);

    ui->pushButtonPIHMgisProjectNew->setDefault(boolNEWPRJ);
    ui->pushButtonPIHMgisProjectOpen->setDefault(boolOPENPRJ);
    ui->pushButtonPIHMgisProjectImport->setDefault(boolIMPORTPRJ);
    ui->pushButtonPIHMgisProjectClose->setDefault(boolCLOSEPRJ);

    ui->pushButtonRasterProcessingFillPits->setDefault(boolFILLPITS);
    ui->pushButtonRasterProcessingFlowGrids->setDefault(boolFLOWGRIDS);
    ui->pushButtonRasterProcessingStreamGrids->setDefault(boolSTRGRIDS);
    ui->pushButtonRasterProcessingLinkGrids->setDefault(boolLINKGRIDS);
    ui->pushButtonRasterProcessingCatchmentGrids->setDefault(boolCATGRIDS);
    ui->pushButtonRasterProcessingStreamPolyline->setDefault(boolSTRPOLY);
    ui->pushButtonRasterProcessingCatchmentPolygon->setDefault(boolCATPOLY);

    ui->pushButtonVectorProcessingDissolvePolygons->setDefault(boolDISSOLVE);
    ui->pushButtonVectorProcessingPolygonToPolylines->setDefault(boolPOLYGON);
    ui->pushButtonVectorProcessingSimplifyPolylines->setDefault(boolSIMPLIFY);
    ui->pushButtonVectorProcessingPolylineToLines->setDefault(boolPOLYLINE);
    ui->pushButtonVectorProcessingMergeVectorLayers->setDefault(boolMERGE);

    ui->pushButtonDomainDecompositionReadTopology->setDefault(boolREADSHP);
    ui->pushButtonDomainDecompositionTriangulation->setDefault(boolTRIANGLE);
    ui->pushButtonDomainDecompositionTINShapeLayer->setDefault(boolTINSHP);

    ui->pushButtonDataModelLoaderMeshDataFile->setDefault(boolMESH);
    ui->pushButtonDataModelLoaderAttDataFile->setDefault(boolATTX);
    ui->pushButtonDataModelLoaderRivDataFile->setDefault(boolRIVX);
    ui->pushButtonDataModelLoaderSoilDataFile->setDefault(boolSOIL);
    ui->pushButtonDataModelLoaderGeolDataFile->setDefault(boolGEOL);
    ui->pushButtonDataModelLoaderLcDataFile->setDefault(boolLCXX);
    ui->pushButtonDataModelLoaderInitDataFile->setDefault(boolINIT);
    ui->pushButtonDataModelLoaderIbcDataFile->setDefault(boolIBCX);
    ui->pushButtonDataModelLoaderParamDataFile->setDefault(boolPARA);
    ui->pushButtonDataModelLoaderCalibDataFile->setDefault(boolCALI);
    ui->pushButtonDataModelLoaderForcDataFile->setDefault(boolFORC);

    ui->pushButtonPIHMSimulation->setDefault(boolPIHM);

    ui->pushButtonVisualAnalyticsSpatialWatershed->setDefault(boolSPATIALW);
    ui->pushButtonVisualAnalyticsSpatialRiverNetwork->setDefault(boolSPATIALR);
    ui->pushButtonVisualAnalyticsTemporalWatershed->setDefault(boolTIMEW);
    ui->pushButtonVisualAnalyticsTemporalRiverNetwork->setDefault(boolTIMER);
}*/

void PIHMgisDialog::set_defaults(QStringList DEFAULT_PARAM)
{
    bool boolWORKFLOW0, boolWORKFLOW1, boolWORKFLOW2, boolWORKFLOW3, boolWORKFLOW4, boolWORKFLOW5, boolWORKFLOW6, boolWORKFLOW7;
    bool boolNEWPRJ, boolOPENPRJ, boolIMPORTPRJ, boolCLOSEPRJ;
    bool boolFILLPITS, boolFLOWGRIDS, boolSTRGRIDS, boolLINKGRIDS, boolCATGRIDS, boolSTRPOLY, boolCATPOLY;
    bool boolDISSOLVE, boolPOLYGON, boolSIMPLIFY, boolPOLYLINE, boolMERGE;
    bool boolREADSHP, boolTRIANGLE, boolTINSHP;
    bool boolMESH, boolATTX, boolSOIL, boolRIVX, boolGEOL, boolLCXX, boolPARA, boolINIT, boolIBCX, boolCALI, boolFORC;
    bool boolPIHM;
    bool boolSPATIALW, boolSPATIALR, boolTIMEW, boolTIMER;

    boolWORKFLOW0 = boolWORKFLOW1 = boolWORKFLOW2 = boolWORKFLOW3 = boolWORKFLOW4 = boolWORKFLOW5 = boolWORKFLOW6 = boolWORKFLOW7 = false;
    boolNEWPRJ = boolOPENPRJ = boolIMPORTPRJ = boolCLOSEPRJ = false;
    boolFILLPITS = boolFLOWGRIDS = boolSTRGRIDS = boolLINKGRIDS = boolCATGRIDS = boolSTRPOLY = boolCATPOLY = false;
    boolDISSOLVE = boolPOLYGON = boolSIMPLIFY = boolPOLYLINE = boolMERGE = false;
    boolREADSHP = boolTRIANGLE = boolTINSHP = false;
    boolMESH = boolATTX = boolSOIL = boolRIVX = boolGEOL = boolLCXX = boolPARA = boolINIT = boolIBCX = boolCALI = boolFORC = false;
    boolPIHM = false;
    boolSPATIALW = boolSPATIALR = boolTIMEW = boolTIMER = false;

    qDebug() << "Function set_defaults: " << DEFAULT_PARAM;
    for(int i=0; i<DEFAULT_PARAM.size(); i++)
    {
        if (DEFAULT_PARAM.at(i) == "WORKFLOW0") { boolWORKFLOW0 = true; ui->pushButtonWorkFlow0->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW1") { boolWORKFLOW1 = true; ui->pushButtonWorkFlow1->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW2") { boolWORKFLOW2 = true; ui->pushButtonWorkFlow2->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW3") { boolWORKFLOW3 = true; ui->pushButtonWorkFlow3->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW4") { boolWORKFLOW4 = true; ui->pushButtonWorkFlow4->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW5") { boolWORKFLOW5 = true; ui->pushButtonWorkFlow5->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW6") { boolWORKFLOW6 = true; ui->pushButtonWorkFlow6->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "WORKFLOW7") { boolWORKFLOW7 = true; ui->pushButtonWorkFlow7->setFocus(); continue; }

        if (DEFAULT_PARAM.at(i) == "NEWPRJ")    { boolNEWPRJ    = true; ui->pushButtonPIHMgisProjectNew->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "OPENPRJ")   { boolOPENPRJ   = true; ui->pushButtonPIHMgisProjectOpen->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "IMPORTPRJ") { boolIMPORTPRJ = true; ui->pushButtonPIHMgisProjectImport->setFocus(); continue; }
        if (DEFAULT_PARAM.at(i) == "CLOSEPRJ")  { boolCLOSEPRJ  = true; ui->pushButtonPIHMgisProjectClose->setFocus();  continue; }

        if (DEFAULT_PARAM.at(i) == "FILLPITS")  { boolFILLPITS  = true; ui->pushButtonRasterProcessingFillPits->setFocus();         continue; }
        if (DEFAULT_PARAM.at(i) == "FLOWGRIDS") { boolFLOWGRIDS = true; ui->pushButtonRasterProcessingFlowGrids->setFocus();        continue; }
        if (DEFAULT_PARAM.at(i) == "STRGRIDS")  { boolSTRGRIDS  = true; ui->pushButtonRasterProcessingStreamGrids->setFocus();      continue; }
        if (DEFAULT_PARAM.at(i) == "LINKGRIDS") { boolLINKGRIDS = true; ui->pushButtonRasterProcessingLinkGrids->setFocus();        continue; }
        if (DEFAULT_PARAM.at(i) == "CATGRIDS")  { boolCATGRIDS  = true; ui->pushButtonRasterProcessingCatchmentGrids->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "STRPOLY")   { boolSTRPOLY   = true; ui->pushButtonRasterProcessingStreamPolyline->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "CATPOLY")   { boolCATPOLY   = true; ui->pushButtonRasterProcessingCatchmentPolygon->setFocus(); continue; }

        if (DEFAULT_PARAM.at(i) == "DISSOLVE")  { boolDISSOLVE = true; ui->pushButtonVectorProcessingDissolvePolygons->setFocus();      continue; }
        if (DEFAULT_PARAM.at(i) == "POLYGON")   { boolPOLYGON  = true; ui->pushButtonVectorProcessingPolygonToPolylines->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "SIMPLIFY")  { boolSIMPLIFY = true; ui->pushButtonVectorProcessingSimplifyPolylines->setFocus();     continue; }
        if (DEFAULT_PARAM.at(i) == "POLYLINE")  { boolPOLYLINE = true; ui->pushButtonVectorProcessingPolylineToLines->setFocus();       continue; }
        if (DEFAULT_PARAM.at(i) == "MERGE")     { boolMERGE    = true; ui->pushButtonVectorProcessingMergeVectorLayers->setFocus();     continue; }

        if (DEFAULT_PARAM.at(i) == "READSHP")   { boolREADSHP  = true; ui->pushButtonDomainDecompositionReadTopology->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "TRIANGLE")  { boolTRIANGLE = true; ui->pushButtonDomainDecompositionTriangulation->setFocus();  continue; }
        if (DEFAULT_PARAM.at(i) == "TINSHP")    { boolTINSHP   = true; ui->pushButtonDomainDecompositionTINShapeLayer->setFocus();  continue; }

        if (DEFAULT_PARAM.at(i) == "MESH")  { boolMESH = true; ui->pushButtonDataModelLoaderMeshDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "ATTX")  { boolATTX = true; ui->pushButtonDataModelLoaderAttDataFile->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "RIVX")  { boolRIVX = true; ui->pushButtonDataModelLoaderRivDataFile->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "SOIL")  { boolSOIL = true; ui->pushButtonDataModelLoaderSoilDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "GEOL")  { boolGEOL = true; ui->pushButtonDataModelLoaderGeolDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "LCXX")  { boolLCXX = true; ui->pushButtonDataModelLoaderLcDataFile->setFocus();     continue; }
        if (DEFAULT_PARAM.at(i) == "INIT")  { boolINIT = true; ui->pushButtonDataModelLoaderInitDataFile->setFocus();   continue; }
        if (DEFAULT_PARAM.at(i) == "IBCX")  { boolIBCX = true; ui->pushButtonDataModelLoaderIbcDataFile->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "PARA")  { boolPARA = true; ui->pushButtonDataModelLoaderParamDataFile->setFocus();  continue; }
        if (DEFAULT_PARAM.at(i) == "CALI")  { boolCALI = true; ui->pushButtonDataModelLoaderCalibDataFile->setFocus();  continue; }
        if (DEFAULT_PARAM.at(i) == "FORC")  { boolFORC = true; ui->pushButtonDataModelLoaderForcDataFile->setFocus();   continue; }

        if (DEFAULT_PARAM.at(i) == "PIHM")  { boolPIHM = true; ui->pushButtonPIHMSimulation->setFocus();    continue; }

        if (DEFAULT_PARAM.at(i) == "SPATIALW")  { boolSPATIALW = true; ui->pushButtonVisualAnalyticsSpatialWatershed->setFocus();       continue; }
        if (DEFAULT_PARAM.at(i) == "SPATIALR")  { boolSPATIALR = true; ui->pushButtonVisualAnalyticsSpatialRiverNetwork->setFocus();    continue; }
        if (DEFAULT_PARAM.at(i) == "TIMEW")     { boolTIMEW    = true; ui->pushButtonVisualAnalyticsTemporalWatershed->setFocus();      continue; }
        if (DEFAULT_PARAM.at(i) == "TIMER")     { boolTIMER    = true; ui->pushButtonVisualAnalyticsTemporalRiverNetwork->setFocus();   continue; }
    }

    ui->pushButtonWorkFlow0->setDefault(boolWORKFLOW0);
    ui->pushButtonWorkFlow1->setDefault(boolWORKFLOW1);
    ui->pushButtonWorkFlow2->setDefault(boolWORKFLOW2);
    ui->pushButtonWorkFlow3->setDefault(boolWORKFLOW3);
    ui->pushButtonWorkFlow4->setDefault(boolWORKFLOW4);
    ui->pushButtonWorkFlow5->setDefault(boolWORKFLOW5);
    ui->pushButtonWorkFlow6->setDefault(boolWORKFLOW6);
    ui->pushButtonWorkFlow7->setDefault(boolWORKFLOW7);

    ui->pushButtonPIHMgisProjectNew->setDefault(boolNEWPRJ);
    ui->pushButtonPIHMgisProjectOpen->setDefault(boolOPENPRJ);
    ui->pushButtonPIHMgisProjectImport->setDefault(boolIMPORTPRJ);
    ui->pushButtonPIHMgisProjectClose->setDefault(boolCLOSEPRJ);

    ui->pushButtonRasterProcessingFillPits->setDefault(boolFILLPITS);
    ui->pushButtonRasterProcessingFlowGrids->setDefault(boolFLOWGRIDS);
    ui->pushButtonRasterProcessingStreamGrids->setDefault(boolSTRGRIDS);
    ui->pushButtonRasterProcessingLinkGrids->setDefault(boolLINKGRIDS);
    ui->pushButtonRasterProcessingCatchmentGrids->setDefault(boolCATGRIDS);
    ui->pushButtonRasterProcessingStreamPolyline->setDefault(boolSTRPOLY);
    ui->pushButtonRasterProcessingCatchmentPolygon->setDefault(boolCATPOLY);

    ui->pushButtonVectorProcessingDissolvePolygons->setDefault(boolDISSOLVE);
    ui->pushButtonVectorProcessingPolygonToPolylines->setDefault(boolPOLYGON);
    ui->pushButtonVectorProcessingSimplifyPolylines->setDefault(boolSIMPLIFY);
    ui->pushButtonVectorProcessingPolylineToLines->setDefault(boolPOLYLINE);
    ui->pushButtonVectorProcessingMergeVectorLayers->setDefault(boolMERGE);

    ui->pushButtonDomainDecompositionReadTopology->setDefault(boolREADSHP);
    ui->pushButtonDomainDecompositionTriangulation->setDefault(boolTRIANGLE);
    ui->pushButtonDomainDecompositionTINShapeLayer->setDefault(boolTINSHP);

    ui->pushButtonDataModelLoaderMeshDataFile->setDefault(boolMESH);
    ui->pushButtonDataModelLoaderAttDataFile->setDefault(boolATTX);
    ui->pushButtonDataModelLoaderRivDataFile->setDefault(boolRIVX);
    ui->pushButtonDataModelLoaderSoilDataFile->setDefault(boolSOIL);
    ui->pushButtonDataModelLoaderGeolDataFile->setDefault(boolGEOL);
    ui->pushButtonDataModelLoaderLcDataFile->setDefault(boolLCXX);
    ui->pushButtonDataModelLoaderInitDataFile->setDefault(boolINIT);
    ui->pushButtonDataModelLoaderIbcDataFile->setDefault(boolIBCX);
    ui->pushButtonDataModelLoaderParamDataFile->setDefault(boolPARA);
    ui->pushButtonDataModelLoaderCalibDataFile->setDefault(boolCALI);
    ui->pushButtonDataModelLoaderForcDataFile->setDefault(boolFORC);

    ui->pushButtonPIHMSimulation->setDefault(boolPIHM);

    ui->pushButtonVisualAnalyticsSpatialWatershed->setDefault(boolSPATIALW);
    ui->pushButtonVisualAnalyticsSpatialRiverNetwork->setDefault(boolSPATIALR);
    ui->pushButtonVisualAnalyticsTemporalWatershed->setDefault(boolTIMEW);
    ui->pushButtonVisualAnalyticsTemporalRiverNetwork->setDefault(boolTIMER);

    int toolset;
    for (int i=0; i<DEFAULT_PARAM.length(); i++)
    {
        if( DEFAULT_PARAM.at(i).contains("WORKFLOW") )
        {
            toolset = DEFAULT_PARAM.at(i).right(1).toInt();
        }
    }
    qDebug() << "Toolset ID = " << toolset << "\n";
    ui->PIHMgisToolBox->setCurrentIndex(toolset-1);
}

// ************************************************************************** //

// **** START :: PIHMgis Help & Resources Slots **** //

void PIHMgisDialog::on_pushButtonWorkFlow0_clicked()
{
    bool success = QDesktopServices::openUrl(QUrl("http://www.pihm.psu.edu"));
    QStringList default_params; default_params << "WORKFLOW1"; set_defaults(default_params);
}

void PIHMgisDialog::on_pushButtonWorkFlow1_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(1-1);

    // ** Set Default PushButton
    // ** TODO: ADD IF & ELSE LOOP TO SELECT DEFAULT BASED ON IF A PROJECT IS OPEN OR NOT? IF OPEN "CLOSE" SHOULD BE DEFAULT.
    QString ProjectFolder, ProjectFileName;
    QFile ProjectFile(QDir::homePath()+"/.PIHMgis/OpenProject.txt");
    if( ! ProjectFile.open(QIODevice::ReadOnly | QIODevice::Text) )
    {
        QStringList default_params; default_params << "WORKFLOW1" << "OPENPRJ" << "IMPORTPRJ" << "NEWPRJ"; set_defaults(default_params);
        return;
    }

    QTextStream ProjectFileTextStream(&ProjectFile);
    ProjectFolder   = ProjectFileTextStream.readLine();
    ProjectFileName = ProjectFileTextStream.readLine();
    ProjectFile.close();

    if( QFile(ProjectFileName).exists() ) { QStringList default_params; default_params << "WORKFLOW1" << "CLOSEPRJ"; set_defaults(default_params); }
    else { QStringList default_params; default_params << "WORKFLOW1" << "OPENPRJ" << "IMPORTPRJ" << "NEWPRJ"; set_defaults(default_params); }
}

void PIHMgisDialog::on_pushButtonWorkFlow2_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(2-1);

    // ** Set Default PushButton
    QStringList default_params; default_params << "WORKFLOW2" << "FILLPITS"; set_defaults(default_params);
}

void PIHMgisDialog::on_pushButtonWorkFlow3_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(3-1);

    // ** Set Default PushButton
    QStringList default_params; default_params << "WORKFLOW3" << "DISSOLVE"; set_defaults(default_params);
}

void PIHMgisDialog::on_pushButtonWorkFlow4_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(4-1);

    // ** Set Default PushButton
    QStringList default_params; default_params << "WORKFLOW4" << "READSHP"; set_defaults(default_params);
}

void PIHMgisDialog::on_pushButtonWorkFlow5_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(5-1);

    // ** Set Default PushButton
    QStringList default_params; default_params << "WORKFLOW5" << "MESH"; set_defaults(default_params);
}

void PIHMgisDialog::on_pushButtonWorkFlow6_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(6-1);

    // ** Set Default PushButton
    QStringList default_params; default_params << "WORKFLOW6" << "PIHM"; set_defaults(default_params);
}

void PIHMgisDialog::on_pushButtonWorkFlow7_clicked()
{
    //??ui->PIHMgisToolBox->setCurrentIndex(7-1);

    // ** Set Default PushButton
    QStringList default_params; default_params << "WORKFLOW7" << "SPATIALW" << "SPATIALR" << "TIMEW" << "TIMER"; set_defaults(default_params);
}

// **** END   :: PIHMgis Help & Resources Slots **** //


// ************************************************************************** //


// **** START :: PIHMgis Project Management **** //

void PIHMgisDialog::on_pushButtonPIHMgisProjectNew_clicked()
{
    //??QStringList default_params; default_params << "FILLPITS" << "WORKFLOW2"; set_defaults(default_params);

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);

    NewProject *NewProjectDialog = new NewProject(this);
    NewProjectDialog->show();
}

void PIHMgisDialog::on_pushButtonPIHMgisProjectOpen_clicked()
{
    //??QStringList default_params; default_params << "FILLPITS" << "WORKFLOW2"; set_defaults(default_params);

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);

    OpenProject *OpenProjectDialog = new OpenProject(this);
    OpenProjectDialog->show();
}

void PIHMgisDialog::on_pushButtonPIHMgisProjectImport_clicked()
{
    //??QStringList default_params; default_params << "FILLPITS" << "WORKFLOW2"; set_defaults(default_params);

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);

    ImportProject *ImportProjectDialog = new ImportProject(this);
    ImportProjectDialog->show();
}

void PIHMgisDialog::on_pushButtonPIHMgisProjectClose_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW1"; set_defaults(default_params);

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);

    CloseProject *CloseProjectDialog = new CloseProject(this);
    CloseProjectDialog->show();
}

// **** END   :: PIHMgis Project Management Slots **** //


// ************************************************************************** //


// **** START :: Raster Processing Slots **** //

void PIHMgisDialog::on_pushButtonRasterProcessingFillPits_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW2" << "FLOWGRIDS"; set_defaults(default_params);

    FillPits *FillPitsDialog = new FillPits(this);
    FillPitsDialog->show();
}

void PIHMgisDialog::on_pushButtonRasterProcessingFlowGrids_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW2" << "STRGRIDS"; set_defaults(default_params);

    FlowGrids *FlowGridsDialog = new FlowGrids(this);
    FlowGridsDialog->show();
}

void PIHMgisDialog::on_pushButtonRasterProcessingStreamGrids_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW2" << "LINKGRIDS"; set_defaults(default_params);

    StreamGrids *StreamGridsDialog = new StreamGrids(this);
    StreamGridsDialog->show();
}

void PIHMgisDialog::on_pushButtonRasterProcessingLinkGrids_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW2" << "CATGRIDS"; set_defaults(default_params);

    LinkGrids *LinkGridsDialog = new LinkGrids(this);
    LinkGridsDialog->show();
}

void PIHMgisDialog::on_pushButtonRasterProcessingCatchmentGrids_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW2" << "STRPOLY"; set_defaults(default_params);

    CatchmentGrids *CatchmentGridsDialog = new CatchmentGrids(this);
    CatchmentGridsDialog->show();
}

void PIHMgisDialog::on_pushButtonRasterProcessingStreamPolyline_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW2" << "CATPOLY"; set_defaults(default_params);

    StreamPolyline *StreamPolylineDialog = new StreamPolyline(this);
    StreamPolylineDialog->show();
}

void PIHMgisDialog::on_pushButtonRasterProcessingCatchmentPolygon_clicked()
{
    //??QStringList default_params; default_params << "DISSOLVE" << "WORKFLOW3"; set_defaults(default_params);

    CatchmentPolygon *CatchmentPolygonDialog = new CatchmentPolygon(this);
    CatchmentPolygonDialog->show();

    //ui->pushButtonVectorProcessingDissolvePolygons->setDefault(1);
    //ui->PIHMgisToolBox->setCurrentIndex(8-1);
}

// **** END   :: Raster Processing Slots **** //


// ************************************************************************** //


// **** START :: Vector Processing Slots **** //

void PIHMgisDialog::on_pushButtonVectorProcessingDissolvePolygons_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW3" << "POLYGON"; set_defaults(default_params);

    DissolvePolygons *DissolvePolygonsDialog = new DissolvePolygons(this);
    DissolvePolygonsDialog->show();
}

void PIHMgisDialog::on_pushButtonVectorProcessingPolygonToPolylines_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW3" << "SIMPLIFY"; set_defaults(default_params);

    PolygonToPolylines *PolygonToPolylinesDialog = new PolygonToPolylines(this);
    PolygonToPolylinesDialog->show();
}

void PIHMgisDialog::on_pushButtonVectorProcessingSimplifyPolylines_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW3" << "POLYLINE"; set_defaults(default_params);

    SimplifyPolylines *SimplifyPolylinesDialog = new SimplifyPolylines(this);
    SimplifyPolylinesDialog->show();
}

void PIHMgisDialog::on_pushButtonVectorProcessingPolylineToLines_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW3" << "MERGE"; set_defaults(default_params);

    PolylineToLines *PolylineToLinesDialog = new PolylineToLines(this);
    PolylineToLinesDialog->show();
}

void PIHMgisDialog::on_pushButtonVectorProcessingMergeVectorLayers_clicked()
{
    //??QStringList default_params; default_params << "READSHP" << "WORKFLOW4"; set_defaults(default_params);

    MergeVectorLayers *MergeVectorLayersDialog = new MergeVectorLayers(this);
    MergeVectorLayersDialog->show();

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);
}

// **** END   :: Vector Processing Slots **** //


// ************************************************************************** //


// **** START :: Domain Decomposition Slots **** //

void PIHMgisDialog::on_pushButtonDomainDecompositionReadTopology_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW4" << "TRIANGLE"; set_defaults(default_params);

    ReadTopology *ReadTopologyDialog = new ReadTopology(this);
    ReadTopologyDialog->show();
}

void PIHMgisDialog::on_pushButtonDomainDecompositionTriangulation_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW4" << "TINSHP"; set_defaults(default_params);

    DelaunayTriangulation *DelaunayTriangulationDialog = new DelaunayTriangulation(this);
    DelaunayTriangulationDialog->show();
}

void PIHMgisDialog::on_pushButtonDomainDecompositionTINShapeLayer_clicked()
{
    //??QStringList default_params; default_params << "MESH" << "WORKFLOW5"; set_defaults(default_params);

    TINShapeLayer *TINShapeLayerDialog = new TINShapeLayer(this);
    TINShapeLayerDialog->show();

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);
}

// **** END   :: Domain Decomposition Slots **** //


// ************************************************************************** //


// **** START :: Data Model Loader Slots **** //

void PIHMgisDialog::on_pushButtonDataModelLoaderMeshDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "ATTX"; set_defaults(default_params);

    MeshDataFile *MeshDataFileDialog = new MeshDataFile(this);
    MeshDataFileDialog->show();

}

void PIHMgisDialog::on_pushButtonDataModelLoaderAttDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "RIVX"; set_defaults(default_params);

    AttDataFile *AttDataFileDialog = new AttDataFile(this);
    AttDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderRivDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "SOIL"; set_defaults(default_params);

    RivDataFile *RivDataFileDialog = new RivDataFile(this);
    RivDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderSoilDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "GEOL"; set_defaults(default_params);

    SoilDataFile *SoilDataFileDialog = new SoilDataFile(this);
    SoilDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderGeolDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "LCXX"; set_defaults(default_params);

    GeolDataFile *GeolDataFileDialog = new GeolDataFile(this);
    GeolDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderLcDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "INIT"; set_defaults(default_params);

    LcDataFile *LcDataFileDialog = new LcDataFile(this);
    LcDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderInitDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "IBCX"; set_defaults(default_params);

    InitDataFile *InitDataFileDialog = new InitDataFile(this);
    InitDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderIbcDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "PARA"; set_defaults(default_params);

    IbcDataFile *IbcDataFileDialog = new IbcDataFile(this);
    IbcDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderParamDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "CALI"; set_defaults(default_params);

    ParaDataFile *ParaDataFileDialog = new ParaDataFile(this);
    ParaDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderCalibDataFile_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW5" << "FORC"; set_defaults(default_params);

    CalibDataFile *CalibDataFileDialog = new CalibDataFile(this);
    CalibDataFileDialog->show();
}

void PIHMgisDialog::on_pushButtonDataModelLoaderForcDataFile_clicked()
{
    QStringList default_params; default_params << "WORKFLOW6" << "WORKFLOW8"; set_defaults(default_params);
    bool success = QDesktopServices::openUrl(QUrl("http://cataract.cee.psu.edu/PIHM/index.php/PIHMgis_3.0#forc_Data_File"));

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);
}

// **** END   :: Data Model Loader Slots **** //


// ************************************************************************** //


// **** START :: PIHM Simulation Slots **** //

void PIHMgisDialog::on_pushButtonPIHMSimulation_clicked()
{
    //??QStringList default_params; default_params << "SPATIALW" << "SPATIALR" << "TIMEW" << "TIMER" << "WORKFLOW7"; set_defaults(default_params);

    PIHMSimulation *PIHMSimulationDialog = new PIHMSimulation(this);
    PIHMSimulationDialog->ModelVersion = ui->comboBoxPIHMVersion->currentText();
    PIHMSimulationDialog->show();

    //??ui->PIHMgisToolBox->setCurrentIndex(8-1);
}

// **** END   :: PIHM Simulation Slots **** //


// ************************************************************************** //


// **** START :: Visual Analytics Slots **** //

void PIHMgisDialog::on_pushButtonVisualAnalyticsSpatialWatershed_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW7" << "SPATIALR" << "TIMEW" << "TIMER" << "SPATIALW"; set_defaults(default_params);
    MeshSpatial *MeshSpatialDialog = new MeshSpatial(this);
    MeshSpatialDialog->show();
}

void PIHMgisDialog::on_pushButtonVisualAnalyticsTemporalWatershed_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW7" << "TIMER" << "SPATIALW" << "SPATIALR" << "TIMEW"; set_defaults(default_params);

    QApplication *app;
    MeshTemporal *MeshTemporalDialog = new MeshTemporal(this);
    MeshTemporalDialog->show();
}

void PIHMgisDialog::on_pushButtonVisualAnalyticsSpatialRiverNetwork_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW7" << "TIMEW" << "TIMER" << "SPATIALW" << "SPATIALR"; set_defaults(default_params);
    RiverSpatial *RiverSpatialDialog = new RiverSpatial(this);
    RiverSpatialDialog->show();
}

void PIHMgisDialog::on_pushButtonVisualAnalyticsTemporalRiverNetwork_clicked()
{
    //??QStringList default_params; default_params << "WORKFLOW7" << "SPATIALW" << "SPATIALR" << "TIMEW" << "TIMER"; set_defaults(default_params);

    QApplication *app;
    RiverTemporal *RiverTemporalDialog = new RiverTemporal(this);
    RiverTemporalDialog->show();
}

// **** END   :: Visual Analytics Slots **** //


// ************************************************************************** //
