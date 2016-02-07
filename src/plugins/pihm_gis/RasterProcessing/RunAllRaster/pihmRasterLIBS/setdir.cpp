/*  C version of setdir.c. This does not fill pits, it is intended for use AFTER
    d8.c which fills pits.  Input is a dem file name.  Output is
    slope and dinf angle files.   This version implements Garbrecht flow directions
	for flats.
     
  David G Tarboton
  Utah State University   
     */

/*
This roughly follows the following pseudocode from my review of Garbrecht's paper

Pseudocode to iteratively resolve flow directions

Define arrays E(x), D(x), S1(x), S2(x), I(x) where x refers to grid location.
 where E is original elevation, D is total increment, S1 step 1 increment, 
 S2 step 2 increment, I a flag to indicate whether flow direction has been set.  

Initialize  
do for each x
	read in E(x)
	I(x) = 1
enddo
unresolved = 1
while(unresolved > 0)
	unresolved = 0
	do for each x
		if(I(x) > 0)then      /*  only apply to unresolved pixels  
			calculate slope to each neighbor using E(x) 
			if(max slope > 0)then
				assign flow direction to appropriate neighbor
				I(x) = 0   /*  flag it as resolved   
			else
				unresolved=unresolved + 1
				I(x) = 1   /* this flags the pixel as unresolved  
			endif
		endif
	enddo
	if(unresolved > 0)then
		for each x
			D(x) = S2(x) = S2(x)= 0      /*  reset arrays for iteration  
		for each x with I(x) > 0
			Calculate step 1 increment towards falling terrain, S1(x) 
		for each x with I(x) > 0
			Calculate step 2 increment away from rising terrain, S2(x)
		for each x with I(x) > 0
			D(x) = S1(x) + S2(x)
		for each x
			E(x) = D(x)   
/*  overwrite original elevations since they are no longer needed from now 
on slopes are based on D(x)  
	endif
endwhile
output results
end

  */





#include "lsm.h"
/* This include declares all necessary global variables  */
void incfall(int n, float *elev1, short *s1,int **spos,  
			 int iter, int *sloc);
void incrise(int n, float *elev1, short *s2,int **spos, int iter, int *sloc);

void set2(int i,int j,float *fact,float *elev1, float *elev2, int iter, 
		  int **spos, short *s);
void flatrout(int n,int *sloc, short *s,
			  int **spos,int iter,float *elev1,float *elev2, float *fact, int ns);
void sloped8(void);

int setdir(char *demfile, char *angfile, char *slopefile, char *pfile)
{ 
  int err,filetype;
  float mval;
  double bndbox[4],csize;
  
/* define directions */
   d1[1]=0; d1[2]= -1; d1[3]= -1; d1[4]= -1; d1[5]=0; d1[6]=1; d1[7]=1; d1[8]=1;
   d2[1]=1; d2[2]=1; d2[3]=0; d2[4]= -1; d2[5]= -1; d2[6]= -1; d2[7]=0; d2[8]=1;


  err=gridread(demfile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,
             bndbox,&csize,&mval,&filetype);
  if(err != 0)goto ERROR2;          

/*  allocate  dir and stack arrays  */
  dir = (short **) matalloc(nx, ny, RPSHRDTYPE);

  i1=0; i2=0; n1=nx; n2=ny;  /*  full grid  */ 
  err=setdfnoflood(mval);
   if(err != 0)goto ERROR1;
/*  err = gridwrite(pfile,(void **)dir,RPSHRDTYPE,nx,ny,dx,dy,
	  bndbox,csize,-1,filetype);   */

/*  allocate memory for slope and angle  */
  slope = (float **) matalloc(nx, ny, RPFLTDTYPE);
  ang = (float **) matalloc(nx, ny, RPFLTDTYPE);
  setdf2();
  err = gridwrite(slopefile,(void **)slope,RPFLTDTYPE,nx,ny,dx,dy,
             bndbox,csize,-1.,filetype);
  if (err != 0)goto ERROR3;
  err = gridwrite(angfile,(void **)ang,RPFLTDTYPE,nx,ny,dx,dy,
             bndbox,csize,-2.,filetype);
  if (err != 0)goto ERROR3;

/*  Wrapping up  */
  err=0;
ERROR3:
  free(slope[0]);
  free(slope);
  free(ang[0]);
  free(ang);
ERROR1:
  free(dir[0]);
  free(dir);
ERROR2:
  free(elev[0]);
  free(elev);
  return(err);
}

