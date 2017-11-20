add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsGeometryCommonDetAlgosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/GeometryCommonDetAlgo/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsGeometryCommonDetAlgosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/GeometryCommonDetAlgo/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/GeometryCommonDetAlgo/src/classes.h /home/teemperor/cms/cmssw/DataFormats/GeometryCommonDetAlgo/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsGeometryCommonDetAlgosrcclassesh")

add_library(DataFormatsGeometryCommonDetAlgo OBJECT 
  src/PerpendicularBoundPlaneBuilder.cc
  src/TransverseBoundPlaneFactory.cc
  ${CMAKE_BINARY_DIR}/DataFormatsGeometryCommonDetAlgosrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsGeometryCommonDetAlgo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsGeometryCommonDetAlgo PUBLIC /usr/include/root/)
target_include_directories(DataFormatsGeometryCommonDetAlgo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsGeometryCommonDetAlgo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsGeometryCommonDetAlgo PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsGeometryCommonDetAlgo PUBLIC /usr/include/boost/regex/)

