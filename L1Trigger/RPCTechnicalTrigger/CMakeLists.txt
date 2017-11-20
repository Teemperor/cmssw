add_library(L1TriggerRPCTechnicalTrigger OBJECT 
  src/RBCInput.cc
  src/TTUTwoORLogic.cc
  src/RBCBoardSpecsIO.cc
  src/RBCLinkBoardSignal.cc
  src/ProcessTestSignal.cc
  src/RBCLinkBoardGLSignal.cc
  src/RPCWheelMap.cc
  src/TTUWedgeORLogic.cc
  src/RBCPatternLogic.cc
  src/TTUSectorORLogic.cc
  src/TTUConfigurator.cc
  src/RBCProcessTestSignal.cc
  src/TTUPointingLogic.cc
  src/RBCChamberORLogic.cc
  src/RPCLogicUnit.cc
  src/LogicImp.cc
  src/TTUBasicConfig.cc
  src/RBCEmulator.cc
  src/RPCTechnicalTrigger.cc
  src/TTUEmulator.cc
  src/RBCTestLogic.cc
  src/RBCBasicConfig.cc
  src/RBCProcessRPCSimDigis.cc
  src/TTUTrackingAlg.cc
  src/TTUGlobalSignal.cc
  src/RBCLogicUnit.cc
  src/RPCWheel.cc
  src/RBCProcessRPCDigis.cc
  src/RPCData.cc
  src/TTULogicUnit.cc
  src/RBCId.cc
  src/TTUInput.cc
  src/TTUBoardSpecsIO.cc
)

target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerRPCTechnicalTrigger PUBLIC /usr/include/boost/regex/)

