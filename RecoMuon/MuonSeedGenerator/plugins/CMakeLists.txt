add_library(RecoMuonMuonSeedGeneratorPlugins OBJECT 
  SETMuonSeedProducer.cc
  SealModule.cc
  MuonSeedProducer.cc
  CosmicMuonSeedGenerator.cc
  MuonSeedGenerator.cc
  MuonSeedMerger.cc
)

target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMuonSeedGeneratorPlugins PUBLIC /usr/include/boost/regex/)