int setdird8(char *demfile, char *pfile, char *slopefile)
{ 
  int err,filetype;
  float mval;
  double bndbox[4],csize;
  
/* define directions */
   d1[1]=0; d1[2]= -1; d1[3]= -1; d1[4]= -1; d1[5]=0; d1[6]=1; d1[7]=1; d1[8]=1;
   d2[1]=1; d2[2]=1; d2[3]=0; d2[4]= -1; d2[5]= -1; d2[6]= -1; d2[7]=0; d2[8]=1;


  err=gridread(demfile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,
             bndbox,&csize,&mval,&filetype);
  
  if(err != 0)goto ERROR2;          
printf("test1");
/*  allocate  dir and stack arrays  */
  dir = (short **) matalloc(nx, ny, RPSHRDTYPE);

  i1=0; i2=0; n1=nx; n2=ny;  /*  full grid  */ 
  err=setdfnoflood(mval);
   if(err != 0)goto ERROR1;
  err = gridwrite(pfile,(void **)dir,RPSHRDTYPE,nx,ny,dx,dy,
	  bndbox,csize,-1,filetype);

/*  allocate memory for slope   */
  slope = (float **) matalloc(nx, ny, RPFLTDTYPE);
  sloped8();
  err = gridwrite(slopefile,(void **)slope,RPFLTDTYPE,nx,ny,dx,dy,
             bndbox,csize,-1.,filetype);
  if (err != 0)goto ERROR3;

/*  Wrapping up  */
  err=0;
ERROR3:
  free(slope[0]);
  free(slope);
ERROR1:
  free(dir[0]);
  free(dir);
ERROR2:
  free(elev[0]);
  free(elev);
  return(err);
}

