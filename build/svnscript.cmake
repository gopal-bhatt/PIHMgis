# Magnus Homann svn hack
# Required?
SET(CMAKE_BACKWARDS_COMPATIBILITY "2.4")

# See if we have svn installed
FIND_PROGRAM(SVNVERSION svnversion)

# Read the version if installed, else set to "unknown"
IF (SVNVERSION)
        EXEC_PROGRAM(${SVNVERSION} ARGS /Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0 OUTPUT_VARIABLE MYVERSION)
ELSE (SVNVERSION)
        SET(MYVERSION unknown)
ENDIF (SVNVERSION)

# Configure the qgssvnversion.h
CONFIGURE_FILE(/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/cmake_templates/qgssvnversion.h.in_cmake
               /Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/build/qgssvnversion.h)
