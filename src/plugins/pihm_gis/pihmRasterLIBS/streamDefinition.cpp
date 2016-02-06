#include <stdio.h>

#include "lsm.h"
#include "gridio.h"

// method = 1 => Area Threshold
// method = 2 => strahler order Threshold

int streamDefinition(char *aread8File, char *orderFile, char *rivFile, int method, float threshold){
    FILE *fp;
    int err;
    int i, j;

    if(method==1){
                  //*fp = fopen(aread8File, 'r');
                  err=gridread(aread8File,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
                  if(err != 0)return(err);

                  for(i=0; i<nx; i++){
                          for(j=0; j<ny; j++){
                                  if(elev[i][j]>=threshold)
                                          elev[i][j]=1;
                                  else
                                          elev[i][j]=mval;
                          }
                  }

                  printf("Writing output ...");
                  err = gridwrite(rivFile,(void **)elev,RPFLTDTYPE,nx,ny,dx,dy,bndbox,csize,mval,filetype);
                  if(err != 0) return(err);
    }

    else if(method==2){

    }

    else{
        printf("Method not found\n");
    }
}


