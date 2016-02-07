#include <stdio.h>
#include "lsm.h"
#include "./../pihmLIBS/shapefil.h"

#define MAX 8 // MAX => No. of converging cells to one cell

int streamSegmentationShp(char *rivFile, char *fdrFile, char *rivShpFile, char *rivDbfFile);
void streamGenShp(float **riv, short **fdr, int i, int j);
void swapPts(double *ptx, double *pty, double *ptz, int numPts);
void findIJShp(short **fdr, int i, int j, int *mIJ);
int findCellShp(float **riv, short **fdr, int i, int j, int (*cell)[2]); 
int getNumPts(float **riv, int nx, int ny);

int old1Fdr, old2Fdr;
//Global Variables for shp api
double *ptx, *pty, *ptz;
int nVertices;
int numPts;
SHPHandle shp; 
DBFHandle dbf; 
SHPObject *obj;
int Att; 
int recordNum;


    
// Segments the rivers 
int streamSegmentationShp(char *rivFile, char *fdrFile, char *rivShpFile, char *rivDbfFile){
    FILE *fp;
    int err;
    int i, j, fdr;
    int mIJ[2];
    
    int mii;
    int mcell[MAX][2];
    int mtemp;
    int mlocnVertices;

    shp = SHPCreate(rivShpFile, SHPT_ARC);
    dbf = DBFCreate(rivDbfFile);
    Att = DBFAddField(dbf, "SegNum", FTInteger, 5, 0);
    
    
    err=gridread(fdrFile,(void ***)&dir,RPSHRDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    //printf("%d %d %d %d\n",nx, ny, dir[1][2], dir[5][1]);
    err=gridread(rivFile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    //printf("%d %d %f %f\n",nx, ny, elev[4][2], elev[5][2]);
    err=gridread(rivFile,(void ***)&slope,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    printf("%d %d %f %f\n",nx, ny, slope[4][2], slope[2][5]); //getchar(); getchar();
    
    numPts = getNumPts(elev, nx, ny);
    printf("total pts= %d\n", numPts); //getchar(); getchar();
    ptx = (double *)malloc(numPts*sizeof(double));  
    pty = (double *)malloc(numPts*sizeof(double));
    ptz = (double *)malloc(numPts*sizeof(double));
    
    for(i=0; i<nx; i++){ //i => Column : nx => col
             for(j=0; j<ny; j++){ //j => Row : ny => row
                      //printf("= %d\n",elev[i][j]);
                      if(elev[i][j]==1){
                           fdr=dir[i][j];
                           //printf("= %d\n",fdr);
                           findIJShp(dir,i,j,mIJ); //Find outlet
                           //printf("IJ= %d %d %d\n",mIJ[0], mIJ[1],elev[mIJ[0]][mIJ[1]]);
                           //getchar();
                           if(elev[mIJ[0]][mIJ[1]] != 1 ){ // outlet found
                                printf("Outlet-> %d\t%d\t%d\n",mIJ[0], mIJ[1],elev[mIJ[0]][mIJ[1]]);
                                //getchar();
                                
                                mtemp=findCellShp(elev, dir, i, j, mcell);
                                for(mii=0; mii<mtemp; mii++){
                                    mlocnVertices=0;
                                    ptx[mlocnVertices] = bndbox[0] + (csize/2.0) + i*csize;
                                    pty[mlocnVertices] = bndbox[3] - (csize/2.0) - j*csize;         
                                    ptz[mlocnVertices] = 0.0;
                                    
                                    old1Fdr = old2Fdr;
                                    old2Fdr = dir[i][j];
                                    nVertices = 1;
                                    //streamGenShp(elev, dir, i, j);
                                    streamGenShp(elev, dir, mcell[mii][0], mcell[mii][1]);
                                }
                           }
                      }
             }
    }    
    //err = gridwrite(segFile,(void **)slope,RPFLTDTYPE,nx,ny,dx,dy,bndbox,csize,mval,filetype);
    SHPClose(shp);
    DBFClose(dbf);
    if(err != 0)return(err);                                                   
}

// Recursively generates the river segments starting from outlet(i,j)
void streamGenShp(float **riv, short **fdr, int i, int j){
    static int num = 1;
    int stop = 0;
    int ii;
    int cell[MAX][2];
    int temp;
    int locnVertices;
    //printf("StreamGen-> %d %d\n",i, j);
    //getchar();
    old2Fdr = 0;
    //sequenceFlag = 0;
    locnVertices = nVertices;
                           
    while(stop == 0){
         temp=findCellShp(riv, fdr, i, j, cell);
         //printf("temp= %d\n",temp); 
         //printf("--> %d\n", locnVertices); //getchar(); getchar();
         //printf("%f %f %f\n", bndbox[0], bndbox[1], csize);
         ptx[locnVertices] = bndbox[0] + (csize/2.0) + i*csize;
         pty[locnVertices] = bndbox[3] - (csize/2.0) - j*csize;         
         ptz[locnVertices] = 0.0;
         //printf("%f %f %f\n", ptx[locnVertices], pty[locnVertices], ptz[locnVertices]);
         locnVertices++;
         
         
         
         slope[i][j]=num;
         //getchar(); getchar();
         if(temp==0){
             //write polyline
	     swapPts(ptx, pty, ptz, locnVertices);
             obj = SHPCreateSimpleObject(SHPT_ARC, locnVertices, ptx, pty, ptz);
             SHPWriteObject(shp, -1, obj);
             recordNum = num-1;
             DBFWriteIntegerAttribute(dbf, recordNum, Att, num);
             //printf("shp# %d\n", num);
             //printf("1pts = %d\n", locnVertices); getchar(); getchar();
             num++;
             return;
         } 
         else if(temp==1){
              old1Fdr = fdr[i][j];
              i=cell[0][0];
              j=cell[0][1];
              //old1Fdr = old2Fdr;
              old2Fdr = fdr[i][j];
              if(old1Fdr==old2Fdr){
                           locnVertices--;
                           //ptx[locnVertices-1] = ptx[locnVertices]; 
                           //pty[locnVertices-1] = pty[locnVertices];
              }
         }
         else{// => temp>1)
             //write polyline
             //printf("2pts = %d\n", locnVertices); getchar(); getchar();
	     swapPts(ptx, pty, ptz, locnVertices);
             obj = SHPCreateSimpleObject(SHPT_ARC, locnVertices, ptx, pty, ptz);
             //printf("2pts = %d\n", locnVertices); getchar(); getchar();
             SHPWriteObject(shp, -1, obj);
             recordNum = num-1;
             DBFWriteIntegerAttribute(dbf, recordNum, Att, num);
             //printf("shp# %d\n", num);
             //printf("2pts = %d\n", locnVertices); getchar(); getchar();
             stop = 1;
             num++;
             //printf("%f\n",num);
             if(temp>1){
                 // Write polyline
                 for(ii=0; ii<temp; ii++){
                      // Add previous (junction) point to the list pos#0
                      locnVertices=0;
                      ptx[locnVertices] = bndbox[0] + (csize/2.0) + i*csize;
                      pty[locnVertices] = bndbox[3] - (csize/2.0) - j*csize;         
                      ptz[locnVertices] = 0.0;
                      
                      old1Fdr = old2Fdr;
                      old2Fdr = fdr[i][j];
                      // set global # of vertices to 1
                      nVertices=1;
                      streamGenShp(riv, fdr, cell[ii][0], cell[ii][1]);
                 }
             }
         }
    }
    return;
}
        
// Finds down-stream cell index 
void findIJShp(short **fdr, int i, int j, int *mIJ){
     // i => column : j => row
    //printf("fdr= %d %d %d\n",i,j,fdr[i][j]);
    if(fdr[i][j]==4 || fdr[i][j]==5 || fdr[i][j]==6)
        mIJ[0]=i-1;
    else if(fdr[i][j]==2 || fdr[i][j]==1 || fdr[i][j]==8)
        mIJ[0]=i+1;
    else
        mIJ[0]=i;
    
    if(fdr[i][j]==4 || fdr[i][j]==3 || fdr[i][j]==2)
        mIJ[1]=j-1;
    else if(fdr[i][j]==6 || fdr[i][j]==7 || fdr[i][j]==8)
        mIJ[1]=j+1;
    else
        mIJ[1]=j;
    
    return;
}

// Finds ALL the up-stream/draining cells index 
int findCellShp(float **riv, short **dir, int i, int j, int (*cell)[2]){
     int ii, jj;
     int cellCount=0;
     int fdr;
     int mIJ[2];
     //printf("i= %d j= %d\n",i,j);
     for(ii=i-1; ii<=i+1; ii++){ //col 
         for(jj=j-1; jj<=j+1; jj++){ //row
             //printf("ii= %d jj= %d\n",ii, jj);
             if((ii!=i || jj!=j) && riv[ii][jj]==1){
                 //fdr=dir[ii][jj];
                 findIJShp(dir, ii, jj, mIJ);
                 //printf("%d %d\n", mIJ[0], mIJ[1]);
                 if(mIJ[0]==i && mIJ[1]==j){
                     cell[cellCount][0]=ii;
                     cell[cellCount][1]=jj;
                     cellCount++;
                     //printf("-> %d %d\n", ii, jj);
                     //printf("here\n");
                 }
             }
         }
     }
     //getchar(); getchar();
     return cellCount;
}
                 
int getNumPts(float **riv, int nx, int ny){
    int i, j, num=0;
    printf("debug getNumPts\n"); //getchar(); getchar();
    for(i=0; i<nx; i++){
            for(j=0; j<ny; j++){
                    if(riv[i][j]==1)
                        num++;
            }
    }
    printf("debug getNumPts OUT\n"); //getchar(); getchar();
    return num;
}

void swapPts(double *ptx, double *pty, double *ptz, int numPts){
	double temp;
	for(int i=0; i<numPts/2; i++){
		temp = ptx[i];
		ptx[i] = ptx[numPts-1-i];
		ptx[numPts-1-i] = temp;

		temp = pty[i];
		pty[i] = pty[numPts-1-i];
		pty[numPts-1-i] = temp;

		temp = ptz[i];
		ptz[i] = ptz[numPts-1-i];
		ptz[numPts-1-i] = temp;

	}
}
