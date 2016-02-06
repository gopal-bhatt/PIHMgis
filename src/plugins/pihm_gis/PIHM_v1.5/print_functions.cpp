/*******************************************************************************
 * File        : print_function.c                                              *
 * Function    : print out model result to stdout or output files              *
 * Programmer  : Yizhong Qu @ Pennsylvania State Univeristy                    *
 * Version     : May, 2004 (1.0)                                               * 
 *-----------------------------------------------------------------------------*
 *                                                                             *
 * In this file, several print function defined serves to print our model      *
 * result to stdout(monitor) or output files with the same prefix as in input  *
 * files. Users can modify all the following print function as need accordingly*
 * There are 3 files so far: *.res, *.flux, and *.etis. In res file, all state *
 * variables, including Overland depth, Unsaturated and Saturated Storage for  *
 * every element, and River stage for each river segment are saved. All fluxes *
 * are saved in flux file. etis file has all envapotranspiration and inter-    *
 * ception storages in it.                                                     *
 *                                                                             *
 * This code is free for users with research purpose only, if appropriate      *
 * citation is refered. However, there is no warranty in any format for this   *
 * product.                                                                    *
 *                                                                             *
 * For questions or comments, please contact the authors of the reference.     *
 * One who want to use it for other consideration may also contact Dr.Duffy    *
 * at cxd11@psu.edu.                                                           *    
 *******************************************************************************/
/*******************************************************************************
 * File        : print.c                                                       *
 * Function    : prints the output parameters in either txt or netcdf format   *
 * Programmers : Yizhong Qu   @ Pennsylvania State Univeristy                  *
 *               Mukesh Kumar @ Pennsylvania State Univeristy                  *
 *               Gopal Bhatt  @ Pennsylvania State Univeristy                  *
 * Version     : 2.0 (July 10, 2007)                                           *
 *-----------------------------------------------------------------------------*
 *                                                                             *
 *                                                                             *
 * This code is free for users with research purpose only, if appropriate      *
 * citation is refered. However, there is no warranty in any format for this   *
 * product.                                                                    *
 *                                                                             *
 * For questions or comments, please contact the authors of the reference.     *
 * One who want to use it for other consideration may also contact Dr.Duffy    *
 * at cxd11@psu.edu.                                                           *
 *******************************************************************************/


//! @file print.c function definition for printing user defined output parameters in either txt or netcdf format

/*    Header File        */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*    NETCDF Header File    */
//#include <netcdf.h>

/*    SUNDIALS Header File    */
#include "sundials_types.h"
#include "cvode.h"
#include "cvode_dense.h"
#include "nvector_serial.h"

/*    PIHM Header Files    */
#include "ihm.h"
#include "calib.h"
#include "print_functions.h"


/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "nvector_serial.h"
#include "sundials_types.h"   
#include "ihm.h"  
#include "cvode.h" 
#include "cvode_dense.h"
*/



#define NDIMS    2    /**< Defines dimension: time vs. Elements or time vs. RiverSegments    */

#define ERR(e) {printf("Error: %s\n", nc_strerror(e)); return;}





int FPRINT_MODE;
int ISState;
int SatState;
int UsatState;
int SurfState;
int ISStateT;
int SatStateT;
int UsatStateT;
int SurfStateT;
int ET0;
int ET1;
int ET2;
int NetPpt;
int Infil;
int RECHARGE;
int ET0T;
int ET1T;
int ET2T;
int NetPptT;
int InfilT;
int RECHARGET;
int RivHead;
int RivHeadT;
int RivFlow;
int RivBase;
int RivSurf;
int RivFlowT;
int RivBaseT;
int RivSurfT;
int FluxSurf;
int FluxSat;
int FluxSurfT;
int FluxSatT;









/*    File Pointer for TXT files    */
FILE *isStatePtr, *satStatePtr, *usatStatePtr, *surfStatePtr;
FILE *et0Ptr, *et1Ptr, *et2Ptr, *netPrecipPtr, *infilPtr, *rechargePtr;
FILE *rivHeadPtr;
FILE *rivFlowPtr, *rivBasePtr, *rivSurfPtr;

/*    Strings to hold File Names    */
char *isStateFile, *satStateFile, *usatStateFile, *surfStateFile;
char *et0File, *et1File, *et2File, *netPrecipFile, *infilFile, *rechargeFile;
char *rivHeadFile;
char *rivFlowFile, *rivBaseFile, *rivSurfFile;

FILE *initPtr;     /**< File pointer for .init file    */
char *initFile;    /**< string to hold .init file name */

/*    variables to hold mean values */
static double *tempIS,  *tempSatState, *tempUsatState, *tempSurfState;
static double *tempET0, *tempET1, *tempET2, *tempNetPpt, *tempInfil, *tempRecharge;
static double *tempFlow, *tempBase, *tempSurf, *tempHead;


int NUMELE;        /**< Number of Elements in the model domain      */
int NUMRIV;        /**< Number of River Segs in the model domain    */

/* Error handling. */
int retval;        /**< Return Variable for netcdf function calls   */


/* ncIDs for CDF (.nc) Files    */
int isStateID, satStateID, usatStateID, surfStateID;
int et0ID, et1ID, et2ID, netPrecipID, infilID, rechargeID;
int rivHeadID;
int rivFlowID, rivBaseID, rivSurfID;

int ele_dimid;                           /**< Dimension ID for elements or river segments      */
int rec_dimid;                           /**< Dimension ID for records (time)                  */
int dimids[NDIMS];                       /**< Array of Dimension IDs                           */
int startEle[NDIMS];                     /**< start variable for Element's cdf files  */
int countEle[NDIMS];                     /**< count variable for Element's cdf files  */
int startRiv[NDIMS];                     /**< start variable for RiverSegment's cdf files */
int countRiv[NDIMS];                     /**< count variable for RiverSegment's cdf files */

/* Variable IDs for CDF (.nc) Files    */
int isState_varid, satState_varid, usatState_varid, surfState_varid;
int et0_varid, et1_varid, et2_varid, netPrecip_varid, infil_varid, recharge_varid;
int rivHead_varid;
int rivFlow_varid, rivBase_varid, rivSurf_varid;

/* TODO */
/* DUMMY FUNCTION FOR NETCDF : MUST UNCOMMENT AFTER PORTING NETCDF LIB */
void ncclose(int){}
int nc_put_vara_double(int, int, int *, int *, double *){}
int nc_strerror(int){}




/********************************************************************
    This function calls different fuction depending on the Output File Mode
    and simulated variables user wants to print as declared in print.h file
*********************************************************************/
void FPrint(Model_Data mData, N_Vector CV_Y, realtype t)
//! This function calls different fuction depending on the Output File Mode and simulated variables user wants to print as declared in print.h file
/*! \param mData is pointer to model data structure
    \param CV_Y	is state variable vector
    \param t is time of current simulation
*/
{
    /***************    TXT FILE MODE : START    ****************/
    if(FPRINT_MODE==TXT){
        if(ISState==YEA){
            printIS(mData, isStatePtr, t);
        }
        if(SatState==YEA){
            printSatState(mData, CV_Y, satStatePtr, t);
        }
        if(UsatState==YEA){
            printUsatState(mData, CV_Y, usatStatePtr, t);
        }
        if(SurfState==YEA){
            printSurfState(mData, CV_Y, surfStatePtr, t);
        }

        if(ET0==YEA){
            printET0(mData, et0Ptr, t);
        }
        if(ET1==YEA){
            printET1(mData, et1Ptr, t);
        }
        if(ET2==YEA){
            printET2(mData, et2Ptr, t);
        }
        if(NetPpt==YEA){
            printNetPpt(mData, netPrecipPtr, t);
        }
        if(Infil==YEA){
            printInfil(mData, infilPtr, t);
        }
        if(RECHARGE==YEA){
            printRecharge(mData, rechargePtr, t);
        }

        if(RivFlow==YEA){
            printRiverFlow(mData, CV_Y, rivFlowPtr, t);
        }
        if(RivBase==YEA){
            printRiverBase(mData, rivBasePtr, t);
        }
        if(RivSurf==YEA){
            printRiverSurf(mData, rivSurfPtr, t);
        }
        if(RivHead==YEA){
            printRiverHead(mData, CV_Y, rivHeadPtr, t);
        }
    }
    /***************    TXT FILE MODE : END    ****************/


    /***************    CDF FILE MODE : START    ****************/
    if(FPRINT_MODE==CDF){
        if(ISState==YEA){
            printIScdf(mData, isStateID, isState_varid, t);
        }
        if(SatState==YEA){
            printSatStatecdf(mData, CV_Y, satStateID, satState_varid, t);
        }
        if(UsatState==YEA){
            printUsatStatecdf(mData, CV_Y, usatStateID, usatState_varid, t);
        }
        if(SurfState==YEA){
            printSurfStatecdf(mData, CV_Y, surfStateID, surfState_varid, t);
        }

        if(ET0==YEA){
            printET0cdf(mData, et0ID, et0_varid, t);
        }
        if(ET1==YEA){
            printET1cdf(mData, et1ID, et1_varid, t);
        }
        if(ET2==YEA){
            printET2cdf(mData, et2ID, et2_varid, t);
        }
        if(NetPpt==YEA){
            printNetPptcdf(mData, netPrecipID, netPrecip_varid, t);
        }
        if(Infil==YEA){
            printInfilcdf(mData, infilID, infil_varid, t);
        }
        if(RECHARGE==YEA){
            printRechargecdf(mData, rechargeID, recharge_varid, t);
        }


        if(RivFlow==YEA){
            printRiverFlowcdf(mData, CV_Y, rivFlowID, rivFlow_varid, t);
        }
        if(RivBase==YEA){
            printRiverBasecdf(mData, rivBaseID, rivBase_varid, t);
        }
        if(RivSurf==YEA){
            printRiverSurfcdf(mData, rivSurfID, rivSurf_varid, t);
        }
        if(RivHead==YEA){
            printRiverHeadcdf(mData, CV_Y, rivHeadID, rivHead_varid, t);
        }
    }
    /***************    CDF FILE MODE : END    ****************/

}

/****************************************************************
ROUTINE TO PRINT NEW INIT FILE AT THE END OF SIMULATION
$$ IT ENABLES USER TO START SIMULATION FROM THERE ONWARDS
*****************************************************************/

