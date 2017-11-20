add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalTriggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1GlobalTrigger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalTriggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1GlobalTrigger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1GlobalTrigger/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1GlobalTrigger/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1GlobalTriggersrcclassesh")

add_library(DataFormatsL1GlobalTrigger OBJECT 
  src/L1GtfeWord.cc
  src/L1GtTriggerMenuLite.cc
  src/L1GtTechnicalTriggerRecord.cc
  src/L1GlobalTriggerObjectMapRecord.cc
  src/L1GlobalTriggerEvmReadoutRecord.cc
  src/L1GlobalTriggerReadoutSetup.cc
  src/L1GlobalTriggerReadoutRecord.cc
  src/L1GtObject.cc
  src/L1TcsWord.cc
  src/L1GlobalTriggerRecord.cc
  src/L1GlobalTriggerObjectMaps.cc
  src/L1GtTechnicalTrigger.cc
  src/L1GtFdlWord.cc
  src/L1GtfeExtWord.cc
  src/L1GlobalTriggerObjectMap.cc
  src/L1GtPsbWord.cc
  src/L1GtLogicParser.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalTriggersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1GlobalTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1GlobalTrigger PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1GlobalTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1GlobalTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1GlobalTrigger PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1GlobalTrigger PUBLIC /usr/include/boost/regex/)

