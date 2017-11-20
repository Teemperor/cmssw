add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsRPCObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/RPCObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsRPCObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/RPCObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/RPCObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/RPCObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsRPCObjectssrcclassesh")

add_library(CondFormatsRPCObjects OBJECT 
  src/RPCObGasMix.cc
  src/TriggerBoardSpec.cc
  src/DBSpecToDetUnit.cc
  src/LinkConnSpec.cc
  src/FebLocationSpec.cc
  src/T_EventSetup_RPCObGas.cc
  src/T_EventSetup_RPCObFebmap.cc
  src/T_EventSetup_RPCDQMObject.cc
  src/RPCRunIOV.cc
  src/LinkBoardElectronicIndex.cc
  src/T_EventSetup_RPCAMCLinkMap.cc
  src/RPCFebConnector.cc
  src/L1RPCHwConfig.cc
  src/RPCDQMObject.cc
  src/T_EventSetup_RPCReadOutMapping.cc
  src/RPCObGasmap.cc
  src/RPCAMCLinkMap.cc
  src/T_EventSetup_RPCMaskedStrips.cc
  src/T_EventSetup_RPCRunIOV.cc
  src/RPCDCCLinkMap.cc
  src/T_EventSetup_RPCObPVSSmap.cc
  src/RPCObFebAssmap.cc
  src/T_EventSetup_RPCObGasmap.cc
  src/FebConnectorSpec.cc
  src/RPCObGas.cc
  src/ChamberStripSpec.cc
  src/TTUBoardSpecs.cc
  src/T_EventSetup_RPCInverseAMCLinkMap.cc
  src/T_EventSetup_RPCInverseLBLinkMap.cc
  src/RPCInverseLBLinkMap.cc
  src/ChamberLocationSpec.cc
  src/T_EventSetup_RPCObFebAssmap.cc
  src/T_EventSetup_RPCDCCLinkMap.cc
  src/T_EventSetup_RPCObUXC.cc
  src/T_EventSetup_TTUBoardSpecs.cc
  src/RPCDCCLink.cc
  src/T_EventSetup_RPCObGasHum.cc
  src/RPCInverseAMCLinkMap.cc
  src/T_EventSetup_RPCLBLinkMap.cc
  src/T_EventSetup_RPCDeadStrips.cc
  src/T_EventSetup_RPCEMap.cc
  src/LinkBoardSpec.cc
  src/RPCLBLink.cc
  src/DccSpec.cc
  src/T_EventSetup_L1RPCHwConfig.cc
  src/RPCObUXC.cc
  src/RPCReadOutMapping.cc
  src/T_EventSetup_RPCObAlignment.cc
  src/RBCBoardSpecs.cc
  src/RPCObPVSSmap.cc
  src/RPCDeadStrips.cc
  src/RPCLBLinkMap.cc
  src/RPCObCond.cc
  src/T_EventSetup_RPCObGasMix.cc
  src/L1RPCConeBuilder.cc
  src/RPCObGasHum.cc
  src/T_EventSetup_L1RPCConeBuilder.cc
  src/T_EventSetup_RPCStripNoises.cc
  src/RPCObFebmap.cc
  src/T_EventSetup_RBCBoardSpecs.cc
  src/RPCAMCLink.cc
  src/RPCStripNoises.cc
  src/T_EventSetup_RPCClusterSize.cc
  src/T_EventSetup_RPCObCond.cc
  src/RPCMaskedStrips.cc
  src/RPCClusterSize.cc
  src/RPCObAlignment.cc
  ${CMAKE_BINARY_DIR}/CondFormatsRPCObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsRPCObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsRPCObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsRPCObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsRPCObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsRPCObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsRPCObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsRPCObjects PUBLIC /usr/include/boost/regex/)

