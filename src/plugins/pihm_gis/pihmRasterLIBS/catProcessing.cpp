#include <stdio.h>
#include "lsm.h"
#include "./../pihmLIBS/shapefil.h"

void findIJCat(short **fdr, int i, int j, int *mIJ);
int catchmentGrid(char *segFile, char *fdrFile, char *catFile);
int trace(float **seg, short int **fdr, float **cat, int i, int j);

int catchmentGrid(char *segFile, char *fdrFile, char *catFile){
    int i, j;
    int mIJ[2];
    int err; 
    
    err=gridread(fdrFile,(void ***)&dir,RPSHRDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    err=gridread(segFile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype); 
    err=gridread(segFile,(void ***)&slope,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype); 
    //printf("here1\n");
    
    // THIS LOOP CAN BE ELIMINATED BY CHANGING (SLOPE[I][J] < 0) FROM == IN THE NEXT FOR LOOP
    for(i=0; i<nx; i++){
        for(j=0; j<ny; j++){
            if(slope[i][j]<0)
                slope[i][j]=0;
        }
    }
    
    //printf("here2\n");
    
    for(i=0; i<nx; i++){
        for(j=0; j<ny; j++){
            //printf("->%d\t%d\t%d\n", i, j, dir[i][j]); //getchar(); getchar();
            if(slope[i][j] == 0 && dir[i][j]!=-1){
                //printf("-->%d\t%d\t%d\n", i, j, dir[i][j]);// getchar(); getchar();
                findIJCat(dir, i, j, mIJ);
                slope[i][j]=trace(elev, dir, slope, mIJ[0], mIJ[1]);
            }
        }
    }
    //printf("here3\n");
    //printf("before gridwrite\n");
    err = gridwrite(catFile,(void **)slope,RPFLTDTYPE,nx,ny,dx,dy,bndbox,csize,mval,filetype);
    //printf("before gridwrite\n");
}

int trace(float **seg, short int **fdr, float **cat, int i, int j){
    int mIJ[2];
    //printf("in trace\n");
    
    if(seg[i][j]>0){
        //printf("in trace 1\n"); // getchar(); getchar();
        return seg[i][j];
    }
    else if(cat[i][j] != 0){
        //printf("in trace 2\n"); // getchar(); getchar();
        return cat[i][j];
    }
    else if(fdr[i][j] == -1){
        return fdr[i][j];
    }
    else{
         //printf("in trace 3\n");
         //printf("%d\t%d\t%d\n", i, j, fdr[i][j]); // getchar(); getchar();
         findIJCat(fdr, i, j, mIJ);
         cat[i][j]=trace(seg, fdr, cat, mIJ[0], mIJ[1]);
    }
    return cat[i][j];
}
      
void findIJCat(short **fdr, int i, int j, int *mIJ){
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
