add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoTrackerTkSeedingLayerssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoTracker/TkSeedingLayers/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoTrackerTkSeedingLayerssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoTracker/TkSeedingLayers/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoTracker/TkSeedingLayers/src/classes.h /home/teemperor/cms/cmssw/RecoTracker/TkSeedingLayers/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoTrackerTkSeedingLayerssrcclassesh")

add_library(RecoTrackerTkSeedingLayers OBJECT 
  src/SeedComparitorFactory.cc
  src/SeedingLayerSetsBuilder.cc
  src/HitExtractorPIX.cc
  src/HitExtractorSTRP.cc
  src/SeedingLayer.cc
  ${CMAKE_BINARY_DIR}/RecoTrackerTkSeedingLayerssrcclassesh_rflx.cpp
)

target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkSeedingLayers PUBLIC /usr/include/boost/regex/)

