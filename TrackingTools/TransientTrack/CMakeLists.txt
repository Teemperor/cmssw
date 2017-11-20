add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsTransientTrack OBJECT 
  src/SealModule.cc
  src/GsfTransientTrack.cc
  src/TransientTrackFromFTSFactory.cc
  src/TransientTrack.cc
  src/TransientTrackFromFTS.cc
  src/TransientTrackBuilder.cc
  src/TrackTransientTrack.cc
  src/CandidatePtrTransientTrack.cc
)

target_include_directories(TrackingToolsTransientTrack PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsTransientTrack PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTransientTrack PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsTransientTrack PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTransientTrack PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTransientTrack PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTransientTrack PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTransientTrack PUBLIC /usr/include/boost/regex/)

