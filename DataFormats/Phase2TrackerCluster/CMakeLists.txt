add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsPhase2TrackerClustersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerCluster/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsPhase2TrackerClustersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerCluster/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerCluster/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerCluster/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsPhase2TrackerClustersrcclassesh")

add_library(DataFormatsPhase2TrackerCluster OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsPhase2TrackerClustersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsPhase2TrackerCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsPhase2TrackerCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsPhase2TrackerCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsPhase2TrackerCluster PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsPhase2TrackerCluster PUBLIC /usr/include/root/)
target_include_directories(DataFormatsPhase2TrackerCluster PUBLIC /usr/include/boost/regex/)