void FPrintInitFile(Model_Data mData, Control_Data cData, N_Vector CV_Y, int i)
//! Print new .init file at the completion of simulation
/*! \param mData is pointer to model data structure
	\param cData is pointer to control data structure
    \param CV_Y	is state variable vector
    \param i is the index of cData.Tout
*/
{
    int j;
    char tmpFileName[100];
    setFileName(tmpFileName);
    initFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
    strcpy(initFile, tmpFileName);
    strcat(initFile, ".init.end");    //TODO: replace 'end' with 'time value'
    initPtr=fopen(initFile, "w");

    fprintf(initPtr,"%lf\n",cData.Tout[i]);
    for(j=0; j<mData->NumEle; j++)
    {
        fprintf(initPtr,"%lf\t%lf\t%lf\t%lf\t%lf\n",mData->EleIS[j],mData->EleSnow[j],NV_Ith_S(CV_Y,j), NV_Ith_S(CV_Y,j+mData->NumEle), NV_Ith_S(CV_Y,j+2*mData->NumEle));
    }
    for(j=0; j<mData->NumRiv; j++)
    {
        fprintf(initPtr,"%lf\n",NV_Ith_S(CV_Y, j+3*mData->NumEle));
    }
    fflush(initPtr);
}

/****************************************************************
Open the files depending on the flag values (YEA/NAY) and
mode of output (TXT/NETCDF)
*****************************************************************/
void FPrintInit(Model_Data mData)
//! Initializes several variables and allocates memory depending on output file mode and variables user wants to output
/*! \param mData is pointer to model data structure
*/
{
    int i;
    char tmpFileName[100];
    setFileName(tmpFileName);

    NUMELE=mData->NumEle;
    NUMRIV=mData->NumRiv;

    countEle[0]=1;
    countEle[1]=NUMELE;
    startEle[1]=0;
    countRiv[0]=1;
    countRiv[1]=NUMRIV;
    startEle[1]=0;
    /***************    TXT FILE MODE : START    ****************/
    if(FPRINT_MODE==TXT){
        /* STATES */
        if(ISState==YEA){
            isStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(isStateFile, tmpFileName);
            strcat(isStateFile, ".is.txt");
            isStatePtr=fopen(isStateFile, "w");

            tempIS=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempIS[i]=0.0;
        }
        if(SatState==YEA){
            satStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(satStateFile, tmpFileName);
            strcat(satStateFile, ".sat.txt");
            satStatePtr=fopen(satStateFile, "w");

            tempSatState=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempSatState[i]=0.0;
        }
        if(UsatState==YEA){
            usatStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(usatStateFile, tmpFileName);
            strcat(usatStateFile, ".usat.txt");
            usatStatePtr=fopen(usatStateFile, "w");

            tempUsatState=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempUsatState[i]=0.0;
        }
        if(SurfState==YEA){
            surfStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(surfStateFile, tmpFileName);
            strcat(surfStateFile, ".surf.txt");
            surfStatePtr=fopen(surfStateFile, "w");

            tempSurfState=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempSurfState[i]=0.0;
        }

        /* FLUXES */
        if(ET0==YEA){
            et0File = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(et0File, tmpFileName);
            strcat(et0File, ".et0.txt");
            et0Ptr=fopen(et0File, "w");

            tempET0=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempET0[i]=0.0;
        }
        if(ET1==YEA){
            et1File = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(et1File, tmpFileName);
            strcat(et1File, ".et1.txt");
            et1Ptr=fopen(et1File, "w");

            tempET1=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempET1[i]=0.0;
        }
        if(ET2==YEA){
            et2File = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(et2File, tmpFileName);
            strcat(et2File, ".et2.txt");
            et2Ptr=fopen(et2File, "w");

            tempET2=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempET2[i]=0.0;
        }
        if(NetPpt==YEA){
            netPrecipFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(netPrecipFile, tmpFileName);
            strcat(netPrecipFile, ".netPrecip.txt");
            netPrecipPtr=fopen(netPrecipFile, "w");

            tempNetPpt=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempNetPpt[i]=0.0;
        }
        if(Infil==YEA){
            infilFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(infilFile, tmpFileName);
            strcat(infilFile, ".infil.txt");
            infilPtr=fopen(infilFile, "w");

            tempInfil=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempInfil[i]=0.0;
        }
        if(RECHARGE==YEA){
            rechargeFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rechargeFile, tmpFileName);
            strcat(rechargeFile, ".recharge.txt");
            rechargePtr=fopen(rechargeFile, "w");

            tempRecharge=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempRecharge[i]=0.0;
        }

        /* River States */
        if(RivHead==YEA){
            rivHeadFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivHeadFile, tmpFileName);
            strcat(rivHeadFile, ".rivHead.txt");
            rivHeadPtr=fopen(rivHeadFile, "w");

            tempHead=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempHead[i]=0.0;
        }

        /* River Fluxes */
        if(RivFlow==YEA){
            rivFlowFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivFlowFile, tmpFileName);
            strcat(rivFlowFile, ".rivFlow.txt");
            rivFlowPtr=fopen(rivFlowFile, "w");

            tempFlow=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempFlow[i]=0.0;
        }
        if(RivBase==YEA){
            rivBaseFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivBaseFile, tmpFileName);
            strcat(rivBaseFile, ".rivBase.txt");
            rivBasePtr=fopen(rivBaseFile, "w");

            tempBase=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempBase[i]=0.0;
        }
        if(RivSurf==YEA){
            rivSurfFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivSurfFile, tmpFileName);
            strcat(rivSurfFile, ".rivSurf.txt");
            rivSurfPtr=fopen(rivSurfFile, "w");

            tempSurf=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempSurf[i]=0.0;
        }
    }
    /***************    TXT FILE MODE : END    ****************/



