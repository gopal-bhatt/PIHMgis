#ifndef NULL
#define	NULL	0
#endif

/*
 * Copyright (C) 1996 by Environmental Systems Research Institute Inc.
 * All Rights Reserved.
 *
 * N O T I C E
 *
 * THIS MATERIAL IS BEING PRIVIDED TO ARCVIEW GIS USERS BY  ESRI.
 * UNAUTHORIZED ACCESS IS PROHIBITED
 */


/*
*-------------------------------------------------------------------
*
*	CAllocate1 - Allocate a one dimensional array
*
*-------------------------------------------------------------------
*P	PURPOSE:
*
*	CAllocate1 dynamically allocates a one dimensional array
*
*E
*-------------------------------------------------------------------
*A	ARGUMENTS:
*
*	number <Input> (int) number of elements in array
*       size   <Input> (int) size in bytes of an array element
*
* 	RETURN VALUE    <Output> (char *) Pointer to allocated memory
*                                         NULL == allocate failed
*
*E
*-------------------------------------------------------------------
*H	HISTORY:
*	
*E
*-------------------------------------------------------------------
*/
#include	<stdlib.h>


char *CAllocate1 (int	number ,
                    int	size )

{
	return (char *)calloc(number, size);
}

	
/*
*-------------------------------------------------------------------
*
*	CAllocate2 - Allocate a two dimensional array
*
*-------------------------------------------------------------------
*P	PURPOSE:
*
*	CAllocate2 dynamically allocates a two dimensional array
*
*E
*-------------------------------------------------------------------
*A	ARGUMENTS:
*
*	nrows  <Input> (int) number of rows in array
*	ncols  <Input> (int) number of cols in array
*       size   <Input> (int) size in bytes of an array element
*
* 	RETURN VALUE    <Output> (char **) Pointer to allocated memory
*                                         NULL == allocate failed
*
*E
*-------------------------------------------------------------------
*H	HISTORY:
*E
*-------------------------------------------------------------------
*/

char **CAllocate2 (int	nrows ,
                   int	ncols ,
                   int	size )

{
char	*data;
char	**rows;
char	**ptr;
int	len;
int	cur;
int	i;

	if ((data = (char *)calloc (nrows*ncols, size)) == NULL) {
		return (NULL);
	}

	if ((rows = (char **)calloc (nrows, sizeof(char **))) == NULL) {
		free ((char *)data);
		return (NULL);
	}

	ptr = rows;
	len = ncols*size;
	cur = 0;

	for (i=0; i<nrows; i++)
	{
		*ptr++ = (char *) &(data[cur]);
		cur += len;
	}

	return (char **)rows ;

	/*
	Note :
	-----------------------------------------------
	The GRIDIO libraries REQUIRE that
	the underlying data array for a two dimensional
	buffer is 1-Dimensional CONTIGUOS, as above
	-----------------------------------------------
	*/
}

/*
*-------------------------------------------------------------------
*
*	CFree1 - Free a one dimensional array
*
*-------------------------------------------------------------------
*P	PURPOSE:
*
*	CFree1 frees a one dimensional array
*
*E
*-------------------------------------------------------------------
*A	ARGUMENTS:
*
*       ptr   <Input> (char *) pointer to space to be freed
*
*E
*-------------------------------------------------------------------
*H	HISTORY:
*
*E
*-------------------------------------------------------------------
*/

void CFree1 (char	*ptr)
{
	free(ptr);
}


/*
*-------------------------------------------------------------------
*
*	CFree2 - Frees a two dimensional array
*
*-------------------------------------------------------------------
*P	PURPOSE:
*
*	CFree2 frees a two dimensional array
*
*E
*-------------------------------------------------------------------
*A	ARGUMENTS:
*
*	ptr    <Input> (char **) ptr to space to be freed
*	nrows  <Input> (int    ) number of rows in array
*
*E
*-------------------------------------------------------------------
*H	HISTORY:
*
*E
*-------------------------------------------------------------------
*/

void CFree2 (char  	**ptr,
	int	nrows)
{
	char	*h;
	int	i;

	for (i = 1, h = ptr[0]; i < nrows; i++) {
		if (h > ptr[i]) {
			h = ptr[i];
		}
	}

	free(h); free((char *)ptr);
}

