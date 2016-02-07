/***********************************************************/
/*                                                         */
/* gridio.c                                                */
/*                                                         */
/* I/O routines for terrain stability mapping              */
/*                                                         */
/***********************************************************/


#include "gridio.h"
/*  Nameadd(..)  Utility for adding suffixes to file names prior to
   "." extension   */
int nameadd(char *full,char *arg,char *suff)
  {
	char *ext;
	int nmain;
    ext=strrchr(arg,'.');
    if(ext == NULL)
	{
		nmain=strlen(arg);
		sprintf(full,"%s%s",arg,suff);
	}
	else
	{
		nmain=strlen(arg)-strlen(ext);
		strcpy(full,"");
		strncat(full,arg,nmain);
		strcat(full,suff);
		strcat(full,ext);
	}
	return(nmain);
  }

int readline(FILE *fp,char *fline)
{
  int i = 0, ch;

  for(i=0; i< MAXLN; i++)
  {
    ch = getc(fp);

    if(ch == EOF) { *(fline+i) = '\0'; return(EOF); }
    else          *(fline+i) = (char)ch;

    if((char)ch == '\n') { *(fline+i) = '\0'; return(0); }

  }
}

/*
  matalloc(...) allocates memory for matrix navigation pointer
  and for matrix data, then returns matrix navigation pointer
  Modification of matrixalloc by DGT to not use so many pointers
  7/1/97
*/
void **matalloc(int nx,int ny,int datatype)
{
    int i,arrsize;
    void **mat;
    void *data;
    int **imat;
    short **smat;
    float **fmat;

    /* allocate memory for array navigation pointers */
    if(datatype == 1)
    {
      mat = (void **)malloc(sizeof(short *)*(nx));
      arrsize = sizeof(short)*(nx)*(ny);
    }
    else if(datatype == 2)
    {
      mat = (void **)malloc(sizeof(int *)*(nx));
      arrsize = sizeof(int)*(nx)*(ny);
    }
    else if(datatype == 3)
    {
      mat = (void **)malloc(sizeof(float *)*(nx));
      arrsize = sizeof(float)*(nx)*(ny);
    }

    if(mat == NULL)
    {
      printf("\nError: Cannot allocate memory for matrix navigation pointers");
      printf("\n       nx = %d, ny = %d\n\n",nx,ny);
      exit(2);
    }
    
    data = malloc(arrsize);
    
    if(data == NULL)
    {
      printf("\nError: Cannot allocate memory for matrix of dimension");
      printf("\n       nx = %d, ny = %d\n\n",nx,ny);
      exit(3);
    }
    
    switch(datatype)
    {
      case 1:
        smat = (short **)mat;
        for(i=0; i<(nx); i++)
        {
          smat[i] = &(((short *)(data))[i*(ny)]);
        }
        break;
      case 2:
        imat = (int **)mat;
        for(i=0; i<(nx); i++)
        {
          imat[i] = &(((int *)(data))[i*(ny)]);
        }
        break;
      case 3:
        fmat = (float **)mat;
        for(i=0; i<(nx); i++)
        {
          fmat[i] = &(((float *)(data))[i*(ny)]);
        }
        break;
      default:
        break;
    }
    return(mat);
}

