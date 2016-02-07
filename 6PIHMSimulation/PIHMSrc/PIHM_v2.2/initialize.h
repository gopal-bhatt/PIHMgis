#ifndef INITIALIZE_H
#define INITIALIZE_H

#include "sundials_types.h"

void
initialize(char *filename, Model_Data DS, Control_Data * CS, N_Vector CV_Y);

#endif
