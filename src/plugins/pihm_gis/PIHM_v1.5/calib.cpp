#include "sundials_types.h"
#include "calib.h"
#include <string>

#include <iostream>

using namespace std;

//#define FileName        "rhode";
/*
#define satD_CALIB      0.0
#define br_CALIB        5.0
#define poros_CALIB     0.35
#define icsat_CALIB     0.45
#define rivEle_CALIB    0.45

#define is_CALIB        20.0
#define et0_CALIB       9.0
#define mf_CALIB        1.50
#define tf_CALIB        1.0

#define Vic_CALIB       1.0
#define rivK_CALIB      50.0
#define Kh_CALIB        1.0
#define Rec_CALIB       1.0
#define et2_CALIB       1.0
#define et1_CALIB       1.0
#define sat_THRESH      0.685
#define mp_MULTFH       3000000.0
#define mp_MULTFV       3000000.0
#define mpArea_CALIB    0.00
#define ovl_THRESH_H    -1.0
#define ovl_THRESH_V    0.0
#define rzd_CALIB       0.20

#define roughEle_CALIB  1.0
#define roughRiv_CALIB  1.0
#define rivCoeff_CALIB  1.0
#define rivDepth_CALIB  2.5
#define alpha_CALIB     1.0
#define set_MP          0.0
#define lai_CALIB       1.00
#define vegfrac_CALIB   1.00
#define albedo_CALIB    1.25
*/

realtype _satD_CALIB;
realtype _br_CALIB;
realtype _poros_CALIB;
realtype _icsat_CALIB;
realtype _rivEle_CALIB;

realtype _is_CALIB;
realtype _et0_CALIB;
realtype _mf_CALIB;
realtype _tf_CALIB;

realtype _Vic_CALIB;
realtype _rivK_CALIB;
realtype _Kh_CALIB;
realtype _Rec_CALIB;
realtype _et2_CALIB;
realtype _et1_CALIB;
realtype _sat_THRESH;
realtype _mp_MULTFH;
realtype _mp_MULTFV;
realtype _mpArea_CALIB;
realtype _ovl_THRESH_H;
realtype _ovl_THRESH_V;
realtype _rzd_CALIB;

realtype _roughEle_CALIB;
realtype _roughRiv_CALIB;
realtype _rivCoeff_CALIB;
realtype _rivDepth_CALIB;
realtype _alpha_CALIB;
realtype _set_MP;
realtype _lai_CALIB;
realtype _vegfrac_CALIB;
realtype _albedo_CALIB;

char FileName[200];




void fileNameID(const char *fileName){
	strcpy(FileName, fileName);
	cout<<"\n"<<FileName<<"\n";
	//getchar();
	//getchar();
} 

void setFileName(char *fileName){
	//char tempFileName[200] = FileName;
	//strcpy(fileName, tempFileName);
	strcpy(fileName, FileName);
	return;
}