int gridread(char *file, void ***data, int datatype, int *nx, int *ny,
 float *dx, float *dy, double bndbox[4], double *csize, float *nodata, int *filetype)
{
FILE *fp;
int channel1,type,iesri;

    int i, j, hdrlines = 0;
    float value;
    char fline[MAXLN], keyword[21], utmetag, utmntag;
    float **farr;
    int **iarr;
    short **sarr;
    double adjbndbox[4],utme,utmn;
    CELLTYPE *rowbuf;
    float floatNull;

      
    if(iesri = GridIOSetup() >= 0)
        /*
        Open input cell layer with no evaluation        (5)
        */
        if ((channel1 = 
              CellLayerOpen(file,READONLY,ROWIO,
                            &type,csize)) >= 0 )
    {
/*  The success of these means the file could be opened as an ESRI grid file  */
        *filetype=1;
/*  File types are
    0=ASCII   
    1= ARCVIEW grid via the ESRI Application Programmers Interface  */ 
/*  here is the ESRI grid file read stuff - following copyrow example */
        *dx = *dy = (float) *csize;
        if(type == CELLINT && datatype == RPFLTDTYPE)
        {
           printf("%s File contains integer data but was read as float\n",file);
        }
        if(type == CELLFLOAT && datatype != RPFLTDTYPE)
        {
           printf("%s File contains Float data but was read as Integer\n",file);
        } 
        /*
        Get the bounding box of the input cell layer            (7)
        */
        if (BndCellRead (file, bndbox) < 0)
        {
                printf ("could not read bounding box of input grid\n");
                CellLyrClose(channel1);
                GridIOExit();
                return(1);
        }
/*        printf("%f %f %f %f %g\n",bndbox[0],bndbox[1],bndbox[2],bndbox[3],*nodata) */; 
/*  Bounding box is xllcorner, yllcorner, xurcorner, yurcorner   */
      
        /*
        Set the Window to the output bounding box and cellsize  (9)
        */
        if (AccessWindowSet (bndbox, *csize, adjbndbox) < 0)
        {
                printf ("Could not set Window\n");
                CellLyrClose(channel1);
                GridIOExit();
                return(2);
        }
        /*
        Get the number of rows and columns                      (10)
        in the window
        */
        *nx = WindowCols();
        *ny = WindowRows();

        /*  Allocate memory and set all type pointers  */
        *data = matalloc(*nx, *ny, datatype);
        farr = (float **) (*data);
        iarr = (int **) (*data);
        sarr = (short **) (*data);
        GetMissingFloat(&floatNull);
 
        *nodata = (datatype == RPFLTDTYPE) ? floatNull: -9999.; 

        /*
        Allocate row buffer                                     (11)
        */
        if ((rowbuf = (CELLTYPE *)
                        CAllocate1 ( *nx, sizeof(CELLTYPE)))
                        == NULL )
        {
                printf ("Could not allocate memory\n");
                CellLyrClose(channel1);
                GridIOExit();
                return(3);
        }
        /*
        Now copy row into array                 (12)
        */
        for (i=0; i < *ny; i++)
        {
             GetWindowRow (channel1, i, rowbuf);
             if(type == CELLINT)
             {
                register int *buf = (int *)rowbuf;
                if(datatype == RPSHRDTYPE)
                {
                   for(j=0; j < *nx; j++)
                   {
                      sarr[j][i]=(buf[j] == MISSINGINT) ? (short) *nodata : (short) buf[j];    
                   }
                 }
                 else if(datatype == RPINTDTYPE)
	            {
                   for(j=0; j < *nx; j++)
                   {
                      iarr[j][i]=(buf[j] == MISSINGINT) ? (int) *nodata : buf[j]; 
                   }
                 }   
	             else
	            {
                   for(j=0; j < *nx; j++)
                   {
                      farr[j][i]=(buf[j] == MISSINGINT) ? *nodata: (float) buf[j];  
                   }
                }
             }
             else
             {
                register float *buf = (float *)rowbuf;
								
/*     This is all repeated to get right the typecasting of data from ESRI file into the format 
       we want   */
                if(datatype == RPSHRDTYPE)
                {
                   for(j=0; j < *nx; j++)
                   {
                      sarr[j][i]=(buf[j] == floatNull) ? (short) *nodata : (short) buf[j];    
                   }
                 }
                 else if(datatype == RPINTDTYPE)
	            {
                   for(j=0; j < *nx; j++)
                   {
                      iarr[j][i]=(buf[j] == floatNull) ? (int) *nodata : (int) buf[j];
                   }
                 }   
	             else
	            {
                   for(j=0; j < *nx; j++)
                   {
		      farr[j][i]= buf[j];
                   }
                }
             }
       }

        /*
        Free row buffer                                         (13)
        */
        CFree1 ((char *)rowbuf);
        /*
        Close handles                                           (14)
        */
        CellLyrClose(channel1);  
        /*
        Done with the library                                   (15)
        */
        GridIOExit();
        return(0);
    }

/*  Here assume file is ASCII  Close ESRI stuff. */
    CellLyrClose(channel1);
    GridIOExit();

    *filetype=0;  
    fp = fopen(file,"r");
    printf("%s\n",file);
    if(fp == NULL)
    {
        printf("\nERROR: Cannot open input file (%s).\n\n",file);
        return(1);
    }
    
    /* read ARC-Info header */
    while(1)
    {   
        readline(fp, fline);       
        if(!isalpha(*fline) || *fline == '-')
            break;       
        
        hdrlines++;

        sscanf(fline,"%s %f",keyword,&value);
        
	if(strcmp(keyword,"ncols") == 0 || strcmp(keyword,"NCOLS") == 0)
	    *nx = (int)value;
	else if(strcmp(keyword,"nrows") == 0 || strcmp(keyword,"NROWS") == 0)
	    *ny = (int)value;
	else if(strcmp(keyword,"xllcenter") == 0 || strcmp(keyword,"XLLCENTER") == 0)
	{
	    utmetag = 'c';
	    utme = value;
	}
	else if(strcmp(keyword,"xllcorner") == 0 || strcmp(keyword,"XLLCORNER") == 0)
	{
	    utmetag = 'e';
	    utme = value;
	}
	else if(strcmp(keyword,"yllcenter") == 0 || strcmp(keyword,"YLLCENTER") == 0)
	{
	    utmntag = 'c';
	    utmn = value;
	}
	else if(strcmp(keyword,"yllcorner") == 0 || strcmp(keyword,"YLLCORNER") == 0)
	{
	    utmntag = 'e';
	    utmn = value;
	}
	else if(strcmp(keyword,"cellsize") == 0 || strcmp(keyword,"CELLSIZE") == 0)
	{
	    *dx = *dy = value;
	    *csize = (double) value;
	}
	else if(strcmp(keyword,"nodata_value") == 0 || strcmp(keyword,"NODATA_VALUE") == 0 ||
		strcmp(keyword,"NODATA_value") == 0)
	    *nodata = value;
    }
    
    /* adjust utme and utmn if necessary (we store center of reference cell) */
    if(utmetag == 'e') utme = utme + *dx/2;
    if(utmntag == 'e') utmn = utmn + *dy/2;
     bndbox[0] = utme - *csize/2.;   
     bndbox[1] = utmn - *csize/2.;
     bndbox[2] = bndbox[0] + *csize * (*nx);
     bndbox[3] = bndbox[1] + *csize * (*ny);
    /* position file pointer for ARC-Info file to beginning of image data */
    rewind(fp);
    for(i=0; i<hdrlines; i++) readline(fp, fline);
    
    /* convert depending on datatype */
    if(datatype == RPSHRDTYPE)
    {   
        sarr = (short **) matalloc(*nx, *ny, datatype);
             
        /* read in the ARC-Info file */        
        for(i=0; i< *ny; i++)
        {
            for(j=0; j< *nx; j++)
                fscanf(fp,"%hd",&sarr[j][i]);
        }
        *data = (void **) sarr;
    }
    else if(datatype == RPINTDTYPE)
    {
       iarr = (int **) matalloc(*nx, *ny, datatype);
        
        for(i=0; i< *ny; i++)
        {
            for(j=0; j< *nx; j++)
                fscanf(fp,"%d",&iarr[j][i]);
        }
        *data = (void **) iarr;
    }
    else if(datatype == RPFLTDTYPE)
    {
       farr = (float **) matalloc(*nx, *ny, datatype);

        /* read in the ARC-Info file */
        for(i=0; i< *ny; i++)
        {
            for(j=0; j< *nx; j++)
			{

                fscanf(fp,"%f",&farr[j][i]);
			}
        }
        *data = (void **) farr;   
    }
    else
    {
        printf("\nERROR: unknown datatype (%s).\n\n",datatype);
    }
    fclose(fp);
    return(0);
}

