add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsTrackRefitter OBJECT 
  src/TrackTransformer.cc
  src/TrackTransformerForGlobalCosmicMuons.cc
  src/TrackTransformerForCosmicMuons.cc
  src/SeedTransformer.cc
)

target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsTrackRefitter PUBLIC /usr/include/boost/regex/)

