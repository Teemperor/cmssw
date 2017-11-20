add_subdirectory(test)
add_subdirectory(plugins)
add_library(L1TriggerGlobalCaloTrigger OBJECT 
  src/L1GctJetEtCalibrationLut.cc
  src/L1GctRegion.cc
  src/L1GctElectronSorter.cc
  src/L1GctEmLeafCard.cc
  src/L1GctUnsignedInt.cc
  src/L1GctHfEtSumsLut.cc
  src/L1GctJet.cc
  src/L1GctJetFinderBase.cc
  src/L1GctHtMissLut.cc
  src/L1GlobalCaloTrigger.cc
  src/L1GctTdrJetFinder.cc
  src/L1GctLut.cc
  src/L1GctJetSorter.cc
  src/L1GctHfBitCountsLut.cc
  src/L1GctTwosComplement.cc
  src/L1GctWheelEnergyFpga.cc
  src/L1GctJetCount.cc
  src/L1GctJetLeafCard.cc
  src/L1GctGlobalHfSumAlgos.cc
  src/L1GctNullJetFinder.cc
  src/L1GctHardwareJetFinder.cc
  src/L1GctElectronFinalSort.cc
  src/L1GctJetFinalStage.cc
  src/L1GctMet.cc
  src/L1GctWheelJetFpga.cc
  src/L1GctGlobalEnergyAlgos.cc
)

target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerGlobalCaloTrigger PUBLIC /usr/include/boost/regex/)

