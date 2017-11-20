add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimMuonCSCDigitizer OBJECT 
  src/CSCAnalogSignal.cc
  src/CSCDigitizer.cc
  src/CSCDbStripConditions.cc
  src/CSCStripAmpResponse.cc
  src/CSCDetectorHit.cc
  src/CSCCrossGap.cc
  src/CSCWireElectronicsSim.cc
  src/CSCConfigurableStripConditions.cc
  src/CSCStripHitSim.cc
  src/CSCNeutronWriter.cc
  src/CSCBaseElectronicsSim.cc
  src/CSCStripConditions.cc
  src/CSCWireHitSim.cc
  src/CSCDriftParam.cc
  src/CSCDigiDump.cc
  src/CSCStripElectronicsSim.cc
  src/CSCDriftSim.cc
  src/CSCDriftParamHighB.cc
  src/CSCDigiProducer.cc
  src/CSCNeutronReader.cc
  src/CSCDriftParamLowB.cc
  src/CSCCrosstalkGenerator.cc
  src/CSCGasCollisions.cc
)

target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/root/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonCSCDigitizer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/boost/)
target_include_directories(SimMuonCSCDigitizer PUBLIC /usr/include/boost/regex/)

