/* flood.c  Program to implement flooding algorithm to assign flow directions and fill 
   pits/pools in a DEM.  Uses ESRI arcview format IO files.  Modified from
   setdir2.c 
  David G Tarboton
  Utah State University    
  
  SINMAP package version 0.1 9/2/97   */

#include "lsm.h"
#include "gridio.h"
/*  This include declares all necessary global variables  */

int addstack(int i, int j);

/************************************************************************/
int flood(char *demfile, char *pointfile, char *newfile)
{
  int err;
/*  float mval;
  double bndbox[4],csize;    These are external now */   

/* define directions */
   d1[1]=0; d1[2]= -1; d1[3]= -1; d1[4]= -1; d1[5]=0; d1[6]=1; d1[7]=1; d1[8]=1;
   d2[1]=1; d2[2]=1; d2[3]=0; d2[4]= -1; d2[5]= -1; d2[6]= -1; d2[7]=0; d2[8]=1;

  err=gridread(demfile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
             
  if(err != 0)return(err);
/*  allocate  dir and stack arrays  */
  dir = (short **) matalloc(nx, ny, RPSHRDTYPE);
  apool = (short **) matalloc(nx, ny, RPSHRDTYPE);
  istack = (int) (nx * ny * 0.1);
  pstack=istack;
  dn = (short *)malloc(sizeof(short) * istack);
  is = (short *)malloc(sizeof(short) * istack);
  js = (short *)malloc(sizeof(short) * istack);
  ipool = (short *)malloc(sizeof(short) * pstack);
  jpool = (short *)malloc(sizeof(short) * pstack);
  if(dn == NULL || is == NULL || js == NULL || ipool == NULL || jpool == NULL)
  {
     printf("\nError:  Cannot allocate memory for stacks\n");
     return(11);
  }
/*  nmax=200;   Decided to elim iteration
  nnx=nx/nmax+1;
  nny=ny/nmax+1;
  while(nnx > 1 || nny > 1)
  {
    for(ix=0; ix<nnx; ix++)for(iy=0; iy<nny; iy++)
    {
      i1=ix*nmax;
      n1=i1+nmax;
      if(n1>nx)
      {
        n1=nx;
        i1=nx-nmax;
        if(i1<0)i1=0;
      }
      i2=iy*nmax;
      n2=i2+nmax;
      if(n2>ny)
      {
        n2=ny;
        i2=ny-nmax;
        if(i2<0)i2=0;
      }
      printf("Ranges: %d %d %d %d\n",i1,n1,i2,n2);
      setdf(mval);   /*  this call for range i1,n1,i2,n2  
    }
    nmax=(int) (nmax*3.5) ; 
    nnx=nx/nmax+1;
    nny=ny/nmax+1;
  }  /*  end of while  */
  i1=0; i2=0; n1=nx; n2=ny;  /*  full grid  */ 
  printf("Grid size: %d x %d\n",n1,n2);
  setdf(mval);
/*  free stacks  */
  free(dn); free(is); free(js); free(ipool); free(jpool); 
  free(apool[0]); free(apool);
/*    filetype=0;   0=ASCII   1= ARCVIEW proprietary  */
  printf("Writing output ...");
  err = gridwrite(newfile,(void **)elev,RPFLTDTYPE,nx,ny,dx,dy,
             bndbox,csize,mval,filetype);
  if(err != 0)return(err);
/*  err = gridwrite(pointfile,(void **)dir,RPSHRDTYPE,nx,ny,dx,dy,
             bndbox,csize,-1,filetype);  
  if(err != 0)return(err);    */ 
  return(0);  /*  ALL OK return from flood  */
}

int setdf(float mval)
{
  int i,j,k,n,nflat,ni,ip,imin,err,jn,in,np1,nt;
  float fact[9],per=1.;

/*  Initialize boundaries  */
  for(i=i1; i< n1; i++)
  {
     dir[i][i2]= -1;
     dir[i][n2-1]= -1;
  }
  for(i=i2; i< n2; i++)
  {
     dir[i1][i]= -1;
     dir[n1-1][i]= -1;
  }
/*  initialize internal pointers */
  for(i=i2+1; i< n2-1; i++)for(j=i1+1; j<n1-1; j++)
  {
    if(elev[j][i] <= mval)dir[j][i]= -1;
    else dir[j][i] = 0;
  }
/*  Direction factors  */
  for(k=1; k<= 8; k++)
    fact[k]=(float)(1./sqrt(d1[k]*dy*d1[k]*dy+d2[k]*d2[k]*dx*dx));
/*  printf("Problem Pixels \n");   */
/*  printf("     Flats   Unresolved\n");  */   
/*  Set positive slope directions - store unresolved on stack */
/*ttt  n=1;      Avoid iterating - work with stack only
  while(n >= 1)
  {       */
  nis=0;
  for(i=i2+1; i< n2-1; i++)for(j=i1+1; j<n1-1; j++)
  {
    if(elev[j][i] > mval)set(i,j,fact,mval);
/*  Put unresolved pixels on stack  */
    if(dir[j][i] == 0)
    {
		err=addstack(i,j);
    }
   }
   nflat=nis;
/* routine to drain flats to neighbors  */
   SetWorkingStatus();  
   imin=vdn(nflat);
   n=nis;
 
   printf("Number of pits to resolve: %d\n",n);  
   np1=n;
   nt=np1*(1-per/100);

/*  initialize apool to zero  */
   for(i=i2; i< n2; i++)for(j=i1; j<n1; j++)
    apool[j][i]=0;
/*  store unresolved stack location in apool for easy deletion  
  for(k=1; k<=nis; k++)
    apool[js[k]][is[k]]= - k;   */
/*  pooln=0;  */
  while(nis > 0)   /*  While AA */
  {
/*    fp=fopen("temp.dat","w");
	for(ip=1; ip <= nis; ip++)
	{
		i=is[ip];
		j=js[ip];
       fprintf(fp,"%d %d %f\n",i,j,elev[j][i]);
	}
    fclose(fp);   */

    i=is[imin];
    j=js[imin];
/*	if(i == 12 && j == 27)
	{
		printf("Here");
	}    */
/*    pooln=pooln+1;  */
	pooln=1;
    npool=0;
    nf = 0;  /*  reset flag to that new min elev is found */
    pool(i,j);  /*  Recursive call on unresolved point with lowest elevation */
/*  Find the pour point of the pool  */
/*	 err = gridwrite("pool.asc",(void **)apool,RPSHRDTYPE,nx,ny,dx,dy,
             bndbox,csize,-9999,0);   */ 
 
	for(ip=1; ip<=npool; ip++)
	{
		i=ipool[ip];
		j=jpool[ip];
		for(k=1; k <=8; k++)	
        {
			 jn=j+d2[k];
			 in=i+d1[k];
			 if(apool[jn][in] != pooln)  /*  neighbor not in pool  */
			 {
                et=max2(elev[j][i],elev[jn][in]);
                if(nf == 0)  /*  this is the first edge found  */
                {
                  emin=et;
                  nf=1;
/*				  ipour=i;
				  jpour=j;   */
                }
                else
                {
                  /*  emin=min2(emin,et);  */
					if(emin > et)
					{
						emin = et;
/*						ipour=i;
						jpour=j;    */
					}
                }
			 }
		}
	}
/*  Fill the pool  */
    for(k=1; k<=npool; k++)
	{
		i=ipool[k];
		j=jpool[k];
      if(elev[j][i] <= emin)
	  {
		  if(dir[j][i] > 0)   /*  Can be in pool, but not flat   */
		  {
			  dir[j][i]=0;
			  /*  Add to stack  */
			  err=addstack(i,j);
		  }
		  for(ip=1; ip <=8; ip++)
		  {
			  jn=j+d2[ip];
			  in=i+d1[ip];
			  if(elev[jn][in] > elev[j][i] && dir[jn][in] > 0)
/*    Only zero direction of neighbors that are higher - because
      lower  or equal may be a pour point in a pit that must not be disrupted  */
			  {
				  dir[jn][in] = 0;
				  err=addstack(in,jn);
			  }
		  }
		  elev[j][i] =emin;

	  }
	  apool[j][i]=0;  /*  Reinitialize for next time round  */
	}

/* reset unresolved stack  */
    ni=0;
    for(ip=1; ip <= nis; ip++)
    {
       set(is[ip],js[ip],fact,mval);  
	   if(dir[js[ip]][is[ip]] == 0)  /* still on stack */
       {
          ni++;
          is[ni]=is[ip];
          js[ni]=js[ip];
/*          apool[js[ni]][is[ni]] = -ni;  /*  Need to resave stack locations
                                         since the stack is being shortened */
       }
/*	   else
		   apool[js[ip]][is[ip]] = 0;   /*  Out of pool   */
     }
/*    fp=fopen("temp.dat","w");
	for(ip=1; ip <= nis; ip++)
	{
		i=is[ip];
		j=js[ip];
       fprintf(fp,"%d %d %f\n",i,j,elev[j][i]);
	}
    fclose(fp);      */

	 n=nis;
 	 imin=vdn(ni);
	 if(nis < nt){
		 printf("Percentage done %f\n",per);
		 per=per+1;
		 nt=np1*(1-per/100);
	 }
	 /*  Debug writes   
     err = gridwrite("elev.asc",(void **)elev,RPFLTDTYPE,nx,ny,dx,dy,
             bndbox,csize,mval,0); 
	 err = gridwrite("pool.asc",(void **)apool,RPSHRDTYPE,nx,ny,dx,dy,
             bndbox,csize,-9999,0);   */  
  }  /*  end of while AA  */

  return(err);
}
int vdn(int n)
{
  int ip,k,imin;
  float ed;
  nis=n;
  do
  {
  n=nis;
  nis=0;
  for(ip=1; ip <=n; ip++)dn[ip]=0;
  for(k=1; k<=7; k=k+2)
    for(ip=1; ip<=n; ip++)
    {
       ed=elev[js[ip]][is[ip]]-elev[js[ip]+d2[k]][is[ip]+d1[k]];
       if(ed >= 0. && dir[js[ip]+d2[k]][is[ip]+d1[k]] != 0 && dn[ip] == 0)
         dn[ip]=k;
    }
  for(k=2; k<=8; k=k+2)
    for(ip=1; ip<=n; ip++)
    {
       ed=elev[js[ip]][is[ip]]-elev[js[ip]+d2[k]][is[ip]+d1[k]];
       if(ed >= 0. && dir[js[ip]+d2[k]][is[ip]+d1[k]] != 0 && dn[ip] == 0)
         dn[ip]=k;
    }
  imin=1;  /*  location of point on stack with lowest elevation  */
  for(ip=1; ip <= n; ip++)
  {
     if(dn[ip] > 0)dir[js[ip]][is[ip]]=dn[ip];
     else
     {
        nis++;
        is[nis]=is[ip];
        js[nis]=js[ip];
        if(elev[js[nis]][is[nis]] < elev[js[imin]][is[imin]])imin=nis;
     }
  }
  SetWorkingStatus(); 
  }while(nis < n);
  return(imin);
}   

void set(int i,int j,float *fact,float mval)
{
  float slope,smax;
  int k;
  dir[j][i]=0;  /* This necessary for repeat passes after level raised */
  smax=0.;
  for(k=1; k<=8; k++)
  {
    if(elev[j+d2[k]][i+d1[k]] <= mval) dir[j][i] = -1;
    slope=fact[k]*(elev[j][i]-elev[j+d2[k]][i+d1[k]]);
    if(slope > smax && dir[j][i] != -1)
    {
       smax=slope;
       dir[j][i]=k;
    }
  }
}
/* function to compute pool recursively and at the same time determine
   the minimum elevation of the edge. */
int pool(int i,int j)

  {
    int in,jn,k;
    if(apool[j][i]<=0)   /* not already part of a pool  */
    {
/*      if(i!=0 && i!=ny-1 && j!=0 && j!=nx-1 && dir[j][i]!= -1)  */
        if(dir[j][i]!= -1)  /* check only dir since dir was initialized  */
                 /* not on boundary  */
      {
        apool[j][i]=pooln;  /*  apool assigned pool number */
        npool=npool+1;
        if(npool >= pstack)
        {
          if(pstack < (nx*ny))
          {
/*  Try enlarging   */
            printf("\n Enlarging pool stack\n");
            pstack=(int) (pstack + nx*ny*.1);
            if(pstack > nx*ny)
            {
              printf("\n Pool stack too large, exiting ...\n");
              return(14);
            }
            ipool = (short *)realloc(ipool, sizeof(short) * pstack);
            jpool = (short *)realloc(jpool, sizeof(short) * pstack);
            if(ipool == NULL || jpool == NULL)
            {
              printf("\n Cannot reallocate pool stack, exiting ...\n");
              return(15);
            }
          }
          else
          {
            printf("\n Could not enlarge Pool stack\n");
            return(16);
          }
        }
        ipool[npool]=i;
        jpool[npool]=j;
/*        printf("%d %d Pool %d\n",i,j,pooln);  */
        for(k=1; k<=8; k++)
        {  
           in=i+d1[k];
           jn=j+d2[k];
/* test if neighbor drains towards cell excluding boundaries */
           if((dir[jn][in]>0 && (dir[jn][in]-k==4||dir[jn][in]-k==-4))
              || (dir[jn][in] == 0 && elev[jn][in] >= elev[j][i]))  
               /* so that adjacent flats get included */
             {
/*			   if(!(nf == 1   /*  an edge has been found  
				   & elev[jn][in] < et))   /*  Limit recursion below the lowest 
										   edge found  */
				   pool(in,jn);
             }
 /*          else
             {
                et=max2(elev[j][i],elev[jn][in]);
                if(nf == 0)  /*  this is the first edge found  
                {
                  emin=et;
                  nf=1;
                }
                else
                {
                  emin=min2(emin,et);
                }
		}  */
        }
      }
    }
  }

     

float min2(float e1,float e2)
{ 
  float em; 
  em=e1;
  if(e2 < em)em=e2;
  return(em);
}

float max2(float e1,float e2)
{ 
  float em; 
  em=e1;
  if(e2 > em)em=e2;
  return(em);
}

int addstack(int i, int j)
{
	/*  Routine to add entry to is, js stack, enlarging if necessary   */
	nis=nis+1;
	if(nis >= istack )
      {
        /*  Try enlarging   */
         istack=(int) (istack + nx*ny*.1);
         if(istack > nx*ny)
         {
           printf("\n is,js stack too large, exiting ...\n");
           return(12);
         }
         printf("\n Enlarging is,js stack\n");
         is = (short *)realloc(is, sizeof(short) * istack);
         js = (short *)realloc(js, sizeof(short) * istack);
         dn = (short *)realloc(dn, sizeof(short) * istack);
         if(is == NULL || js == NULL || dn == NULL)
        {
         printf("\n Could not enlarge stack\n");
         return(13);
        }
      }
	is[nis]=i;
	js[nis]=j;
	return(0);
}





