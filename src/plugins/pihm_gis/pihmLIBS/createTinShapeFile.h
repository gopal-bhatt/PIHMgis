#include <fstream>
#include <iomanip>
#include "shapefil.h"

using namespace std;

void createTinShapeFile(const char* eleFileName, const char* nodeFileName, const char* shpFileName, const char*dbfFileName, const char *logFileName){
                          ifstream eleFile;
                          ifstream nodeFile;
                          eleFile.open(eleFileName);
                          nodeFile.open(nodeFileName);
                          
			  ofstream out;
			  out.open(logFileName, ios::app);
                          int temp;
                          
                           struct Point{
                                 double x,y;
                          };
                          struct Element{
                                 int p1, p2, p3;
                          };
                          
                          int countEle, countNode;
                          eleFile>>countEle; eleFile>>temp; eleFile>>temp;
                          Element* ele = new Element[countEle];
                          nodeFile>>countNode; 
                          nodeFile>>temp; nodeFile>>temp; nodeFile>>temp;
                          Point* nodes = new Point[countNode];
			  out<<"<p>Reading elements...\n";
                          for(int i=0; i<countEle; i++){
								  //cout<<i<<" ";
                                  eleFile>>temp;
                                  eleFile>>ele[i].p1;
                                  eleFile>>ele[i].p2;
                                  eleFile>>ele[i].p3;
                          }
			  out<<" Done!</p>";
						  
			  out<<"<p>Reading nodes...";
                          for(int i=0; i<countNode; i++){
                                  nodeFile>>temp;
                                  nodeFile>>setprecision(20)>>nodes[i].x;
                                  nodeFile>>setprecision(20)>>nodes[i].y;
                                  nodeFile>>temp;
                          }
			  out<<" Done!</p>";
						  
                          //Creates .shp and .shx files
			  out<<"<p>Writing .shp and .shx file ("<<shpFileName<<") ...";
                          SHPHandle newShp=SHPCreate(shpFileName, SHPT_POLYGON);
                          SHPObject* shpObj = new SHPObject;
			  double px[4], py[4], pz[4], pm[4];
                          for(int i=0; i<countEle; i++){
								  //if (i>countEle-10){cout<<i<<" ";getchar(); getchar();}
				  setprecision(20);
                                  px[0]=nodes[ele[i].p1-1].x; px[1]=nodes[ele[i].p2-1].x; px[2]=nodes[ele[i].p3-1].x;px[3]=nodes[ele[i].p1-1].x;
                                  py[0]=nodes[ele[i].p1-1].y; py[1]=nodes[ele[i].p2-1].y; py[2]=nodes[ele[i].p3-1].y;py[3]=nodes[ele[i].p1-1].y;
                                  pz[0]=0; pz[1]=0; pz[2]=0; pz[3]=0;
				  pm[0]=0; pm[1]=0; pm[2]=0; pm[3]=0;
				  int panPartStart[1], panPartType[1];
				  panPartStart[0]=0;
				  panPartType[0]=5;
								  //shpObj=SHPCreateObject(SHPT_POLYGON, i, 0, NULL, NULL, 3, px, py, NULL, NULL);
				  shpObj=SHPCreateObject(5, i, 1, panPartStart, panPartType, 4, px, py, pz, pm);
				  SHPComputeExtents(shpObj);
				  temp=SHPWriteObject(newShp, -1, shpObj);
                          }
                          SHPClose(newShp);
                          out<<" Done!</p>";

						  //Creates .dbf file
			  out<<"<p>Writing .dbf file ("<<dbfFileName<<") ...";
                          DBFHandle newDbf = DBFCreate(dbfFileName);
                          temp = DBFAddField(newDbf, "Ele_ID", FTInteger, 9, 0);
			  //out<<"Field Ele_ID with Field number: "<<temp<<" added to .dbf file\n";
                          for(int i=0; i<countEle; i++){
                                  temp = DBFWriteIntegerAttribute(newDbf, i, 0, i+1);
                          }
                          DBFClose(newDbf);
			  out<<" Done!</p>";
			  out<<"<br><br>";
}
