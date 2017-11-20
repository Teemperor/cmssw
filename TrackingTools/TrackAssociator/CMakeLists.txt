add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsTrackAssociator OBJECT 
  src/FiducialVolume.cc
  src/TAMuonChamberMatch.cc
  src/TrackDetectorAssociator.cc
  src/DetIdAssociator.cc
  src/TAMuonSegmentMatch.cc
  src/CachedTrajectory.cc
  src/TrackAssociatorParameters.cc
  src/DetIdInfo.cc
  src/TrackDetMatchInfo.cc
)

target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrackAssociator PUBLIC /usr/include/boost/regex/)

