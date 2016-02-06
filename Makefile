# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.4

# Default target executed when no arguments are given to make.
default_target: all

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bhattgopal/dev/cpp/qgis0.9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bhattgopal/dev/cpp/qgis0.9/build

# Include the progress variables for this target.
include CMakeFiles/progress.make

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake

# Special rule for the target install/local
install/local/fast: install/local

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool..."
	/usr/bin/cpack --config /Users/bhattgopal/dev/cpp/qgis0.9/build/CPackConfig.cmake

# Special rule for the target package
package/fast: package

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool for source..."
	/usr/bin/cpack --config /Users/bhattgopal/dev/cpp/qgis0.9/build/CPackSourceConfig.cmake

# Special rule for the target package_source
package_source/fast: package_source

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/bhattgopal/dev/cpp/qgis0.9/build/CMakeFiles $(CMAKE_ALL_PROGRESS)
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/bhattgopal/dev/cpp/qgis0.9/build/CMakeFiles 0

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean

# The main clean target
clean/fast: clean

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1

#=============================================================================
# Target rules for targets named svnversion

# Build rule for target.
svnversion: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 svnversion

# fast build rule for target.
svnversion/fast:
	$(MAKE) -f CMakeFiles/svnversion.dir/build.make CMakeFiles/svnversion.dir/build

#=============================================================================
# Target rules for targets named uninstall

# Build rule for target.
uninstall: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 uninstall

# fast build rule for target.
uninstall/fast:
	$(MAKE) -f CMakeFiles/uninstall.dir/build.make CMakeFiles/uninstall.dir/build

#=============================================================================
# Target rules for targets named translations

# Build rule for target.
translations: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 translations

# fast build rule for target.
translations/fast:
	$(MAKE) -f i18n/CMakeFiles/translations.dir/build.make i18n/CMakeFiles/translations.dir/build

#=============================================================================
# Target rules for targets named qgis_core

# Build rule for target.
qgis_core: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 qgis_core

# fast build rule for target.
qgis_core/fast:
	$(MAKE) -f src/core/CMakeFiles/qgis_core.dir/build.make src/core/CMakeFiles/qgis_core.dir/build

#=============================================================================
# Target rules for targets named ui

# Build rule for target.
ui: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ui

# fast build rule for target.
ui/fast:
	$(MAKE) -f src/ui/CMakeFiles/ui.dir/build.make src/ui/CMakeFiles/ui.dir/build

#=============================================================================
# Target rules for targets named qgis_gui

# Build rule for target.
qgis_gui: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 qgis_gui

# fast build rule for target.
qgis_gui/fast:
	$(MAKE) -f src/gui/CMakeFiles/qgis_gui.dir/build.make src/gui/CMakeFiles/qgis_gui.dir/build

#=============================================================================
# Target rules for targets named qgis

# Build rule for target.
qgis: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 qgis

# fast build rule for target.
qgis/fast:
	$(MAKE) -f src/app/CMakeFiles/qgis.dir/build.make src/app/CMakeFiles/qgis.dir/build

#=============================================================================
# Target rules for targets named qgis_help

# Build rule for target.
qgis_help: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 qgis_help

# fast build rule for target.
qgis_help/fast:
	$(MAKE) -f src/helpviewer/CMakeFiles/qgis_help.dir/build.make src/helpviewer/CMakeFiles/qgis_help.dir/build

#=============================================================================
# Target rules for targets named ogrprovider

# Build rule for target.
ogrprovider: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 ogrprovider

# fast build rule for target.
ogrprovider/fast:
	$(MAKE) -f src/providers/ogr/CMakeFiles/ogrprovider.dir/build.make src/providers/ogr/CMakeFiles/ogrprovider.dir/build

#=============================================================================
# Target rules for targets named wmsprovider

# Build rule for target.
wmsprovider: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 wmsprovider

# fast build rule for target.
wmsprovider/fast:
	$(MAKE) -f src/providers/wms/CMakeFiles/wmsprovider.dir/build.make src/providers/wms/CMakeFiles/wmsprovider.dir/build

#=============================================================================
# Target rules for targets named delimitedtextprovider

# Build rule for target.
delimitedtextprovider: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 delimitedtextprovider

# fast build rule for target.
delimitedtextprovider/fast:
	$(MAKE) -f src/providers/delimitedtext/CMakeFiles/delimitedtextprovider.dir/build.make src/providers/delimitedtext/CMakeFiles/delimitedtextprovider.dir/build

#=============================================================================
# Target rules for targets named gpxprovider

# Build rule for target.
gpxprovider: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gpxprovider

# fast build rule for target.
gpxprovider/fast:
	$(MAKE) -f src/providers/gpx/CMakeFiles/gpxprovider.dir/build.make src/providers/gpx/CMakeFiles/gpxprovider.dir/build

#=============================================================================
# Target rules for targets named wfsprovider

# Build rule for target.
wfsprovider: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 wfsprovider

# fast build rule for target.
wfsprovider/fast:
	$(MAKE) -f src/providers/wfs/CMakeFiles/wfsprovider.dir/build.make src/providers/wfs/CMakeFiles/wfsprovider.dir/build

