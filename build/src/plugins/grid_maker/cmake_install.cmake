# Install script for directory: /Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/src/plugins/grid_maker

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

FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/lib/qgis" TYPE MODULE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/build/src/plugins/grid_maker/libgridmakerplugin.so")
IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")
  EXECUTE_PROCESS(COMMAND install_name_tool
    -change "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/build/src/core/libqgis_core.dylib" "@executable_path/lib/libqgis_core.dylib"
    -change "/Users/bhattgopal/dev/cpp/qgis0.9_pihm2.0/build/src/gui/libqgis_gui.dylib" "@executable_path/lib/libqgis_gui.dylib"
    "$ENV{DESTDIR}/Users/bhattgopal/apps/qgis0.9.0.app/Contents/MacOS/lib/qgis/libgridmakerplugin.so")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" MATCHES "^(Unspecified)$")