add_library(RecoTrackerTkSeedGeneratorPlugins OBJECT 
  MultiHitFromChi2EDProducer.cc
  ClusterCheckerEDProducer.cc
  SeedFromConsecutiveHitsCreator.cc
  SealModules.cc
  SeedGeneratorFromProtoTracksEDProducer.cc
  SeedFromConsecutiveHitsTripletOnlyCreator.cc
  MultiHitGeneratorFromChi2.cc
  SeedFromConsecutiveHitsStraightLineCreator.cc
  CombinedMultiHitGenerator.cc
  SeedCombiner.cc
  SeedGeneratorFromRegionHitsEDProducer.cc
)

target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkSeedGeneratorPlugins PUBLIC /usr/include/boost/regex/)

