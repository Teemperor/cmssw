add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsL1TObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/L1TObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsL1TObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/L1TObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/L1TObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/L1TObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsL1TObjectssrcclassesh")

add_library(CondFormatsL1TObjects OBJECT 
  src/L1GtPrescaleFactors.cc
  src/L1TUtmCondition.cc
  src/LUT.cc
  src/L1GtTriggerMenu.cc
  src/L1GtCorrelationTemplate.cc
  src/L1TriggerKeyListExt.cc
  src/L1GtHfBitCountsTemplate.cc
  src/T_EventSetup_L1MuCSCTFAlignment.cc
  src/T_EventSetup_L1MuDTTFParameters.cc
  src/L1MuDTEtaPatternLut.cc
  src/T_EventSetup_L1GtPsbSetup.cc
  src/T_EventSetup_L1RCTParameters.cc
  src/T_EventSetup_CaloConfig.cc
  src/T_EventSetup_L1MuDTPhiLut.cc
  src/T_EventSetup_L1RCTChannelMask.cc
  src/L1RPCHsbConfig.cc
  src/L1MuDTExtLut.cc
  src/L1MuCSCPtLut.cc
  src/T_EventSetup_L1TMTFOverlapParams.cc
  src/T_EventSetup_L1TriggerKeyList.cc
  src/L1MuDTQualPatternLut.cc
  src/L1GtBoard.cc
  src/T_EventSetup_L1MuDTEtaPatternLut.cc
  src/L1GtStableParameters.cc
  src/L1GtParameters.cc
  src/T_EventSetup_L1GtPrescaleFactors.cc
  src/L1TUtmCut.cc
  src/L1TriggerKeyExt.cc
  src/T_EventSetup_L1MuDTTFMasks.cc
  src/L1GtCaloTemplate.cc
  src/T_EventSetup_L1TUtmCut.cc
  src/L1CaloHcalScale.cc
  src/T_EventSetup_L1GtTriggerMask.cc
  src/L1TMuonEndCapParams.cc
  src/L1TUtmObject.cc
  src/T_EventSetup_L1TUtmScale.cc
  src/T_EventSetup_L1TriggerKeyListExt.cc
  src/T_EventSetup_L1GtBoardMaps.cc
  src/T_EventSetup_L1TUtmTriggerMenu.cc
  src/T_EventSetup_L1GtStableParameters.cc
  src/T_EventSetup_L1TGlobalPrescalesVetos.cc
  src/T_EventSetup_L1TriggerKey.cc
  src/L1RCTParameters.cc
  src/T_EventSetup_L1MuDTPtaLut.cc
  src/L1MuCSCTFConfiguration.cc
  src/T_EventSetup_L1TGlobalParameters.cc
  src/T_EventSetup_L1CaloEtScale.cc
  src/T_EventSetup_L1MuCSCTFConfiguration.cc
  src/T_EventSetup_L1TMuonEndCapParams.cc
  src/L1TMuonBarrelParams.cc
  src/L1TMuonEndCapForest.cc
  src/L1TMuonOverlapParams.cc
  src/CaloParams.cc
  src/T_EventSetup_L1GtParameters.cc
  src/L1GtMuonTemplate.cc
  src/T_EventSetup_L1RPCBxOrConfig.cc
  src/L1TUtmAlgorithm.cc
  src/L1GtTriggerMask.cc
  src/T_EventSetup_L1RPCHsbConfig.cc
  src/T_EventSetup_L1RPCConfig.cc
  src/L1MuDTPhiLut.cc
  src/L1TUtmScale.cc
  src/T_EventSetup_L1TUtmObject.cc
  src/L1GctJetFinderParams.cc
  src/L1MuDTTFParameters.cc
  src/T_EventSetup_CaloParams.cc
  src/T_EventSetup_L1TMuonEndCapForest.cc
  src/L1TGlobalPrescalesVetos.cc
  src/T_EventSetup_L1MuTriggerScales.cc
  src/L1GtExternalTemplate.cc
  src/L1TriggerLutFile.cc
  src/L1TUtmCutValue.cc
  src/T_EventSetup_L1MuDTExtLut.cc
  src/L1MuDTEtaPattern.cc
  src/L1GtHfRingEtSumsTemplate.cc
  src/T_EventSetup_L1MuDTQualPatternLut.cc
  src/T_EventSetup_L1TUtmCutValue.cc
  src/T_EventSetup_L1CaloEcalScale.cc
  src/T_EventSetup_L1TriggerKeyExt.cc
  src/L1MuDTAssParam.cc
  src/T_EventSetup_L1GctChannelMask.cc
  src/L1GctChannelMask.cc
  src/L1GtBoardMaps.cc
  src/T_EventSetup_L1RPCConeDefinition.cc
  src/L1TGlobalParameters.cc
  src/L1RPCConfig.cc
  src/T_EventSetup_L1MuGMTScales.cc
  src/T_EventSetup_L1TMuonBarrelParams.cc
  src/T_EventSetup_L1MuCSCPtLut.cc
  src/L1GtEnergySumTemplate.cc
  src/T_EventSetup_L1CaloGeometry.cc
  src/T_EventSetup_L1RCTNoisyChannelMask.cc
  src/L1GtCastorTemplate.cc
  src/GlobalStableParameters.cc
  src/L1TUtmTriggerMenu.cc
  src/L1CaloEtScale.cc
  src/L1GtAlgorithm.cc
  src/L1GtPsbConfig.cc
  src/L1MuDTPtaLut.cc
  src/L1MuDTExtParam.cc
  src/T_EventSetup_L1TUtmAlgorithm.cc
  src/L1GtBptxTemplate.cc
  src/L1CaloEcalScale.cc
  src/T_EventSetup_L1TUtmCondition.cc
  src/L1MuDTTFMasks.cc
  src/L1GtJetCountsTemplate.cc
  src/L1TUtmBin.cc
  src/T_EventSetup_L1GctJetFinderParams.cc
  src/L1TMuonGlobalParams.cc
  src/T_EventSetup_L1TGMTParams.cc
  src/T_EventSetup_L1MuGMTParameters.cc
  src/T_EventSetup_L1MuTriggerPtScale.cc
  src/L1TriggerKeyList.cc
  src/T_EventSetup_L1GtTriggerMenu.cc
  src/T_EventSetup_L1CaloHcalScale.cc
  src/L1TriggerKey.cc
  src/L1RPCBxOrConfig.cc
  src/L1GtDefinitions.cc
  src/T_EventSetup_L1TUtmBin.cc
  src/L1GtPsbSetup.cc
  src/L1CaloGeometry.cc
  src/CaloConfig.cc
  src/T_EventSetup_GlobalStableParameters.cc
  src/T_EventSetup_L1MuGMTChannelMask.cc
  src/RPCPattern.cc
  src/L1GtCondition.cc
  ${CMAKE_BINARY_DIR}/CondFormatsL1TObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsL1TObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsL1TObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsL1TObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsL1TObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsL1TObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsL1TObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsL1TObjects PUBLIC /usr/include/boost/regex/)

