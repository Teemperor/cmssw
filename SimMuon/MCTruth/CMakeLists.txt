add_subdirectory(test)
add_subdirectory(plugins)
add_library(SimMuonMCTruth OBJECT 
  src/GEMHitAssociator.cc
  src/MuonToSimAssociatorByHits.cc
  src/MuonAssociatorByHitsHelper.cc
  src/DTHitAssociator.cc
  src/PSimHitMap.cc
  src/TrackerMuonHitExtractor.cc
  src/MuonTruth.cc
  src/MuonAssociatorByHits.cc
  src/RPCHitAssociator.cc
  src/MuonToSimAssociatorBase.cc
  src/CSCHitAssociator.cc
  src/CSCTruthTest.cc
)

target_include_directories(SimMuonMCTruth PUBLIC /usr/include/boost/python/)
target_include_directories(SimMuonMCTruth PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimMuonMCTruth PUBLIC /usr/include/python2.7/)
target_include_directories(SimMuonMCTruth PUBLIC /usr/include/root/)
target_include_directories(SimMuonMCTruth PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimMuonMCTruth PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimMuonMCTruth PUBLIC /usr/include/boost/serialization/)
target_include_directories(SimMuonMCTruth PUBLIC /usr/include/boost/)
target_include_directories(SimMuonMCTruth PUBLIC /usr/include/boost/regex/)