#=============================================================================
# Target rules for targets named copyrightlabelplugin

# Build rule for target.
copyrightlabelplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 copyrightlabelplugin

# fast build rule for target.
copyrightlabelplugin/fast:
	$(MAKE) -f src/plugins/copyright_label/CMakeFiles/copyrightlabelplugin.dir/build.make src/plugins/copyright_label/CMakeFiles/copyrightlabelplugin.dir/build

#=============================================================================
# Target rules for targets named delimitedtextplugin

# Build rule for target.
delimitedtextplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 delimitedtextplugin

# fast build rule for target.
delimitedtextplugin/fast:
	$(MAKE) -f src/plugins/delimited_text/CMakeFiles/delimitedtextplugin.dir/build.make src/plugins/delimited_text/CMakeFiles/delimitedtextplugin.dir/build

#=============================================================================
# Target rules for targets named gridmakerplugin

# Build rule for target.
gridmakerplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gridmakerplugin

# fast build rule for target.
gridmakerplugin/fast:
	$(MAKE) -f src/plugins/grid_maker/CMakeFiles/gridmakerplugin.dir/build.make src/plugins/grid_maker/CMakeFiles/gridmakerplugin.dir/build

#=============================================================================
# Target rules for targets named northarrowplugin

# Build rule for target.
northarrowplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 northarrowplugin

# fast build rule for target.
northarrowplugin/fast:
	$(MAKE) -f src/plugins/north_arrow/CMakeFiles/northarrowplugin.dir/build.make src/plugins/north_arrow/CMakeFiles/northarrowplugin.dir/build

#=============================================================================
# Target rules for targets named scalebarplugin

# Build rule for target.
scalebarplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 scalebarplugin

# fast build rule for target.
scalebarplugin/fast:
	$(MAKE) -f src/plugins/scale_bar/CMakeFiles/scalebarplugin.dir/build.make src/plugins/scale_bar/CMakeFiles/scalebarplugin.dir/build

#=============================================================================
# Target rules for targets named gpsimporterplugin

# Build rule for target.
gpsimporterplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 gpsimporterplugin

# fast build rule for target.
gpsimporterplugin/fast:
	$(MAKE) -f src/plugins/gps_importer/CMakeFiles/gpsimporterplugin.dir/build.make src/plugins/gps_importer/CMakeFiles/gpsimporterplugin.dir/build

#=============================================================================
# Target rules for targets named wfsplugin

# Build rule for target.
wfsplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 wfsplugin

# fast build rule for target.
wfsplugin/fast:
	$(MAKE) -f src/plugins/wfs/CMakeFiles/wfsplugin.dir/build.make src/plugins/wfs/CMakeFiles/wfsplugin.dir/build

#=============================================================================
# Target rules for targets named georefplugin

# Build rule for target.
georefplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 georefplugin

# fast build rule for target.
georefplugin/fast:
	$(MAKE) -f src/plugins/georeferencer/CMakeFiles/georefplugin.dir/build.make src/plugins/georeferencer/CMakeFiles/georefplugin.dir/build

#=============================================================================
# Target rules for targets named pihmgisplugin

# Build rule for target.
pihmgisplugin: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 pihmgisplugin

# fast build rule for target.
pihmgisplugin/fast:
	$(MAKE) -f src/plugins/pihm_gis/CMakeFiles/pihmgisplugin.dir/build.make src/plugins/pihm_gis/CMakeFiles/pihmgisplugin.dir/build

#=============================================================================
# Target rules for targets named Info.plist

# Build rule for target.
Info.plist: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Info.plist

# fast build rule for target.
Info.plist/fast:
	$(MAKE) -f src/mac/Contents/CMakeFiles/Info.plist.dir/build.make src/mac/Contents/CMakeFiles/Info.plist.dir/build

#=============================================================================
# Target rules for targets named msexport

# Build rule for target.
msexport: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 msexport

# fast build rule for target.
msexport/fast:
	$(MAKE) -f tools/mapserver_export/CMakeFiles/msexport.dir/build.make tools/mapserver_export/CMakeFiles/msexport.dir/build

# Help Target
help::
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... list_install_components"
	@echo "... package"
	@echo "... package_source"
	@echo "... rebuild_cache"
	@echo "... svnversion"
	@echo "... uninstall"
	@echo "... translations"
	@echo "... qgis_core"
	@echo "... ui"
	@echo "... qgis_gui"
	@echo "... qgis"
	@echo "... qgis_help"
	@echo "... ogrprovider"
	@echo "... wmsprovider"
	@echo "... delimitedtextprovider"
	@echo "... gpxprovider"
	@echo "... wfsprovider"
	@echo "... copyrightlabelplugin"
	@echo "... delimitedtextplugin"
	@echo "... gridmakerplugin"
	@echo "... northarrowplugin"
	@echo "... scalebarplugin"
	@echo "... gpsimporterplugin"
	@echo "... wfsplugin"
	@echo "... georefplugin"
	@echo "... pihmgisplugin"
	@echo "... Info.plist"
	@echo "... msexport"



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
