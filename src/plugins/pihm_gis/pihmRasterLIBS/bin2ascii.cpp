//#ifndef BIN2ASCII
//#define BIN2ASCII

#include <iostream>
#include <gdal.h>
#include <gdal_priv.h>
#include <fstream>
#include <iomanip>
#include "bin2ascii.h"

using namespace std;


//double readValueB2A ( void *data, GDALDataType type, int index );
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
    cout<<"Data type "<<type<<" is not supported";
  }
  return 0.0;
}

void bin2ascii(char *binFile, char *asciiFile){
    GDALDataset *layer;
    GDALAllRegister();
    layer = (GDALDataset *)GDALOpen(binFile, GA_ReadOnly);
    
    int bandNumber = 1;
    GDALRasterBand *band = layer->GetRasterBand(bandNumber);
    GDALDataType type    = band->GetRasterDataType();

    double ranges[6];
    layer->GetGeoTransform(ranges);

    ofstream outFile;
    outFile.open(asciiFile);
     
    outFile<<"ncols "<<layer->GetRasterXSize()<<"\n";
    outFile<<"nrows "<<layer->GetRasterYSize()<<"\n";
    outFile<<"xllcorner "<<ranges[0]<<"\n";
    outFile<<"yllcorner "<<(ranges[3] + layer->GetRasterXSize() * ranges[4] + layer->GetRasterYSize() * ranges[5])<<"\n";
    outFile<<"cellsize " <<ranges[1]<<"\n";
    outFile<<"nodata_value "<<"-9999"<<"\n";
    //getchar(); getchar();

    int cols = layer->GetRasterXSize();
    int rows = layer->GetRasterYSize();
    double NODATA_VAL = band->GetNoDataValue();

    cout<<"NODATA_VALUE= "<<NODATA_VAL<<"\n";

    int size = GDALGetDataTypeSize(type) / 8;
    void *data = CPLMalloc(size);
    //CPLErr err = band->RasterIO(GF_Read, 0, 0, cols, rows, data, cols, rows, type, 0, 0);
	//getchar(); getchar();
    //for(int j=0; j<rows*cols; j++){
	//int col, row;
    for(int row=0; row<rows; row++){
	for(int col=0; col<cols; col++){	
	 
	CPLErr err = band->RasterIO(GF_Read, col, row, 1, 1, data, 1, 1, type, 0, 0);
	double tempVal = readValueB2A(data, type, 0);
	outFile<<( tempVal != NODATA_VAL ? tempVal : -9999)<<" "; 
	
    	    //if((j+1)%cols == 0){
	//	cout<<"\n";
		//getchar(); getchar();
	//	}
	}
	outFile<<"\n"; 
	//getchar();
    }
	cout<<"Bin2Ascii.. Done!\n";
	outFile.close();
	//getchar(); getchar();
}


/*
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
    cout<<"Data type "<<type<<" is not supported";
  }
  return 0.0;
}*/

//#endif
