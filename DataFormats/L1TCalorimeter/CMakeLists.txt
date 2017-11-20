add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1TCalorimetersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1TCalorimeter/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1TCalorimetersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1TCalorimeter/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1TCalorimeter/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1TCalorimeter/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1TCalorimetersrcclassesh")

add_library(DataFormatsL1TCalorimeter OBJECT 
  src/CaloEmCand.cc
  src/CaloCluster.cc
  src/CaloStage1Cluster.cc
  src/CaloTower.cc
  src/CaloRegion.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1TCalorimetersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1TCalorimeter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1TCalorimeter PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1TCalorimeter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1TCalorimeter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1TCalorimeter PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1TCalorimeter PUBLIC /usr/include/boost/regex/)

