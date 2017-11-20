add_subdirectory(plugins)
add_library(DQMOfflineJetMET OBJECT 
  src/ECALRecHitAnalyzer.cc
  src/SealModule.cc
  src/JetAnalyzer_HeavyIons.cc
  src/JetMETDQMDCSFilter.cc
  src/METAnalyzer.cc
  src/CaloTowerAnalyzer.cc
  src/HCALRecHitAnalyzer.cc
  src/JetAnalyzer_HeavyIons_matching.cc
  src/SUSYDQMAnalyzer.cc
  src/HTMHTAnalyzer.cc
  src/JetAnalyzer.cc
  src/DQMPFCandidateAnalyzer.cc
  src/DataCertificationJetMET.cc
  src/BeamHaloAnalyzer.cc
)

target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/python2.7/)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/boost/)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/boost/python/)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/root/)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMOfflineJetMET PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMOfflineJetMET PUBLIC /usr/include/boost/regex/)

