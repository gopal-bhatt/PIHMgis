########################################################
# Files

SET (pihmgis_SRCS
     pihmgis.cpp
     pihmgisgui.cpp
	pihmLIBS/helpDialog/helpdialog.cpp
	pihmRasterLIBS/avexec32.h
	pihmRasterLIBS/avcalls_null.cpp
	pihmRasterLIBS/gioapi.h
	pihmRasterLIBS/gridio.h
	pihmRasterLIBS/gridio_null.cpp
	pihmRasterLIBS/lsm.h
	pihmRasterLIBS/lsmcom.cpp
	pihmRasterLIBS/callocate.cpp
	pihmRasterLIBS/gridio.cpp
	pihmRasterLIBS/gridio.h
	pihmRasterLIBS/flood.h
	pihmRasterLIBS/flood.cpp
	pihmRasterLIBS/setdir.h
	pihmRasterLIBS/setdir.cpp
	pihmRasterLIBS/aread8.h
	pihmRasterLIBS/aread8.cpp
	pihmRasterLIBS/streamDefinition.h
	pihmRasterLIBS/streamDefinition.cpp
	pihmRasterLIBS/streamSegmentation.h
	pihmRasterLIBS/streamSegmentation.cpp
	pihmRasterLIBS/streamSegmentationShp.h
	pihmRasterLIBS/streamSegmentationShp.cpp
	pihmRasterLIBS/catProcessing.h
	pihmRasterLIBS/catProcessing.cpp
	pihmRasterLIBS/catPoly.h
	pihmRasterLIBS/catPoly.cpp
	RasterProcessing/FillPits/fillpits.cpp	
	RasterProcessing/FlowGrid/flowgrid.cpp
	RasterProcessing/StreamGrid/streamgrid.cpp
	RasterProcessing/LinkGrid/linkgrid.cpp
	RasterProcessing/StreamPolyLine/streampolyline.cpp
	RasterProcessing/CatchmentGrid/catchmentgrid.cpp
	RasterProcessing/CatchmentPolygon/catchmentpolygon.cpp
	pihmLIBS/polygonToPolyline.h
	pihmLIBS/simplifyPolyShp.h
	pihmLIBS/splitLineAtVertices.h
	pihmLIBS/mergeFeatures.h
	VectorProcessing/PolygonToPolyLine/polygontopolylinedialog.cpp
	VectorProcessing/SimplifyLine/simplifylinedialog.cpp
	VectorProcessing/SplitLine/splitlinedialog.cpp
	VectorProcessing/MergeFeatures/mergefeaturesdialog.cpp
	DomainDecomposition/GenerateShapeTopology/generateshapetopology.cpp
	DomainDecomposition/RunTriangle/triangle.cpp
	DomainDecomposition/RunTriangle/runtriangle.cpp
	DomainDecomposition/CreateTINs/createtins.cpp
	pihmLIBS/pickGridValue.h
	pihmLIBS/pickGridValue.cpp
	pihmLIBS/addFID.h
	pihmLIBS/addFID.cpp
	pihmLIBS/addToFromNode.h
	pihmLIBS/addToFromNode.cpp
	pihmLIBS/addSOrder.h
	pihmLIBS/addSOrder.cpp
	pihmLIBS/calDownSegment.h
	pihmLIBS/calDownSegment.cpp
	pihmLIBS/Point.h
	pihmLIBS/Point.cpp
	pihmLIBS/extractRiver4mTIN.h
	pihmLIBS/extractRiver4mTIN.cpp
	DataModelLoader/MeshFile/mshfile.cpp
	DataModelLoader/AttFile/attfile.cpp
	DataModelLoader/RivFile/rivfile.cpp
	DataModelLoader/ParaFile/parafile.cpp
	#PIHM_v2.0/calib.h
	#PIHM_v2.0/calib.cpp
	#PIHM_v2.0/f.h
	PIHM_v2.0/update.cpp
	PIHM_v2.0/f.cpp
	PIHM_v2.0/pihm.h
	PIHM_v2.0/pihm.cpp
	#PIHM_v2.0/print_functions.h
	PIHM_v2.0/print.cpp
	#PIHM_v2.0/initialize.h
	PIHM_v2.0/initialize.cpp
	#PIHM_v2.0/read_alloc.h
	PIHM_v2.0/read_alloc.cpp
	#PIHM_v2.0/et_is.h
	PIHM_v2.0/is_sm_et.cpp
	RunPIHM/runpihm.cpp
	pihmLIBS/generateShape.h
	pihmLIBS/generateShape.cpp
	Analysis/Spatialplot/spatialplot.cpp
	Help/About/about.cpp
)

