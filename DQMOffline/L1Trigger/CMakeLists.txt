add_library(DQMOfflineL1Trigger OBJECT 
  src/L1TRate_Offline.cc
  src/L1TStage2CaloLayer2Offline.cc
  src/L1TFillWithinLimits.cc
  src/L1TEfficiency_Harvesting.cc
  src/L1TEfficiencyHarvesting.cc
  src/L1TBeamConfiguration.cc
  src/L1TDiffHarvesting.cc
  src/L1TEfficiencyMuons_Offline.cc
  src/L1TSync_Offline.cc
  src/L1TEGammaOffline.cc
  src/L1TLSBlock.cc
)

target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineL1Trigger PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMOfflineL1Trigger PUBLIC /usr/include/boost/regex/)

