#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include <qmath.h>



int Soil_PedoTransferFunction ( QString TextureFileName, QString DataFileName )
{
    int NUMCOL = 9;

    QFile TextureFile(TextureFileName);
    if ( ! TextureFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 11;
    QTextStream TextureFileTextStream(&TextureFile);

    QFile DataFile(DataFileName);
    if ( ! DataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 16;
    QTextStream DataFileTextStream(&DataFile);

    QString TempString;
    int NumClasses=0;
    double TextureData[1000][6];
    // (1) MUKEY (2) SILT (3) CLAY (4) ORGANIC_MATTER (5) BULK_DENSITY //(6) TopSoil = 1

    TempString = TextureFileTextStream.readLine(); // Read Header Line

    while ( ! TextureFileTextStream.atEnd() )
    {
        TextureFileTextStream >> TextureData[NumClasses][0]; //MUKEY
        TextureFileTextStream >> TextureData[NumClasses][1]; //SILT
        TextureFileTextStream >> TextureData[NumClasses][2]; //CLAY
        TextureFileTextStream >> TextureData[NumClasses][3]; if(TextureData[NumClasses][3]<0) TextureData[NumClasses][3]=2.5; //ORGANIC MATTER
        TextureFileTextStream >> TextureData[NumClasses][4]; if(TextureData[NumClasses][4]<0) TextureData[NumClasses][4]=1.3; //BULK DENSITY (g/cm3)
        //TextureFileTextStream>>TextureData[NumClasses][5]; //TOP SOIL
        TextureData[NumClasses][5] = 1;
        //? DataFileTextStream<<"-$ "<<TextureData[NumClasses][0]<<"\t"<<TextureData[NumClasses][1]<<"\t"<<TextureData[NumClasses][2]<<"\t"<<TextureData[NumClasses][3]<<"\t"<<TextureData[NumClasses][4]<<"\t"<<TextureData[NumClasses][5]<<" $-  \n";
        NumClasses++;
    }
    NumClasses--;
    DataFileTextStream << NumClasses << "\n";

    if ( NumClasses < 1 )
        return 44;

    double S, C, OM, D; //S=SILT, C=CLAY, OM=ORGANIC MATTER, D=BULK DENSITY,
    int TopSoil; //TopSoil

    double **HydraulicParameter;
    HydraulicParameter = (double **)malloc(NumClasses*sizeof(double *));

    for(int i=0; i<NumClasses; i++)
    {
        HydraulicParameter[i] = (double *)malloc(NUMCOL*sizeof(double));
        for(int j=0; j<NUMCOL; j++)
            HydraulicParameter[i][j]=0.0;

        S       = TextureData[i][1];
        C       = TextureData[i][2];
        OM      = TextureData[i][3];
        D       = TextureData[i][4];
        TopSoil = (int) TextureData[i][5];

        //? DataFileTextStream<<"-> "<<S<<"\t"<<C<<"\t"<<OM<<"\t"<<D<<"\t"<<TopSoil<<" <-  \n";

        // ** Index
        HydraulicParameter[i][0]=i+1;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream << (int) HydraulicParameter[i][0] << "\t";

        // ** KsatV
        //HydraulicParameter[i][1]= (7.755+0.03252*S+0.93*TopSoil-0.967*D*D-0.000484*C*C-0.000322*S*S+0.001/S-0.0748/OM-0.643*log(S)-0.01398*D*C-0.1673*D*OM+0.02986*TopSoil*C-0.03305*TopSoil*S);
        HydraulicParameter[i][1]=exp(7.755+0.03252*S+0.93*TopSoil-0.967*D*D-0.000484*C*C-0.000322*S*S+0.001/S-0.0748/OM-0.643*log(S)-0.01398*D*C-0.1673*D*OM+0.02986*TopSoil*C-0.03305*TopSoil*S);
        HydraulicParameter[i][1]=HydraulicParameter[i][1]/100; //UNIT CONVERSION cm/d to m/day
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(8);
        //DataFileTextStream << 10.0 * HydraulicParameter[i][1] << "\t";
        DataFileTextStream << HydraulicParameter[i][1] << "\t";

        // ** ThetaS
        //HydraulicParameter[i][2]=(0.7919+0.001691*C-0.29619*D-0.000001491*S*S+0.0000821*OM*OM+0.02427/C+0.01113/S+0.01472*log(S)-0.0000733*OM*C-0.000619*D*C-0.001183*D*OM-0.0001664*TopSoil*S);
        HydraulicParameter[i][2]=  (0.7919+0.001691*C-0.29619*D-0.000001491*S*S+0.0000821*OM*OM+0.02427/C+0.01113/S+0.01472*log(S)-0.0000733*OM*C-0.000619*D*C-0.001183*D*OM-0.0001664*TopSoil*S);
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(8);
        DataFileTextStream << HydraulicParameter[i][2] << "\t";

        // ** ThetaR
        HydraulicParameter[i][3]=0.01;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(2);
        DataFileTextStream << HydraulicParameter[i][3] << "\t";

        // ** InfD
        HydraulicParameter[i][4]=0.10;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(2);
        DataFileTextStream << HydraulicParameter[i][4] << "\t";

        // ** ALPHA
        //HydraulicParameter[i][5]=log(-14.96+0.03135*C+0.0351*S+0.646*OM+15.29*D-0.192*TopSoil-4.671*D*D-0.000781*C*C-0.00687*OM*OM+0.0449/OM+0.0663*log(S)+0.1482*log(OM)-0.04546*D*S-0.4852*D*OM+0.00673*TopSoil*C);
        HydraulicParameter[i][5]=  exp(-14.96+0.03135*C+0.0351*S+0.646*OM+15.29*D-0.192*TopSoil-4.671*D*D-0.000781*C*C-0.00687*OM*OM+0.0449/OM+0.0663*log(S)+0.1482*log(OM)-0.04546*D*S-0.4852*D*OM+0.00673*TopSoil*C);
        HydraulicParameter[i][5]= 100 * HydraulicParameter[i][5]; //UNIT CONVERSION 1/cm TO 1/m
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(5);
        DataFileTextStream << HydraulicParameter[i][5] << "\t";

        // ** BETA
        HydraulicParameter[i][6]=1+exp(-25.23-0.02195*C+0.0074*S-0.1940*OM+45.5*D-7.24*D*D+0.0003658*C*C+0.002885*OM*OM-12.81/D-0.1524/S-0.01958/OM-0.2876*log(S)-0.0709*log(OM)-44.6*log(D)-0.02264*D*C+0.0896*D*OM+0.00718*TopSoil*C);
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(5);
        DataFileTextStream << HydraulicParameter[i][6] << "\t";

        // ** hAreaF
        HydraulicParameter[i][7]=0.01;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(2);
        DataFileTextStream << HydraulicParameter[i][7] << "\t";

        // ** macKsatV
        HydraulicParameter[i][8]=100*HydraulicParameter[i][1];
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(4);
        DataFileTextStream << HydraulicParameter[i][8] << "\n";
    }

    TextureFile.close();
    DataFile.close();

    return 0;
}



int Geol_PedoTransferFunction ( QString TextureFileName, QString DataFileName )
{
    int NUMCOL = 10;

    QFile TextureFile(TextureFileName);
    if ( ! TextureFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 134;
    QTextStream TextureFileTextStream(&TextureFile);

    QFile DataFile(DataFileName);
    if ( ! DataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 139;
    QTextStream DataFileTextStream(&DataFile);

    QString TempString;
    int NumClasses=0;
    double TextureData[1000][6];
    // (1) MUKEY (2) SILT (3) CLAY (4) ORGANIC_MATTER (5) BULK_DENSITY //(6) TopSoil = 1

    TempString = TextureFileTextStream.readLine(); // Read Header Line

    while ( ! TextureFileTextStream.atEnd() )
    {
        TextureFileTextStream >> TextureData[NumClasses][0]; //MUKEY
        TextureFileTextStream >> TextureData[NumClasses][1]; //SILT
        TextureFileTextStream >> TextureData[NumClasses][2]; //CLAY
        TextureFileTextStream >> TextureData[NumClasses][3]; if(TextureData[NumClasses][3]<0) TextureData[NumClasses][3]=2.5; //ORGANIC MATTER
        TextureFileTextStream >> TextureData[NumClasses][4]; if(TextureData[NumClasses][4]<0) TextureData[NumClasses][4]=1.3; //BULK DENSITY (g/cm3)
        //TextureFileTextStream>>TextureData[NumClasses][5]; //TOP SOIL
        TextureData[NumClasses][5] = 0;
        //? DataFileTextStream<<"-$ "<<TextureData[NumClasses][0]<<"\t"<<TextureData[NumClasses][1]<<"\t"<<TextureData[NumClasses][2]<<"\t"<<TextureData[NumClasses][3]<<"\t"<<TextureData[NumClasses][4]<<"\t"<<TextureData[NumClasses][5]<<" $-  \n";
        NumClasses++;
    }
    NumClasses--;
    DataFileTextStream << NumClasses << "\n";

    if ( NumClasses < 1 )
        return 165;

    double S, C, OM, D; //S=SILT, C=CLAY, OM=ORGANIC MATTER, D=BULK DENSITY,
    int TopSoil; //TopSoil

    double **HydraulicParameter;
    HydraulicParameter = (double **)malloc(NumClasses*sizeof(double *));

    for(int i=0; i<NumClasses; i++)
    {
        HydraulicParameter[i] = (double *)malloc(NUMCOL*sizeof(double));
        for(int j=0; j<NUMCOL; j++)
            HydraulicParameter[i][j]=0.0;

        S       = TextureData[i][1];
        C       = TextureData[i][2];
        OM      = TextureData[i][3];
        D       = TextureData[i][4];
        TopSoil = (int) TextureData[i][5];

        //? DataFileTextStream<<"-> "<<S<<"\t"<<C<<"\t"<<OM<<"\t"<<D<<"\t"<<TopSoil<<" <-  \n";

        // ** Index
        HydraulicParameter[i][0]=i+1;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream << (int) HydraulicParameter[i][0] << "\t";

        // ** KsatV
        //HydraulicParameter[i][1]= (7.755+0.03252*S+0.93*TopSoil-0.967*D*D-0.000484*C*C-0.000322*S*S+0.001/S-0.0748/OM-0.643*log(S)-0.01398*D*C-0.1673*D*OM+0.02986*TopSoil*C-0.03305*TopSoil*S);
        HydraulicParameter[i][1]=exp(7.755+0.03252*S+0.93*TopSoil-0.967*D*D-0.000484*C*C-0.000322*S*S+0.001/S-0.0748/OM-0.643*log(S)-0.01398*D*C-0.1673*D*OM+0.02986*TopSoil*C-0.03305*TopSoil*S);
        HydraulicParameter[i][1]=HydraulicParameter[i][1]/100; //UNIT CONVERSION cm/d to m/day
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(8);
        DataFileTextStream << 10.0 * HydraulicParameter[i][1] << "\t";
        DataFileTextStream << HydraulicParameter[i][1] << "\t";

        // ** ThetaS
        //HydraulicParameter[i][2]=(0.7919+0.001691*C-0.29619*D-0.000001491*S*S+0.0000821*OM*OM+0.02427/C+0.01113/S+0.01472*log(S)-0.0000733*OM*C-0.000619*D*C-0.001183*D*OM-0.0001664*TopSoil*S);
        HydraulicParameter[i][2]=  (0.7919+0.001691*C-0.29619*D-0.000001491*S*S+0.0000821*OM*OM+0.02427/C+0.01113/S+0.01472*log(S)-0.0000733*OM*C-0.000619*D*C-0.001183*D*OM-0.0001664*TopSoil*S);
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(8);
        DataFileTextStream << HydraulicParameter[i][2] << "\t";

        // ** ThetaR
        HydraulicParameter[i][3]=0.01;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(2);
        DataFileTextStream << HydraulicParameter[i][3] << "\t";

        // ** InfD
        //HydraulicParameter[i][4]=0.10;
        //DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        //DataFileTextStream.setRealNumberPrecision(2);
        //DataFileTextStream << HydraulicParameter[i][4] << "\t";

        // ** ALPHA
        //HydraulicParameter[i][5]=log(-14.96+0.03135*C+0.0351*S+0.646*OM+15.29*D-0.192*TopSoil-4.671*D*D-0.000781*C*C-0.00687*OM*OM+0.0449/OM+0.0663*log(S)+0.1482*log(OM)-0.04546*D*S-0.4852*D*OM+0.00673*TopSoil*C);
        HydraulicParameter[i][5]=  exp(-14.96+0.03135*C+0.0351*S+0.646*OM+15.29*D-0.192*TopSoil-4.671*D*D-0.000781*C*C-0.00687*OM*OM+0.0449/OM+0.0663*log(S)+0.1482*log(OM)-0.04546*D*S-0.4852*D*OM+0.00673*TopSoil*C);
        HydraulicParameter[i][5]= 100 * HydraulicParameter[i][5]; //UNIT CONVERSION 1/cm TO 1/m
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(5);
        DataFileTextStream << HydraulicParameter[i][5] << "\t";

        // ** BETA
        HydraulicParameter[i][6]=1+exp(-25.23-0.02195*C+0.0074*S-0.1940*OM+45.5*D-7.24*D*D+0.0003658*C*C+0.002885*OM*OM-12.81/D-0.1524/S-0.01958/OM-0.2876*log(S)-0.0709*log(OM)-44.6*log(D)-0.02264*D*C+0.0896*D*OM+0.00718*TopSoil*C);
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(5);
        DataFileTextStream << HydraulicParameter[i][6] << "\t";

        // ** hAreaF
        HydraulicParameter[i][7]=0.01;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(2);
        DataFileTextStream << HydraulicParameter[i][7] << "\t";

        // ** macKsatV
        HydraulicParameter[i][8]=100000*HydraulicParameter[i][1];
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(4);
        DataFileTextStream << HydraulicParameter[i][8] << "\t";

        // ** macD
        HydraulicParameter[i][9]=1.0;
        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream.setRealNumberPrecision(2);
        DataFileTextStream << HydraulicParameter[i][9]<<"\n";
    }


    TextureFile.close();
    DataFile.close();

    return 0;
}


int Lc_PedoTransferFunction  ( QString ClassFileName,   QString DataFileName )
{
    int MAXLC = 100;
    QFile ClassFile(ClassFileName);
    if ( ! ClassFile.open(QIODevice::ReadOnly | QIODevice::Text) )
        return 267;
    QTextStream ClassFileTextStream(&ClassFile);

    QFile DataFile(DataFileName);
    if ( ! DataFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return 272;
    QTextStream DataFileTextStream(&DataFile);


    double UMD[][7] = {
        // http://glcf.umiacs.umd.edu/data/landcover/
        //Index	LAImax          Rmin       Rsref          Albedo     VegFrac      Roughness
        {  0,	0.00000000,	0.00202546,	13477995.31968,	0.13500000,	0.0000000,	4.050926E-07 }, //Water
        {  1,	10.7600000,	0.00202546,	2592000.00000,	0.18200000,	0.8000000,	8.101852E-07 }, //Evergreen Needleleaf
        {  2,	5.11700000,	0.00173611,	8301077.28317,	0.21300000,	0.9000000,	8.101852E-07 }, //Evergreen Broadleaf
        {  3,	10.7600000,	0.00202546,	2592000.00000,	0.18200000,	0.8000000,	8.101852E-07 }, //Deciduous Needleleaf
        {  4,	7.17300000,	0.00202546,	6221002.34189,	0.23600000,	0.8000000,	8.101852E-07 }, //Deciduous Broadleaf
        {  5,	8.83300000,	0.00202546,	4541564.40278,	0.20250000,	0.7950000,	6.944444E-07 }, //Mixed Forest
        {  6,	8.54004400,	0.00200822,	4837950.80122,	0.21128590,	0.7998630,	6.944444E-07 }, //Woodland
        {  7,	6.23951310,	0.00195775,	7165420.00157,	0.25245035,	0.8018370,	5.787037E-07 }, //Wooded Grassland
        {  8,	2.55359750,	0.00202546,	10894496.20704,	0.24958510,	0.6250050,	5.208333E-07 }, //Closed Shrubland
        {  9,	1.16688270,	0.00207025,	12297448.88352,	0.26652016,	0.2181750,	5.208333E-07 }, //Open Shrubland
        { 10,	4.78200000,	0.00190972,	8640000.00000,	0.28802000,	0.7255200,	4.629630E-07 }, //Grassland
        { 11,	4.78200000,	0.00135542,	8640000.00000,	0.24991620,	0.8353665,	4.629630E-07 }, //Cropland
        { 12,	0.00100000,	0.00202546,	13476983.61024,	0.23214958,	0.0748900,	4.050926E-07 }, //Bare Ground
        { 13,	5.02122910,	0.00179213,	8397969.62227,	0.24649654,	0.7436000,	1.157407E-07 }, //Urban and Build
    };


    // http://www.epa.gov/mrlc/definitions.html#2001
    double NLCD[][4] =
        {
          {0, 0.00, 0, 0.00},   //00
          {0, 0.00, 0, 0.00},   //01
          {0, 0.00, 0, 0.00},   //02
          {0, 0.00, 0, 0.00},   //03
          {0, 0.00, 0, 0.00},   //04
          {0, 0.00, 0, 0.00},   //05
          {0, 0.00, 0, 0.00},   //06
          {0, 0.00, 0, 0.00},   //07
          {0, 0.00, 0, 0.00},   //08
          {0, 0.00, 0, 0.00},   //09
          {0, 1.00, 0, 0.00},   //10
          {0, 0.90, 6, 0.10},   //11
          {0, 0.20, 6, 0.80},   //12
          {0, 0.00, 0, 0.00},   //13
          {0, 0.00, 0, 0.00},   //14
          {0, 0.00, 0, 0.00},   //15
          {0, 0.00, 0, 0.00},   //16
          {0, 0.00, 0, 0.00},   //17
          {0, 0.00, 0, 0.00},   //18
          {0, 0.00, 0, 0.00},   //19
          {13, 0.65, 0, 0.00},  //20
          {13, 0.10, 10, 0.90}, //21
          {13, 0.35, 10, 0.65}, //22
          {13, 0.65, 10, 0.35}, //23
          {13, 0.90, 10, 0.10}, //24
          {0, 0.00, 0, 0.00},   //25
          {0, 0.00, 0, 0.00},   //26
          {0, 0.00, 0, 0.00},   //27
          {0, 0.00, 0, 0.00},   //28
          {0, 0.00, 0, 0.00},   //29
          {12, 1.00, 0, 0.00},  //30
          {12, 0.92, 9, 0.08},  //31
          {12, 1.00, 9, 0.00},  //32
          {0, 0.00, 0, 0.00},   //33
          {0, 0.00, 0, 0.00},   //34
          {0, 0.00, 0, 0.00},   //35
          {0, 0.00, 0, 0.00},   //36
          {0, 0.00, 0, 0.00},   //37
          {0, 0.00, 0, 0.00},   //38
          {0, 0.00, 0, 0.00},   //39
          {6, 0.65, 0, 0.00},   //40
          {4, 0.60, 10, 0.40},  //41
          {2, 0.60, 10, 0.40},  //42
          {5, 0.60, 10, 0.40},  //43
          {0, 0.00, 0, 0.00},   //44
          {0, 0.00, 0, 0.00},   //45
          {0, 0.00, 0, 0.00},   //46
          {0, 0.00, 0, 0.00},   //47
          {0, 0.00, 0, 0.00},   //48
          {0, 0.00, 0, 0.00},   //49
          {8, 1.00, 0, 0.00},   //50
          {9, 0.60, 0, 0.00},   //51
          {8, 0.60, 0, 0.00},   //52
          {0, 0.00, 0, 0.00},   //53
          {0, 0.00, 0, 0.00},   //54
          {0, 0.00, 0, 0.00},   //55
          {0, 0.00, 0, 0.00},   //56
          {0, 0.00, 0, 0.00},   //57
          {0, 0.00, 0, 0.00},   //58
          {0, 0.00, 0, 0.00},   //59
          {0, 0.00, 0, 0.00},   //60
          {0, 0.00, 0, 0.00},   //61
          {0, 0.00, 0, 0.00},   //62
          {0, 0.00, 0, 0.00},   //63
          {0, 0.00, 0, 0.00},   //64
          {0, 0.00, 0, 0.00},   //65
          {0, 0.00, 0, 0.00},   //66
          {0, 0.00, 0, 0.00},   //67
          {0, 0.00, 0, 0.00},   //68
          {0, 0.00, 0, 0.00},   //69
          {10, 0.85, 0, 0.00},  //70
          {10, 0.90, 0, 0.00},  //71
          {10, 0.90, 0, 0.00},  //72
          {10, 0.90, 0, 0.00},  //73
          {10, 0.90, 0, 0.00},  //74
          {0, 0.00, 0, 0.00},   //75
          {0, 0.00, 0, 0.00},   //76
          {0, 0.00, 0, 0.00},   //77
          {0, 0.00, 0, 0.00},   //78
          {0, 0.00, 0, 0.00},   //79
          {10, 0.90, 0, 0.00},  //80
          {11, 0.60, 0, 0.00},  //81
          {11, 0.60, 0, 0.00},  //82
          {0, 0.00, 0, 0.00},   //83
          {0, 0.00, 0, 0.00},   //84
          {0, 0.00, 0, 0.00},   //85
          {0, 0.00, 0, 0.00},   //86
          {0, 0.00, 0, 0.00},   //87
          {0, 0.00, 0, 0.00},   //88
          {0, 0.00, 0, 0.00},   //89
          {8, 0.60, 12, 0.40},  //90
          {6, 0.60, 0, 0.00},   //91
          {7, 0.60, 0, 0.00},   //92
          {6, 0.60, 0, 0.00},   //93
          {7, 0.60, 0, 0.00},   //94
          {9, 0.60, 12, 0.40},  //95
          {10, 0.80, 2, 0.20},  //96
          {10, 0.80, 4, 0.20},  //97
          {10, 0.20, 0, 0.80},  //98
          {10, 0.20, 0, 0.80},  //99
        };



    int    NumClasses = 0;
    double LcClasses[MAXLC];

    while ( ! ClassFileTextStream.atEnd() )
    {
        ClassFileTextStream >> LcClasses[NumClasses];

        NumClasses++;
    }
    NumClasses--;

    DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
    DataFileTextStream << NumClasses << "\n";

    int nlcd, umd1, umd2;
    double frac1, frac2;
    for(int i=0; i<NumClasses; i++)
    {
        nlcd  = LcClasses[i];
        umd1  = NLCD[nlcd][0];
        frac1 = NLCD[nlcd][1];
        umd2  = NLCD[nlcd][2];
        frac2 = NLCD[nlcd][3];
        qDebug() << nlcd << ": [" << umd1 << "] x " << frac1 << " + [" << umd2 << "] x " << frac2 << "\n";

        if ( umd1 + umd2 == 0 ) // NLCD Class not defined
            return 423;

        DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
        DataFileTextStream << i+1 << "\t";
        for(int j=1; j<7; j++)
        {
            DataFileTextStream.setRealNumberNotation(QTextStream::FixedNotation);
            DataFileTextStream.setRealNumberPrecision(8);
            if ( j == 6 ) // Roughness
                DataFileTextStream.setRealNumberNotation(QTextStream::ScientificNotation);
            DataFileTextStream << frac1 * UMD[umd1][j] + frac2 * UMD[umd2][j] << "\t";
        }
        DataFileTextStream << "0.600\n";
    }

    ClassFile.close();
    DataFile.close();

    return 0;

}
