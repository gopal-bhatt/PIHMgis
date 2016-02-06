#include <stdio.h>
#include "pihm.h"
#include <iostream>
using namespace std;

int main(){
	char **nfile;
	nfile    = (char **)malloc(2*sizeof(char *));
	nfile[0] = (char * )malloc(4*sizeof(char));
	nfile[1] = (char * )malloc(4*sizeof(char));
	nfile[0] = "2 ";
	nfile[1] = "sc";
	int i=pihm(2, nfile);
	return i;
}
