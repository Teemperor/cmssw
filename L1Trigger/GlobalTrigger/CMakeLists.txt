add_subdirectory(plugins)
add_library(L1TriggerGlobalTrigger OBJECT 
  src/L1GtEnergySumCondition.cc
  src/L1GtMuonCondition.cc
  src/L1GtEtaPhiConversions.cc
  src/L1GtJetCountsCondition.cc
  src/L1GlobalTriggerGTL.cc
  src/L1GtCorrelationCondition.cc
  src/L1GtCastorCondition.cc
  src/L1GtAlgorithmEvaluation.cc
  src/L1GtHfRingEtSumsCondition.cc
  src/L1GtBptxCondition.cc
  src/L1GtHfBitCountsCondition.cc
  src/L1GtExternalCondition.cc
  src/L1GlobalTriggerFDL.cc
  src/L1GtConditionEvaluation.cc
  src/L1GlobalTriggerPSB.cc
  src/L1GlobalTriggerFunctions.cc
  src/L1GtCaloCondition.cc
)

target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerGlobalTrigger PUBLIC /usr/include/boost/regex/)

