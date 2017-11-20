add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/RecoTrackerTkTrackingRegionssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/RecoTracker/TkTrackingRegions/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/RecoTrackerTkTrackingRegionssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/RecoTracker/TkTrackingRegions/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/RecoTracker/TkTrackingRegions/src/classes.h /home/teemperor/cms/cmssw/RecoTracker/TkTrackingRegions/src/classes_def.xml
  COMMENT "Generating ROOT dict RecoTrackerTkTrackingRegionssrcclassesh")

add_library(RecoTrackerTkTrackingRegions OBJECT 
  src/RectangularEtaPhiTrackingRegion.cc
  src/OuterDetCompatibility.cc
  src/TrackingRegionProducerFactory.cc
  src/OuterHitPhiPrediction.cc
  src/GlobalTrackingRegion.cc
  src/OrderedHitsGeneratorFactory.cc
  ${CMAKE_BINARY_DIR}/RecoTrackerTkTrackingRegionssrcclassesh_rflx.cpp
)

target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTkTrackingRegions PUBLIC /usr/include/boost/regex/)