int gridwrite(char *file, void **data, int datatype, int nx, int ny, float dx, 
 float dy, double bndbox[4], double csize, float nodata, int filetype)
{
FILE *fp;

    int i, j;
    char fline[MAXLN];
    float **farr;
    int **iarr;
    short **sarr;
    double adjbndbox[4],utme,utmn;
    int channel1,type;
    CELLTYPE *rowbuf;

/*  File types are
    0=ASCII   
    1= ARCVIEW grid via the ESRI Application Programmers Interface  */    
  if(filetype == 0)   /*  ASCII FILE  */
  {
    /* open ARC-Info file */
    fp = fopen(file,"w");
    if(fp == NULL)
    {
        printf("\nERROR: Cannot open output file (%s).\n\n",file);
        return(4);
    }
    
   
    /* write ARC-Info header */
    fprintf(fp,"ncols         %d\n",nx);
    fprintf(fp,"nrows         %d\n",ny);
     utme=bndbox[0]+dx*0.5;
     utmn=bndbox[1]+dy*0.5;
    fprintf(fp,"xllcenter     %f\n",utme);
    fprintf(fp,"yllcenter     %f\n",utmn);
    fprintf(fp,"cellsize      %f\n",csize);
    fprintf(fp,"nodata_value  %g\n",nodata);
    
    /* write raster data to ARC/INFO file */
    /* convert depending on datatype */
    if(datatype == RPSHRDTYPE)
    {   
        sarr = (short **) data;       
        for(i=0; i< ny; i++)
        {
            for(j=0; j< nx; j++)
            {
                fprintf(fp,"%hd ",sarr[j][i]);
                if((j+1) % LINELEN == 0)fprintf(fp,"\n");
            }
            fprintf(fp,"\n");
        }
    }
    else if(datatype == RPINTDTYPE)
    {
        iarr = (int **) data;
        for(i=0; i< ny; i++)
        {
            for(j=0; j< nx; j++)
            {
                fprintf(fp,"%d ",iarr[j][i]);
                if((j+1) % LINELEN == 0)fprintf(fp,"\n");
            }
            fprintf(fp,"\n");
        }
    }
    else if(datatype == RPFLTDTYPE)
    {
        farr = (float **) data;
        for(i=0; i< ny; i++)
        {
            for(j=0; j< nx; j++)
	    {
		fprintf(fp,"%g ",farr[j][i]);
		if((j+1) % LINELEN == 0)fprintf(fp,"\n");
	    }
	    fprintf(fp,"\n");
        }   
    }
    else
    {
        printf("\nERROR: unknown datatype (%s).\n\n",datatype);
    }
    fclose(fp);
  }
  else
  {
/*  ESRI grid file  */
     GridIOSetup();
	 AccessWindowClear();  /*  Forget about any window it used to have  */
     if (CellLyrExists(file))
     {
/*  Save old file as a backup and use new file name  */
        sprintf(fline,"%s%s",file,"_b");
        if (CellLyrExists(fline))GridDelete(fline);
        GridRename(file,fline);
        printf("Output grid %s exists and will be overwritten.\n",file);
        printf("The old grid is preserved as %s\n",fline);
        GridDelete(file);
     } 
     if(datatype == RPSHRDTYPE || datatype == RPINTDTYPE) 
     {
       type=CELLINT;
     }
     else type= CELLFLOAT;

     if((channel1 = CellLayerCreate(file,WRITEONLY,ROWIO,type,csize,bndbox)) < 0)
     {
        printf ("Could not cread output grid %s\n",file);
        CellLyrClose(channel1);
        GridIOExit();
        return(5);
      }
     if(AccessWindowSet(bndbox, csize, adjbndbox) < 0)
     {
        printf ("Could not set Window\n");
        CellLyrClose(channel1);
        CellLyrDelete (file);
        GridIOExit();
        return(5);
     }
/*  Allocate row buffer  */
    if((rowbuf = (CELLTYPE *)CAllocate1(nx,sizeof(CELLTYPE))) == NULL)
    {
        printf("Could not allocate buffer memory\n");
        CellLyrClose(channel1);
        CellLyrDelete (file);
        GridIOExit();
        return(5);
     }
     if(type == CELLINT)
     {
          register int *buf = (int *)rowbuf;
          if(datatype == RPSHRDTYPE)
          {
             sarr = (short **)data;
            for(i=0; i < ny; i++)
            {
                   for(j=0; j < nx; j++)
                   {
                      buf[j] = (int) sarr[j][i];
                      if(buf[j] == (int) nodata)buf[j]=MISSINGINT;
                   }
                   PutWindowRow (channel1, i, rowbuf);
            }
          }
          else if(datatype == RPINTDTYPE)
          {
             iarr = (int **)data;
             for(i=0; i< ny; i++)
             {
                   for(j=0; j < nx; j++)
                   {
                      buf[j] = (int) iarr[j][i];
                      if(buf[j] == (int) nodata)buf[j]=MISSINGINT;
                   }
                   PutWindowRow (channel1, i, rowbuf);
             }
          }
       }
       else   /*  Here type is float   */
       {
          register float *buf = (float *)rowbuf;
          float floatNull;

          GetMissingFloat(&floatNull);
          farr = (float **)data;
          for(i=0; i < ny; i++)
          {
                   for(j=0; j < nx; j++)
                   {
                      buf[j] = farr[j][i];
                      if(buf[j] == nodata)buf[j]=floatNull;
                   }
             PutWindowRow (channel1, i, rowbuf);
          }
       }
       CFree1 ((char *)rowbuf);
       CellLyrClose(channel1);
       GridIOExit();
   }
   return(0);
}

void eol(FILE *fp)
{
    char ch;
    
    while(1)
    {
      if((ch = getc(fp)) == '\n') return;
      
      if(ch == EOF) { fseek(fp, -1L, SEEK_CUR); return; }
    }
}



