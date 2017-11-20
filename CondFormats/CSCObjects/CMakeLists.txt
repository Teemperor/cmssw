add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsCSCObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/CSCObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsCSCObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/CSCObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/CSCObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/CSCObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsCSCObjectssrcclassesh")

add_library(CondFormatsCSCObjects OBJECT 
  src/CSCIdentifier.cc
  src/T_EventSetup_CSCChamberIndex.cc
  src/T_EventSetup_CSCL1TPParameters.cc
  src/T_EventSetup_CSCChamberMap.cc
  src/CSCDBGains.cc
  src/CSCReadoutMappingFromFile.cc
  src/CSCTriggerSimpleMapping.cc
  src/T_EventSetup_CSCBadStrips.cc
  src/CSCReadoutMappingForSliceTest.cc
  src/T_EventSetup_CSCReadoutMapping.cc
  src/T_EventSetup_CSCBadChambers.cc
  src/T_EventSetup_CSCcrosstalk.cc
  src/T_EventSetup_CSCDBGains.cc
  src/CSCNoiseMatrix.cc
  src/CSCDBNoiseMatrix.cc
  src/T_EventSetup_CSCDBL1TPParameters.cc
  src/T_EventSetup_CSCTriggerMapping.cc
  src/CSCGains.cc
  src/CSCDBChipSpeedCorrection.cc
  src/CSCTriggerElectronicsMappingFromFile.cc
  src/CSCDQM_DCSData.cc
  src/CSCMapItem.cc
  src/T_EventSetup_CSCDBChipSpeedCorrection.cc
  src/CSCChannelTranslator.cc
  src/T_EventSetup_CSCDBNoiseMatrix.cc
  src/T_EventSetup_CSCCrateMap.cc
  src/CSCDBGasGainCorrection.cc
  src/CSCBadChambers.cc
  src/T_EventSetup_CSCChamberTimeCorrections.cc
  src/T_EventSetup_CSCNoiseMatrix.cc
  src/T_EventSetup_CSCGains.cc
  src/CSCChamberMap.cc
  src/CSCChamberIndex.cc
  src/T_EventSetup_CSCDQM_DCSData.cc
  src/CSCTriggerMapping.cc
  src/CSCChamberTimeCorrections.cc
  src/CSCcrosstalk.cc
  src/T_EventSetup_CSCIdentifier.cc
  src/CSCPedestals.cc
  src/CSCDBPedestals.cc
  src/CSCReadoutMapping.cc
  src/CSCTriggerElectronicsMapping.cc
  src/T_EventSetup_CSCPedestals.cc
  src/T_EventSetup_CSCDBCrosstalk.cc
  src/T_EventSetup_CSCBadWires.cc
  src/T_EventSetup_CSCDDUMap.cc
  src/T_EventSetup_CSCDBGasGainCorrection.cc
  src/CSCTriggerMappingFromFile.cc
  src/CSCDDUMap.cc
  src/CSCDBL1TPParameters.cc
  src/CSCCrateMap.cc
  src/T_EventSetup_CSCDBPedestals.cc
  src/CSCobject.cc
  src/CSCL1TPParameters.cc
  src/CSCBadStrips.cc
  src/CSCDBCrosstalk.cc
  src/CSCBadWires.cc
  ${CMAKE_BINARY_DIR}/CondFormatsCSCObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsCSCObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsCSCObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsCSCObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsCSCObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsCSCObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsCSCObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsCSCObjects PUBLIC /usr/include/boost/regex/)

