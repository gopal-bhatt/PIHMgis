# Install script for directory: /Users/bhattgopal/dev/cpp/qgis_1.0.2

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

FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/qgis" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/qgsconfig.h")
FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/AUTHORS")
FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/SPONSORS")
FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/INSTALL")
FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/qgis/doc" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/CODING")
FILE(INSTALL DESTINATION "/Users/bhattgopal/apps/qgis1.0.2.app/Contents/MacOS/man/man1" TYPE FILE COMPONENTS "Unspecified" FILES "/Users/bhattgopal/dev/cpp/qgis_1.0.2/qgis.man")
IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/src/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/doc/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/images/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/resources/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/i18n/cmake_install.cmake")
  INCLUDE("/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/tools/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)
IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)
FILE(WRITE "/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/Users/bhattgopal/dev/cpp/qgis_1.0.2/build/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
