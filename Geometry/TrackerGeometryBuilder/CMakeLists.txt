add_subdirectory(test)
add_subdirectory(plugins)
add_library(GeometryTrackerGeometryBuilder OBJECT 
  src/StackGeomDet.cc
  src/TrackerGeometry.cc
  src/PixelTopologyBuilder.cc
  src/StripGeomDetUnit.cc
  src/trackerHierarchy.cc
  src/PixelGeomDetUnit.cc
  src/StripTopologyBuilder.cc
  src/TrackerGeomBuilderFromGeometricDet.cc
  src/StripGeomDetType.cc
  src/PixelGeomDetType.cc
  src/ProxyPixelTopology.cc
  src/ProxyStripTopology.cc
  src/ES_TrackerGeometry.cc
  src/PlaneBuilderForGluedDet.cc
  src/PlaneBuilderFromGeometricDet.cc
  src/RectangularPixelTopology.cc
  src/TrackerParametersFromDD.cc
)

target_include_directories(GeometryTrackerGeometryBuilder PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryTrackerGeometryBuilder PUBLIC /usr/include/root/)
target_include_directories(GeometryTrackerGeometryBuilder PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryTrackerGeometryBuilder PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryTrackerGeometryBuilder PUBLIC /usr/include/boost/)
target_include_directories(GeometryTrackerGeometryBuilder PUBLIC /usr/include/boost/regex/)

