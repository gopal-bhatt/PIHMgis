
// QGSCONFIG.H

#ifndef QGSCONFIG_H
#define QGSCONFIG_H

// Version must be specified according to
// <int>.<int>.<int>-<any text>.
// or else upgrading old project file will not work
// reliably.
#define VERSION "1.0.2-Kore"

//used in vim src/core/qgis.cpp
//The way below should work but it resolves to a number like 0110 which the compiler treats as octal I think
//because debuggin it out shows the decimal number 72 which results in incorrect version status.
//As a short term fix I (Tim) am defining the version in top level cmake. It would be good to 
//reinstate this more generic approach below at some point though
//#define VERSION_INT 102
#define VERSION_INT 10002
//used in main.cpp and anywhere else where the release name is needed
#define RELEASE_NAME "Kore"

#define QGIS_PLUGIN_SUBDIR "lib/qgis"
#define QGIS_DATA_SUBDIR "share/qgis"

/* #undef HAVE_POSTGRESQL */

/* #undef HAVE_PYTHON */

#endif

