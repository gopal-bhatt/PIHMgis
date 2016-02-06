/*******************************************************************************
 * File        : initialize.c                                                  *
 * Function    : initialization of data structue                               *
 * Programmer  : Yizhong Qu @ Pennsylvania State Univeristy                    *
 * Version     : May, 2004 (1.0)                                               *
 *-----------------------------------------------------------------------------*
 *                                                                             *
 * Part of initialization work is done in read_alloc, and the rest is done here*
 *                                                                             *
 * This code is free for users with research purpose only, if appropriate      *
 * citation is refered. However, there is no warranty in any format for this   *
 * product.                                                                    *
 *                                                                             *
 * For questions or comments, please contact the authors of the reference.     *
 * One who want to use it for other consideration may also contact Dr.Duffy    *
 * at cxd11@psu.edu.                                                           *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "sundials_types.h"
#include "nvector_serial.h"
#include "ihm.h"
#include "calib.h"

//#define satD_CALIB	0.0
//#define br_CALIB 	4.0
//#define poros_CALIB	0.35
//#define icsat_CALIB 	0.56
//#define rivEle_CALIB	0.62

realtype satD_CALIB;
realtype br_CALIB;
realtype poros_CALIB;
realtype icsat_CALIB;
realtype rivEle_CALIB;

int lbool;

void initialize(char *filename, Model_Data DS, Control_Data *CS, N_Vector CV_Y)
{
	int i,j,counterMin,counterMax,MINCONST,domcounter;
  	realtype a_x, a_y, b_x, b_y, c_x, c_y,MAXCONST;
  	realtype a_zmin, a_zmax, b_zmin, b_zmax, c_zmin, c_zmax;
  	realtype tempvalue;
  	FILE *int_file;
  	char *fn;
  	realtype *zmin_cor;

  	satD_CALIB = setsatD_CALIB();
  	br_CALIB   = setbr_CALIB();
  	poros_CALIB = setporos_CALIB();
  	icsat_CALIB = seticsat_CALIB();
  	rivEle_CALIB = setrivEle_CALIB();

  	zmin_cor=(realtype *)malloc(DS->NumEle*sizeof(realtype));

  	printf("\nInitializing data structure ... ");

  	for(i=0; i<DS->NumEle; i++)
  	{
    	a_x = DS->Node[DS->Ele[i].node[0]-1].x;
    	b_x = DS->Node[DS->Ele[i].node[1]-1].x;
    	c_x = DS->Node[DS->Ele[i].node[2]-1].x;
    	a_y = DS->Node[DS->Ele[i].node[0]-1].y;
    	b_y = DS->Node[DS->Ele[i].node[1]-1].y;
    	c_y = DS->Node[DS->Ele[i].node[2]-1].y;

    	a_zmin = DS->Node[DS->Ele[i].node[0]-1].zmin;
    	b_zmin = DS->Node[DS->Ele[i].node[1]-1].zmin;
    	c_zmin = DS->Node[DS->Ele[i].node[2]-1].zmin;
    	a_zmax = DS->Node[DS->Ele[i].node[0]-1].zmax;
    	b_zmax = DS->Node[DS->Ele[i].node[1]-1].zmax;
    	c_zmax = DS->Node[DS->Ele[i].node[2]-1].zmax;

    	MINCONST=10000000;
    	MAXCONST=-1000000;
    	for(j=0;j<3;j++)
    	{
    		if(DS->Node[DS->Ele[i].node[j]-1].zmin<MINCONST)
    		{
    			MINCONST=DS->Node[DS->Ele[i].node[j]-1].zmin;
    			counterMin=j;
    		}
    		if(DS->Node[DS->Ele[i].node[j]-1].zmax>MAXCONST)
    		{
    			MAXCONST=DS->Node[DS->Ele[i].node[j]-1].zmax;
    			counterMax=j;
    		}
    	}
    	DS->Ele[i].NodeZmin= DS->Node[DS->Ele[i].node[counterMin]-1].zmin;
    	DS->Ele[i].NodeZmax= DS->Node[DS->Ele[i].node[counterMax]-1].zmax;
    	DS->Ele[i].NodeDist= sqrt(pow(DS->Node[DS->Ele[i].node[counterMin]-1].x-DS->Node[DS->Ele[i].node[counterMax]-1].x,2)+pow(DS->Node[DS->Ele[i].node[counterMin]-1].y-DS->Node[DS->Ele[i].node[counterMax]-1].y,2));

    	DS->Ele[i].area = 0.5*((b_x - a_x)*(c_y - a_y) - (b_y - a_y)*(c_x - a_x));
		//printf("\n%lf",DS->Ele[i].area);
    	DS->Ele[i].zmax = (a_zmax + b_zmax + c_zmax)/3.0;
	DS->Ele[i].zmin = (a_zmin + b_zmin + c_zmin)/3.0;
     	//DS->Ele[i].zmin =DS->Ele[i].zmax-br_CALIB;
		/*MAXCONST=-1000000;
		domcounter=0;
    	for(j=0;j<3;j++)
    	{
			if(fabs(DS->Ele[i].zmax-DS->Ele[DS->Ele[i].nabr[j]-1].zmax)>MAXCONST)
			{
				MAXCONST=fabs(DS->Ele[i].zmax-DS->Ele[DS->Ele[i].nabr[j]-1].zmax);
				domcounter=DS->Ele[i].zmax-DS->Ele[DS->Ele[i].nabr[j]-1].zmax<0?j:j+3;
			}
    	}
		printf("\n%d %d",i,domcounter);
 		*/
    	DS->Ele[i].edge[0] = pow((b_x - c_x), 2) + pow((b_y - c_y), 2);
    	DS->Ele[i].edge[1] = pow((c_x - a_x), 2) + pow((c_y - a_y), 2);
    	DS->Ele[i].edge[2] = pow((a_x - b_x), 2) + pow((a_y - b_y), 2);
    	/* calculate centroid of triangle */

    	DS->Ele[i].x = (a_x + b_x + c_x)/3.0;
    	DS->Ele[i].y = (a_y + b_y + c_y)/3.0;


    	/* calculate circumcenter of triangle */
  		/* DS->Ele[i].x = a_x - ((b_y - a_y)*DS->Ele[i].edge[2] - (c_y - a_y)*DS->Ele[i].edge[0])/(4*DS->Ele[i].area);
    	DS->Ele[i].y = a_y + ((b_x - a_x)*DS->Ele[i].edge[2] - (c_x - a_x)*DS->Ele[i].edge[0])/(4*DS->Ele[i].area);
    	*/
    	DS->Ele[i].edge[0] = sqrt(DS->Ele[i].edge[0]);
    	DS->Ele[i].edge[1] = sqrt(DS->Ele[i].edge[1]);
    	DS->Ele[i].edge[2] = sqrt(DS->Ele[i].edge[2]);
    	/***************** Temporary ET inputs ***********************************/
    	DS->Ele[i].windH = 10;
    	/*************************************************************************/

  	}
	/* Routine to Find Sinks 
	for(i=0; i<DS->NumEle; i++){
		lbool=0;
		for(j=0; j<3; j++){
			if(DS->Ele[i].nabr[j]>0){
				if(DS->Ele[i].zmax+1.0>DS->Ele[DS->Ele[i].nabr[j]-1].zmax)
					lbool=1;
			}
		}
		if(lbool==0){
			printf("%d is sink\n",i+1);
		}
	}
	*/	
	//getchar();
  	/* allocate flux */
  	DS->FluxSurf = (realtype **)malloc(DS->NumEle*sizeof(realtype));
  	DS->FluxSub = (realtype **)malloc(DS->NumEle*sizeof(realtype));
  	DS->FluxRiv = (realtype **)malloc(DS->NumRiv*sizeof(realtype));
  	DS->EleET = (realtype **)malloc(DS->NumEle*sizeof(realtype));

  	for(i=0; i<DS->NumEle; i++)
  	{
    	DS->FluxSurf[i] = (realtype *)malloc(3*sizeof(realtype));
    	DS->FluxSub[i] = (realtype *)malloc(3*sizeof(realtype));
    	DS->EleET[i] = (realtype *)malloc(4*sizeof(realtype));
  	}

  	for(i=0; i<DS->NumRiv; i++)
  	{
    	DS->FluxRiv[i] = (realtype *)malloc(6*sizeof(realtype));
  	}

  	DS->ElePrep = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->EleVic = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->Recharge = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->EleIS = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->EleISmax = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->EleSnow = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->EleTF = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->Ele2IS = (realtype *)malloc(DS->NumEle*sizeof(realtype));
  	DS->EleNetPrep = (realtype *)malloc(DS->NumEle*sizeof(realtype));

  	for(i=0; i<DS->NumEle; i++)
  	{
    	DS->Ele[i].Ksat = DS->Soil[(DS->Ele[i].soil-1)].Ksat;
    	DS->Ele[i].Porosity = DS->Soil[(DS->Ele[i].soil-1)].SitaS -
                          DS->Soil[(DS->Ele[i].soil-1)].SitaR;
    	DS->Ele[i].Porosity = poros_CALIB*DS->Ele[i].Porosity;
    	DS->Ele[i].Alpha = DS->Soil[(DS->Ele[i].soil-1)].Alpha;
    	DS->Ele[i].Beta = DS->Soil[(DS->Ele[i].soil-1)].Beta;
    	DS->Ele[i].Sf = DS->Soil[(DS->Ele[i].soil-1)].Sf;
    	DS->Ele[i].RzD=DS->Soil[DS->Ele[i].soil-1].RzD>(DS->Ele[i].zmax-DS->Ele[i].zmin)?0.5*(DS->Ele[i].zmax-DS->Ele[i].zmin):DS->Soil[DS->Ele[i].soil-1].RzD;  /* Revisit this modification */

    	DS->Ele[i].LAImax = DS->LandC[DS->Ele[i].LC-1].LAImax;
    	DS->Ele[i].Rmin = DS->LandC[DS->Ele[i].LC-1].Rmin;
    	DS->Ele[i].Rs_ref = DS->LandC[DS->Ele[i].LC-1].Rs_ref;
    	DS->Ele[i].Albedo = DS->LandC[DS->Ele[i].LC-1].Albedo;
    	DS->Ele[i].VegFrac = DS->LandC[DS->Ele[i].LC-1].VegFrac;
    	DS->Ele[i].Rough = DS->LandC[DS->Ele[i].LC-1].Rough;
  	}

  	for(i=0; i<DS->NumRiv; i++)
  	{
    	DS->Riv[i].x = (DS->Node[DS->Riv[i].FromNode-1].x +
                    DS->Node[DS->Riv[i].ToNode-1].x)/2;
    	DS->Riv[i].y = (DS->Node[DS->Riv[i].FromNode-1].y +
                    DS->Node[DS->Riv[i].ToNode-1].y)/2;
    	DS->Riv[i].zmax = (DS->Node[DS->Riv[i].FromNode-1].zmax + DS->Node[DS->Riv[i].ToNode-1].zmax)/2;
    	DS->Riv[i].depth = DS->Riv_Shape[DS->Riv[i].shape-1].depth;
    	DS->Riv[i].zmin = DS->Riv[i].zmax - DS->Riv[i].depth;

    	DS->Riv[i].Length = sqrt(pow(DS->Node[DS->Riv[i].FromNode-1].x -
                                 DS->Node[DS->Riv[i].ToNode-1].x, 2) +
                             pow(DS->Node[DS->Riv[i].FromNode-1].y -
                                 DS->Node[DS->Riv[i].ToNode-1].y, 2));
  	}
	/*
  	for(i=0; i<DS->NumRiv; i++)
  	{
		if(DS->Riv[i].down>0)
		{
			if(DS->Riv[i].zmin-DS->Riv[DS->Riv[i].down-1].zmin<=0.0)
			{
				printf("\n%d\t%lf",i,DS->Riv[i].zmin-DS->Riv[DS->Riv[i].down-1].zmin);//DS->Ele[DS->Riv[i].LeftEle-1].zmax,DS->Ele[DS->Riv[i].RightEle-1].zmax);
			}
		}
	}
	getchar();
*/

  	/* initialize state varible */
  	/* relax cases */
  	if (CS->int_type == 0)
  	{
    	for(i=0; i<DS->NumEle; i++)
    	{
      		DS->EleIS[i] = 0;
      		NV_Ith_S(CV_Y, i) = 0;
      		NV_Ith_S(CV_Y, i + DS->NumEle) = (1/DS->Ele[i].Alpha)*(1-exp(-DS->Ele[i].Alpha*(0.1+0.05)));
      		NV_Ith_S(CV_Y, i + 2*DS->NumEle) = DS->Ele[i].zmax - DS->Ele[i].zmin - 0.1;
    	}

    	for(i=0; i<DS->NumRiv; i++)
    	{
      		NV_Ith_S(CV_Y, i + 3*DS->NumEle) = 0;
    	}
  	}
  	/* type mode */
  	else if (CS->int_type == 1)
  	{
		if(DS->UnsatMode ==1)
		{
    		for(i=0; i<DS->NumEle; i++)
    		{
      			DS->EleIS[i] = DS->Ele_IC[i].interception;
      			DS->EleSnow[i]=DS->Ele_IC[i].snow;
      			NV_Ith_S(CV_Y, i) = DS->Ele_IC[i].surf;
 				/*NV_Ith_S(CV_Y, i + DS->NumEle) = DS->Ele_IC[DS->Ele[i].IC-1].unsat; */
      			NV_Ith_S(CV_Y, i + DS->NumEle) = DS->Ele_IC[i].sat;

    		}

    		for(i=0; i<DS->NumRiv; i++)
    		{
      			NV_Ith_S(CV_Y, i + 2*DS->NumEle) = DS->Riv_IC[DS->Riv[i].IC-1].value;
    		}
    	}
		if(DS->UnsatMode ==2)
		{
    		for(i=0; i<DS->NumEle; i++)
    		{
			/*DS->Ele_IC[i].sat= (DS->Ele_IC[i].sat>(DS->Ele[i].zmax - DS->Ele[i].zmin+zmin_cor[i]))?(DS->Ele[i].zmax - DS->Ele[i].zmin)-0.01: (DS->Ele_IC[i].sat-zmin_cor[i]>0?DS->Ele_IC[i].sat-zmin_cor[i]:0);*/
      			//DS->Ele_IC[i].sat=  (DS->Ele[i].zmax - DS->Ele[i].zmin)*icsat_CALIB;
			DS->Ele_IC[i].sat= (DS->Ele[i].zmax-(br_CALIB*(1.0-icsat_CALIB)))>DS->Ele[i].zmin?(DS->Ele[i].zmax-DS->Ele[i].zmin-(br_CALIB*(1.0-icsat_CALIB))):(DS->Ele[i].zmax-DS->Ele[i].zmin)/2.0;
      			DS->EleIS[i] = DS->Ele_IC[i].interception;
      			NV_Ith_S(CV_Y, i) = DS->Ele_IC[i].surf;

      			DS->Ele_IC[i].sat=(DS->Ele[i].zmax - DS->Ele[i].zmin)-(DS->Ele_IC[i].sat+satD_CALIB)>0?((DS->Ele_IC[i].sat+satD_CALIB)<0?0.0:(DS->Ele_IC[i].sat+satD_CALIB)):(DS->Ele[i].zmax - DS->Ele[i].zmin)-0.01;

      			NV_Ith_S(CV_Y, i + DS->NumEle) = DS->Ele_IC[i].unsat+(1-exp(-1.0*DS->Ele[i].Alpha*((DS->Ele[i].zmax - DS->Ele[i].zmin)-DS->Ele_IC[i].sat)))/DS->Ele[i].Alpha; /* delete the later part: Just for Juniata */
      			NV_Ith_S(CV_Y, i + 2*DS->NumEle) = DS->Ele_IC[i].sat;


      			if ((NV_Ith_S(CV_Y, i + DS->NumEle) + NV_Ith_S(CV_Y, i + 2*DS->NumEle)) >= (DS->Ele[i].zmax - DS->Ele[i].zmin))
      			{
        			NV_Ith_S(CV_Y, i + DS->NumEle) = ((DS->Ele[i].zmax - DS->Ele[i].zmin) - NV_Ith_S(CV_Y, i + 2*DS->NumEle))*0.9;
       				// printf("\n here %d %e %e %e",i,NV_Ith_S(CV_Y, i + DS->NumEle),NV_Ith_S(CV_Y, i + 2*DS->NumEle),(DS->Ele[i].zmax - DS->Ele[i].zmin));
        			if (NV_Ith_S(CV_Y, i + DS->NumEle) < 0)
        			{
						NV_Ith_S(CV_Y, i + DS->NumEle) = 0;
					}
      			}
    		}

    		for(i=0; i<DS->NumRiv; i++)
    		{
      			NV_Ith_S(CV_Y, i + 3*DS->NumEle) = DS->Riv_IC[DS->Riv[i].IC-1].value;
      			//NV_Ith_S(CV_Y, DS->Riv[i].LeftEle-1 + 2*DS->NumEle) = (DS->Ele[DS->Riv[i].LeftEle-1].zmax - DS->Ele[DS->Riv[i].LeftEle-1].zmin)*rivEle_CALIB;
      			//NV_Ith_S(CV_Y, DS->Riv[i].RightEle-1 + 2*DS->NumEle) = (DS->Ele[DS->Riv[i].RightEle-1].zmax - DS->Ele[DS->Riv[i].RightEle-1].zmin)*rivEle_CALIB;
      			//NV_Ith_S(CV_Y, DS->Riv[i].LeftEle-1 + DS->NumEle) = (1-exp(-1.0*DS->Ele[i].Alpha*((DS->Ele[i].zmax - DS->Ele[i].zmin)-DS->Ele_IC[i].sat)))/DS->Ele[i].Alpha;
      			//NV_Ith_S(CV_Y, DS->Riv[i].RightEle-1 + DS->NumEle) = (1-exp(-1.0*DS->Ele[i].Alpha*((DS->Ele[i].zmax - DS->Ele[i].zmin)-DS->Ele_IC[i].sat)))/DS->Ele[i].Alpha;
    		}
    	}
  	}
  	/* hot start mode */
  	else if(CS->int_type == 2)
  	{
    	fn = (char *)malloc((strlen(filename)+4)*sizeof(char));
    	strcpy(fn, filename);
    	int_file = fopen(strcat(fn, ".int"), "r");

    	if(int_file == NULL)
    	{
      		printf("\n  Fatal Error: %s.int is in use or does not exist!\n", filename);
      		exit(1);
    	}
    	else
    	{
      		for(i=0; i<DS->NumEle; i++)
      		{
        		fscanf(int_file, "%lf", &tempvalue);
        		if(tempvalue <= 0) {tempvalue = 0.01;}
        		NV_Ith_S(CV_Y, i + DS->NumEle) = tempvalue;
      		}

      		for(i=0; i<DS->NumEle; i++)
      		{
        		fscanf(int_file, "%lf", &tempvalue);
        		if(tempvalue <= 0) {tempvalue = 0.01;}
        		if(tempvalue >= (DS->Ele[i].zmax - DS->Ele[i].zmin)) {tempvalue = (DS->Ele[i].zmax - DS->Ele[i].zmin) - 0.01;}
        		NV_Ith_S(CV_Y, i + 2*DS->NumEle) = tempvalue;
      		}

      		for(i=0; i<DS->NumEle; i++)
      		{
        		DS->EleIS[i] = 0;
        		NV_Ith_S(CV_Y, i) = 0;
      		}

      		for(i=0; i<DS->NumRiv; i++)
      		{
        		NV_Ith_S(CV_Y, i + 3*DS->NumEle) = 0;
      		}
    	}
    	fclose(int_file);
  	}
  	/**************************************************/
  	/* Adding routine to initialize state from a file */
  	/* with initCondition at any given time           */
  	/**************************************************/
  	else if(CS->int_type == 3)
  	{
		fn = (char *)malloc((strlen(filename)+5)*sizeof(char));
		strcpy(fn, filename);
		int_file = fopen(strcat(fn, ".init"), "r");

		if(int_file == NULL)
		{
			printf("\n  Fatal Error: %s.int is in use or does not exist!\n", filename);
		    exit(1);
		}
		else
		{
			fscanf(int_file, "%lf", &tempvalue);
			if(tempvalue != CS->StartTime){
				printf("\n  Fatal Error: Initial time in .init file does not match start time\n");
				exit(1);
			}

			if(DS->UnsatMode == 1)
			{
				for(i=0; i<DS->NumEle; i++)
			    {
				fscanf(int_file, "%lf", &tempvalue);
			      	DS->EleIS[i] = tempvalue;
			      	fscanf(int_file, "%lf", &tempvalue);
			      	DS->EleSnow[i]=tempvalue;
			      	fscanf(int_file, "%lf", &tempvalue);
			      	NV_Ith_S(CV_Y, i) = tempvalue;
			 	/*NV_Ith_S(CV_Y, i + DS->NumEle) = DS->Ele_IC[DS->Ele[i].IC-1].unsat; */
			 	fscanf(int_file, "%lf", &tempvalue);
			      	NV_Ith_S(CV_Y, i + DS->NumEle) = tempvalue;
			    }

			    for(i=0; i<DS->NumRiv; i++)
			    {
				fscanf(int_file, "%lf", &tempvalue);
			    	NV_Ith_S(CV_Y, i + 2*DS->NumEle) = tempvalue;
			    }
			}
			if(DS->UnsatMode == 2)
			{
				for(i=0; i<DS->NumEle; i++)
				{
					fscanf(int_file, "%lf", &tempvalue);
					DS->EleIS[i] = tempvalue;
					fscanf(int_file, "%lf", &tempvalue);
					DS->EleSnow[i]=tempvalue;
					fscanf(int_file, "%lf", &tempvalue);
					NV_Ith_S(CV_Y, i) = tempvalue;
					fscanf(int_file, "%lf", &tempvalue);
					NV_Ith_S(CV_Y, i + DS->NumEle) = tempvalue;
					fscanf(int_file, "%lf", &tempvalue);
					NV_Ith_S(CV_Y, i + 2*DS->NumEle) = tempvalue;
				}

				for(i=0; i<DS->NumRiv; i++)
				{
					fscanf(int_file, "%lf", &tempvalue);
					NV_Ith_S(CV_Y, i + 3*DS->NumEle) = tempvalue;
				}
			}
		}
    }

    printf("done.\n");
}