/*
    // ***************    CDF FILE MODE : START    **************** /
    if(FPRINT_MODE==CDF){
        // * STATES * /
        if(ISState==YEA){
            isStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(isStateFile, tmpFileName);
            strcat(isStateFile, ".is.nc");
            if ((retval = nc_create(isStateFile, NC_CLOBBER, &isStateID)))
                  ERR(retval);
               if ((retval = nc_def_dim(isStateID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(isStateID, "Time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(isStateID, "Interception_Storage_State", NC_DOUBLE, NDIMS, dimids, &isState_varid)))
                ERR(retval);
            if ((retval = nc_enddef(isStateID)))
                ERR(retval);

            tempIS=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempIS[i]=0.0;
        }
        if(SatState==YEA){
            satStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(satStateFile, tmpFileName);
            strcat(satStateFile, ".sat.nc");
            if ((retval = nc_create(satStateFile, NC_CLOBBER, &satStateID)))
                  ERR(retval);
               if ((retval = nc_def_dim(satStateID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(satStateID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(satStateID, "Saturated_Zone_State", NC_DOUBLE, NDIMS, dimids, &satState_varid)))
                ERR(retval);
            if ((retval = nc_enddef(satStateID)))
                ERR(retval);

            tempSatState=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempSatState[i]=0.0;
        }
        if(UsatState==YEA){
            usatStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(usatStateFile, tmpFileName);
            strcat(usatStateFile, ".usat.nc");
            if ((retval = nc_create(usatStateFile, NC_CLOBBER, &usatStateID)))
                  ERR(retval);
               if ((retval = nc_def_dim(usatStateID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(usatStateID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(usatStateID, "Unsaturated_Zone_State", NC_DOUBLE, NDIMS, dimids, &usatState_varid)))
                ERR(retval);
            if ((retval = nc_enddef(usatStateID)))
                ERR(retval);

            tempUsatState=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempUsatState[i]=0.0;
        }
        if(SurfState==YEA){
            surfStateFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(surfStateFile, tmpFileName);
            strcat(surfStateFile, ".surf.nc");
            if ((retval = nc_create(surfStateFile, NC_CLOBBER, &surfStateID)))
                  ERR(retval);
               if ((retval = nc_def_dim(surfStateID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(surfStateID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(surfStateID, "Surface_Flow_State", NC_DOUBLE, NDIMS, dimids, &surfState_varid)))
                ERR(retval);
            if ((retval = nc_enddef(surfStateID)))
                ERR(retval);

            tempSurfState=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempSurfState[i]=0.0;
        }

        // * FLUXES * /
        if(ET0==YEA){
            et0File = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(et0File, tmpFileName);
            strcat(et0File, ".et0.nc");
            if ((retval = nc_create(et0File, NC_CLOBBER, &et0ID)))
                  ERR(retval);
               if ((retval = nc_def_dim(et0ID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(et0ID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(et0ID, "ET0", NC_DOUBLE, NDIMS, dimids, &et0_varid)))
                ERR(retval);
            if ((retval = nc_enddef(et0ID)))
                ERR(retval);

            tempET0=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempET0[i]=0.0;
        }
        if(ET1==YEA){
            et1File = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(et1File, tmpFileName);
            strcat(et1File, ".et1.nc");
            if ((retval = nc_create(et1File, NC_CLOBBER, &et1ID)))
                  ERR(retval);
               if ((retval = nc_def_dim(et1ID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(et1ID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(et1ID, "ET1", NC_DOUBLE, NDIMS, dimids, &et1_varid)))
                ERR(retval);
            if ((retval = nc_enddef(et1ID)))
                ERR(retval);

            tempET1=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempET1[i]=0.0;
        }
        if(ET2==YEA){
            et2File = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(et2File, tmpFileName);
            strcat(et2File, ".et2.nc");
            if ((retval = nc_create(et2File, NC_CLOBBER, &et2ID)))
                  ERR(retval);
               if ((retval = nc_def_dim(et2ID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(et2ID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(et2ID, "ET2", NC_DOUBLE, NDIMS, dimids, &et2_varid)))
                ERR(retval);
            if ((retval = nc_enddef(et2ID)))
                ERR(retval);

            tempET2=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempET2[i]=0.0;
        }
        if(NetPpt==YEA){
            netPrecipFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(netPrecipFile, tmpFileName);
            strcat(netPrecipFile, ".netPrecip.nc");
            if ((retval = nc_create(netPrecipFile, NC_CLOBBER, &netPrecipID)))
                  ERR(retval);
               if ((retval = nc_def_dim(netPrecipID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(netPrecipID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(netPrecipID, "Net_Precipitation", NC_DOUBLE, NDIMS, dimids, &netPrecip_varid)))
                ERR(retval);
            if ((retval = nc_enddef(netPrecipID)))
                ERR(retval);

            tempNetPpt=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempNetPpt[i]=0.0;
        }
        if(Infil==YEA){
            infilFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(infilFile, tmpFileName);
            strcat(infilFile, ".infil.nc");
            if ((retval = nc_create(infilFile, NC_CLOBBER, &infilID)))
                  ERR(retval);
               if ((retval = nc_def_dim(infilID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(infilID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(infilID, "Infiltration", NC_DOUBLE, NDIMS, dimids, &infil_varid)))
                ERR(retval);
            if ((retval = nc_enddef(infilID)))
                ERR(retval);

            tempInfil=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempInfil[i]=0.0;
        }
        if(RECHARGE==YEA){
            rechargeFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rechargeFile, tmpFileName);
            strcat(rechargeFile, ".recharge.nc");
            if ((retval = nc_create(rechargeFile, NC_CLOBBER, &rechargeID)))
                  ERR(retval);
               if ((retval = nc_def_dim(rechargeID, "Elements" , NUMELE, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(rechargeID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(rechargeID, "Recharge2GW", NC_DOUBLE, NDIMS, dimids, &recharge_varid)))
                ERR(retval);
            if ((retval = nc_enddef(rechargeID)))
                ERR(retval);

            tempRecharge=(double *)malloc(mData->NumEle * sizeof(double));
            for(i=0; i<mData->NumEle; i++)
                tempRecharge[i]=0.0;
        }

        // * River States * /
        if(RivHead==YEA){
            rivHeadFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivHeadFile, tmpFileName);
            strcat(rivHeadFile, ".rivHead.nc");
            if ((retval = nc_create(rivHeadFile, NC_CLOBBER, &rivHeadID)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivHeadID, "RiverSegments" , NUMRIV, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivHeadID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(rivHeadID, "RivState", NC_DOUBLE, NDIMS, dimids, &rivHead_varid)))
                ERR(retval);
            if ((retval = nc_enddef(rivHeadID)))
                ERR(retval);

            tempHead=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempHead[i]=0.0;
        }

        // * River Fluxes * /
        if(RivFlow==YEA){
            rivFlowFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivFlowFile, tmpFileName);
            strcat(rivFlowFile, ".rivFlow.nc");
            if ((retval = nc_create(rivFlowFile, NC_CLOBBER, &rivFlowID)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivFlowID, "RiverSegments" , NUMRIV, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivFlowID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(rivFlowID, "RivFlow", NC_DOUBLE, NDIMS, dimids, &rivFlow_varid)))
                ERR(retval);
            if ((retval = nc_enddef(rivFlowID)))
                ERR(retval);

            tempFlow=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempFlow[i]=0.0;
        }
        if(RivBase==YEA){
            rivBaseFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivBaseFile, tmpFileName);
            strcat(rivBaseFile, ".rivBase.nc");
            if ((retval = nc_create(rivBaseFile, NC_CLOBBER, &rivBaseID)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivBaseID, "RiverSegments" , NUMRIV, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivBaseID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(rivBaseID, "Base2Riv", NC_DOUBLE, NDIMS, dimids, &rivBase_varid)))
                ERR(retval);
            if ((retval = nc_enddef(rivBaseID)))
                ERR(retval);

            tempBase=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempBase[i]=0.0;
        }
        if(RivSurf==YEA){
            rivSurfFile = (char *)malloc(sizeof(char)*(20+strlen(tmpFileName)));
            strcpy(rivSurfFile, tmpFileName);
            strcat(rivSurfFile, ".rivSurf.nc");
            if ((retval = nc_create(rivSurfFile, NC_CLOBBER, &rivSurfID)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivSurfID, "RiverSegments" , NUMRIV, &ele_dimid)))
                  ERR(retval);
               if ((retval = nc_def_dim(rivSurfID, "time", NC_UNLIMITED, &rec_dimid)))
                  ERR(retval);
              dimids[0]=rec_dimid;
              dimids[1]=ele_dimid;
            if((retval = nc_def_var(rivSurfID, "Over2Riv", NC_DOUBLE, NDIMS, dimids, &rivSurf_varid)))
                ERR(retval);
            if ((retval = nc_enddef(rivSurfID)))
                ERR(retval);

            tempSurf=(double *)malloc(mData->NumRiv * sizeof(double));
            for(i=0; i<mData->NumRiv; i++)
                tempSurf[i]=0.0;
        }

    }
    // ***************    CDF FILE MODE : END    **************** /
*/
}

/*********************************************
    Close All the files those were opened
    depending on the File Mode
*********************************************/
void FPrintCloseAll(void)
//! Close all the files those were opened in function FPrintInit
{
    /* if File Mode is TXT    */
    if(FPRINT_MODE==TXT){
        if(ISState==YEA)
            fclose(isStatePtr);
        if(SatState==YEA)
            fclose(satStatePtr);
        if(UsatState==YEA)
            fclose(usatStatePtr);
        if(SurfState==YEA)
            fclose(surfStatePtr);
        if(ET0==YEA)
            fclose(et0Ptr);
        if(ET1==YEA)
            fclose(et1Ptr);
        if(ET2==YEA)
            fclose(et2Ptr);
        if(NetPpt==YEA)
            fclose(netPrecipPtr);
        if(Infil==YEA)
            fclose(infilPtr);
        if(RECHARGE==YEA)
            fclose(rechargePtr);
        if(RivHead==YEA)
            fclose(rivHeadPtr);
        if(RivFlow==YEA)
            fclose(rivFlowPtr);
        if(RivBase==YEA)
            fclose(rivBasePtr);
        if(RivSurf==YEA)
            fclose(rivSurfPtr);
    }

    /* if File Mode is CDF    */
    if(FPRINT_MODE==CDF){
        if(ISState==YEA)
            ncclose(isStateID);
        if(SatState==YEA)
            ncclose(satStateID);
        if(UsatState==YEA)
            ncclose(usatStateID);
        if(SurfState==YEA)
            ncclose(surfStateID);
        if(ET0==YEA)
            ncclose(et0ID);
        if(ET1==YEA)
            ncclose(et1ID);
        if(ET2==YEA)
            ncclose(et2ID);
        if(NetPpt==YEA)
            ncclose(netPrecipID);
        if(Infil==YEA)
            ncclose(infilID);
        if(RECHARGE==YEA)
            ncclose(rechargeID);
        if(RivHead==YEA)
            ncclose(rivHeadID);
        if(RivFlow==YEA)
            ncclose(rivFlowID);
        if(RivBase==YEA)
            ncclose(rivBaseID);
        if(RivSurf==YEA)
            ncclose(rivSurfID);
    }

}

realtype FPrint_CS_AreaOrPerem(int rivOrder, realtype rivDepth, realtype rivCoeff, realtype a_pBool)
//! returns Area or Peremeter of a river segment cross-section
/*! \param rivOrder is the interpolation order of the river segment
    \param rivDepth is the depth of water in the river segment
    \param rivCoeff is the interpolation factor of the river segment
    \param a_pBool is identifer for either Area or Peremeter
*/
{
    realtype rivArea, rivPerem, eq_Wid, EPSILON=0.05;
    switch(rivOrder)
    {
        case 1:
            rivArea = rivDepth*rivCoeff;
            rivPerem= 2.0*rivDepth+rivCoeff;
            eq_Wid=rivCoeff;
            return (a_pBool==1?rivArea:(a_pBool==2?rivPerem:eq_Wid)); //returnVal1(rivArea, rivPerem, eq_Wid, a_pBool);
        case 2:
            rivArea = pow(rivDepth,2)/rivCoeff;
            rivPerem = 2.0*rivDepth*pow(1+pow(rivCoeff,2),0.5)/rivCoeff;
            eq_Wid=2.0*pow(rivDepth+EPSILON,1/(rivOrder-1))/pow(rivCoeff,1/(rivOrder-1));
            return (a_pBool==1?rivArea:(a_pBool==2?rivPerem:eq_Wid)); //returnVal1(rivArea, rivPerem, eq_Wid, a_pBool);
        case 3:
            rivArea = 4*pow(rivDepth,1.5)/(3*pow(rivCoeff,0.5));
            rivPerem =(pow(rivDepth*(1+4*rivCoeff*rivDepth)/rivCoeff,0.5))+(log(2*pow(rivCoeff*rivDepth,0.5)+pow(1+4*rivCoeff*rivDepth,0.5))/(2*rivCoeff));
            eq_Wid=2.0*pow(rivDepth+EPSILON,1/(rivOrder-1))/pow(rivCoeff,1/(rivOrder-1));
            return (a_pBool==1?rivArea:(a_pBool==2?rivPerem:eq_Wid)); //returnVal1(rivArea, rivPerem, eq_Wid, a_pBool);
        case 4:
            rivArea = 3*pow(rivDepth,4.0/3.0)/(2*pow(rivCoeff,1.0/3.0));
            rivPerem = 2*((pow(rivDepth*(1+9*pow(rivCoeff,2.0/3.0)*rivDepth),0.5)/3)+(log(3*pow(rivCoeff,1.0/3.0)*pow(rivDepth,0.5)+pow(1+9*pow(rivCoeff,2.0/3.0)*rivDepth,0.5))/(9*pow(rivCoeff,1.0/3.0))));
            eq_Wid=2.0*pow(rivDepth+EPSILON,1/(rivOrder-1))/pow(rivCoeff,1/(rivOrder-1));
            return (a_pBool==1?rivArea:(a_pBool==2?rivPerem:eq_Wid)); //returnVal1(rivArea, rivPerem, eq_Wid, a_pBool);
        default:
            printf("\n Relevant Values entered are wrong");
            printf("\n Depth: %lf\tCoeff: %lf\tOrder: %d\t");
            return 0;
    }
}

