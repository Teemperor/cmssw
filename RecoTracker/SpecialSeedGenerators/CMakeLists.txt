add_library(RecoTrackerSpecialSeedGenerators OBJECT 
  src/SeedGeneratorForCosmics.cc
  src/BeamHaloPairGenerator.cc
  src/OutsideInMuonSeeder.cc
  src/SealModules.cc
  src/CtfSpecialSeedGenerator.cc
  src/CRackSeedGenerator.cc
  src/CosmicSeedCreator.cc
  src/CosmicRegionalSeedGenerator.cc
  src/SimpleCosmicBONSeeder.cc
  src/SeedGeneratorForCRack.cc
  src/CosmicTrackingRegion.cc
  src/MuonReSeeder.cc
  src/SeedFromGenericPairOrTriplet.cc
  src/GenericTripletGenerator.cc
  src/GenericPairGenerator.cc
  src/CosmicSeedGenerator.cc
)

target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/eigen3/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerSpecialSeedGenerators PUBLIC /usr/include/boost/regex/)

