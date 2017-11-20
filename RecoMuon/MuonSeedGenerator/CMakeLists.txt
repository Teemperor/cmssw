add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoMuonMuonSeedGenerator OBJECT 
  src/RPCSeedGenerator.cc
  src/MuonOverlapSeedFromRecHits.cc
  src/SETSeedFinder.cc
  src/RPCSeedOverlapper.cc
  src/MuonSeedCreator.cc
  src/RPCSeedPattern.cc
  src/MuonSeedFinder.cc
  src/MuonSeedBuilder.cc
  src/MuonSeedOrcaPatternRecognition.cc
  src/MuonDTSeedFromRecHits.cc
  src/MuonSeedCleaner.cc
  src/SETPatternRecognition.cc
  src/RPCSeedrecHitFinder.cc
  src/MuonSeedVPatternRecognition.cc
  src/SETFilter.cc
  src/RPCSeedLayerFinder.cc
  src/MuonSeedPtExtractor.cc
  src/MuonCSCSeedFromRecHits.cc
  src/MuonSeedSimpleCleaner.cc
  src/RPCCosmicSeedrecHitFinder.cc
  src/RPCSeedFinder.cc
)

target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/root/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonMuonSeedGenerator PUBLIC /usr/include/boost/regex/)

