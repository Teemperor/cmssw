add_subdirectory(plugins)
add_library(RecoMuonTrackerSeedGenerator OBJECT 
  src/TrackerSeedGenerator.cc
  src/TrackerSeedGeneratorFactory.cc
  src/RedundantSeedCleaner.cc
  src/L1MuonRegionProducer.cc
  src/L1MuonPixelTrackFitter.cc
  src/L1MuonSeedsMerger.cc
  src/TrackerSeedCleaner.cc
)

target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/python2.7/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/boost/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/eigen3/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/boost/python/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/root/)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoMuonTrackerSeedGenerator PUBLIC /usr/include/boost/regex/)

