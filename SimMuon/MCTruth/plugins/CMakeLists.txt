add_library(SimMuonMCTruthPlugins OBJECT 
  MuonToTrackingParticleAssociatorEDProducer.cc
  SealModule.cc
  SeedToTrackProducer.cc
  MuonTrackProducer.cc
  SimMuFilter.cc
  MuonToTrackingParticleAssociatorByHitsImpl.cc
  MuonAssociatorEDProducer.cc
)

target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/root/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/boost/)
target_include_directories(SimMuonMCTruthPlugins PUBLIC /usr/include/boost/regex/)

