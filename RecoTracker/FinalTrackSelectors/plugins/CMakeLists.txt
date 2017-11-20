add_library(RecoTrackerFinalTrackSelectorsPlugins OBJECT 
  TrackMerger.cc
  TrackAlgoPriorityOrderESProducer.cc
  TrackCandidateTopBottomHitFilter.cc
  DuplicateTrackMerger.cc
  MultiTrackSelector.cc
  ClassifierMerger.cc
  CosmicTrackSelector.cc
  TrackCollectionMerger.cc
  AnalyticalTrackSelector.cc
  TrackCollectionFilterCloner.cc
  DuplicateListMerger.cc
  TrackListMerger.cc
  TrackCutClassifier.cc
  SimpleTrackListMerger.cc
  CosmicTrackSplitter.cc
  TrackMultiSelector.cc
  DefaultTrackMVAClassifier.cc
  TrackerTrackHitFilter.cc
)

target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerFinalTrackSelectorsPlugins PUBLIC /usr/include/boost/regex/)

