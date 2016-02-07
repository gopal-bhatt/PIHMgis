/*
 *  The AVExec function will turn the Avenue source code 
 *  contained in source into an Avenue script, and execute
 *  the script. If there are any errors, AVExec returns NULL.
 *  Otherwise, AVExec turns the resultant object into a
 *  string and returns it. Do NOT modify the resultant string.
 */

#if defined (__cplusplus)
extern "C" {
#endif
char *AVExec(char* source);
#if defined (__cplusplus)
}
#endif