realtype FPrint_OverlandFlow(int loci, int locj, int surfmode, realtype avg_y, realtype grad_y, realtype avg_sf, realtype alfa, realtype beta, realtype crossA, realtype avg_rough, int eletypeBool, realtype avg_perem) /** delete perimeter should be passed **/
//! Computes surface flux across the edge between two elements or two river segments
/*! \param loci is Element Number
    \param locj is the Neighbour Numer of the Element
    \param surfmode is identifier to the Surface Flow mode
    \param avg_y is the avarage head between the elements
    \param grad_y is the hydraulic gradient between the elements
    \param avg_sf is the avarage friction slope of the elements
    \param alfa is dummy variable
    \param beta is dummy variable
    \param crossA is average area of cross-section
    \param avg_rough is avarage manning's roughness coefficient
    \param eletypeBool is an identifier to element mode 1: Element 0: River
    \param avg_perem is the avarage wetted perimeter
*/
{
    realtype flux;
    int locBool;
    float hydRadius;
    /* if surface gradient is not enough to overcome the friction */
    if(fabs(grad_y) <= avg_sf)
    {
         flux = 0;
    }
    else
    {
         if(grad_y > 0)
         {
              locBool=1;
         }
         else if(grad_y < 0)
         {
             locBool=-1;
         }
         switch(surfmode)
         {
                case 1:
                  if(eletypeBool==1)
                  {
                       /* Kinematic Wave Approximation constitutive relationship: Manning Equation */
                       alfa = sqrt(locBool*grad_y)/avg_rough;
                       beta = pow(avg_y, 2.0/3.0);
                       flux = locBool*alfa*beta*crossA;
                       break;
                  }
                  else
                  {
                       /*alfa = sqrt(locBool*grad_y)/(avg_rough*pow((avg_perem>0?avg_perem:0), 2.0/3.0));
                       beta = 5.0/3.0;
                       *flux = locBool*alfa*pow(crossA, beta);
                       */
                       hydRadius = (avg_perem>0?crossA/avg_perem:0);
                       flux = locBool*sqrt(locBool*grad_y)*crossA*pow(hydRadius,2.0/3.0)/avg_rough;
                       break;
                  }
                case 2:
                  if(eletypeBool==1)
                  {
                       /* Diffusion Wave Approximation constitutive relationship: Gottardi & Venutelli, 1993 */
                       alfa = pow(pow(avg_y, 1.0/3.0),2)/(1.0*avg_rough);
                       beta = alfa;
                       flux = locBool*crossA*beta*sqrt(locBool*grad_y);
                       break;
                  }
                  else
                  {
                       /*alfa = pow(pow(avg_y, 1.0/3.0),2)/(1.0*avg_rough);
                       beta = alfa;
                       flux = locBool*crossA*beta*sqrt(locBool*grad_y);
                       */
                       hydRadius = (avg_perem>0?crossA/avg_perem:0);
                       flux = locBool*sqrt(locBool*grad_y)*crossA*pow(hydRadius,2.0/3.0)/(1.0*avg_rough);
                       break;
                  }
                default:
                  if(eletypeBool==1)
                  {
                          printf("Fatal Error: Surface Overland Mode Type Is Wrong!");
                  }
                  else
                  {
                       printf("Fatal Error: River Routing Mode Type Is Wrong!");
                  }
                  exit(1);
        }
    }
    return flux;
}

/*    Function to print River Flow in TXT format    */
void  printRiverFlow(Model_Data mData, N_Vector CV_Y, FILE *flow_file, realtype t)
//! prints the outflow from each river segment to the flow_file in TXT format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is the state variable vector
    \param flow_file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    realtype TotalY_Riv, Perem, TotalY_Riv_down, Perem_down, Avg_Perem, Avg_Y_Riv, Avg_Rough, Distance, Dif_Y_Riv, Avg_Sf, CrossA, Alfa, Beta;
    realtype Flux;
    for(i=0; i<mData->NumRiv; i++)
    {
        TotalY_Riv = NV_Ith_S(CV_Y, i + 3*mData->NumEle) + mData->Riv[i].zmin;
        Perem = FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[i].shape - 1].interpOrd,NV_Ith_S(CV_Y, i + 3*mData->NumEle),mData->Riv_Shape[mData->Riv[i].shape - 1].coeff,2);
        if(mData->Riv[i].down > 0)
        {
            TotalY_Riv_down = NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle)  + mData->Riv[mData->Riv[i].down - 1].zmin;
            Perem_down = FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[mData->Riv[i].down - 1].shape - 1].interpOrd,NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle),mData->Riv_Shape[mData->Riv[mData->Riv[i].down - 1].shape - 1].coeff,2);
            Avg_Perem = (Perem + Perem_down)/2.0;    /** Avg perimeter **/
            if(mData->Riv[mData->Riv[i].down - 1].zmin>mData->Riv[i].zmin)
            {
                if(mData->Riv[mData->Riv[i].down - 1].zmin > TotalY_Riv)
                {
                    Avg_Y_Riv=NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle)/2;
                }
                else
                {
                    Avg_Y_Riv=(TotalY_Riv-mData->Riv[mData->Riv[i].down - 1].zmin+NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle))/2;
                }
            }
            else
            {
                if(mData->Riv[i].zmin>TotalY_Riv_down)
                {
                    Avg_Y_Riv=NV_Ith_S(CV_Y, i + 3*mData->NumEle)/2;
                }
                else
                {
                    Avg_Y_Riv=(NV_Ith_S(CV_Y, i + 3*mData->NumEle)+TotalY_Riv_down-mData->Riv[i].zmin)/2;
                }
            }
            Avg_Rough = (mData->Riv_Mat[mData->Riv[i].material - 1].Rough + mData->Riv_Mat[mData->Riv[mData->Riv[i].down - 1].material-1].Rough)/2.0;

            Distance = (mData->Riv[i].Length+mData->Riv[mData->Riv[i].down - 1].Length)/2;

            Dif_Y_Riv = (TotalY_Riv - TotalY_Riv_down)/Distance;

            Avg_Sf = (mData->Riv_Mat[mData->Riv[i].material - 1].Sf + mData->Riv_Mat[mData->Riv[mData->Riv[i].down - 1].material-1].Sf)/2.0;
            /*CrossA = 0.5*(FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[i].shape - 1].interpOrd,DummyY[i + 3*MD->NumEle],MD->Riv_Shape[MD->Riv[i].shape - 1].coeff,1)+CS_AreaOrPerem(MD->Riv_Shape[MD->Riv[MD->Riv[i].down - 1].shape - 1].interpOrd,DummyY[MD->Riv[i].down - 1 + 3*MD->NumEle],MD->Riv_Shape[MD->Riv[MD->Riv[i].down - 1].shape - 1].coeff,1));*/
            CrossA = FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[i].shape - 1].interpOrd,Avg_Y_Riv,mData->Riv_Shape[mData->Riv[i].shape - 1].coeff,1);
            Flux = FPrint_OverlandFlow(i,1,mData->RivMode, Avg_Y_Riv,Dif_Y_Riv,Avg_Sf,Alfa,Beta,CrossA,Avg_Rough,0,Avg_Perem);
            /* Correction is being done in flux terms which can be > 0 even when there is no source water level present */
            if(NV_Ith_S(CV_Y, i + 3*mData->NumEle) <= 0 && Flux > 0)
            {
                Flux = 0.0;
            }
            else if(NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle) <= 0 && Flux < 0)
            {
                Flux = 0.0;
            }
        }
        else
        {
            Flux = 0.0;
        }

        tempFlow[i]+=Flux/RivFlowT;
        if(((int) t)%RivFlowT==0){
            fprintf(flow_file, "%lf\t", tempFlow[i]);
            tempFlow[i]=0.0;
        }
    }

    if(((int) t)%RivFlowT==0){
        fprintf(flow_file, "\n");
    }
}

/*    Function to print River Flow in CDF format    */
void  printRiverFlowcdf(Model_Data mData, N_Vector CV_Y, int ncid, int data_varid, realtype t)
//! prints the outflow from each river segment to the flow_file in CDF format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is the state variable vector
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    realtype TotalY_Riv, Perem, TotalY_Riv_down, Perem_down, Avg_Perem, Avg_Y_Riv, Avg_Rough, Distance, Dif_Y_Riv, Avg_Sf, CrossA, Alfa, Beta;
    realtype Flux;
    for(i=0; i<mData->NumRiv; i++)
    {
        TotalY_Riv = NV_Ith_S(CV_Y, i + 3*mData->NumEle) + mData->Riv[i].zmin;
        Perem = FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[i].shape - 1].interpOrd,NV_Ith_S(CV_Y, i + 3*mData->NumEle),mData->Riv_Shape[mData->Riv[i].shape - 1].coeff,2);
        if(mData->Riv[i].down > 0)
        {
            TotalY_Riv_down = NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle)  + mData->Riv[mData->Riv[i].down - 1].zmin;
            Perem_down = FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[mData->Riv[i].down - 1].shape - 1].interpOrd,NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle),mData->Riv_Shape[mData->Riv[mData->Riv[i].down - 1].shape - 1].coeff,2);
            Avg_Perem = (Perem + Perem_down)/2.0;    /** Avg perimeter **/
            if(mData->Riv[mData->Riv[i].down - 1].zmin>mData->Riv[i].zmin)
            {
                if(mData->Riv[mData->Riv[i].down - 1].zmin > TotalY_Riv)
                {
                    Avg_Y_Riv=NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle)/2;
                }
                else
                {
                    Avg_Y_Riv=(TotalY_Riv-mData->Riv[mData->Riv[i].down - 1].zmin+NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle))/2;
                }
            }
            else
            {
                if(mData->Riv[i].zmin>TotalY_Riv_down)
                {
                    Avg_Y_Riv=NV_Ith_S(CV_Y, i + 3*mData->NumEle)/2;
                }
                else
                {
                    Avg_Y_Riv=(NV_Ith_S(CV_Y, i + 3*mData->NumEle)+TotalY_Riv_down-mData->Riv[i].zmin)/2;
                }
            }
            Avg_Rough = (mData->Riv_Mat[mData->Riv[i].material - 1].Rough + mData->Riv_Mat[mData->Riv[mData->Riv[i].down - 1].material-1].Rough)/2.0;

            Distance = (mData->Riv[i].Length+mData->Riv[mData->Riv[i].down - 1].Length)/2;

            Dif_Y_Riv = (TotalY_Riv - TotalY_Riv_down)/Distance;

            Avg_Sf = (mData->Riv_Mat[mData->Riv[i].material - 1].Sf + mData->Riv_Mat[mData->Riv[mData->Riv[i].down - 1].material-1].Sf)/2.0;
            /*CrossA = 0.5*(FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[i].shape - 1].interpOrd,DummyY[i + 3*MD->NumEle],MD->Riv_Shape[MD->Riv[i].shape - 1].coeff,1)+CS_AreaOrPerem(MD->Riv_Shape[MD->Riv[MD->Riv[i].down - 1].shape - 1].interpOrd,DummyY[MD->Riv[i].down - 1 + 3*MD->NumEle],MD->Riv_Shape[MD->Riv[MD->Riv[i].down - 1].shape - 1].coeff,1));*/
            CrossA = FPrint_CS_AreaOrPerem(mData->Riv_Shape[mData->Riv[i].shape - 1].interpOrd,Avg_Y_Riv,mData->Riv_Shape[mData->Riv[i].shape - 1].coeff,1);
            Flux = FPrint_OverlandFlow(i,1,mData->RivMode, Avg_Y_Riv,Dif_Y_Riv,Avg_Sf,Alfa,Beta,CrossA,Avg_Rough,0,Avg_Perem);
            /* Correction is being done in flux terms which can be > 0 even when there is no source water level present */
            if(NV_Ith_S(CV_Y, i + 3*mData->NumEle) <= 0 && Flux > 0)
            {
                Flux = 0.0;
            }
            else if(NV_Ith_S(CV_Y, mData->Riv[i].down - 1 + 3*mData->NumEle) <= 0 && Flux < 0)
            {
                Flux = 0.0;
            }
        }
        else
        {
            Flux = 0.0;
        }

        tempFlow[i]+=Flux/RivFlowT;

    }

    if(((int) t)%RivFlowT==0){
        startRiv[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startRiv, countRiv, &tempFlow[0])))
            ERR(retval);
        for(i=0; i<mData->NumRiv; i++)
            tempFlow[i]=0.0;
    }
}

