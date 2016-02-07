/* AVCalls.c
		C functions that mimic ArcView procedure calls */

#include "avexec32.h"
#include <stdio.h>
#include <string.h>

/* These will go to lsm.h file */
void MsgBoxInfo(char *message, char *title);
void MsgBoxError(char *message, char *title);
void SetWorkingStatus(void);

/* Exported to test from within ArcView. Not needed otherwise 
#define DllExport __declspec( dllexport ) 
DllExport void doitnow(void);
DllExport void SetworkingStatus(void);  */

/**************************************************/
void doitnow (void)  /* for testing purposes only */
{
char message[] = "This message should be showing up in the window";
char title[] = "Test Box";

SetWorkingStatus();

}
/**************************************************/
void MsgBoxInfo(char *message, char *title)
{
char *retstr;
char strpassed[200]; /* Better not pass something longer than 200! */
char str1[] = "MsgBox.Info(\"";
char str2[] = "\",\"";
char str3[] = "\")";

strcpy(strpassed, str1);
strcat(strpassed, message);
strcat(strpassed, str2);
strcat(strpassed, title);
strcat(strpassed, str3);

/*retstr = AVExec(strpassed);  */
}
/**************************************************/
void MsgBoxError(char *message, char *title)
{
char *retstr;
char strpassed[200]; /* Better not pass something longer than 200! */
char str1[] = "MsgBox.Error(\"";
char str2[] = "\",\"";
char str3[] = "\")";

strcpy(strpassed, str1);
strcat(strpassed, message);
strcat(strpassed, str2);
strcat(strpassed, title);
strcat(strpassed, str3);

/*  retstr = AVExec(strpassed);  */
}
/**************************************************/
void SetWorkingStatus(void)
{
char *retstr;

/*  retstr = AVExec("av.SetWorkingStatus");  */
}
