add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalCaloTriggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1GlobalCaloTrigger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalCaloTriggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1GlobalCaloTrigger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1GlobalCaloTrigger/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1GlobalCaloTrigger/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1GlobalCaloTriggersrcclassesh")

add_library(DataFormatsL1GlobalCaloTrigger OBJECT 
  src/L1GctHFRingEtSums.cc
  src/L1GctEtTotal.cc
  src/L1GctEtMiss.cc
  src/L1GctInternEtSum.cc
  src/L1GctFibreWord.cc
  src/L1GctStaticParameters.cc
  src/L1GctInternEmCand.cc
  src/L1GctCand.cc
  src/L1GctJetCand.cc
  src/L1GctEtHad.cc
  src/L1GctEmCand.cc
  src/L1GctInternJetData.cc
  src/L1GctHFBitCounts.cc
  src/L1GctInternHtMiss.cc
  src/L1GctInternHFData.cc
  src/L1GctJetCounts.cc
  src/L1GctHtMiss.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalCaloTriggersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1GlobalCaloTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1GlobalCaloTrigger PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1GlobalCaloTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1GlobalCaloTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1GlobalCaloTrigger PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1GlobalCaloTrigger PUBLIC /usr/include/boost/regex/)

