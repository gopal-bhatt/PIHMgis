#include <assert.h>

#include "GDAL.h"
#include "cpl_string.h"
#include "ogrsf_frmts.h"

/************************************************************************/

typedef struct s_attribute
{
	const char *value;
	struct s_attribute *next;	// list link
} t_attribute;

t_attribute *attributeNew()
{
	t_attribute *attribute;
	attribute = (t_attribute *) malloc(sizeof(t_attribute));
	attribute->value = NULL;
	attribute->next = NULL;

	return(attribute);
}
void attributeInsert(t_attribute **head, const char* newValue )
{
	t_attribute *curr;
	t_attribute *prev=NULL;
	t_attribute *item=NULL;

	curr = *head;
	while(curr != NULL)
	{
		if( strcmp( curr->value , newValue) >= 0 ) 
			break;
		prev = curr;
		curr = curr->next;
	}

	if ( !curr || strcmp(curr->value, newValue) != 0 )	//insert a new node in the list
	{
		item = attributeNew();
		item->value = newValue;
		if(prev == NULL)
		{
			item->next = *head;	// new top
			*head = item;		// link to old top
		}else
		{
			prev->next = item;
			item->next = curr;
		}
	}
	return;
}

void attributePrint( t_attribute *head)
{
	t_attribute *curr;
	curr =head;
	while(curr != NULL)
	{
		printf("%s\n",curr->value );
		curr = curr->next;
	}
	return;
}
int attributeCount( t_attribute *head)
{
	int i=0;	
	t_attribute *curr;
	curr =head;
	while(curr != NULL)
	{
		i++;
		curr = curr->next;
	}
	return(i);

}

/************************************************************************/
/************************************************************************/
static void Usage()
{
    printf( 
		"ogrDissolve v1.0\n"
		"Dissolves common boundaries between polygons with the same attribute value.\n"
        "Usage: ogrDissolve [-a <attr name>] [-u] <input DS> <output DS>\n" );
    exit( 1 );
}

/************************************************************************/
/************************************************************************/
void notice(const char *fmt, ...)
{
    va_list ap;

        fprintf( stdout, "NOTICE: ");

    va_start (ap, fmt);
        vfprintf( stdout, fmt, ap);
        va_end(ap);
        fprintf( stdout, "\n" );
}

