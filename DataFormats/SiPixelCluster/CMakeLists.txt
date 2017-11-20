add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiPixelClustersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiPixelCluster/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiPixelClustersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiPixelCluster/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiPixelCluster/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiPixelCluster/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiPixelClustersrcclassesh")

add_library(DataFormatsSiPixelCluster OBJECT 
  src/SiPixelCluster.cc
  src/SiPixelClusterShapeCache.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiPixelClustersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiPixelCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiPixelCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiPixelCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiPixelCluster PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiPixelCluster PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiPixelCluster PUBLIC /usr/include/boost/regex/)

