/*	gridio_null.c
    C functions that mimic ArcView gridio calls */
#include "gioapi.h"
int GridIOSetup(void)
{
	return(-1);
}

int GridIOExit(void)
{
	return(-1);
}
int CellLayerOpen (char *clyr_name, int rdwrflag, int iomode, 
                   int  *celltype, double *cellsize)
{	return(-1);
}

int CellLyrClose (int channel)
{
	return(-1);
}
int CellLyrDelete (char *clyr_name)
{
	return(-1);
}
int AccessWindowSet(double box[4], double cellsize, double newbox[4])
{
	return(-1);
}
int AccessWindowClear(void)
{
	return(-1);
}
int WindowRows(void)
{
	return(-1);
}
int WindowCols(void)
{
	return(-1);
}
int GetWindowRow(int channel, int nreswinrow, CELLTYPE *rowbuf)
{
	return(-1);
}
int PutWindowRow(int channel, int nwinrow, CELLTYPE *rowbuf)
{
	return(-1);
}
void  GetMissingFloat(float *x)
{
	return;
}
int BndCellRead (char *grdnam, double *box) 
{
	return(-1);
}
int GridRename(char *from_grid, char *to_grid)
{
	return(-1);
}
int GridDelete(char *grid_name)
{
	return(-1);
}
int CellLayerCreate (char *clyr_name, int rdwrflag, int iomode, 
                     int celltype, double cellsize, double box[4])
{
	return(-1);
}
int CellLyrExists (char *clyr_name)
{
	return(-1);
}
//void CFree1(char*)
//{
//}

