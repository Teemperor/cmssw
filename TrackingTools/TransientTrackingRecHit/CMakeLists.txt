add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/TrackingToolsTransientTrackingRecHitsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/TrackingTools/TransientTrackingRecHit/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/TrackingToolsTransientTrackingRecHitsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/TrackingTools/TransientTrackingRecHit/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/TrackingTools/TransientTrackingRecHit/src/classes.h /home/teemperor/cms/cmssw/TrackingTools/TransientTrackingRecHit/src/classes_def.xml
  COMMENT "Generating ROOT dict TrackingToolsTransientTrackingRecHitsrcclassesh")

add_library(TrackingToolsTransientTrackingRecHit OBJECT 
  src/module.cc
  src/TValidTrackingRecHit.cc
  src/SeedingLayerSetsHits.cc
  src/TransientTrackingRecHitBuilder.cc
  src/RecHitComparatorByPosition.cc
  src/GenericTransientTrackingRecHit.cc
  src/TransientTrackingRecHit.cc
  ${CMAKE_BINARY_DIR}/TrackingToolsTransientTrackingRecHitsrcclassesh_rflx.cpp
)

target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTransientTrackingRecHit PUBLIC /usr/include/boost/regex/)

