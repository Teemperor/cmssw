add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsGeometrySurfacesrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/GeometrySurface/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsGeometrySurfacesrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/GeometrySurface/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/GeometrySurface/src/classes.h /home/teemperor/cms/cmssw/DataFormats/GeometrySurface/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsGeometrySurfacesrcclassesh")

add_library(DataFormatsGeometrySurface OBJECT 
  src/TrapezoidalPlaneBounds.cc
  src/SimpleCylinderBounds.cc
  src/GeneralNSurfaceDelimitedBounds.cc
  src/Cylinder.cc
  src/BoundCylinder.cc
  src/BoundingBox.cc
  src/Cone.cc
  src/LocalError.cc
  src/Plane.cc
  src/TkRotation.cc
  src/BoundSpan.cc
  src/SimpleDiskBounds.cc
  src/RectangularPlaneBounds.cc
  src/BoundDisk.cc
  src/BoundSurface.cc
  src/BoundPlane.cc
  ${CMAKE_BINARY_DIR}/DataFormatsGeometrySurfacesrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsGeometrySurface PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsGeometrySurface PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsGeometrySurface PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsGeometrySurface PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsGeometrySurface PUBLIC /usr/include/root/)
target_include_directories(DataFormatsGeometrySurface PUBLIC /usr/include/boost/regex/)