SET (pihmgis_UIS pihmgisgui.ui
	pihmLIBS/helpDialog/helpdialog.ui
	RasterProcessing/FillPits/fillpits.ui
	RasterProcessing/FlowGrid/flowgrid.ui
	RasterProcessing/StreamGrid/streamgrid.ui
	RasterProcessing/LinkGrid/linkgrid.ui
	RasterProcessing/StreamPolyLine/streampolyline.ui
	RasterProcessing/CatchmentGrid/catchmentgrid.ui
	RasterProcessing/CatchmentPolygon/catchmentpolygon.ui
	VectorProcessing/PolygonToPolyLine/polygontopolylinedialog.ui
	VectorProcessing/SimplifyLine/simplifylinedialog.ui
	VectorProcessing/SplitLine/splitlinedialog.ui
	VectorProcessing/MergeFeatures/mergefeaturesdialog.ui
	DomainDecomposition/GenerateShapeTopology/generateshapetopology.ui
	DomainDecomposition/RunTriangle/runtriangle.ui
	DomainDecomposition/CreateTINs/createtinsdialog.ui
	DataModelLoader/MeshFile/mshfile.ui
	DataModelLoader/AttFile/attfile.ui
	DataModelLoader/RivFile/rivfile.ui
	DataModelLoader/ParaFile/parafile.ui
	RunPIHM/runpihm.ui
	Analysis/SpatialPlot/spatialplot.ui
	Help/About/about.ui
)

SET (pihmgis_MOC_HDRS
     pihmgis.h
     pihmgisgui.h
	pihmLIBS/helpDialog/helpdialog.h
	RasterProcessing/FillPits/fillpits.h
	RasterProcessing/FlowGrid/flowgrid.h
	RasterProcessing/StreamGrid/streamgrid.h
	RasterProcessing/LinkGrid/linkgrid.h
	RasterProcessing/StreamPolyLine/streampolyline.h
	RasterProcessing/CatchmentGrid/catchmentgrid.h
	RasterProcessing/CatchmentPolygon/catchmentpolygon.h
	VectorProcessing/PolygonToPolyLine/polygontopolylinedialog.h
	VectorProcessing/SimplifyLine/simplifylinedialog.h
	VectorProcessing/SplitLine/splitlinedialog.h
	VectorProcessing/MergeFeatures/mergefeaturesdialog.h
	DomainDecomposition/GenerateShapeTopology/generateshapetopology.h
	DomainDecomposition/RunTriangle/runtriangle.h
	DomainDecomposition/CreateTINs/createtins.h
	DataModelLoader/MeshFile/mshfile.h
	DataModelLoader/AttFile/attfile.h
	DataModelLoader/RivFile/rivfile.h
	DataModelLoader/ParaFile/parafile.h
	RunPIHM/runpihm.h
	Analysis/SpatialPlot/spatialplot.h
	Help/About/about.h
)


SET (pihmgis_RCCS  pihmgis.qrc)

########################################################
# Build

QT4_WRAP_UI (pihmgis_UIS_H  ${pihmgis_UIS})

QT4_WRAP_CPP (pihmgis_MOC_SRCS  ${pihmgis_MOC_HDRS})

QT4_ADD_RESOURCES(pihmgis_RCC_SRCS ${pihmgis_RCCS})

ADD_LIBRARY (pihmgisplugin MODULE ${pihmgis_SRCS} ${pihmgis_MOC_SRCS} ${pihmgis_RCC_SRCS} ${pihmgis_UIS_H})

INCLUDE_DIRECTORIES(
     ${CMAKE_CURRENT_BINARY_DIR}
     ../../core ../../core/raster ../../core/renderer ../../core/symbology
     ../../gui
     ..
	/Users/bhattgopal/dev/sundials/include
	/Users/bhattgopal/dev/sundials/include/sundials
	/Users/bhattgopal/dev/sundials/include/cvode
	/Library/Frameworks/GDAL.framework/Headers
)

TARGET_LINK_LIBRARIES(pihmgisplugin
  ${QT_LIBRARIES}
  qgis_core
  qgis_gui
	-L/Users/bhattgopal/dev/sundials/lib
	sundials_cvode
	sundials_nvecserial	
	#lgdal
)


########################################################
# Install

INSTALL(TARGETS pihmgisplugin
  RUNTIME DESTINATION ${QGIS_PLUGIN_DIR}
  LIBRARY DESTINATION ${QGIS_PLUGIN_DIR})

