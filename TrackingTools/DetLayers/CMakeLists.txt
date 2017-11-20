add_subdirectory(test)
add_library(TrackingToolsDetLayers OBJECT 
  src/DetLayerGeometry.cc
  src/DetRodOneR.cc
  src/ForwardDetRing.cc
  src/NavigationSchool.cc
  src/GeometricSearchDet.cc
  src/CylinderBuilderFromDet.cc
  src/ForwardRingDiskBuilderFromDet.cc
  src/BarrelDetLayer.cc
  src/DetLayer.cc
  src/TkLayerLess.cc
  src/ForwardDetLayer.cc
  src/GeomDetCompatibilityChecker.cc
  src/RodPlaneBuilderFromDet.cc
  src/DetRod.cc
  src/ForwardDetRingOneZ.cc
)

target_include_directories(TrackingToolsDetLayers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsDetLayers PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsDetLayers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsDetLayers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsDetLayers PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsDetLayers PUBLIC /usr/include/boost/regex/)