/*    Function to print Baseflow to River in TXT format    */
void printRiverBase(Model_Data mData, FILE *rivBaseFile, realtype t)
//! Function to print Baseflow to River in TXT format
/*! \param mData is the pointer to the model data structure
    \param rivBaseFile is the pointer to the output file
    \param t is the time of current simulation
*/
{
	int i;
    for(i=0; i<mData->NumRiv; i++){
        tempBase[i]+=(mData->FluxRiv[i][4]+mData->FluxRiv[i][5])/RivBaseT;
        if(((int) t)%RivBaseT==0){
            fprintf(rivBaseFile, "%lf\t", tempBase[i]);
            tempBase[i]=0.0;
        }
    }
    if(((int) t)%RivBaseT==0){
        fprintf(rivBaseFile, "\n");
    }
}

/*    Function to print Base flow to River in CDF format    */
void printRiverBasecdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print Base flow to River in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
	int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumRiv; i++){
        tempBase[i]+=(mData->FluxRiv[i][4]+mData->FluxRiv[i][5])/RivBaseT;
    }
    if(((int) t)%RivBaseT==0){
        startRiv[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startRiv, countRiv, &tempBase[0])))
            ERR(retval);
        for(i=0; i<mData->NumRiv; i++)
            tempBase[i]=0.0;
    }
}

/*    Function to print Surfaceflow to River in TXT format    */
void printRiverSurf(Model_Data mData, FILE *rivSurfFile, realtype t)
//! Function to print Surfaceflow to River in TXT format
/*! \param mData is the pointer to the model data structure
    \param rivSurfFile is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumRiv; i++){
        tempSurf[i]+=(mData->FluxRiv[i][2]+mData->FluxRiv[i][3])/RivSurfT;
        if(((int) t)%RivSurfT==0){
            fprintf(rivSurfFile, "%lf\t", tempSurf[i]);
            tempSurf[i]=0.0;
        }
    }
    if(((int) t)%RivSurfT==0){
        fprintf(rivSurfFile, "\n");
    }
}

/*    Function to print Surfaceflow to River in CDF format    */
void printRiverSurfcdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print Surfaceflow to River in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumRiv; i++){
        tempSurf[i]+=(mData->FluxRiv[i][2]+mData->FluxRiv[i][3])/RivSurfT;
    }
    if(((int) t)%RivSurfT==0){
        startRiv[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startRiv, countRiv, &tempSurf[0])))
            ERR(retval);
        for(i=0; i<mData->NumRiv; i++)
            tempSurf[i]=0.0;
    }
}

/*    Function to print River State (head) in TXT format    */
void printRiverHead(Model_Data mData, N_Vector CV_Y, FILE *rivHeadFile, realtype t)
//! Function to print River State (head) in TXT format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is the state variable vector
    \param rivHeadFile is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumRiv; i++){
        tempHead[i]+=NV_Ith_S(CV_Y, 3*mData->NumEle + i)/RivHeadT;
        if(((int) t)%RivHeadT==0){
            fprintf(rivHeadFile, "%lf\t", tempHead[i]);
            tempHead[i]=0.0;
        }
    }
    if(((int) t)%RivHeadT==0){
        fprintf(rivHeadFile, "\n");
    }
}

/*    Function to print River State (head) in CDF format    */
void printRiverHeadcdf(Model_Data mData, N_Vector CV_Y, int ncid, int data_varid, realtype t)
//! Function to print River State (head) in CDF format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is the state variable vector
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumRiv; i++){
        tempHead[i]+=NV_Ith_S(CV_Y, 3*mData->NumEle + i)/RivHeadT;
    }
    if(((int) t)%RivHeadT==0){
        startRiv[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startRiv, countRiv, &tempHead[0])))
            ERR(retval);
        for(i=0; i<mData->NumRiv; i++)
            tempHead[i]=0.0;
    }
}

/*    Function to print Interception Storage in TXT format    */
void printIS(Model_Data mData, FILE *isFile, realtype t)
//! Function to print Interception Storage in TXT format
/*! \param mData is the pointer to the model data structure
    \param isFile is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempIS[i]+=mData->EleIS[i]/ISStateT;
        if(((int) t)%ISStateT==0){
            fprintf(isFile, "%lf\t", tempIS[i]);
            tempIS[i]=0.0;
        }
    }
    if(((int) t)%ISStateT==0){
        fprintf(isFile, "\n");
    }
}

/*    Function to print Interception Storage in CDF format    */
void printIScdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print Interception Storage in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempIS[i]+=mData->EleIS[i]/ISStateT;
    }
    if(((int) t)%ISStateT==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempIS[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempIS[i]=0.0;
    }
}

/*    Function to print Saturated State (head) in TXT format    */
void printSatState(Model_Data mData, N_Vector CV_Y, FILE *file, realtype t)
//! Function to print Saturated State (head) in TXT format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is state variable vector
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempSatState[i]+=NV_Ith_S(CV_Y, 2*mData->NumEle + i)/SatStateT;
        if(((int) t)%SatStateT==0){
            fprintf(file, "%lf\t", tempSatState[i]);
            tempSatState[i]=0.0;
        }
    }
    if(((int) t)%SatStateT==0){
        fprintf(file, "\n");
    }
}

/*    Function to print Saturated State (head) in CDF format    */
void printSatStatecdf(Model_Data mData, N_Vector CV_Y, int ncid, int data_varid, realtype t)
//! Function to print Saturated State (head) in CDF format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is state variable vector
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempSatState[i]+=NV_Ith_S(CV_Y, 2*mData->NumEle + i)/SatStateT;
    }
    if(((int) t)%SatStateT==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempSatState[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempSatState[i]=0.0;
    }
}

/*    Function to print Unsaturated State (head) in TXT format    */
void printUsatState(Model_Data mData, N_Vector CV_Y, FILE *file, realtype t)
//! Function to print Unsaturated State (head) in TXT format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is state variable vector
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempUsatState[i]+=NV_Ith_S(CV_Y, 1*mData->NumEle + i)/UsatStateT;
        if(((int) t)%UsatStateT==0){
            fprintf(file, "%lf\t", tempUsatState[i]);
            tempUsatState[i]=0.0;
        }
    }
    if(((int) t)%UsatStateT==0){
        fprintf(file, "\n");
    }
}

/*    Function to print Unsaturated State (head) in CDF format    */
void printUsatStatecdf(Model_Data mData, N_Vector CV_Y, int ncid, int data_varid, realtype t)
//! Function to print Unsaturated State (head) in CDF format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is state variable vector
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempUsatState[i]+=NV_Ith_S(CV_Y, 1*mData->NumEle + i)/UsatStateT;
    }
    if(((int) t)%UsatStateT==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempUsatState[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempUsatState[i]=0.0;
    }
}

/*    Function to print Surface Flow State (head) in TXT format    */
void printSurfState(Model_Data mData, N_Vector CV_Y, FILE *file, realtype t)
//! Function to print Surface Flow State (head) in TXT format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is state variable vector
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempSurfState[i]+=NV_Ith_S(CV_Y, i)/SurfStateT;
        if(((int) t)%SurfStateT==0){
            fprintf(file, "%lf\t", tempSurfState[i]);
            tempSurfState[i]=0.0;
        }
    }
    if(((int) t)%SurfStateT==0){
        fprintf(file, "\n");
    }
}

/*    Function to print Surface Flow State (head) in CDF format    */
void printSurfStatecdf(Model_Data mData, N_Vector CV_Y, int ncid, int data_varid, realtype t)
//! Function to print Surface Flow State (head) in CDF format
/*! \param mData is the pointer to the model data structure
    \param CV_Y is state variable vector
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempSurfState[i]+=NV_Ith_S(CV_Y, i)/SurfStateT;
    }
    if(((int) t)%SurfStateT==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempSurfState[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempSurfState[i]=0.0;
    }
}

/*    Function to print ET0 in TXT format    */
void printET0(Model_Data mData, FILE *file, realtype t)
//! Function to print ET0 in TXT format
/*! \param mData is the pointer to the model data structure
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempET0[i]+=(mData->EleET[i][0]*mData->Ele[i].VegFrac)/ET0T;
        if(((int) t)%ET0T==0){
            fprintf(file, "%lf\t", tempET0[i]);
            tempET0[i]=0.0;
        }
    }
    if(((int) t)%ET0T==0){
        fprintf(file, "\n");
    }
}

/*    Function to print ET0 in CDF format    */
void printET0cdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print ET0 in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempET0[i]+=(mData->EleET[i][0]*mData->Ele[i].VegFrac)/ET0T;
    }
    if(((int) t)%ET0T==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempET0[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempET0[i]=0.0;
    }
}

