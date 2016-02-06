/*	lsmcom.c 
		Common information to all lsm functions including gloabal variables */

/*	Includes */
#include "lsm.h"

/*  Global Variables  **************************************************/

short **dir;      /* flood, setdir */
short **apool;    /* flood */
float **elev;     /* flood, setdir */
float **slope;		/* setdir */
float **ang;      /* setdir, area */
float **sca;			/* area */

short *ipool, *jpool, *tmp;		/* flood */ 
short *dn, *is, *js;					/* setdir, flood */

								/* area */

int nx, ny;										/* flood, setdir, area */
int npool, pooln, pstack;			/* flood */
int nis, istack;							/* flood, setdir */
int filetype;									/* flood */

/*  i1,n1 are the x range when tiling
    i2,n2 are the y range when tiling
    These are global so as to avoid duplication in recursive routines  */
int i1,i2,n1,n2;			/* flood, setdir */

char annot[MAXLN],units[MAXLN];			/* flood, setdir */

float dx, dy;							/* flood, setdir, area */
float emin, et;						/* flood, setdir */
float utme,utmn,skew;			/* setdir */
float aref[10];						/* area */
float ndv;						/* area, setdir */

int nf;				/* flood, setdir */
int dd1[8],dd2[8];				
/* Offset pointers d1 and d2 */
int *d1 = dd1-1;
int *d2 = dd2-1;

/*  Grid bound variables   */
double bndbox[4],csize;
float mval;


