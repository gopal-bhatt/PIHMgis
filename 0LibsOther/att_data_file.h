#ifndef ATT_DATA_FILE_H
#define ATT_DATA_FILE_H

#include <QString>



int att_data_file(
        QString PrecipitationFileName, bool PrecipitationFlag, QString TemperatureFileName,    bool TemperatureFlag,    QString RelativeHumidityFileName, bool RelativeHumidityFlag, QString WindVelocityFileName,     bool WindVelocityFlag,     QString SolarRadiationFileName, bool SolarRadiationFlag, QString VaporPressureFileName,     bool VaporPressureFlag,
        QString SoilClassesFileName,   bool SoilClassesFlag,   QString GeologyClassesFileName, bool GeologyClassesFlag, QString MacroporesFileName,       bool MacroporesFlag,       QString LandCoverClassesFileName, bool LandCoverClassesFlag, QString MeltRegionsFileName,    bool MeltRegionsFlag,    QString SourcesSinksFileName,      bool SourcesSinksFlag,
        QString InterceptionFileName,  bool InterceptionFlag,  QString SnowCoverFileFileName,  bool SnowCoverFileFlag,  QString SurfaceStorageFileName,   bool SurfaceStorageFlag,   QString SoilMoistureFileName,     bool SoilMoistureFlag,     QString GroundwaterFileName,    bool GroundwaterFlag,    QString BoundaryConditionFileName, bool BoundaryConditionFlag,
        QString TINShapeLayerFileName, QString AttDataFileName
        );

#endif // ATT_DATA_FILE_H
