/* lsm.h
   header file for C functions that are stored in avlib.dll and
   accessed from ArcView (Avenue) via DLL.Proc calls. 
   Created by Craig N. Goodwin
   Version 0.1
   Begin date: 97/08/27
   Publish date:     */

/*  Toggle between these depending upon platform  */
/*  #define WIN  */
#define WIN

/* include file to make things work */

#include "gridio.h"

/*	Defines */
#define PI2 1.5707963268


/* Common information to all lsm functions including global variables */

/* prototypes - t********************/

/* used in flood.c */
int		setdf(float mval);
int		vdn(int n);					/* also used in setdir */
int		pool(int i,int j);
void	set(int i,int j,float *fact,float mval);		/* also used in setdir */
float	min2(float e1,float e2);
float	max2(float e1,float e2);

/* used in setdir.c */
int		setdfnoflood(float mval);
void	SET2(int I, int J,float *DXX,float DD);
void	setdf2(void );
void	VSLOPE(float E0,float E1, float E2,
             float D1,float D2,float DD,
             float *S,float *A);
int		setdir(char *demfile, char *angfile, char *slopefile, char *pfile);              

/* used in area.c */
float	prop();
void	dparea();

/*  used in aread8.c  */
int aread8();
void darea();

/*  Global Variables  **************************************************/

extern short **dir;      /* flood, setdir */
extern short **apool;    /* flood */
extern float **elev;     /* flood, setdir */
extern float **slope;		/* setdir */
extern float **ang;      /* setdir, area */
extern float **sca;			/* area */

extern short *ipool, *jpool, *tmp;		/* flood */ 
extern short *dn, *is, *js;					/* setdir, flood */

extern int nx, ny;										/* flood, setdir, area */
extern int npool, pooln, pstack;			/* flood */
extern int nis, istack;							/* flood, setdir */
extern int filetype;									/* flood */

/*  i1,n1 are the x range when tiling
    i2,n2 are the y range when tiling
    These are global so as to avoid duplication in recursive routines  */
extern int i1,i2,n1,n2;			/* flood, setdir */

extern char annot[MAXLN],units[MAXLN];			/* flood, setdir */

extern float dx, dy;							/* flood, setdir, area */
extern float emin, et;						/* flood, setdir */
extern float utme,utmn,skew;			/* setdir */
extern float aref[10];						/* area */
extern float ndv;								/* area, setdir */

extern int nf;				/* flood, setdir */
extern int dd1[8],dd2[8];			
extern int *d1;
extern int *d2;

/* prototypes for functions in AVCalls.c */

void SetWorkingStatus(void);

/*  Grid bound variables   */
extern double bndbox[4],csize;
extern float mval;