int setdfnoflood(float mval)
/*  This version is stripped of pit filling  */
{
  int i,j,k,ip, n, iter;
  float fact[9];
  short *s;  /*  variables for flat draining   */
  int **spos, *sloc;
  float *elev2;


/*  Initialize boundaries  */
  for(i=i1; i< n1; i++)
  {
     dir[i][0]= -1;
     dir[i][n2-1]= -1;
  }
  for(i=i2; i< n2; i++)
  {
     dir[0][i]= -1;
     dir[n1-1][i]= -1;
  }
/*  iup=0; */
/*  initialize internal pointers */
  for(i=i2+1; i< n2-1; i++)for(j=i1+1; j<n1-1; j++)
  {
    if(elev[j][i] <= mval)dir[j][i]= -1;
    else dir[j][i] = 0;
  }
/*  Direction factors  */
  for(k=1; k<= 8; k++)
    fact[k]= (float) (1./sqrt(d1[k]*dy*d1[k]*dy+d2[k]*d2[k]*dx*dx));
/*  Set positive slope directions   */
   n=0;
   for(i=i2+1; i< n2-1; i++)
	  for(j=i1+1; j<n1-1; j++)
		  if(elev[j][i] > mval)
		  {
			  set(i,j,fact,mval);
			  if(dir[j][i] == 0)n++;
		  }
  if(n > 0)
  { 
/*  Now resolve flats following the Procedure of Garbrecht and Martz, Journal
   of Hydrology, 1997.  */

/*  Memory is utilized as follows
is, js, dn, s and elev2 are unidimensional arrays storing information for flats.
sloc is a indirect addressing array for accessing these - used during
recursive iteration
spos is a grid of pointers for accessing these to facilitate finding neighbors

The routine flatrout is recursive and at each recursion allocates a new sloc for
addressing these arrays and a new elev for keeping track of the elevations
for that recursion level.  
  */
	  iter=1;
	  printf("Resolving %d Flats, Iteration: %d \n",n,iter);
      spos = (int **) matalloc(nx, ny, RPINTDTYPE);
      dn = (short *)malloc(sizeof(short) * n);
      is = (short *)malloc(sizeof(short) * n);
      js = (short *)malloc(sizeof(short) * n);
      s = (short *)malloc(sizeof(short) * n);
	  sloc = (int *)malloc(sizeof(int) * n);
      elev2 = (float *)malloc(sizeof(float) *n);

  if(dn == NULL || is == NULL || js == NULL || s == NULL || 
	  spos == NULL || elev2 == NULL || sloc == NULL)
  {
     printf("Unable to allocate at iteration %d\n",iter);
  }
/*  Put unresolved pixels on stack  */
   ip=0;
   for(i=i2; i< n2; i++)
	  for(j=i1; j<n1; j++)
  {
    spos[j][i]=-1;   /*  Initialize stack position  */
    if(dir[j][i] == 0)
    {
      is[ip]=i;
      js[ip]=j;
	  dn[ip]=0;
	  sloc[ip]=ip;
	  /*   Initialize the stage 1 array for flat routing   */
	  s[ip] = 1;
	  spos[j][i]=ip;  /*  pointer for back tracking  */
	  ip++;
	  if(ip > n)printf("PROBLEM - Stack logic\n");
    }
  }
  flatrout(n,sloc,s,spos,iter,elev2,elev2,fact,n);
/*  The direction 9 was used to flag pits.  Set these to 0  */
  for(i=i2; i< n2; i++)
	  for(j=i1; j<n1; j++)
		  if(dir[j][i] == 9)dir[j][i]=0;
  free(spos[0]); free(spos);
  free(elev2);
  free(dn);
  free(is);
  free(js);
  free(s);
  free(sloc);
  printf("Done iteration %d\nFlats resolved %d\n",iter,n);
  } /*  End if n > 0  */
   return(0);   /*  OK exit from setdir  */
}  /*  End setdfnoflood  */

