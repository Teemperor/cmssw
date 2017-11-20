add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsPhase2ITPixelClustersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Phase2ITPixelCluster/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsPhase2ITPixelClustersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Phase2ITPixelCluster/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Phase2ITPixelCluster/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Phase2ITPixelCluster/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsPhase2ITPixelClustersrcclassesh")

add_library(DataFormatsPhase2ITPixelCluster OBJECT 
  src/Phase2ITPixelCluster.cc
  src/Phase2ITPixelClusterShapeCache.cc
  ${CMAKE_BINARY_DIR}/DataFormatsPhase2ITPixelClustersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsPhase2ITPixelCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsPhase2ITPixelCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsPhase2ITPixelCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsPhase2ITPixelCluster PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsPhase2ITPixelCluster PUBLIC /usr/include/root/)
target_include_directories(DataFormatsPhase2ITPixelCluster PUBLIC /usr/include/boost/regex/)

