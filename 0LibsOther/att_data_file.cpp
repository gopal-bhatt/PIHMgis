#include <QString>
#include <QFile>
#include <QTextStream>

#include <gdal.h>
#include <gdal_priv.h>

#include "./0LibsShape/shapefil.h"
#include "./0LibsOther/raster_grid_value.h"

#define _GDAL_PRECIPITATION     if ( ! PrecipitationFlag )
#define _GDAL_TEMPERATURE       if ( ! TemperatureFlag )
#define _GDAL_RELATIVEHUMIDITY  if ( ! RelativeHumidityFlag )
#define _GDAL_WINDVELOCITY      if ( ! WindVelocityFlag )
#define _GDAL_SOLARRADIATION    if ( ! SolarRadiationFlag )
#define _GDAL_VAPORPRESSURE     if ( ! VaporPressureFlag )

#define _GDAL_SOILCLASSES       if ( ! SoilClassesFlag )
#define _GDAL_GEOLOGYCLASSES    if ( ! GeologyClassesFlag )
#define _GDAL_MACROPORES        if ( ! MacroporesFlag )
#define _GDAL_LANDCOVERCLASSES  if ( ! LandCoverClassesFlag )
#define _GDAL_MELTREGIONS       if ( ! MeltRegionsFlag )
#define _GDAL_SOURCESSINKS      if ( ! SourcesSinksFlag )

#define _GDAL_INTERCEPTION      if ( ! InterceptionFlag )
#define _GDAL_SNOWCOVER         if ( ! SnowCoverFileFlag )
#define _GDAL_SURFACESTORAGE    if ( ! SurfaceStorageFlag )
#define _GDAL_SOILMOISTURE      if ( ! SoilMoistureFlag )
#define _GDAL_GROUNDWATER       if ( ! GroundwaterFlag )
#define _GDAL_BOUNDARYCONDITION if ( ! BoundaryConditionFlag )

// _GDAL_PRECIPITATION _GDAL_TEMPERATURE _GDAL_RELATIVEHUMIDITY _GDAL_WINDVELOCITY _GDAL_SOLARRADIATION _GDAL_VAPORPRESSURE
// _GDAL_SOILCLASSES _GDAL_GEOLOGYCLASSES _GDAL_MACROPORES _GDAL_LANDCOVERCLASSES _GDAL_MELTREGIONS _GDAL_SOURCESSINKS
// _GDAL_INTERCEPTION _GDAL_SNOWCOVER _GDAL_SURFACESTORAGE _GDAL_SOILMOISTURE _GDAL_GROUNDWATER _GDAL_BOUNDARYCONDITION

