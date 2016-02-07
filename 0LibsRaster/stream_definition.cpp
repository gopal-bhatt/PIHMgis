#include <stdio.h>

#include "lsm.h"
#include "gridio.h"

// method = 1 => Area Threshold
// method = 2 => strahler order Threshold

int stream_definition(char *aread8File, char *orderFile, char *rivFile, int method, int threshold){
    FILE *fp;
    int err=0;
    int i, j;

    if(method==1)
    {
                  //*fp = fopen(aread8File, 'r');
                  printf("\nBefore grid read %d\n",err);
                  err=gridread(aread8File,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
                  printf("\nAfter grid read %d\n",err);
                  if(err != 0)return(err);

                  for(i=0; i<nx; i++)
                  {
                          for(j=0; j<ny; j++)
                          {
                                  if(elev[i][j]>=threshold)
                                          elev[i][j]=1;
                                  else
                                          elev[i][j]=mval;
                          }
                  }

                  printf("Writing output ...");
                  printf("\nBefore grid write %d\n",err);
                  err = gridwrite(rivFile,(void **)elev,RPFLTDTYPE,nx,ny,dx,dy,bndbox,csize,mval,filetype);
                  printf("\nAfter grid write %d\n",err);
                  if(err != 0) return(err);
    }

    else if(method==2)
    {
        printf("Method not yet implemented\n");
    }

    else
    {
        printf("Method not found\n");
    }
    return(0);
}


