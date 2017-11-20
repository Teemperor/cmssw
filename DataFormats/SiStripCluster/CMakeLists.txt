add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiStripClustersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiStripCluster/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiStripClustersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiStripCluster/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiStripCluster/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiStripCluster/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiStripClustersrcclassesh")

add_library(DataFormatsSiStripCluster OBJECT 
  src/SiStripCluster.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiStripClustersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiStripCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiStripCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiStripCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiStripCluster PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiStripCluster PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiStripCluster PUBLIC /usr/include/boost/regex/)