void flatrout(int n,int *sloc, short *s,
			  int **spos,int iter,float *elev1,float *elev2, float *fact, int ns)
{
  int ip,nu, *sloc2,ipp;
  float *elev3;

  incfall(n,elev1,s,spos,iter,sloc);
  for(ip=0; ip < n; ip++)
  {
	  elev2[sloc[ip]]=(float)(s[sloc[ip]]);
	  s[sloc[ip]]=0;   /*  Initialize for pass 2  */
  }
/*  Debug writes  
		{
			int err,i,j;
			double bndbox[4],csize;
			short ** sp;
			float ** elevp;
			elevp= (float **)matalloc(nx,ny,RPFLTDTYPE);
			sp= (short **)matalloc(nx,ny,RPSHRDTYPE);

			for(i=0; i<ny; i++)for(j=0;j<nx;j++)
			{
				elevp[j][i]=0.;
				sp[j][i]=0;
			}

			for(ip=0; ip<n; ip++)
				elevp[js[sloc[ip]]][is[sloc[ip]]]=elev2[sloc[ip]];
			err=gridwrite("elev.asc",(void **)elevp, RPFLTDTYPE,nx,ny,dx,dy,bndbox,
				csize,-2.,0);
			for(ip=0; ip<n; ip++)
				sp[js[sloc[ip]]][is[sloc[ip]]]=s[sloc[ip]];
			err=gridwrite("s.asc",(void **)sp, RPSHRDTYPE,nx,ny,dx,dy,bndbox,
				csize,-2.,0);
			free(sp[0]); free(sp);
			free(elevp[0]); free(elevp);
		}    */

  incrise(n,elev1,s,spos,iter,sloc);
  for(ip=0; ip < n; ip++)
  {
	  elev2[sloc[ip]] += (float)(s[sloc[ip]]);
  }
/*  Debug writes  
  		{
			int err,i,j;
			double bndbox[4],csize;
			short ** sp;
			float ** elevp;
			elevp= (float **)matalloc(nx,ny,RPFLTDTYPE);
			sp= (short **)matalloc(nx,ny,RPSHRDTYPE);

			for(i=0; i<ny; i++)for(j=0;j<nx;j++)
			{
				elevp[j][i]=0.;
				sp[j][i]=0;
			}

			for(ip=0; ip<n; ip++)
				elevp[js[sloc[ip]]][is[sloc[ip]]]=elev2[sloc[ip]];
			err=gridwrite("elev.asc",(void **)elevp, RPFLTDTYPE,nx,ny,dx,dy,bndbox,
				csize,-2.,0);
			for(ip=0; ip<n; ip++)
				sp[js[sloc[ip]]][is[sloc[ip]]]=s[sloc[ip]];
			err=gridwrite("s.asc",(void **)sp, RPSHRDTYPE,nx,ny,dx,dy,bndbox,
				csize,-2.,0);
			free(sp[0]); free(sp);
			free(elevp[0]); free(elevp);
		}   */
  nu=0;
  for(ip=0; ip < n; ip++)
  {
	  set2(is[sloc[ip]],js[sloc[ip]],fact,elev1,elev2,iter,spos,s);
	  if(dir[js[sloc[ip]]][is[sloc[ip]]] == 0)nu++;
  }
  if(nu > 0)
  { 
/*  Iterate Recursively   */
/*  Now resolve flats following the Procedure of Garbrecht and Martz, Journal
   of Hydrology, 1997.  */
	  iter=iter+1;
	  printf("Resolving %d Flats, Iteration: %d \n",nu,iter);
      sloc2 = (int *)malloc(sizeof(int) * nu);
      elev3 = (float *)malloc(sizeof(float) *ns);

  if(sloc2 == NULL || elev3 == NULL)
  {
     printf("Unable to allocate at iteration %d\n",iter);
  }
  /*  Initialize elev3  */
  for(ip=0; ip < ns; ip++)elev3[ip]=0.;
/*  Put unresolved pixels on new stacks - keeping in same positions  */
    ipp=0;
	for(ip=0; ip<n; ip++)
	{
    if(dir[js[sloc[ip]]][is[sloc[ip]]] == 0)
    {
		sloc2[ipp]=sloc[ip];
 	  /*   Initialize the stage 1 array for flat routing   */
		s[sloc[ip]] = 1;
	  ipp++;
	  if(ipp > nu)printf("PROBLEM - Stack logic\n");
	}
	else
	{
		s[sloc[ip]] = -1;  /*  Used to designate out of remaining flat on 
						   higher iterations   */ 
	}
	dn[sloc[ip]]=0;  /*  Reinitialize for next time round.  */
  }
  flatrout(nu,sloc2,s,spos,iter,elev2,elev3,fact,ns);
  free(sloc2);
  free(elev3);
  printf("Done iteration %d\nFlats resolved %d\n",iter,n);
  } /*  end if nu > 0  */
}   /*  End flatrout  */


