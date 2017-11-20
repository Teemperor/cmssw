add_subdirectory(plugins)
add_library(L1TriggerRPCTrigger OBJECT 
  src/RPCPatternsParser.cc
  src/RPCPacMuon.cc
  src/RPCTriggerBoard.cc
  src/RPCPacTrigger.cc
  src/RPCLogCone.cc
  src/RPCConst.cc
  src/TPatternsGroup.cc
  src/RPCPac.cc
  src/RPCStripsRing.cc
  src/TEPatternsGroup.cc
  src/RPCTBGhostBuster.cc
  src/RPCMuon.cc
  src/RPCBasicTrigConfig.cc
  src/RPCPacBase.cc
  src/RPCTriggerCrate.cc
  src/RPCTBMuon.cc
  src/RPCTCGhostBusterSorter.cc
  src/RPCHalfSorter.cc
  src/RPCTriggerConfiguration.cc
  src/RPCPacManager.cc
  src/TTPatternsGroup.cc
  src/RPCFinalSorter.cc
  src/MuonsGrabber.cc
  src/RPCLogHit.cc
  src/RPCPacData.cc
  src/RPCConeBuilderFromES.cc
)

target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerRPCTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerRPCTrigger PUBLIC /usr/include/boost/regex/)

