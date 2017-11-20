add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsGeometryVectorsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/GeometryVector/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsGeometryVectorsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/GeometryVector/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/GeometryVector/src/classes.h /home/teemperor/cms/cmssw/DataFormats/GeometryVector/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsGeometryVectorsrcclassesh")

add_library(DataFormatsGeometryVector OBJECT 
  src/print.cc
  src/TrackingJacobians.cc
  ${CMAKE_BINARY_DIR}/DataFormatsGeometryVectorsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsGeometryVector PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsGeometryVector PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsGeometryVector PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsGeometryVector PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsGeometryVector PUBLIC /usr/include/root/)
target_include_directories(DataFormatsGeometryVector PUBLIC /usr/include/boost/regex/)

