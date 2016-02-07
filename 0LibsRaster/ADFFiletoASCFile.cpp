#include "ADFFiletoASCFile.h"

#include <gdal.h>
#include <gdal_priv.h>

#include <QObject>
#include <QString>
#include <QDebug>
#include <QFile>


double readValueB2A ( void *data, GDALDataType type, int index )
{
  double val;

  switch ( type )
  {
  case GDT_Byte:
    return (double) ((GByte *)data)[index];
    break;
  case GDT_UInt16:
    return (double) ((GUInt16 *)data)[index];
    break;
  case GDT_Int16:
    return (double) ((GInt16 *)data)[index];
    break;
  case GDT_UInt32:
    return (double) ((GUInt32 *)data)[index];
    break;
  case GDT_Int32:
    return (double) ((GInt32 *)data)[index];
    break;
  case GDT_Float32:
    return (double) ((float *)data)[index];
    break;
  case GDT_Float64:
    val = ((double *)data)[index];
    return (double) ((double *)data)[index];
    break;
  default:
    qDebug()<<"Raster Data Type: "<<type<<" is not supported";
  }
  return 0.0;
}


void ADFFiletoASCFile(QString ADFFileName, QString ASCFileName)
{
    GDALDataset *layer;
    GDALAllRegister();
    layer = (GDALDataset *)GDALOpen(qPrintable(ADFFileName), GA_ReadOnly);
    
    int bandNumber = 1;
    GDALRasterBand *band = layer->GetRasterBand(bandNumber);
    GDALDataType type    = band->GetRasterDataType();

    double ranges[6];
    layer->GetGeoTransform(ranges);

    QFile ASCFile(ASCFileName);
    ASCFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream ASCFileTextStream(&ASCFile);
     
    ASCFileTextStream<<"ncols "<<layer->GetRasterXSize()<<"\n";
    ASCFileTextStream<<"nrows "<<layer->GetRasterYSize()<<"\n";
    ASCFileTextStream<<"xllcorner "<<ranges[0]<<"\n";
    ASCFileTextStream<<"yllcorner "<<(ranges[3] + layer->GetRasterXSize() * ranges[4] + layer->GetRasterYSize() * ranges[5])<<"\n";
    ASCFileTextStream<<"cellsize " <<ranges[1]<<"\n";
    ASCFileTextStream<<"nodata_value "<<"-9999"<<"\n";
    //getchar(); getchar();

    int cols = layer->GetRasterXSize();
    int rows = layer->GetRasterYSize();
    double NODATA_VAL = band->GetNoDataValue();

    qDebug()<<"NODATA_VALUE = "<<NODATA_VAL<<"\n";

    int size = GDALGetDataTypeSize(type) / 8;
    void *data = CPLMalloc(size);
    //CPLErr err = band->RasterIO(GF_Read, 0, 0, cols, rows, data, cols, rows, type, 0, 0);
	//getchar(); getchar();
    //for(int j=0; j<rows*cols; j++){
	//int col, row;
    for(int row=0; row<rows; row++)
    {
        for(int col=0; col<cols; col++)
        {
	 
            CPLErr err = band->RasterIO(GF_Read, col, row, 1, 1, data, 1, 1, type, 0, 0);
            double tempVal = readValueB2A(data, type, 0);
            ASCFileTextStream<<( tempVal != NODATA_VAL ? tempVal : -9999)<<" ";
	
        }
        ASCFileTextStream<<"\n";
    }
    ASCFile.close();

    qDebug()<<"ADFFiletoASCFile Processing ... Done!\n";
}
