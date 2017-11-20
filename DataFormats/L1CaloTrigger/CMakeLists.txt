add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1CaloTriggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1CaloTrigger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1CaloTriggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1CaloTrigger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1CaloTrigger/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1CaloTrigger/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1CaloTriggersrcclassesh")

add_library(DataFormatsL1CaloTrigger OBJECT 
  src/L1CaloRegionDetId.cc
  src/L1CaloRegion.cc
  src/L1CaloMipQuietRegion.cc
  src/L1CaloEmCand.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1CaloTriggersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1CaloTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1CaloTrigger PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1CaloTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1CaloTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1CaloTrigger PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1CaloTrigger PUBLIC /usr/include/boost/regex/)

