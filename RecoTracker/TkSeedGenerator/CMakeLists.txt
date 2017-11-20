add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoTrackerTkSeedGeneratorsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoTracker/TkSeedGenerator/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoTrackerTkSeedGeneratorsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoTracker/TkSeedGenerator/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoTracker/TkSeedGenerator/src/classes.h /home/teemperor/cms/cmssw/RecoTracker/TkSeedGenerator/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoTrackerTkSeedGeneratorsrcclassesh")

add_library(RecoTrackerTkSeedGenerator OBJECT 
  src/SeedGeneratorFromRegionHits.cc
  src/FastHelix.cc
  src/FastLine.cc
  src/SeedCreatorFactory.cc
  src/MultiHitGenerator.cc
  src/MultiHitGeneratorFromPairAndLayers.cc
  src/FastCircle.cc
  src/SeedFromProtoTrack.cc
  src/ClusterChecker.cc
  src/MultiHitGeneratorFromPairAndLayersFactory.cc
  ${CMAKE_BINARY_DIR}/RecoTrackerTkSeedGeneratorsrcclassesh_rflx.cpp
)

target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/eigen3/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkSeedGenerator PUBLIC /usr/include/boost/regex/)

