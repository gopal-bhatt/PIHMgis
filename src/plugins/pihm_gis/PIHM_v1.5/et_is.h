#ifndef ET_IS
#define ET_IS

#include "nvector_serial.h"
#include "sundials_types.h"
#include "ihm.h"

void calIS(realtype t, realtype stepsize, void *DS, N_Vector VY);
void calET(realtype t, realtype stepsize, N_Vector VY, void *DS);

#endif
