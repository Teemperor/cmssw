add_library(L1TriggerL1TNtuplePlugins OBJECT 
  L1MuonRecoTreeProducer.cc
  L1TauRecoTreeProducer.cc
  L1GenTreeProducer.cc
  L1Muon2RecoTreeProducer.cc
  L1MetFilterRecoTreeProducer.cc
  L1EventTreeProducer.cc
  L1ExtraTreeProducer.cc
  L1UpgradeTfMuonTreeProducer.cc
  L1RecoTreeProducer.cc
  L1HOTreeProducer.cc
  L1CaloTowerTreeProducer.cc
  L1UpgradeTreeProducer.cc
  L1ElectronRecoTreeProducer.cc
  L1JetRecoTreeProducer.cc
  L1uGTTreeProducer.cc
  L1MenuTreeProducer.cc
)

target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/eigen3/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerL1TNtuplePlugins PUBLIC /usr/include/boost/regex/)

