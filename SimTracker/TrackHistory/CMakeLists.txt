add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/SimTrackerTrackHistorysrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/SimTracker/TrackHistory/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/SimTrackerTrackHistorysrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/SimTracker/TrackHistory/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/SimTracker/TrackHistory/src/classes.h /home/teemperor/cms/cmssw/SimTracker/TrackHistory/src/classes_def.xml
  COMMENT "Generating ROOT dict SimTrackerTrackHistorysrcclassesh")

add_library(SimTrackerTrackHistory OBJECT 
  src/Utils.cc
  src/TrackQuality.cc
  src/JetVetoedTracksAssociatorDRVertex.cc
  src/VertexClassifier.cc
  src/HistoryBase.cc
  src/VertexHistory.cc
  src/TrackClassifier.cc
  src/TrackHistory.cc
  src/VertexCategories.cc
  src/TrackCategories.cc
  ${CMAKE_BINARY_DIR}/SimTrackerTrackHistorysrcclassesh_rflx.cpp
)

target_include_directories(SimTrackerTrackHistory PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerTrackHistory PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerTrackHistory PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerTrackHistory PUBLIC /usr/include/root/)
target_include_directories(SimTrackerTrackHistory PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerTrackHistory PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerTrackHistory PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerTrackHistory PUBLIC /usr/include/boost/regex/)