int att_data_file(
        QString PrecipitationFileName, bool PrecipitationFlag, QString TemperatureFileName,    bool TemperatureFlag,    QString RelativeHumidityFileName, bool RelativeHumidityFlag, QString WindVelocityFileName,     bool WindVelocityFlag,     QString SolarRadiationFileName, bool SolarRadiationFlag, QString VaporPressureFileName,     bool VaporPressureFlag,
        QString SoilClassesFileName,   bool SoilClassesFlag,   QString GeologyClassesFileName, bool GeologyClassesFlag, QString MacroporesFileName,       bool MacroporesFlag,       QString LandCoverClassesFileName, bool LandCoverClassesFlag, QString MeltRegionsFileName,    bool MeltRegionsFlag,    QString SourcesSinksFileName,      bool SourcesSinksFlag,
        QString InterceptionFileName,  bool InterceptionFlag,  QString SnowCoverFileFileName,  bool SnowCoverFileFlag,  QString SurfaceStorageFileName,   bool SurfaceStorageFlag,   QString SoilMoistureFileName,     bool SoilMoistureFlag,     QString GroundwaterFileName,    bool GroundwaterFlag,    QString BoundaryConditionFileName, bool BoundaryConditionFlag,
        QString TINShapeLayerFileName, QString AttDataFileName
        )
{
    QString TINShpFileName, TINDbfFileName;

    TINShpFileName = TINShapeLayerFileName;
    TINDbfFileName = TINShapeLayerFileName;
    TINDbfFileName = TINDbfFileName.replace( QString(".shp"), QString(".dbf") );

    SHPHandle _ShpHandle = SHPOpen(qPrintable(TINShpFileName), "rb");
    DBFHandle _DbfHandle = DBFOpen(qPrintable(TINDbfFileName), "rb");

    if ( _ShpHandle == NULL || _DbfHandle == NULL )
        return 27;

    int recordCount = DBFGetRecordCount( _DbfHandle );

    if ( recordCount < 1 )
        return 32;

    SHPObject *_ShpObject;

    QFile AttDataFile(AttDataFileName);
    if ( ! AttDataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 39;
    QTextStream AttDataFileTextStream(&AttDataFile);


    GDALDataset *GDALPrecipitation, *GDALTemperature,    *GDALRelativeHumidity, *GDALWindVelocity,     *GDALSolarRadiation, *GDALVaporPressure;
    GDALDataset *GDALSoilClasses,   *GDALGeologyClasses, *GDALMacropores,       *GDALLandCoverClasses, *GDALMeltRegions,    *GDALSourcesSinks;
    GDALDataset *GDALInterception,  *GDALSnowCover,      *GDALSurfaceStorage,   *GDALSoilMoisture,     *GDALGroundwater,    *GDALBoundaryCondition;

    double PrecipitationRanges[6], TemperatureRanges[6],    RelativeHumidityRanges[6], WindVelocityRanges[6],     SolarRadiationRanges[6], VaporPressureRanges[6];
    double SoilClassesRanges[6],   GeologyClassesRanges[6], MacroporesRanges[6],       LandCoverClassesRanges[6], MeltRegionsRanges[6],    SourcesSinksRanges[6];
    double InterceptionRanges[6],  SnowCoverRanges[6],      SurfaceStorageRanges[6],   SoilMoistureRanges[6],     GroundwaterRanges[6],    BoundaryConditionRanges[6];


    GDALAllRegister();

    _GDAL_PRECIPITATION     GDALPrecipitation     = (GDALDataset *)GDALOpen(qPrintable(PrecipitationFileName), GA_ReadOnly);
    _GDAL_TEMPERATURE       GDALTemperature       = (GDALDataset *)GDALOpen(qPrintable(TemperatureFileName), GA_ReadOnly);
    _GDAL_RELATIVEHUMIDITY  GDALRelativeHumidity  = (GDALDataset *)GDALOpen(qPrintable(RelativeHumidityFileName), GA_ReadOnly);
    _GDAL_WINDVELOCITY      GDALWindVelocity      = (GDALDataset *)GDALOpen(qPrintable(WindVelocityFileName), GA_ReadOnly);
    _GDAL_SOLARRADIATION    GDALSolarRadiation    = (GDALDataset *)GDALOpen(qPrintable(SolarRadiationFileName), GA_ReadOnly);
    _GDAL_VAPORPRESSURE     GDALVaporPressure     = (GDALDataset *)GDALOpen(qPrintable(VaporPressureFileName), GA_ReadOnly);

    _GDAL_SOILCLASSES       GDALSoilClasses       = (GDALDataset *)GDALOpen(qPrintable(SoilClassesFileName), GA_ReadOnly);
    _GDAL_GEOLOGYCLASSES    GDALGeologyClasses    = (GDALDataset *)GDALOpen(qPrintable(GeologyClassesFileName), GA_ReadOnly);
    _GDAL_MACROPORES        GDALMacropores        = (GDALDataset *)GDALOpen(qPrintable(MacroporesFileName), GA_ReadOnly);
    _GDAL_LANDCOVERCLASSES  GDALLandCoverClasses  = (GDALDataset *)GDALOpen(qPrintable(LandCoverClassesFileName), GA_ReadOnly);
    _GDAL_MELTREGIONS       GDALMeltRegions       = (GDALDataset *)GDALOpen(qPrintable(MeltRegionsFileName), GA_ReadOnly);
    _GDAL_SOURCESSINKS      GDALSourcesSinks      = (GDALDataset *)GDALOpen(qPrintable(SourcesSinksFileName), GA_ReadOnly);

    _GDAL_INTERCEPTION      GDALInterception      = (GDALDataset *)GDALOpen(qPrintable(InterceptionFileName), GA_ReadOnly);
    _GDAL_SNOWCOVER         GDALSnowCover         = (GDALDataset *)GDALOpen(qPrintable(SnowCoverFileFileName), GA_ReadOnly);
    _GDAL_SURFACESTORAGE    GDALSurfaceStorage    = (GDALDataset *)GDALOpen(qPrintable(SurfaceStorageFileName), GA_ReadOnly);
    _GDAL_SOILMOISTURE      GDALSoilMoisture      = (GDALDataset *)GDALOpen(qPrintable(SoilMoistureFileName), GA_ReadOnly);
    _GDAL_GROUNDWATER       GDALGroundwater       = (GDALDataset *)GDALOpen(qPrintable(GroundwaterFileName), GA_ReadOnly);
    _GDAL_BOUNDARYCONDITION GDALBoundaryCondition = (GDALDataset *)GDALOpen(qPrintable(BoundaryConditionFileName), GA_ReadOnly);

    _GDAL_PRECIPITATION         if ( GDALPrecipitation     == NULL ) return 75;
    _GDAL_TEMPERATURE           if ( GDALTemperature       == NULL ) return 76;
    _GDAL_RELATIVEHUMIDITY      if ( GDALRelativeHumidity  == NULL ) return 77;
    _GDAL_WINDVELOCITY          if ( GDALWindVelocity      == NULL ) return 78;
    _GDAL_SOLARRADIATION        if ( GDALSolarRadiation    == NULL ) return 79;
    _GDAL_VAPORPRESSURE         if ( GDALVaporPressure     == NULL ) return 80;

    _GDAL_SOILCLASSES           if ( GDALSoilClasses       == NULL ) return 82;
    _GDAL_GEOLOGYCLASSES        if ( GDALGeologyClasses    == NULL ) return 83;
    _GDAL_MACROPORES            if ( GDALMacropores        == NULL ) return 84;
    _GDAL_LANDCOVERCLASSES      if ( GDALLandCoverClasses  == NULL ) return 85;
    _GDAL_MELTREGIONS           if ( GDALMeltRegions       == NULL ) return 86;
    _GDAL_SOURCESSINKS          if ( GDALSourcesSinks      == NULL ) return 87;

    _GDAL_INTERCEPTION          if ( GDALInterception      == NULL ) return 89;
    _GDAL_SNOWCOVER             if ( GDALSnowCover         == NULL ) return 90;
    _GDAL_SURFACESTORAGE        if ( GDALSurfaceStorage    == NULL ) return 91;
    _GDAL_SOILMOISTURE          if ( GDALSoilMoisture      == NULL ) return 92;
    _GDAL_GROUNDWATER           if ( GDALGroundwater       == NULL ) return 93;
    _GDAL_BOUNDARYCONDITION     if ( GDALBoundaryCondition == NULL ) return 94;


    _GDAL_PRECIPITATION         getExtent(GDALPrecipitation, PrecipitationRanges);
    _GDAL_TEMPERATURE           getExtent(GDALTemperature, TemperatureRanges);
    _GDAL_RELATIVEHUMIDITY      getExtent(GDALRelativeHumidity, RelativeHumidityRanges);
    _GDAL_WINDVELOCITY          getExtent(GDALWindVelocity, WindVelocityRanges);
    _GDAL_SOLARRADIATION        getExtent(GDALSolarRadiation, SolarRadiationRanges);
    _GDAL_VAPORPRESSURE         getExtent(GDALVaporPressure, VaporPressureRanges);

    _GDAL_SOILCLASSES           getExtent(GDALSoilClasses, SoilClassesRanges);
    _GDAL_GEOLOGYCLASSES        getExtent(GDALGeologyClasses, GeologyClassesRanges);
    _GDAL_MACROPORES            getExtent(GDALMacropores, MacroporesRanges);
    _GDAL_LANDCOVERCLASSES      getExtent(GDALLandCoverClasses, LandCoverClassesRanges);
    _GDAL_MELTREGIONS           getExtent(GDALMeltRegions, MeltRegionsRanges);
    _GDAL_SOURCESSINKS          getExtent(GDALSourcesSinks, SourcesSinksRanges);

    _GDAL_INTERCEPTION          getExtent(GDALInterception, InterceptionRanges);
    _GDAL_SNOWCOVER             getExtent(GDALSnowCover, SnowCoverRanges);
    _GDAL_SURFACESTORAGE        getExtent(GDALSurfaceStorage, SurfaceStorageRanges);
    _GDAL_SOILMOISTURE          getExtent(GDALSoilMoisture, SoilMoistureRanges);
    _GDAL_GROUNDWATER           getExtent(GDALGroundwater, GroundwaterRanges);
    _GDAL_BOUNDARYCONDITION     getExtent(GDALBoundaryCondition, BoundaryConditionRanges);

    double X, Y;
    int    GridValueInteger;
    double GridValueDouble;

//    if(CentroidRadioButton->isChecked() == TRUE)
//    {

        for(int i=0; i<recordCount; i++)
        {
            _ShpObject = SHPReadObject(_ShpHandle, i);

            // *** Centroid of the Triangle ( TIN )
            X = ( _ShpObject->padfX[0] + _ShpObject->padfX[1] + _ShpObject->padfX[2] ) / 3;
            Y = ( _ShpObject->padfY[0] + _ShpObject->padfY[1] + _ShpObject->padfY[2] ) / 3;


            AttDataFileTextStream << i+1 << "\t";
            _GDAL_SOILCLASSES       GridValueInteger = (int) raster_grid_value(GDALSoilClasses,         1, X, Y, SoilClassesRanges);
            else                    GridValueInteger = SoilClassesFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_GEOLOGYCLASSES    GridValueInteger = (int) raster_grid_value(GDALGeologyClasses,      1, X, Y, GeologyClassesRanges);
            else                    GridValueInteger = GeologyClassesFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_LANDCOVERCLASSES  GridValueInteger = (int) raster_grid_value(GDALLandCoverClasses,    1, X, Y, LandCoverClassesRanges);
            else                    GridValueInteger = LandCoverClassesFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_INTERCEPTION      GridValueDouble =        raster_grid_value(GDALInterception,            1, X, Y, InterceptionRanges);
            else                    GridValueDouble = InterceptionFileName.toDouble();
            AttDataFileTextStream << GridValueDouble << "\t";
            _GDAL_SNOWCOVER         GridValueDouble =        raster_grid_value(GDALSnowCover,               1, X, Y, SnowCoverRanges);
            else                    GridValueDouble = SnowCoverFileFileName.toDouble();
            AttDataFileTextStream << GridValueDouble << "\t";
            _GDAL_SURFACESTORAGE    GridValueDouble =        raster_grid_value(GDALSurfaceStorage,          1, X, Y, SurfaceStorageRanges);
            else                    GridValueDouble = SurfaceStorageFileName.toDouble();
            AttDataFileTextStream << GridValueDouble << "\t";
            _GDAL_SOILMOISTURE      GridValueDouble =        raster_grid_value(GDALSoilMoisture,            1, X, Y, SoilMoistureRanges);
            else                    GridValueDouble = SoilMoistureFileName.toDouble();
            AttDataFileTextStream << GridValueDouble << "\t";
            _GDAL_GROUNDWATER       GridValueDouble =        raster_grid_value(GDALGroundwater,             1, X, Y, GroundwaterRanges);
            else                    GridValueDouble = GroundwaterFileName.toDouble();
            AttDataFileTextStream << GridValueDouble << "\t";
            _GDAL_PRECIPITATION     GridValueInteger = (int) raster_grid_value(GDALPrecipitation,       1, X, Y, PrecipitationRanges);
            else                    GridValueInteger = PrecipitationFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_TEMPERATURE       GridValueInteger = (int) raster_grid_value(GDALTemperature,         1, X, Y, TemperatureRanges);
            else                    GridValueInteger = TemperatureFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_RELATIVEHUMIDITY  GridValueInteger = (int) raster_grid_value(GDALRelativeHumidity,    1, X, Y, RelativeHumidityRanges);
            else                    GridValueInteger = RelativeHumidityFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_WINDVELOCITY      GridValueInteger = (int) raster_grid_value(GDALWindVelocity,        1, X, Y, WindVelocityRanges);
            else                    GridValueInteger = WindVelocityFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";
            _GDAL_SOLARRADIATION    GridValueInteger = (int) raster_grid_value(GDALSolarRadiation,      1, X, Y, SolarRadiationRanges);
            else                    GridValueInteger = SolarRadiationFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";

            GridValueInteger = 0;
            AttDataFileTextStream << GridValueInteger << "\t";

            _GDAL_VAPORPRESSURE     GridValueInteger = (int) raster_grid_value(GDALVaporPressure,       1, X, Y, VaporPressureRanges);
            else                    GridValueInteger = VaporPressureFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";

            //TODO: DEAL TWO CASES: SHARED WITH TRIANGLES & INSIDE A TRIANGLE
            //TODO: USE SHAPE FILE FOR SOURCE/SINK INFORMATION - DETERMINE IN WHICH TRIANGLE THAT SOURCE/SINK POINT LIES
            _GDAL_SOURCESSINKS      GridValueInteger = (int) raster_grid_value(GDALSourcesSinks,        1, X, Y, SourcesSinksRanges);
            else                    GridValueInteger = SourcesSinksFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";

            _GDAL_MELTREGIONS       GridValueInteger = (int) raster_grid_value(GDALMeltRegions,         1, X, Y, MeltRegionsRanges);
            else                    GridValueInteger = MeltRegionsFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t";

            _GDAL_BOUNDARYCONDITION GridValueInteger = (int) raster_grid_value(GDALBoundaryCondition,   1, X, Y, BoundaryConditionRanges);
            else                    GridValueInteger = BoundaryConditionFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\t"; //BC1  TODO : FIGURE OUT WAY TO TRANSFER INFORMATION ABOUT BOUNDARY CONDITION ACROSS THE EDGE
            AttDataFileTextStream << GridValueInteger << "\t"; //BC2
            AttDataFileTextStream << GridValueInteger << "\t"; //BC3

            _GDAL_MACROPORES        GridValueInteger = (int) raster_grid_value(GDALMacropores,          1, X, Y, MacroporesRanges);
            else                    GridValueInteger = MacroporesFileName.toInt();
            AttDataFileTextStream << GridValueInteger << "\n";

        }


//    }

    AttDataFile.close();

    return 0;
}
