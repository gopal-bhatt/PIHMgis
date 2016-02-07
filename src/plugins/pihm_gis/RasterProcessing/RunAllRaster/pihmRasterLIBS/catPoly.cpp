#include <stdio.h>
#include "lsm.h"
#include "./../pihmLIBS/shapefil.h"

#define dist(x1, x2) fabs(x1-x2)
#define direction(l1, l2) (fabs(atan(fabs((l1.y2 - l1.y1)/(l1.x2 - l1.x1))) - atan(fabs(( l2.y2 - l2.y1)/(l2.x2 - l2.x1))))<0.001)?0:1;


struct structure{
    double x1, y1; // from point
    double x2, y2; // to   point
    int cl; //catchment it belongs to
};

typedef struct structure LINE;


int catchmentPoly(char *catFile, char *nodeFile, char *shpFile, char *dbfFile);
void sortLine(LINE *lines, int);


int catchmentPoly(char *catFile, char *nodeFile, char *shpFile, char *dbfFile){
    
    int i, j;
    //int test;
    //int mIJ[2];
    int err;
    FILE *fpNodeFile_Cat; 
    int maxClass=0; // stores # of nodes (starting pt of a stream) to process 
    int **node;
    
    LINE *line;
    
    int numLine=0;
    int *linesInClass;

	int lineDirFlag;

    
    int startPivot, endPivot, classNum, point[2], count;
    
    int numPt;
    double *ptx, *pty, *ptz;
    
    SHPHandle shp = SHPCreate(shpFile, SHPT_POLYGON);
	DBFHandle dbf = DBFCreate(dbfFile);
	SHPObject *obj;
	int polyFld = DBFAddField(dbf, "catNum", FTInteger, 5, 0);
	int recordNum=0;
	
	SHPHandle tempshp = SHPCreate("temp.shp", SHPT_ARC);
	DBFHandle tempdbf = DBFCreate("temp.dbf");
	SHPObject *tempobj;
	int tempFld = DBFAddField(tempdbf, "lineNum", FTInteger, 5, 0);
	int temprecordNum=0;
	
    //err=gridread(fdrFile,(void ***)&dir,RPSHRDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype);
    err=gridread(catFile,(void ***)&elev,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype); 
    //err=gridread(fdrFile,(void ***)&slope,RPFLTDTYPE,&nx,&ny,&dx,&dy,bndbox,&csize,&mval,&filetype); 
    
    ptx = (double *)malloc(sizeof(double)*nx*ny*2);
    pty = (double *)malloc(sizeof(double)*nx*ny*2);
    ptz = (double *)malloc(sizeof(double)*nx*ny*2);
 
	//printf("here 1\n"); getchar(); getchar();
	
//	fpNodeFile_Cat = fopen(nodeFile, "r");
    //fscanf(fpNodeFile_Cat, "%d", &maxClass);
    for(i=0; i<nx; i++)
	for(j=0; j<ny; j++)
	    if(maxClass<elev[i][j])
		maxClass = elev[i][j];
    /*
    node = (int **)malloc(sizeof(int *)*numNode);
    for(i=0; i<numNode; i++){
        node[i]=(int *)malloc(sizeof(int)*2);
        fscanf(fpNodeFile_Cat, "%d %d", &(node[i][0]), &(node[i][1]));
    }
    */
    line = (LINE *)malloc(sizeof(LINE)*4*nx*ny);
    
    linesInClass = (int *)malloc((maxClass+1)*sizeof(int)); 
    for(i=1; i<=maxClass; i++)
        linesInClass[i]=0;
        
    //printf("here 2\n"); getchar(); getchar();
    //printf("nx = %d ny = %d\n", nx, ny);
    //store all the lines
    for(i=1; i<nx-1; i++){
        //printf("for 1\n");
        for(j=1; j<ny-1; j++){
            //printf("for 2: %d %d\n", i, j);
            if(elev[i][j]>0){
                //printf("if %d %d\n", i, j);
                if(elev[i][j] != elev[i-1][j]){
                    line[numLine].x1 = bndbox[0] + (i)*csize;
                    line[numLine].y1 = bndbox[3] - (j+1)*csize;
                    line[numLine].x2 = bndbox[0] + (i)*csize;
                    line[numLine].y2 = bndbox[3] - (j)*csize;
                    line[numLine].cl = elev[i][j];
                    linesInClass[line[numLine].cl]++;
                    numLine++;
                    //printf("here 2.1\n"); getchar(); getchar();
                }
                //printf("here 2.1.1\n"); getchar(); getchar();
                if(elev[i][j] != elev[i][j-1]){
                    line[numLine].x1 = bndbox[0] + (i)*csize;
                    line[numLine].y1 = bndbox[3] - (j)*csize;
                    line[numLine].x2 = bndbox[0] + (i+1)*csize;
                    line[numLine].y2 = bndbox[3] - (j)*csize;
                    line[numLine].cl = elev[i][j];
                    linesInClass[line[numLine].cl]++;
                    numLine++;
                    //printf("here 2.2\n"); getchar(); getchar();
                }
                //printf("here 2.2.1\n"); getchar(); getchar();
                if(elev[i][j] != elev[i+1][j]){
                    //printf("here 2.3a\n"); getchar(); getchar();
                    line[numLine].x1 = bndbox[0] + (i+1)*csize;
                    //printf("here 2.3b\n"); getchar(); getchar();
                    line[numLine].y1 = bndbox[3] - (j)*csize;
                    //printf("here 2.3c\n"); getchar(); getchar();
                    line[numLine].x2 = bndbox[0] + (i+1)*csize;
                    //printf("here 2.3d\n"); getchar(); getchar();
                    line[numLine].y2 = bndbox[3] - (j+1)*csize;
                    //printf("here 2.3e\n"); getchar(); getchar();
                    line[numLine].cl = elev[i][j];
                    //printf("here 2.3f\n"); getchar(); getchar();
                    linesInClass[line[numLine].cl]++;
                    //printf("here 2.3g\n"); getchar(); getchar();
                    numLine++;
                    //printf("here 2.3\n"); getchar(); getchar();
                }
                //printf("here 2.3.1\n"); getchar(); getchar();
                if(elev[i][j] != elev[i][j+1]){
                    line[numLine].x1 = bndbox[0] + (i+1)*csize;
                    line[numLine].y1 = bndbox[3] - (j+1)*csize;
                    line[numLine].x2 = bndbox[0] + (i)*csize;
                    line[numLine].y2 = bndbox[3] - (j+1)*csize;
                    line[numLine].cl = elev[i][j];
                    linesInClass[line[numLine].cl]++;
                    numLine++;
                    //printf("here 2.4\n"); getchar(); getchar();
                }
                //printf("here 2.4.1\n"); getchar(); getchar();
            }
        }
    }
    //printf("here 3\n"); getchar(); getchar();
    
    //sort the lines with class information
    sortLine(line, numLine);
    
    for(i=0; i<numLine; i++){
        
        ptx[0]=line[i].x1;
        ptx[1]=line[i].x2;
        pty[0]=line[i].y1;
        pty[1]=line[i].y2;
        ptz[0]=0.0;
        ptz[1]=0.0;
        //printf("x: %lf\t%lf\n", ptx[0], ptx[1]);
        //printf("y: %lf\t%lf\n", pty[0], pty[1]); getchar(); getchar();
        tempobj = SHPCreateSimpleObject(SHPT_ARC, 2, ptx, pty, ptz);
       // printf("%d\n", i); getchar();getchar();
        SHPWriteObject(tempshp, -1, tempobj);
        //printf("%d\n", i); getchar();getchar();
        
        DBFWriteIntegerAttribute(tempdbf, temprecordNum, tempFld, line[i].cl);
        temprecordNum++;
        //printf("%d\n", i); getchar(); getchar();
    }
    SHPClose(tempshp);
    DBFClose(tempdbf);
    
    /*
    for(err=0; err<numLine; err++)
        printf("%lf\t%lf\t%lf\t%lf\n", line[err].x1, line[err].y1,line[err].x1, line[err].y1,line[err].x2, line[err].y2); 
    */
    /*
    for(i=1; i<=maxClass; i++)
        printf("class %d numLine %d\n", i, linesInClass[i]);
    */    
    // start forming polygons now  NOTE: polygon:=class
    classNum = 1;
    startPivot = 0;
    endPivot   = startPivot + linesInClass[classNum];
    i = startPivot;
    numPt = 0;
    while(classNum <= maxClass){
        
        ptx[numPt]=line[i].x1;
        pty[numPt]=line[i].y1;
        ptz[numPt]=0.0;
        //printf("= %d %lf %lf\n", numPt, ptx[numPt], ptx[numPt]);getchar(); getchar();
        numPt++;
	//if(lineDirFlag == 0){ --numPt; lineDirFlag = 1; } //BHATT: Commented this line and edited on next
	if(lineDirFlag == 0 && numPt>1){ --numPt; lineDirFlag = 1; }
        // search for connection        
        count=0;
        for(j=startPivot; j<endPivot; j++){
            if(dist(line[i].x2,line[j].x1)<0.0001 && dist(line[i].y2,line[j].y1)<0.0001 && line[j].cl != 0){
                point[count++]=j;
            }
        }
        if(count == 1){
            line[i].cl=0;
	    lineDirFlag = direction(line[i], line[point[0]]);
            i = point[0]; // start search from found connecting line
        }
        else if(count == 0){
            ptx[numPt]=line[i].x2;
            pty[numPt]=line[i].y2;
            ptz[numPt]=0.0;
            numPt++;
            /*
            for(err=0; err<numPt; err++)
                printf("-> %lf\t%lf\n", ptx[err], pty[err]); 
            */  
            //write polygon here
            printf("writing polygon:\t%d\twith\t%d\tnodes  -- class#\t%d\n", recordNum, numPt, classNum); 
            //getchar(); getchar();
            obj = SHPCreateSimpleObject(SHPT_POLYGON, numPt, ptx, pty, ptz);
            SHPWriteObject(shp, -1, obj);
            DBFWriteIntegerAttribute(dbf, recordNum, polyFld, classNum);
            recordNum++;
            numPt = 0;
            /*
            if(classNum==31){
                SHPClose(shp);
                DBFClose(dbf);
                exit(1);
            }
            */
            classNum++;
            startPivot = endPivot;
            endPivot   = startPivot + linesInClass[classNum];
            //printf("start = %d, end = %d %d %d %d\n", startPivot, endPivot, linesInClass[classNum], line[startPivot].cl, line[endPivot-1].cl); getchar();
            i = startPivot;
        }
        else if(count == 2){
            line[i].cl=0;
            //select one of those:
            //printf("%d %d\n",abs(i-point[0]), abs(i-point[1]));
            if(abs(i-point[0]) > abs(i-point[1]))
                i = point[0];
            else
                i = point[1];
        }
        else{
            printf("No connection found!! Whats going on? \n"); //getchar(); getchar();  
        }      
    }  
    SHPClose(shp);
    DBFClose(dbf);      
}

void sortLine(LINE *lines, int numLine){
     int i, j, tempI, swapFlag=0;
     double tempD;
     for(i=0; i<numLine-1; i++){
         swapFlag=0;
         for(j=0; j<numLine-1-i; j++){
             if(lines[j+1].cl < lines[j].cl){
                 swapFlag = 1;
                 
                 tempD = lines[j].x1;
                 lines[j].x1   = lines[j+1].x1;
                 lines[j+1].x1 = tempD;
                 
                 tempD = lines[j].y1;
                 lines[j].y1   = lines[j+1].y1;
                 lines[j+1].y1 = tempD;
                 
                 tempD = lines[j].x2;
                 lines[j].x2   = lines[j+1].x2;
                 lines[j+1].x2 = tempD;
                 
                 tempD = lines[j].y2;
                 lines[j].y2   = lines[j+1].y2;
                 lines[j+1].y2 = tempD;
                 
                 tempI = lines[j].cl;
                 lines[j].cl   = lines[j+1].cl;
                 lines[j+1].cl = tempI;
             }
         }
         if(swapFlag == 0)
             break;
     }
     return;
}
