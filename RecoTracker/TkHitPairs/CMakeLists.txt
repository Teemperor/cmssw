add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoTrackerTkHitPairssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoTracker/TkHitPairs/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoTrackerTkHitPairssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoTracker/TkHitPairs/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoTracker/TkHitPairs/src/classes.h /home/teemperor/cms/cmssw/RecoTracker/TkHitPairs/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoTrackerTkHitPairssrcclassesh")

add_library(RecoTrackerTkHitPairs OBJECT 
  src/IntermediateHitDoublets.cc
  src/InnerDeltaPhi.cc
  src/CosmicLayerPairs.cc
  src/HitPairGeneratorFromLayerPair.cc
  src/HitPairGenerator.cc
  src/RecHitsSortedInPhi.cc
  src/LayerWithHits.cc
  src/CosmicHitPairGeneratorFromLayerPair.cc
  src/CombinedHitPairGenerator.cc
  src/CosmicHitPairGenerator.cc
  ${CMAKE_BINARY_DIR}/RecoTrackerTkHitPairssrcclassesh_rflx.cpp
)

target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkHitPairs PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/IntermediateHitDoublets.cc
  src/InnerDeltaPhi.cc
  src/CosmicLayerPairs.cc
  src/HitPairGeneratorFromLayerPair.cc
  src/HitPairGenerator.cc
  src/RecHitsSortedInPhi.cc
  src/LayerWithHits.cc
  src/CosmicHitPairGeneratorFromLayerPair.cc
  src/CombinedHitPairGenerator.cc
  src/CosmicHitPairGenerator.cc
  ${CMAKE_BINARY_DIR}/RecoTrackerTkHitPairssrcclassesh_rflx.cpp
PROPERTIES COMPILE_FLAGS "-Ofast")

