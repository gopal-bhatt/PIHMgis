#include <stdio.h>
#include "lsm.h"

#define MAX 8
// MAX => No. of converging cells to one cell

int streamSegmentation(char *rivFile, char *fdrFile, char *segFile, char *nodeFile);
void streamGen(float **riv, short **fdr, int i, int j);
void findIJ(short **fdr, int i, int j, int *mIJ);
int findCell(float **riv, short **fdr, int i, int j, int (*cell)[2]); 

FILE *fpNode_Seg;
int numNodes_Seg=0;
// Segments the rivers 
int streamSegmentation(char *rivFile, char *fdrFile, char *segFile, char *nodeFile){
    
    int err;
    int i, j, fdr;
    int mIJ[2];
    fpNode_Seg = fopen(nodeFile, "w");
    fprintf(fpNode_Seg, "\n");
    err=gridread(fdrFile,(void ***)&dir,RPSHRDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    //printf("%d %d %d %d\n",nx, ny, dir[1][2], dir[5][1]);
    err=gridread(rivFile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    //printf("%d %d %f %f\n",nx, ny, elev[4][2], elev[5][2]);
    err=gridread(rivFile,(void ***)&slope,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    //printf("%d %d %f %f\n",nx, ny, slope[4][2], slope[2][5]);
    for(i=0; i<nx; i++){ //i => Column : nx => col
             for(j=0; j<ny; j++){ //j => Row : ny => row
                      //printf("= %d\n",elev[i][j]);
                      if(elev[i][j]==1){
                           fdr=dir[i][j];
                           //printf("= %d\n",fdr);
                           findIJ(dir,i,j,mIJ); //Find outlet
                           //printf("IJ= %d %d %d\n",mIJ[0], mIJ[1],elev[mIJ[0]][mIJ[1]]);
                           //getchar();
                           if(elev[mIJ[0]][mIJ[1]] != 1 ){ // outlet found
                                printf("Outlet-> %d %d\n",mIJ[0], mIJ[1]);
                                //getchar();
                                numNodes_Seg++;
                                fprintf(fpNode_Seg, "\n%d\t%d", i, j); // i => col :: j = > row
                                streamGen(elev, dir, i, j);
                           }
                      }
             }
    }
    rewind(fpNode_Seg);
    fprintf(fpNode_Seg, "%d\n", numNodes_Seg);
    fclose(fpNode_Seg);
    err = gridwrite(segFile,(void **)slope,RPFLTDTYPE,nx,ny,dx,dy,bndbox,csize,mval,filetype);
    if(err != 0)return(err);                                                   
}

// Recursively generates the river segments starting from outlet(i,j)
void streamGen(float **riv, short **fdr, int i, int j){
    static int num = 1;
    int stop = 0;
    int ii;
    int cell[MAX][2];
    int temp;
    
    //printf("StreamGen-> %d %d\n",i, j);
    //getchar();
                                
    while(stop == 0){
         temp=findCell(riv, fdr, i, j, cell);
         //printf("temp= %d\n",temp); 
         
         slope[i][j]=num;
         //getchar(); getchar();
         if(temp==0){
             num++;
             return;
         } 
         else if(temp==1){
              i=cell[0][0];
              j=cell[0][1];
         }
         else{// => temp>1)
             stop = 1;
             num++;
             //printf("%f\n",num);
             if(temp>1){
                 for(ii=0; ii<temp; ii++){
                     numNodes_Seg++;
                     fprintf(fpNode_Seg, "\n%d\t%d", cell[ii][0], cell[ii][1]); // i => col :: j = > row
                     streamGen(riv, fdr, cell[ii][0], cell[ii][1]);
                 }
             }
         }
    }
    return;
}
        
// Finds down-stream cell index 
void findIJ(short **fdr, int i, int j, int *mIJ){
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
int findCell(float **riv, short **dir, int i, int j, int (*cell)[2]){
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
                 findIJ(dir, ii, jj, mIJ);
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
                 
