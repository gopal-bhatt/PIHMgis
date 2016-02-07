#ifndef FILESTRUCT
#define FILESTRUCT

#include <iostream>
#include <string>
#include <fstream>
//#include "fileStruct.h"
#include <QtGui>

using namespace std;


QString readLineNumber(const char* fileName, int lineNumber);
int writeLineNumber(const char *fileName, int lineNumber, const char* str);

#endif