/*    Function to print ET1 in TXT format    */
void printET1(Model_Data mData, FILE *file, realtype t)
//! Function to print ET1 in TXT format
/*! \param mData is the pointer to the model data structure
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempET1[i]+=mData->EleET[i][1]/ET1T;
        if(((int) t)%ET1T==0){
            fprintf(file, "%lf\t", tempET1[i]);
            tempET1[i]=0.0;
        }
    }
    if(((int) t)%ET1T==0){
        fprintf(file, "\n");
    }
}

/*    Function to print ET1 in CDF format    */
void printET1cdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print ET1 in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    data = (float *)malloc(mData->NumEle * sizeof(float));
    for(i=0; i<mData->NumEle; i++){
        tempET1[i]+=mData->EleET[i][1]/ET1T;
    }
    if(((int) t)%ET1T==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempET1[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempET1[i]=0.0;
    }
}

/*    Function to print ET2 in TXT format    */
void printET2(Model_Data mData, FILE *file, realtype t)
//! Function to print ET2 in TXT format
/*! \param mData is the pointer to the model data structure
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempET2[i]+=mData->EleET[i][2]/ET2T;
        if(((int) t)%ET2T==0){
            fprintf(file, "%lf\t", tempET2[i]);
            tempET2[i]=0.0;
        }
    }
    if(((int) t)%ET2T==0){
        fprintf(file, "\n");
    }
}

/*    Function to print ET2 in CDF format    */
void printET2cdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print ET2 in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempET2[i]+=mData->EleET[i][2]/ET2T;
    }
    if(((int) t)%ET2T==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempET2[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempET2[i]=0.0;
    }
}

/*    Function to print Net Precipitation in TXT format    */
void printNetPpt(Model_Data mData, FILE *file, realtype t)
//! Function to print Net Precipitation in TXT format
/*! \param mData is the pointer to the model data structure
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempNetPpt[i] += mData->EleNetPrep[i] / NetPptT;
        if(((int) t)%NetPptT==0){
            fprintf(file, "%lf\t", tempNetPpt[i]);
            tempNetPpt[i]=0.0;
        }
    }
    if(((int) t)%NetPptT==0){
        fprintf(file, "\n");
    }
}

/*    Function to print Net Precipitation in CDF format    */
void printNetPptcdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print Net Precipitation in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempNetPpt[i] += mData->EleNetPrep[i] / NetPptT;
    }
    if(((int) t)%NetPptT==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempNetPpt[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempNetPpt[i]=0.0;
    }
}

/*    Function to print Variable Infiltration in TXT format    */
void printInfil(Model_Data mData, FILE *file, realtype t)
//! Function to print Variable Infiltration in TXT format
/*! \param mData is the pointer to the model data structure
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempInfil[i] += mData->EleVic[i] / InfilT;
        if(((int) t)%InfilT==0){
            fprintf(file, "%lf\t", tempInfil[i]);
            tempInfil[i]=0.0;
        }
    }
    if(((int) t)%InfilT==0){
        fprintf(file, "\n");
    }
}

/*    Function to print Variable Infiltration in CDF format    */
void printInfilcdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print Variable Infiltration in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempInfil[i] += mData->EleVic[i] / InfilT;
    }
    if(((int) t)%InfilT==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempInfil[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempInfil[i]=0.0;
    }
}

/*    Function to print Recharge to GW in TXT format    */
void printRecharge(Model_Data mData, FILE *file, realtype t)
//! Function to print Recharge to GW in TXT format
/*! \param mData is the pointer to the model data structure
    \param file is the pointer to the output file
    \param t is the time of current simulation
*/
{
    int i;
    for(i=0; i<mData->NumEle; i++){
        tempRecharge[i] += mData->Recharge[i] / RECHARGET;
        if(((int) t)%RECHARGET==0){
            fprintf(file, "%lf\t", tempRecharge[i]);
            tempRecharge[i]=0.0;
        }
    }
    if(((int) t)%RECHARGET==0){
        fprintf(file, "\n");
    }
}

/*    Function to print Recharge to GW in CDF format    */
void printRechargecdf(Model_Data mData, int ncid, int data_varid, realtype t)
//! Function to print Recharge to GW in CDF format
/*! \param mData is the pointer to the model data structure
    \param ncid is the netcdf file identifier
    \param data_varid is the netcdf variable identifier
    \param t is the time of current simulation
*/
{
    int i;
    static int call=0;
    float *data;
    for(i=0; i<mData->NumEle; i++){
        tempRecharge[i] += mData->Recharge[i] / RECHARGET;
    }
    if(((int) t)%RECHARGET==0){
        startEle[0]=call++;
        if((retval = nc_put_vara_double(ncid, data_varid, startEle, countEle, &tempRecharge[0])))
            ERR(retval);
        for(i=0; i<mData->NumEle; i++)
            tempRecharge[i]=0.0;
    }
}

void initPrintFunctionsFile(char *fileName){
	FILE *printFunctionsFile;
	printFunctionsFile = fopen(fileName, "r");

	printf("\n  7) reading %s ... ", fileName);

	if(printFunctionsFile == NULL)
  	{
    		printf("\n  Fatal Error: %s is in use or does not exist!\n", fileName);
   		exit(1);
  	}

	fscanf(printFunctionsFile, "%d", &FPRINT_MODE);

	fscanf(printFunctionsFile, "%d", &ISState);
	fscanf(printFunctionsFile, "%d", &ISStateT);

	fscanf(printFunctionsFile, "%d", &SatState);
	fscanf(printFunctionsFile, "%d", &SatStateT);

	fscanf(printFunctionsFile, "%d", &UsatState);
	fscanf(printFunctionsFile, "%d", &UsatStateT);

	fscanf(printFunctionsFile, "%d", &SurfState);
	fscanf(printFunctionsFile, "%d", &SurfStateT);

	fscanf(printFunctionsFile, "%d", &ET0);
	fscanf(printFunctionsFile, "%d", &ET0T);

	fscanf(printFunctionsFile, "%d", &ET1);
	fscanf(printFunctionsFile, "%d", &ET1T);

	fscanf(printFunctionsFile, "%d", &ET2);
	fscanf(printFunctionsFile, "%d", &ET2T);

	fscanf(printFunctionsFile, "%d", &NetPpt);
	fscanf(printFunctionsFile, "%d", &NetPptT);

	fscanf(printFunctionsFile, "%d", &Infil);
	fscanf(printFunctionsFile, "%d", &InfilT);

	fscanf(printFunctionsFile, "%d", &RECHARGE);
	fscanf(printFunctionsFile, "%d", &RECHARGET);

	fscanf(printFunctionsFile, "%d", &RivHead);
	fscanf(printFunctionsFile, "%d", &RivHeadT);

	fscanf(printFunctionsFile, "%d", &RivFlow);
	fscanf(printFunctionsFile, "%d", &RivFlowT);

	fscanf(printFunctionsFile, "%d", &RivBase);
	fscanf(printFunctionsFile, "%d", &RivBaseT);

	fscanf(printFunctionsFile, "%d", &RivSurf);
	fscanf(printFunctionsFile, "%d", &RivSurfT);

	fscanf(printFunctionsFile, "%d", &FluxSurf);
	fscanf(printFunctionsFile, "%d", &FluxSurfT);

	fscanf(printFunctionsFile, "%d", &FluxSat);
	fscanf(printFunctionsFile, "%d", &FluxSatT);
	
	fclose(printFunctionsFile);
	printf("done.\n");
}







































/* OLD FUNCTIONS BY QU: START */


void PrintModelData(Model_Data DS)
{
  PrintEle(DS);
  PrintEleAtt(DS);
  PrintNode(DS);
  PrintRiv(DS);
  PrintSoil(DS);
  PrintForcing(DS);
  PrintTS(DS->TSD_Inc, DS->NumInc);
  fflush(stdout);
}

void PrintEle(Model_Data DS)
{
  int i;
  
  printf("\nElements Information: \n");
  printf("\n   Index     N-1     N-2     N-3    Nr-1    Nr-2    Nr-3");
  printf("      Edge-1      Edge-2      Edge-3           X           Y       Z_MIN       Z_MAX        AREA\n");
  printf("\n");
  
  for (i=0; i<DS->NumEle; i++)
  {
    printf("%8d", DS->Ele[i].index);
    printf("%8d%8d%8d", DS->Ele[i].node[0], DS->Ele[i].node[1], DS->Ele[i].node[2]);
    printf("%8d%8d%8d", DS->Ele[i].nabr[0], DS->Ele[i].nabr[1], DS->Ele[i].nabr[2]);

    printf("%12.5f%12.5f%12.5f", DS->Ele[i].edge[0], DS->Ele[i].edge[1], 
                              DS->Ele[i].edge[2]);
    printf("%12.5f%12.5f%12.5f%12.5f", DS->Ele[i].x, DS->Ele[i].y, DS->Ele[i].zmin, 
                                   DS->Ele[i].zmax);
    printf("%12.5f", DS->Ele[i].area);
    printf("\n");
  }
  printf("\n");
}

void PrintEleAtt(Model_Data DS)
{
  int i;
  
  printf("\nElements Attibute Information: \n");
  printf("\nIndex  Soil   LAI    IC    BC  Prep  Temp Humid  WVel    Rn     G     P\n\n");
  
  for (i=0; i<DS->NumEle; i++)
  {  
    printf("%6d%6d%6d", i+1, DS->Ele[i].soil, DS->Ele[i].LC);
    printf("%f\t%f\t%f\t%f\t%f\t%6d", DS->Ele_IC[i].interception,DS->Ele_IC[i].snow,DS->Ele_IC[i].surf,DS->Ele_IC[i].unsat,DS->Ele_IC[i].sat, DS->Ele[i].BC);
    printf("%6d%6d", DS->Ele[i].prep, DS->Ele[i].temp);
    printf("%6d%6d", DS->Ele[i].humidity, DS->Ele[i].WindVel);
    printf("%6d%6d", DS->Ele[i].Rn, DS->Ele[i].G);
    printf("%6d\n", DS->Ele[i].pressure);
  }  
}


