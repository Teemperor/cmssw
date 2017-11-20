add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1THGCalsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1THGCal/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1THGCalsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1THGCal/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1THGCal/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1THGCal/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1THGCalsrcclassesh")

add_library(DataFormatsL1THGCal OBJECT 
  src/HGCalMulticluster.cc
  src/HGCalCluster.cc
  src/HGCalTriggerCell.cc
  src/HGCFETriggerDigi.cc
  src/ClusterShapes.cc
  src/HGCalTower.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1THGCalsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1THGCal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1THGCal PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1THGCal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1THGCal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1THGCal PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1THGCal PUBLIC /usr/include/boost/regex/)

