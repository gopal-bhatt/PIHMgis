# Install script for directory: /Users/bhattgopal/dev/cpp/qgis_1.0.2/src/plugins

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/Users/bhattgopal/apps/qgis1.0.2.app/Contents/MacOS")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qgis" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/src/plugins/qgisplugin.h")
FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qgis" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/src/plugins/qgsrendererplugin.h")
IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/copyright_label/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/delimited_text/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/grid_maker/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/interpolation/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/north_arrow/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/scale_bar/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/gps_importer/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/wfs/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/georeferencer/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/quick_print/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/coordinate_capture/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/dxf2shp_converter/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/ogr_converter/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/plugins/pihm_gis/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)
