#include "pickGridValue.h"
//#include <qgis.h>

using namespace std;

double readValue ( void *data, GDALDataType type, int index )
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

static double Xmax, Xmin, Ymax, Ymin;
static double Xres, Yres;

void getExtent(GDALDataset *temp, double *ranges){
	//cout<<"IN : getExtent\n";
	double adfGeoTransform[6];
	temp->GetGeoTransform(adfGeoTransform);
	double myXMaxDouble = adfGeoTransform[0] + temp->GetRasterXSize() * adfGeoTransform[1] + temp->GetRasterYSize() * adfGeoTransform[2];
  	double myYMinDouble = adfGeoTransform[3] + temp->GetRasterXSize() * adfGeoTransform[4] + temp->GetRasterYSize() * adfGeoTransform[5];

        Xmax = myXMaxDouble;
	// The affine transform reduces to these values at the
	// top-left corner of the raster
	Xmin = adfGeoTransform[0];
	Ymax = adfGeoTransform[3];
	Ymin = myYMinDouble; 

	int rasterXDimInt = temp->GetRasterXSize();
	int rasterYDimInt = temp->GetRasterYSize(); 

	Xres = (Xmax - Xmin) / rasterXDimInt;
	//cout<<"Xres= "<<Xres<<"\n";
	Yres = (Ymax - Ymin) / rasterYDimInt;
	//cout<<"Yres= "<<Yres<<"\n";
	ranges[0]=Xmin;
	ranges[1]=Xmax;
	ranges[2]=Ymin;
	ranges[3]=Ymax;
	ranges[4]=Xres;
	ranges[5]=Yres;
	return;	
	//cout<<"OUT: getExtant\n";
}


double getRasterValue(GDALDataset* layer, int bandNumber, double x, double y, double *ranges){
	//cout<<"IN : getRasterValue\n";
	//cout<<"Xres= "<<Xres<<"\n";
	//cout<<"Yres= "<<Yres<<"\n";
	
	//GDALDataset* layer;
	//GDALAllRegister();
	//layer = (GDALDataset*)GDALOpen(layerName, GA_ReadOnly);
	GDALRasterBand *band = layer->GetRasterBand(bandNumber); //starts with 1
	GDALDataType type = band->GetRasterDataType();
	int size = GDALGetDataTypeSize(type) / 8;
	void *data = CPLMalloc(size);
	int col = (int) floor( (x-ranges[0])/ranges[4] );
	int row = (int) floor( (ranges[3]-y)/ranges[5] );
	//cout<<"col = "<<col<<"\n";
	//cout<<"row = "<<row<<"\n";
	//band->ReadBlock(col, row, data);
	CPLErr err = band->RasterIO(GF_Read, col, row, 1, 1, data, 1, 1, type, 0, 0);
	//cout<<"OUT: getRasterValue\n";
	return readValue(data, type, 0);
} 

/* 
main(){
	GDALDataset* temp;
	GDALAllRegister();
	temp = (GDALDataset*)GDALOpen("test/w001001.adf", GA_ReadOnly); */
	/*
	cout<<"X Size= "<<temp->GetRasterXSize()<<"\n";
	cout<<"Y Size= "<<temp->GetRasterYSize()<<"\n";
	cout<<"Count = "<<temp->GetRasterCount()<<"\n";
	//cout<<"Count = "<<temp->GetRasterCount()<<"\n";
	//GDALDataType data[3];
	GDALRasterBand *band = temp->GetRasterBand(1);
	cout<<"X     = "<<band->GetXSize()<<"\n";
	GDALDataType type = band->GetRasterDataType();
	int size = GDALGetDataTypeSize(type) / 8;
	void *data = CPLMalloc(size);
	//temp->RasterIO(GF_Read, 1, 1, 1, 1, data, 1, 1, type, 1, NULL, 0, 0, 0);
	band->ReadBlock(0, 1, data);
	cout<<"data= "<<readValue ( data, type, 0 );
	//for(int i=0; i<3; i++)
	//	cout<<"data= "<<data[i]<<"\n";
	*/
	/*
	cout<<"\n*********************\n";
	getExtent(temp);
	cout<<getRasterValue("test", 1, -113.042284, 42.617891);
	cout<<"\n*********************\n";	            
                       
	//cout<<"\n"<<myXMaxDouble<<" "<<myYMinDouble<<"\n";
}*/
