add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoTrackerFinalTrackSelectors OBJECT 
  src/TrackAlgoPriorityOrder.cc
  src/TrackMVAClassifierBase.cc
  src/ES_TrackAlgoPriorityOrder.cc
  src/TrackCollectionCloner.cc
)

target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerFinalTrackSelectors PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/TrackAlgoPriorityOrder.cc
  src/TrackMVAClassifierBase.cc
  src/ES_TrackAlgoPriorityOrder.cc
  src/TrackCollectionCloner.cc
PROPERTIES COMPILE_FLAGS "-Ofast")