void PrintNode(Model_Data DS)
{
  int i;
  
  printf("\nNode Information: \n");
  printf("\n  Index       X       Y   Z_min   Z_Max\n");
  printf("\n");
  
  for (i=0; i<DS->NumNode; i++)
  {
    printf("%7d", DS->Node[i].index);
    printf("%8.3lf%8.3lf", DS->Node[i].x, DS->Node[i].y);
    printf("%8.3lf%8.3lf", DS->Node[i].zmin, DS->Node[i].zmax);
    printf("\n");
  }
  printf("\n");
}


void PrintSoil(Model_Data DS)
{
  int i;
  
  printf("\nSoil Information: \n");
  printf("\n  Index    Ksat   SitaS   SitaR   Alpha    Beta");
  printf("      Sf Inc_type\n\n");
  
  for(i=0; i<DS->NumSoil; i++)
  {
    printf("%7d", DS->Soil[i].index);
    printf("%8.4f%8.4f%8.4f", DS->Soil[i].Ksat, DS->Soil[i].SitaS, DS->Soil[i].SitaR);
    printf("%8.4f%8.4f%8.4f", DS->Soil[i].Alpha, DS->Soil[i].Beta, DS->Soil[i].Sf);
    printf("%9d", DS->Soil[i].Inf);
    printf("\n");
  }
}


void PrintTS(TSD *Data, int NumTS)
{
  int i, j;
  
  printf("\nTime Series Data Information: \n\n");
  
  for(i=0; i<NumTS; i++)
  {
    printf("%5s%6d%6d\n\n", Data[i].name, Data[i].index, Data[i].length);
    for(j=0; j<Data[i].length; j++)
    {
      printf("%16.6f %16.6f\n", Data[i].TS[j][0], Data[i].TS[j][1]);
    }
    printf("\n");
  }
}


void PrintRiv(Model_Data DS)
{
  int i;
  
  printf("\nRiver Segments Information: \n");
  printf("\n  Index           X           Y           Z");
  printf("       Depth      Length F_node T_node Down L_ele R_ele Shape Mat  IC  BC RES\n");
  printf("\n");
  
  for(i=0; i<DS->NumRiv; i++)
  {
    printf("%7d%12.4f%12.4f%12.4f%12.4f%12.4f", DS->Riv[i].index, DS->Riv[i].x, 
                                                DS->Riv[i].y, DS->Riv[i].zmin, 
                                                DS->Riv[i].depth, DS->Riv[i].Length);
    printf("%7d%7d%5d", DS->Riv[i].FromNode, DS->Riv[i].ToNode, DS->Riv[i].down);
    printf("%6d%6d%6d", DS->Riv[i].LeftEle, DS->Riv[i].RightEle, DS->Riv[i].shape);
    printf("%4d%f\t%4d%4d", DS->Riv[i].material, DS->Riv_IC[i].value, DS->Riv[i].BC, DS->Riv[i].reservoir);
    printf("\n");
  }
}


void PrintForcing(Model_Data DS)
{
  PrintTS(DS->TSD_Prep, DS->NumPrep);
  PrintTS(DS->TSD_Temp, DS->NumTemp);
  PrintTS(DS->TSD_Humidity, DS->NumHumidity);
  PrintTS(DS->TSD_WindVel, DS->NumWindVel);
  PrintTS(DS->TSD_Rn, DS->NumRn);
  PrintTS(DS->TSD_G, DS->NumG);
  PrintTS(DS->TSD_LAI, DS->NumLC);
}


void PrintDY(Model_Data DS, N_Vector CV_Y, N_Vector CV_Ydot)
{
  int i, index, Num;
  	if(DS->UnsatMode ==1)
	{    
  Num = 2*DS->NumEle + DS->NumRiv;
  printf("\nY & DY [1 : %d] = \n\n", Num);
  
  printf("Elements Information\n\n");
  printf(" Index        Surf       Unsat         Sat        Surf       Sat\n\n");
  
  for(i=0; i<DS->NumEle; i++)
  {
    index = i-(i/DS->NumEle)*DS->NumEle + 1;
    printf("%6d%12.4f%12.4f%12.4f", index, NV_Ith_S(CV_Y, i), (pow(1+pow(DS->Ele[i].Alpha*((DS->Ele[i].zmax - DS->Ele[i].zmin)-NV_Ith_S(CV_Y, i + DS->NumEle)+0.05),-DS->Ele[i].Beta),-1/DS->Ele[i].Beta))/DS->Ele[i].Alpha,NV_Ith_S(CV_Y, i + DS->NumEle));
    printf("%12.4f%12.4f\n", NV_Ith_S(CV_Ydot, i), NV_Ith_S(CV_Ydot, i + DS->NumEle));
  }  
  
  printf("\n");
  printf("River Segments Information\n\n");
  printf(" Index           Y          DY\n\n");
  for(i=0; i<DS->NumRiv; i++)
  {
    printf("%6d%12.4f%12.4f\n", i+1, NV_Ith_S(CV_Y, i + 2*DS->NumEle), 
                                     NV_Ith_S(CV_Ydot, i + 2*DS->NumEle));
  }
  	}
  	if(DS->UnsatMode ==2)
	{    
  Num = 3*DS->NumEle + DS->NumRiv;
  printf("\nY & DY [1 : %d] = \n\n", Num);
  
  printf("Elements Information\n\n");
  printf(" Index        Surf       Unsat         Sat        Surf       Unsat         Sat\n\n");
  
  for(i=0; i<DS->NumEle; i++)
  {
    index = i-(i/DS->NumEle)*DS->NumEle + 1;
    printf("%6d%12.4f%12.4f%12.4f", index, NV_Ith_S(CV_Y, i), NV_Ith_S(CV_Y, i + DS->NumEle), 
                                           NV_Ith_S(CV_Y, i + 2*DS->NumEle));
    printf("%12.4f%12.4f%12.4f\n", NV_Ith_S(CV_Ydot, i), NV_Ith_S(CV_Ydot, i + DS->NumEle), 
                                   NV_Ith_S(CV_Ydot, i + 2*DS->NumEle));
  }  
  
  printf("\n");
  printf("River Segments Information\n\n");
  printf(" Index           Y          DY\n\n");
  for(i=0; i<DS->NumRiv; i++)
  {
    printf("%6d%12.4f%12.4f\n", i+1, NV_Ith_S(CV_Y, i + 3*DS->NumEle), 
                                     NV_Ith_S(CV_Ydot, i + 3*DS->NumEle));
  }
  	}  	
  
}


void PrintY(Model_Data DS, N_Vector CV_Y, realtype t)
{
  int i, index, Num;
  	if(DS->UnsatMode ==1)
	{    
  Num = 2*DS->NumEle + DS->NumRiv;
  printf("\nt = %8.2f   Y [1 : %d] = \n\n", t, Num);
  
  printf("Elements Information\n\n");
  printf(" Index        Surf       Unsat         Sat\n\n");
  
  for(i=0; i<DS->NumEle; i++)
  {
    index = i-(i/DS->NumEle)*DS->NumEle + 1;
    printf("%6d%12.4f%12.4f%12.4f\n", index, NV_Ith_S(CV_Y, i), (pow(1+pow(DS->Ele[i].Alpha*((DS->Ele[i].zmax - DS->Ele[i].zmin)-NV_Ith_S(CV_Y, i + DS->NumEle)+0.05),-DS->Ele[i].Beta),-1/DS->Ele[i].Beta))/DS->Ele[i].Alpha,
                                      NV_Ith_S(CV_Y, i + DS->NumEle));
  }  
  
  printf("\n");
  printf("River Segments Information\n\n");
  printf(" Index           Y\n\n");
  for(i=0; i<DS->NumRiv; i++)
  {
    printf("%6d%12.4f\n", i+1, NV_Ith_S(CV_Y, i + 2*DS->NumEle));
  }
  	}
  	if(DS->UnsatMode ==2)
	{    
  Num = 3*DS->NumEle + DS->NumRiv;
  printf("\nt = %8.2f   Y [1 : %d] = \n\n", t, Num);
  
  printf("Elements Information\n\n");
  printf(" Index        Surf       Unsat         Sat\n\n");
  
  for(i=0; i<DS->NumEle; i++)
  {
    index = i-(i/DS->NumEle)*DS->NumEle + 1;
    printf("%6d%12.4f%12.4f%12.4f\n", index, NV_Ith_S(CV_Y, i), 
                                      NV_Ith_S(CV_Y, i + DS->NumEle), 
                                      NV_Ith_S(CV_Y, i + 2*DS->NumEle));
  }  
  
  printf("\n");
  printf("River Segments Information\n\n");
  printf(" Index           Y\n\n");
  for(i=0; i<DS->NumRiv; i++)
  {
    printf("%6d%12.4f\n", i+1, NV_Ith_S(CV_Y, i + 3*DS->NumEle));
  }
  	}  	
  
}

void FPrintYheader(FILE *res_file, Model_Data mData)
{
  int N;
  	if(mData->UnsatMode ==1)
	{    
  N = 2*mData->NumEle + mData->NumRiv;
  	}
  	if(mData->UnsatMode ==2)
	{    
  N = 3*mData->NumEle + mData->NumRiv;
  	}  	
  fprintf(res_file, "\nPIHM 1.0 State Varibles Result: \n");
  fprintf(res_file, "\nNumEle = %8d  NumRiv = %8d\n", mData->NumEle, mData->NumRiv);
  fprintf(res_file, "Problem Size N = %8d\n", N); 
  fprintf(res_file, "\n");
}