void log_and_exit(const char *fmt, ...)
{
    va_list ap;

        fprintf( stdout, "ERROR: ");

    va_start (ap, fmt);
        vfprintf( stdout, fmt, ap);
        va_end(ap);
        fprintf( stdout, "\n" );
    exit(1);
}
/************************************************************************/
/*                                Main()                                */
/************************************************************************/
int dissolve_ogr( int argc, char *argv[] )
{
	const char *pszUnionAttrib = NULL;
	const char *pszSrcFilename = NULL;
	const char *pszDstFilename = NULL;
	char *pzsDstFormat = NULL;
	char *pzsDstFormatDefault = "ESRI Shapefile";

	int i;
	bool bUnpackMultiPolys = false;
	bool bVerbose = false;

	char pszQuery[250];

/* -------------------------------------------------------------------- */
/*      Parse arguments.                                                */
/* -------------------------------------------------------------------- */
    argc = GDALGeneralCmdLineProcessor( argc, &argv, 0 );
    if( argc < 1 )
        return( -argc );

    if( argc == 1 )
        Usage();

    for( i = 1; i < argc; i++ )
    {
        if( EQUAL(argv[i],"-a") && i < argc-1 )
            pszUnionAttrib = argv[++i];		// location (path) attribute name

        else if( EQUAL(argv[i],"-u") )
            bUnpackMultiPolys = true;

        else if( EQUAL(argv[i],"-v") )
            bVerbose = true;

	else if( EQUAL(argv[i],"-of") && i < argc-1 )
            pzsDstFormat = argv[++i];

        else if( pszSrcFilename == NULL )
        {
            pszSrcFilename = argv[i];
        }
        else if( pszDstFilename == NULL )
        {
            pszDstFilename = argv[i];
        }
        else
            Usage();
    }

	if( pszSrcFilename == NULL )
	{
        CPLError( CE_Failure, CPLE_AppDefined, "An input DataSet is required." );
        return(1);
	}

	if( pszDstFilename == NULL )
	{
        CPLError( CE_Failure, CPLE_AppDefined, "An output DataSet is required." );
        return(2);
	}
	if ( pzsDstFormat == NULL )
	{
		pzsDstFormat = pzsDstFormatDefault;
	}


/* -------------------------------------------------------------------- */
/*  Do requested Operations:                                            */
/* -------------------------------------------------------------------- */
	OGRDataSource	*poDS;
	OGRLayer		*poLayer;
	OGRFeature		*poFeature;
	OGRFeatureDefn  *poFDefn;
	OGRGeometry		*poGeometry;
	OGRwkbGeometryType poGeomType;

//	OGRDataSource	*poUnionDS;
//	OGRLayer		*poUnionLayer;
//	OGRFeature		*poUnionFeature;

	OGRDataSource	*poDSout;
	OGRLayer		*poLayerOut;


	char *pszGeom=NULL;

	long nLayers = 0;
	long nFeatures = 0;
	long iField = 0;

	const char *pzOverlapLocation=NULL;
	const char *pzSidLocation=NULL;

	bool bFoundAttrib = FALSE;

	/*-----------------------------------------------------------------------*/
	/*  Open input, check for requirements:                                  */
	/*-----------------------------------------------------------------------*/
	OGRRegisterAll();
	poDS = OGRSFDriverRegistrar::Open( pszSrcFilename, FALSE );	// we will be updating the dataset
	if( poDS == NULL )
	{
		return(101);	//can't open dataset
	}
	nLayers = poDS->GetLayerCount();
	if (nLayers == 0)
	{
		return(102);	//no layers in dataset
	}

	// TBD: allow mult layers:
	poLayer = poDS->GetLayer( 0 );
	poLayer->ResetReading();

	nFeatures = poLayer->GetFeatureCount();

	if ( (poFeature = poLayer->GetNextFeature()) != NULL )
	{
		//--- Check Geometry type: ---//
        poGeometry = poFeature->GetGeometryRef();
        if( poGeometry != NULL )
		{
			poGeomType = poGeometry->getGeometryType();	// TBD: check if polgon
			if ( poGeomType != wkbMultiPolygon && poGeomType != wkbPolygon )
			{
				printf("Data must be polygons.\n");
			}
		}else
		{
			return(104);	//no geometry in feature
		}

		//--- Get Field of Union Attribute: ---//
        OGRFeatureDefn *poFDefn = poLayer->GetLayerDefn();
        for( iField = 0; iField < poFDefn->GetFieldCount(); iField++ )
        {
            OGRFieldDefn *poFieldDefn = poFDefn->GetFieldDefn( iField );
			if ( EQUAL(poFieldDefn->GetNameRef(),pszUnionAttrib) )
			{
				bFoundAttrib =  true;
				break;
			}
		}
		if (!bFoundAttrib)
		{
			printf("Data must have a disolve field.\n");
			return(105);
		}

	}else
	{
		printf("No features in dataset.\n");
		return(103);	//no features in dataset
	}
	/*-----------------------------------------------------------------------*/
	/*  Create Attribute List:                                               */
	/*-----------------------------------------------------------------------*/
    poLayer->ResetReading();
	i = 0;
	const char *pszAttrValue;
	t_attribute *attrList=NULL;

    while( (poFeature = poLayer->GetNextFeature()) != NULL )
    {
//		i++;
//		GDALTermProgress( ((double)i)/nFeatures, "", NULL);
		pszAttrValue = poFeature->GetFieldAsString(iField);
		attributeInsert( &attrList, pszAttrValue );
	}

//	attributePrint(attrList);

	/*-----------------------------------------------------------------------*/
	/*  Create output:                                                       */
	/*-----------------------------------------------------------------------*/
	OGRSFDriver *poDriver;
    poDriver = OGRSFDriverRegistrar::GetRegistrar()->GetDriverByName( pzsDstFormat );
    if( poDriver == NULL )
    {
//        printf( "%s driver not available.\n", pszDriverName );
        return(101);
    }

	poDSout = poDriver->CreateDataSource( pszDstFilename, NULL );
    if( poDSout == NULL )
    {
//        printf( "Creation of output file failed.\n" );
        return(102);
    }

	poLayerOut = poDSout->CreateLayer( "new_layer", NULL, poGeomType, NULL );
    if( poLayerOut == NULL )
    {
//        printf( "Layer creation failed.\n" );
        return(103);
    }

	poFDefn = poLayer->GetLayerDefn();
    for(int iField2 = 0; iField2 < poFDefn->GetFieldCount(); iField2++ )
    {
        OGRFieldDefn *poFieldDefn = poFDefn->GetFieldDefn( iField2 );

		if( poLayerOut->CreateField( poFieldDefn ) != OGRERR_NONE )
		{
	//        printf( "Creation of field failed.\n" );
			return(104);
		}
    }

	/*-----------------------------------------------------------------------*/
	/*  Process Features:                                                    */
	/*-----------------------------------------------------------------------*/
    poLayer->ResetReading();
	i = 0;
	t_attribute *curr = attrList;
	int nAttrs = attributeCount(attrList);

	OGRGeometryCollection *poCollection = new OGRGeometryCollection();

	while ( curr )
	{
		i++;
		if (!bVerbose )
			GDALTermProgress( ((double)i)/nAttrs, "", NULL);
		else
			printf("%d/%d. '%s'\n",i,nAttrs,curr->value);
//	    poLayer->ResetReading();
		sprintf( pszQuery, "%s='%s'",pszUnionAttrib, curr->value );
		poLayer->SetAttributeFilter( pszQuery );
		poLayer->ResetReading();
		int nFeatures = poLayer->GetFeatureCount();
		OGRGeometry *poGeometryOut=NULL;
//		poCollection->empty();
		int k=0;
		while ( (poFeature = poLayer->GetNextFeature()) ) 
		{
			k++;
			if (bVerbose )
				GDALTermProgress( ((double)k)/nFeatures, "", NULL);
			OGRGeometry *poGeometryTemp=NULL;
			poGeometryTemp = poFeature->GetGeometryRef();
			if (poGeometryTemp)
			{
//				if ( poGeometryTemp->IsValid() )
//				{
//					poCollection->addGeometry(poGeometryTemp);
//				}else
//				{
//					poCollection->addGeometry(poGeometryTemp->Buffer(0));
//				}

				if (poGeometryOut)
				{
					poGeometryOut = poGeometryOut->Union( poGeometryTemp);
				}else
				{
					poGeometryOut = poGeometryTemp->clone();
				}
			}
		}
//		poGeometryOut = poCollection->Buffer(0);
		// force to a collection of polygons
		//poCollection->addGeometry( poGeometryOut );
		if (bVerbose )
			GDALTermProgress( ((double)nFeatures)/nFeatures, "", NULL);
		if (poGeometryOut)
		{
			char * pszTemp=NULL;
//			poGeometryOut->exportToWkt(&pszTemp);

			if ( poGeometryOut->getGeometryType() == wkbMultiPolygon )	//it's a collection
			{
				int nPolys = ((OGRGeometryCollection *)poGeometryOut)->getNumGeometries();
				OGRGeometry *poGeometryTemp=NULL;
				for (int j=0;j<nPolys;j++ )
				{
					poGeometryTemp = ((OGRGeometryCollection *)poGeometryOut)->getGeometryRef(j);

					OGRFeature *poFeatureOut = new OGRFeature( poLayer->GetLayerDefn() );
					poFeatureOut->SetField( iField, curr->value );
					poFeatureOut->SetGeometryDirectly(poGeometryTemp);
					poLayerOut->CreateFeature(poFeatureOut);
				}
			}else
			{
				OGRFeature *poFeatureOut = new OGRFeature( poLayer->GetLayerDefn() );
				poFeatureOut->SetField( iField, curr->value );
				poFeatureOut->SetGeometryDirectly(poGeometryOut);
				poLayerOut->CreateFeature(poFeatureOut);
			}
		}
		curr = curr->next;
	}
	GDALTermProgress( ((double)nAttrs)/nAttrs, "", NULL);
//	printf("\n-- Info: .\n" );

	OGRDataSource::DestroyDataSource( poDS );
	OGRDataSource::DestroyDataSource( poDSout );


/* -------------------------------------------------------------------- */
/*  Exit:                                                               */
/* -------------------------------------------------------------------- */
	return(0);
}
