add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsEcalDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/EcalDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsEcalDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/EcalDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/EcalDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/EcalDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsEcalDigisrcclassesh")

add_library(DataFormatsEcalDigi OBJECT 
  src/EBSrFlag.cc
  src/EBDataFrame.cc
  src/EcalTriggerPrimitiveSample.cc
  src/EEDataFrame.cc
  src/EcalMGPASample.cc
  src/EcalTimeDigi.cc
  src/EcalEBTriggerPrimitiveDigi.cc
  src/EcalPseudoStripInputDigi.cc
  src/EcalPseudoStripInputSample.cc
  src/ESDataFrame.cc
  src/EESrFlag.cc
  src/EcalDataFrame.cc
  src/EcalPnDiodeDigi.cc
  src/EcalSrFlag.cc
  src/EcalFEMSample.cc
  src/EcalTrigPrimCompactColl.cc
  src/ESSample.cc
  src/EcalEBTriggerPrimitiveSample.cc
  src/EcalMatacqDigi.cc
  src/EcalTriggerPrimitiveDigi.cc
  ${CMAKE_BINARY_DIR}/DataFormatsEcalDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsEcalDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsEcalDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsEcalDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsEcalDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsEcalDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsEcalDigi PUBLIC /usr/include/boost/regex/)