void incfall(int n, float *elev1, short *s1,int **spos,  
			 int iter, int *sloc)
{
	/* This routine implements drainage towards lower areas - stage 1 */
	int done=0,donothing,k,ip,ninc,nincold,spn;
	short st=1,i,j,in,jn;
	float ed;
	nincold= -1;
	while(done < 1)
	{
		done=1;
		ninc=0;
		for(ip=0; ip<n; ip++)
		{
/*			if 	adjacent to same level or lower that drains or 
				adjacent to pixel with s1 < st and dir not set
				do nothing  */
			donothing=0;
			j=js[sloc[ip]];
			i=is[sloc[ip]];
			for(k=1; k<=8; k++)
			{
				jn=j+d2[k];
				in=i+d1[k];
				spn=spos[jn][in];
				if(iter <= 1)
				{
					ed=elev[j][i]-elev[jn][in];
				}
				else
				{
					ed=elev1[sloc[ip]]-
						elev1[spn];
				}
				if(ed >= 0. && dir[jn][in] != 0)donothing = 1;  /* If neighbor drains */
				if(spn >= 0)     /* if neighbor is in flat   */
					if(s1[spn] >= 0 && s1[spn] < st   /*  If neighbor is not being  */
						&& dir[jn][in]  == 0)donothing = 1;   /*  Incremented  */
			}
			if(donothing == 0)
			{
				s1[sloc[ip]]++;
				ninc++;
				done=0;
			}
		}   /*  End of loop over all flats  */
		st=st+1;
		printf("Incfall %d %d \n",ninc,n);
		if(ninc == nincold)
		{
			done = 1;
			printf("There are pits remaining, direction will not be set\n");
/*  Set the direction of these pits to 9 to flag them   */
			for(ip=0; ip<n; ip++)  /*  loop 2 over all flats  */
			{
/*			if 	adjacent to same level or lower that drains or 
				adjacent to pixel with s1 < st and dir not set
				do nothing  */
				donothing=0;
				j=js[sloc[ip]];
				i=is[sloc[ip]];
				for(k=1; k<=8; k++)
				{
					jn=j+d2[k];
					in=i+d1[k];
					spn=spos[jn][in];
					if(iter <= 1)
					{
						ed=elev[j][i]-elev[jn][in];
					}
					else
					{
						ed=elev1[sloc[ip]]-
							elev1[spn];
					}
					if(ed >= 0. && dir[jn][in] != 0)donothing = 1;  /* If neighbor drains */
					if(spn >= 0)     /* if neighbor is in flat   */
					if(s1[spn] >= 0 && s1[spn] < st   /*  If neighbor is not being  */
						&& dir[jn][in]  == 0)donothing = 1;   /*  Incremented  */
				}
				if(donothing == 0)
				{
				   dir[j][i] = 9;
/*				   printf("%d %d\n",i,j);    */
				}
			}   /*  End of loop 2 over all flats  */
		}
		nincold=ninc;
	}  /*  End of while done loop  */
}


void incrise(int n, float *elev1, short *s2,int **spos, int iter, int *sloc)
{
	/*  This routine implements stage 2 drainage away from higher ground 
	dn is used to flag pixels still being incremented */
	int done=0,ip,k,ninc,nincold,spn;
	float ed;
	short i,j,in,jn;
	nincold=0;
	while(done < 1)
	{
		done=1;
		ninc=0; 
		for(ip=0; ip<n; ip++)
		{
			for(k=1; k<=8; k++)
			{
				j=js[sloc[ip]];
				i=is[sloc[ip]];
				jn=j+d2[k];
				in=i+d1[k];
				spn=spos[jn][in];

				if(iter <= 1)
				{
					ed=elev[j][i]-elev[jn][in];
				}
				else
				{
					ed=elev1[sloc[ip]]-
						elev1[spn];
				}
				if(ed < 0.)dn[sloc[ip]]=1;
				if(spn >=0)
					if(s2[spn] > 0)dn[sloc[ip]] = 1;
			}
		}
		for(ip=0; ip<n; ip++)
		{
			s2[sloc[ip]]=s2[sloc[ip]]+dn[sloc[ip]];
			ninc=ninc+dn[sloc[ip]];
			if(dn[sloc[ip]] == 0)done=0;  /*  if still some not being incremented continue 
									looping  */
		}
		printf("incrise %d %d\n",ninc,n);   
		if(ninc == nincold)done=1;   /*  If there are no new cells incremented  
									 stop - this is the case when a flat has
									 no higher ground around it.  */
		nincold=ninc;
	}
}