void initCalibFile(char *fileName){
        FILE *calibFile;
        calibFile = fopen(fileName,"r");

	printf("\n  7) reading %s ... ", fileName);

	if(calibFile == NULL)
  	{
    		printf("\n  Fatal Error: %s is in use or does not exist!\n", fileName);
   		exit(1);
  	}

        fscanf(calibFile, "%lf", &_satD_CALIB);
        fscanf(calibFile, "%lf", &_br_CALIB);
        fscanf(calibFile, "%lf", &_poros_CALIB);
        fscanf(calibFile, "%lf", &_icsat_CALIB);
        fscanf(calibFile, "%lf", &_rivEle_CALIB);
        fscanf(calibFile, "%lf", &_is_CALIB);
        fscanf(calibFile, "%lf", &_et0_CALIB);
        fscanf(calibFile, "%lf", &_mf_CALIB);
        fscanf(calibFile, "%lf", &_tf_CALIB);
        fscanf(calibFile, "%lf", &_Vic_CALIB);
        fscanf(calibFile, "%lf", &_rivK_CALIB);
        fscanf(calibFile, "%lf", &_Kh_CALIB);
        fscanf(calibFile, "%lf", &_Rec_CALIB);
        fscanf(calibFile, "%lf", &_et2_CALIB);
        fscanf(calibFile, "%lf", &_et1_CALIB);
        fscanf(calibFile, "%lf", &_sat_THRESH);
        fscanf(calibFile, "%lf", &_mp_MULTFH);
        fscanf(calibFile, "%lf", &_mp_MULTFV);
        fscanf(calibFile, "%lf", &_mpArea_CALIB);
        fscanf(calibFile, "%lf", &_ovl_THRESH_H);
        fscanf(calibFile, "%lf", &_ovl_THRESH_V);
        fscanf(calibFile, "%lf", &_rzd_CALIB);
        fscanf(calibFile, "%lf", &_roughEle_CALIB);
        fscanf(calibFile, "%lf", &_roughRiv_CALIB);
        fscanf(calibFile, "%lf", &_rivCoeff_CALIB);
        fscanf(calibFile, "%lf", &_rivDepth_CALIB);
        fscanf(calibFile, "%lf", &_alpha_CALIB);
        fscanf(calibFile, "%lf", &_set_MP);
        fscanf(calibFile, "%lf", &_lai_CALIB);
        fscanf(calibFile, "%lf", &_vegfrac_CALIB);
        fscanf(calibFile, "%lf", &_albedo_CALIB);

	fclose(calibFile);
	printf("done.\n");
}





realtype setsatD_CALIB(){
	return _satD_CALIB;
}
realtype setbr_CALIB(){
	return _br_CALIB;
}
realtype setporos_CALIB(){
	return _poros_CALIB;
}
realtype seticsat_CALIB(){
	return _icsat_CALIB;
}
realtype setrivEle_CALIB(){
	return _rivEle_CALIB;
}

realtype setis_CALIB(){
	return _is_CALIB;
}
realtype setet0_CALIB(){
	return _et0_CALIB;
}
realtype setmf_CALIB(){
	return _mf_CALIB;
}
realtype settf_CALIB(){
	return _tf_CALIB;
}


realtype setVic_CALIB(){
	return _Vic_CALIB;
}
realtype setrivK_CALIB(){
	return _rivK_CALIB;
}
realtype setKh_CALIB(){
	return _Kh_CALIB;
}
realtype setRec_CALIB(){
	return _Rec_CALIB;
}
realtype setet2_CALIB(){
	return _et2_CALIB;
}
realtype setet1_CALIB(){
	return _et1_CALIB;
}
realtype setsat_THRESH(){
	return _sat_THRESH;
}
realtype setmp_MULTFH(){
	return _mp_MULTFH;
}
realtype setmp_MULTFV(){
	return _mp_MULTFV;
}
realtype setmpArea_CALIB(){
	return _mpArea_CALIB;
}
realtype setovl_THRESH_H(){
	return _ovl_THRESH_H;
}
realtype setovl_THRESH_V(){
	return _ovl_THRESH_V;
}
realtype setrzd_CALIB(){
	return _rzd_CALIB;
}


realtype setroughEle_CALIB(){
	return _roughEle_CALIB;
}
realtype setroughRiv_CALIB(){
	return _roughRiv_CALIB;
}
realtype setrivCoeff_CALIB(){
	return _rivCoeff_CALIB;
}
realtype setrivDepth_CALIB(){
	return _rivDepth_CALIB;
}
realtype setalpha_CALIB(){
	return _alpha_CALIB;
}
realtype setset_MP(){
	return _set_MP;
}
realtype setlai_CALIB(){
	return _lai_CALIB;
}
realtype setvegfrac_CALIB(){
	return _vegfrac_CALIB;
}
realtype setalbedo_CALIB(){
	return _albedo_CALIB;
}
