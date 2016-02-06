# Install script for directory: /Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS")
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

FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc/favicon.ico")
FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc/index.html")
FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc/install.pdf")
FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc/qgisdoc.css")
FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc/userguide.pdf")
FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/share/qgis/doc/images" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/doc/images/qgis_new_80pct.png")