void set2(int i,int j,float *fact,float *elev1, float *elev2, int iter, 
		  int **spos, short *s)
{
/*  This function sets directions based upon secondary elevations for
  assignment of flow directions across flats according to Garbrecht and Martz
  scheme.  There are two possibilities: 
	A.  The neighbor is outside the flat set
	B.  The neighbor is in the flat set.
	In the case of A the elevation of the neighbor is set to 0 for the purposes
	of computing slope.  Since the incremental elevations are all positive there is 
	always a downwards slope to such neighbors, and if the previous elevation 
	increment had 0 slope then a flow direction can be assigned.*/
  float slope,slope2,smax,ed;
  int k,spn,sp,kflat=0;
  short in,jn;
  smax=0.;
  sp=spos[j][i];
  for(k=1; k<=8; k++)
  {
		jn=j+d2[k];
		in=i+d1[k];
		spn=spos[jn][in];
		if(iter <= 1)
		{
			ed=elev[j][i]-elev[jn][in];
		}
		else
		{
			ed=elev1[sp]-elev1[spn];
		}
		slope=fact[k]* ed;
	if(spn < 0 || s[spn] < 0)
	{
		/*  The neighbor is outside the flat set.  */
		ed=0.;
	}
	else
	{
		ed=elev2[spn];
	}
	slope2 =fact[k]*(elev2[sp]-ed);
	if(slope2 > smax && slope >= 0.)  /*  Only if latest iteration slope is 
									  positive and previous iteration slope flat  */		
		{
			smax=slope2;
			dir[j][i]=k;
		}
  }  /*  End of for  */
}


/*

Converted from FORTRAN July 05, 1997  K. Tarbet

C
C---SUBROUTINE TO SET VARIABLE DIRECTIONS.
C    DIRECTIONS MEASURED ANTICLOCKWISE FROM EAST IN RADIANS.
C
*/
void setdf2(void )
{
float FANG[9];
float dxx[3];
int i,j;
float dd;

/*       INITIALISE ANGLES and slopes */

	for (i=0; i<nx; i++)
        {
         ang[i][0]=-2;
         ang[i][ny-1]=-2;
         slope[i][0]=-1;
         slope[i][ny-1]=-1;
         }

       for(i=0; i<ny; i++)
        {
         ang[0][i]=-2;
         ang[nx-1][i]=-2;
         slope[0][i]=-1;
         slope[nx-1][i]=-1;
        }

         FANG[1]=0.;
         FANG[2]=(float)atan2(dy,dx);
         FANG[3]=(float) PI2; 
         FANG[4]=2*FANG[3]-FANG[2];
         FANG[5]=2*FANG[3];
         FANG[6]=2*FANG[3]+FANG[2];
         FANG[7]=3*FANG[3];
         FANG[8]=4*FANG[3]-FANG[2];

/* --INITIALISE INTERNAL POINTERS (-VE POINTER INDICATES OUTSIDE DOMAIN) */

	for(i=1; i<ny-1; i++)
           for(j=1; j<nx-1; j++)
              {
                if(dir[j][i] <  0)   
                                         
                 {
                  ang[j][i]=-2.;
		  slope[j][i]=-1.; /*  !  -1 slope indicates no data */
                 }
                else if(dir[j][i] == 0)
                 {
                  ang[j][i]=-1.;  /*  DGT 9/2/97 since without   */
                  slope[j][i]=0.;  /*  pit filling dir = 0 is possible  */
/*  ang = -1 designates unfilled pit, ang = -2 designates no data.  */                  
                 }
                else
                 ang[j][i]=0.;
               }



/*    TEST ALL INTERNAL ELEVATIONS AND SET SLOPE AND ANGLE */

       dxx[1]=dx;
       dxx[2]=dy;
       dd=(float)sqrt(dx*dx+dy*dy);
	for(i=1; i<ny-1; i++)
    {
    SetWorkingStatus(); 
    for(j=1; j<nx-1; j++)
              {
               if(dir[j][i]>0 )
                   {
                   SET2(i,j,dxx,dd);
                   if(ang[j][i] < -0.5)
                        ang[j][i]=FANG[dir[j][i]];
                   }
              }
    }
 }

