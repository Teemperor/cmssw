add_subdirectory(plugins)
add_library(L1TriggerRegionalCaloTrigger OBJECT 
  src/L1RCTJetSummaryCard.cc
  src/L1RCTReceiverCard.cc
  src/L1RCTCrate.cc
  src/L1RCT.cc
  src/L1RCTLookupTables.cc
  src/L1RCTORCAMap.cc
  src/L1RCTElectronIsolationCard.cc
  src/L1RCTRegion.cc
  src/L1RCTNeighborMap.cc
)

target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerRegionalCaloTrigger PUBLIC /usr/include/boost/regex/)