void FPrintY(Model_Data DS, N_Vector CV_Y, realtype t, FILE *res_file)
{
  int i, Num;
  	if(DS->UnsatMode ==1)
	{    
  Num = 2*DS->NumEle + DS->NumRiv;

  fprintf(res_file, "Current time = %10.4f", t);
  
  if (DS->NumEle > 0)
  {
    fprintf(res_file, "\n\n  Overland Flow Depth (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumEle; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i));
    }
  
    fprintf(res_file, "\n\n  Unsaturated Soil Moisture Equivelant Depth (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumEle; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", (pow(1+pow(DS->Ele[i].Alpha*((DS->Ele[i].zmax - DS->Ele[i].zmin)-NV_Ith_S(CV_Y, i + DS->NumEle)+0.05),-DS->Ele[i].Beta),-1/DS->Ele[i].Beta))/DS->Ele[i].Alpha);
    }
  
    fprintf(res_file, "\n\n  Saturated Groundwater Depth (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumEle; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i+DS->NumEle));
    }
  }
  
  if (DS->NumRiv > 0)
  {
    fprintf(res_file, "\n\n  Channel Flow Depth (1 :%8d):\n", DS->NumRiv);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumRiv; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i+2*DS->NumEle));
    }
  
    /*fprintf(res_file, "%16.8f", DS->Q);*/
  }  
  	}
  	if(DS->UnsatMode ==2)
	{    
  Num = 3*DS->NumEle + DS->NumRiv;

  fprintf(res_file, "Current time = %10.4f", t);
  
  if (DS->NumEle > 0)
  {
    fprintf(res_file, "\n\n  Overland Flow Depth (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumEle; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i));
    }
  
    fprintf(res_file, "\n\n  Unsaturated Soil Moisture Equivelant Depth (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumEle; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i+DS->NumEle));
    }
  
    fprintf(res_file, "\n\n  Saturated Groundwater Depth (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumEle; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i+2*DS->NumEle));
    }
  }
  
  if (DS->NumRiv > 0)
  {
    fprintf(res_file, "\n\n  Channel Flow Depth (1 :%8d):\n", DS->NumRiv);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
    
    for(i=0; i<DS->NumRiv; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.8f", NV_Ith_S(CV_Y, i+3*DS->NumEle));
    }
  
    /*fprintf(res_file, "%16.8f", DS->Q);*/
  }  
  	}

  fprintf(res_file, "\n\n  Discharge at outlet = %16.8f\n", DS->Q);
  fprintf(res_file, "\n");
  fflush(res_file);
}

void FPrintFlux(Model_Data DS, realtype t, FILE *res_file)
{
  int i, j, Num;
  
  fprintf(res_file, "t = %10.4f\n\n", t);
  Num = DS->NumEle;
  
  if (Num > 0) {fprintf(res_file, "  FluxSurf = \n");}
  for(i=0; i<Num; i++)
  {
    fprintf(res_file, "%6d", i+1); 
    for(j=0; j<3; j++)
    {
      fprintf(res_file, "%16.8f", DS->FluxSurf[i][j]);
    }
    fprintf(res_file, "\n");     
  }
  
  if (Num > 0) {fprintf(res_file, "\n  FluxSub = \n");}
  for(i=0; i<Num; i++)
  {
    fprintf(res_file, "%6d", i+1); 
    for(j=0; j<3; j++)
    {
      fprintf(res_file, "%16.8f", DS->FluxSub[i][j]);
    }
    fprintf(res_file, "\n");     
  }
  
  Num = DS->NumRiv;
  
  if (Num > 0) {fprintf(res_file, "\n  FluxRiv = \n");}
  for(i=0; i<Num; i++)
  {
    fprintf(res_file, "%6d", i+1); 
    for(j=0; j<6; j++)
    {
      fprintf(res_file, "%16.8f", DS->FluxRiv[i][j]);
    }
    fprintf(res_file, "\n");     
  }
  fprintf(res_file, "\nQ at outlet = %16.8f\n", DS->Q);
  fprintf(res_file, "\n");
  fflush(res_file);
}

void FPrintETISheader(FILE *res_file, Model_Data DS)
{
  int Num;
  
  Num = DS->NumEle;
  
  fprintf(res_file, "\nIHM 1.0 ET and Interception Result: \n");
  fprintf(res_file, "\nNumEle = %8d  NumRiv = %8d\n", DS->NumEle, DS->NumRiv);
	if(DS->UnsatMode ==1)
	{    
  fprintf(res_file, "Problem Size N = %8d", 2*Num + DS->NumRiv); 
  	}
	if(DS->UnsatMode ==2)
	{    
  fprintf(res_file, "Problem Size N = %8d", 3*Num + DS->NumRiv); 
  	}
  fprintf(res_file, "\n");
}

void FPrintETIS(Model_Data DS, realtype t, FILE *res_file)
{
  int i, j, Num;
  
  fprintf(res_file, "\nCurrent time = %10.4f", t);
  Num = DS->NumEle;

  if (Num > 0)
  {
    fprintf(res_file, "\n\n  Interception Storage (1 :%8d):\n", DS->NumEle);
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      fprintf(res_file, "%16d", i+1);
    }  
    fprintf(res_file, "\n       ");
  
    for(i=0; i<Num; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      fprintf(res_file, "%16.10f", DS->EleIS[i]);
    }

    fprintf(res_file, "\n\n  Envapotranpiration (1 :%8d):\n", DS->NumEle);
  
    fprintf(res_file, "\n       ");
    for (i=0; i<10; i++)
    {
      for (j=0; j<4; j++)
      {
        fprintf(res_file, "%14d_%1d", i+1, j);
      }  
    }  
    fprintf(res_file, "\n       ");
  
    for(i=0; i<Num; i++)
    {
      if (i%10 == 0) {fprintf(res_file, "\n %5d ", i/10);}
      for(j=0; j<4; j++)
      {
        fprintf(res_file, "%16.10f", DS->EleET[i][j]);
      }
    }
  }
  fprintf(res_file, "\n");
  fflush(res_file);
}

void FPrintQ(Model_Data DS, realtype t, FILE *res_file)
{
  fprintf(res_file, "\ntime = %10.4f,  Q = %-16.8f", t, DS->Q);
  fflush(res_file);
}

/*void PrintVerbose(int i, realtype t, long int iopt[], realtype ropt[])
{
  printf("  Step %5d: ", i+1);  
  printf("t =%10.4lf  t_r =%10.4lf", t, ropt[TCUR]);
  printf("  DeltT =%6.4lf  N_DeltT =%6.4lf", ropt[HU], ropt[HCUR]);
  printf("  Order = %1ld",  iopt[QU]);
  printf("  InterStep =%6ld  RHS Eval =%6ld", iopt[NST], iopt[NFE]);
  printf("\n");
}      

void PrintFarewell(Control_Data cData, long int iopt[], realtype ropt[], realtype cputime_r, realtype cputime_s)
{
  if (cData.Verbose != 1) {printf("\n");}
  printf("\nCongratulations! Simulation Finishes Successfully. \n");
  if(cData.Verbose == 1)
  { 
    PrintFinalStats(iopt, ropt); 
  }
  
  if (cData.Verbose != 1) {printf("\n");}
  if(cData.Solver == 1) {printf("Full Dense Direct Solver.\n");}
  else if(cData.Solver == 2) {printf("Iterative GMRES Solver.\n");}
  printf("Time taken to read in files    = %10.4f seconds. \n", cputime_r);
  printf("Time taken to solve ODE system = %10.4f seconds. \n", cputime_s);  
  printf("\nThanks for running PIHM 1.0. \n");
}
*/
/* function to print out Final Status to stdout */
/* void PrintFinalStats(long int iopt[], realtype ropt[])
{
  printf("\nFinal Statistics.. \n\n");
  printf("Num Int Steps = %-6ld  Num Linear Sol Setup = %-6ld  RHS Eval   = %-6ld  Num.Jac.Eval   = %-6ld\n",
	 iopt[NST], iopt[NSETUPS], iopt[NFE], iopt[DENSE_NJE]);
  printf("Newton Iter # = %-6ld  Nonlinear Failure #  = %-6ld  Err Failed = %-6ld  Last Step Size = %-6.2lf\n",
	 iopt[NNI], iopt[NCFN], iopt[NETF], ropt[HU]);
  printf("Real Workspace Size: CVODE = %-6ld Solver = %-6ld\n", iopt[LENRW], iopt[DENSE_LRW]); 
  printf("Int Workspace Size:  CVODE = %-6ld Solver = %-6ld\n\n", iopt[LENIW], iopt[DENSE_LIW]);
}

void FPrintFarewell(Control_Data cData, FILE *res_file, long int iopt[], realtype ropt[], realtype cputime_r, realtype cputime_s)
{
  fprintf(res_file, "\nCongratulations! Simulation Finishes Successfully. \n");
  FPrintFinalStats(res_file, iopt, ropt); 
  fprintf(res_file, "The Solver is ");
  
  if(cData.Solver == 1) {fprintf(res_file, "Full Dense Direct Solver.\n");}
  else if(cData.Solver == 2) {fprintf(res_file, "Iterative GMRES Solver.\n");}
  
  fprintf(res_file, "Time taken to read in files    = %10.4f seconds. \n", cputime_r);
  fprintf(res_file, "Time taken to solve ODE system = %10.4f seconds. \n", cputime_s);  
  fprintf(res_file, "\nThanks for running PIHM 1.0. \n");  
}
*/
/* function to print out Final Status to output files */
/* void FPrintFinalStats(FILE *res_file, long int iopt[], realtype ropt[])
{
  fprintf(res_file, "\nFinal Statistics.. \n\n");
  fprintf(res_file, "Num Int Steps = %-6ld  Num Linear Sol Setup = %-6ld  RHS Eval   = %-6ld  Num.Jac.Eval   = %-6ld\n",
	 iopt[NST], iopt[NSETUPS], iopt[NFE], iopt[DENSE_NJE]);
  fprintf(res_file, "Newton Iter # = %-6ld  Nonlinear Failure #  = %-6ld  Err Failed = %-6ld  Last Step Size = %-6.2lf\n",
	 iopt[NNI], iopt[NCFN], iopt[NETF], ropt[HU]);
  fprintf(res_file, "Real Workspace Size: CVODE = %-6ld Solver = %-6ld\n", iopt[LENRW], iopt[DENSE_LRW]); 
  fprintf(res_file, "Int Workspace Size:  CVODE = %-6ld Solver = %-6ld\n\n", iopt[LENIW], iopt[DENSE_LIW]);
}
*/

/* OLD FUNCTIONS BY QU : END */
