/* Program to compute area contributing to each pixel from pointers using  */
/* recursive algorithm  */

/* Created by David G Tarboton  */
/*  File: aread8.c 
	
*/
#include <iostream>
#include "lsm.h"
int **arr;    /*  Global array with area results  */
void darea(int, int);

int aread8(char *pfile,char *afile, double x, double y, int doall)
 {                
   int i,j,err,row,col;    
/* define directions */
   d1[1]=0; d1[2]= -1; d1[3]= -1; d1[4]= -1; d1[5]=0; d1[6]=1; d1[7]=1; d1[8]=1;
   d2[1]=1; d2[2]=1; d2[3]=0; d2[4]= -1; d2[5]= -1; d2[6]= -1; d2[7]=0; d2[8]=1;
     
/*  read pointers */
   err=gridread(pfile,(void ***)&dir,RPSHRDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&ndv,&filetype);
   if(err != 0)goto ERROR1;
/*  Allocate area memory  */
   arr =   (int **)  matalloc(nx,ny,RPINTDTYPE);
/* initialize area array to 0, -1 on boundary */
   for(i=0; i<ny; i++)
   {
      for(j=0; j<nx; j++)
        {
        if(i!=0 && i!=ny-1 && j!=0 && j!=nx-1 && dir[j][i]!= -1)
           arr[j][i]=0;
        else arr[j][i]= -1;
        }
   }
    if(doall == 0)   /*  Only compute area's for designated location  */
   {
		col= (int)floor((x-bndbox[0])/csize);
		row= (int)floor((bndbox[3]-y)/csize);
		if(row <0 || row > ny || col < 0 || col > nx)
		{
			printf("Given coords out of area - whole area will be calculated\n");
			row=0; col=0;
		}
	}
	else
	{
		row=0; col=0;
	}
	if(row > 0 && col > 0)
   {
/* call drainage area subroutine for pixel to zero on  */
      darea(row,col);
    }
    else
    {
 
/* call drainage area subroutine for each area */
/* work from middle outwards to avoid deep recursions  */
	//cout<<"Just a flag\n";
	printf("Just a flag\n");
   	for(i=ny/2; i<ny-1; i++)                    
   	{  for(j=nx/2; j<nx-1; j++)
   	     darea(i,j);
   	   for(j=nx/2-1; j>=1; j--)
   	     darea(i,j);
  	}  
  	 for(i=ny/2-1; i>=1; i--)                    
  	 {  for(j=nx/2; j<nx-1; j++)
       		 darea(i,j);
      	    for(j=nx/2-1; j>=1; j--)
       		 darea(i,j);
   	} 
   } 
/* write out areas */
   err=gridwrite(afile, (void **)arr,RPINTDTYPE,nx,ny,dx,dy,
       bndbox,csize, -1., filetype);
   free(arr[0]);
   free(arr);
ERROR1:
   free(dir[0]);
   free(dir);
   return(err);
 }     

/* function to compute area recursively */
void darea(int i, int j)
  {                                        
    int in,jn,k,con=0;
      /* con is a flag that signifies possible contaminatin of area
         due to edge effects  */
    if(arr[j][i]==0)
    {
      if(i!=0 && i!=ny-1 && j!=0 && j!=nx-1 && dir[j][i]!= -1)
                 /* not on boundary  */
      {
        arr[j][i]=1;                               
        for(k=1; k<=8; k++)
        {  in=i+d1[k];
           jn=j+d2[k];
/* test if neighbor drains towards cell excluding boundaryies */
           if(dir[jn][in]>0 && (dir[jn][in]-k==4||dir[jn][in]-k==-4))
             {
                darea(in,jn);
                if(arr[jn][in] < 0)con = -1;
                else arr[j][i]=arr[j][i]+arr[jn][in];
             }
           if(dir[jn][in] < 0)con = -1;
        }
        //Here: GOPAL commented next line
        //if(con == -1)arr[j][i]= -1;
      }
    }
  }