/*     SUBROUTINE TO RETURN SLOPE AND ANGLE OF STEEPEST DECENT IF POSITIVE */

void   SET2(int I, int J,float *DXX,float DD)
{

float SK[9];
float ANGLE[9];
float SMAX;
int K;
int KD;

/*    int ID1[]= {NULL,1,2,2,1,1,2,2,1 };
      int ID2[]= {NULL,2,1,1,2,2,1,1,2};
      int I1[] = {NULL,0,-1,-1,0,0,1,1,0 };
      int I2[] = {NULL,-1,-1,-1,-1,1,1,1,1};
      int J1[] = {NULL,1,0,0,-1,-1,0,0,1};
      int J2[] = {NULL,1,1,-1,-1,-1,-1,1,1};
   float  ANGC[]={NULL,0.,1.,1.,2.,2.,3.,3.,4.};
   float  ANGF[]={NULL,1.,-1.,1.,-1.,1.,-1.,1.,-1.}; */
      int ID1[]= {0,1,2,2,1,1,2,2,1 };
/*		int *ID1;  */
      int ID2[]= {0,2,1,1,2,2,1,1,2};
      int I1[] = {0,0,-1,-1,0,0,1,1,0 };
      int I2[] = {0,-1,-1,-1,-1,1,1,1,1};
      int J1[] = {0,1,0,0,-1,-1,0,0,1};
      int J2[] = {0,1,1,-1,-1,-1,-1,1,1};
   float  ANGC[]={0,0.,1.,1.,2.,2.,3.,3.,4.};
   float  ANGF[]={0,1.,-1.,1.,-1.,1.,-1.,1.,-1.};
 /*  ID1=ID1m-1;  */

       for(K=1; K<=8; K++)
       VSLOPE(elev[J][I],
              elev[J+J1[K]][I+I1[K]],
              elev[J+J2[K]][I+I2[K]],
              DXX[ID1[K]],DXX[ID2[K]],DD,&SK[K],&ANGLE[K]);

SMAX=0.;
KD=0;
      ang[J][I]=-1.;  /* USE -1 TO INDICATE DIRECTION NOT YET SET */
      for(K=1; K<=8; K++)
        {
        if(SK[K] >  SMAX)
           {
            SMAX=SK[K];
            KD=K;
           }
         }

      if(KD  > 0)
         ang[J][I]= (float) (ANGC[KD]*PI2+ANGF[KD]*ANGLE[KD]);
      slope[J][I]=SMAX;
}



void   VSLOPE(float E0,float E1, float E2,
              float D1,float D2,float DD,
              float *S,float *A)
{
/*    SUBROUTINE TO RETURN THE SLOPE AND ANGLE ASSOCIATED WITH A DEM PANEL */
float S1,S2,AD;


if(D1!=0)
      S1=(E0-E1)/D1;
if(D2!=0)
      S2=(E1-E2)/D2;

if(S2==0 && S1==0) *A=0;
      else
      *A= (float) atan2(S2,S1);
      AD= (float) atan2(D2,D1);
      if(*A  <   0.)
       {
       *A=0.;
       *S=S1;
       }
      else if(*A > AD)
       {
        *A=AD;
        *S=(E0-E2)/DD;
       }
      else
        *S= (float) sqrt(S1*S1+S2*S2);
 }

void sloped8(void )
{
	int k,i,j,in,jn;
	float fact[9],ed;
	/*  Direction factors  */
  for(k=1; k<= 8; k++)
    fact[k]= (float) (1./sqrt(d1[k]*dy*d1[k]*dy+d2[k]*d2[k]*dx*dx));

  for(i=i2; i< n2; i++)for(j=i1; j<n1; j++)
  {
    if(dir[j][i] > 0)
	{
		jn=j+d2[dir[j][i]];
		in=i+d1[dir[j][i]];
		ed=elev[j][i]-elev[jn][in];
	    slope[j][i]= ed*fact[dir[j][i]] ;	
	}
	else
		slope[j][i]= -1.;
  }
}
