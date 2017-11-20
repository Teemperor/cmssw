add_library(SimTrackerTrackAssociation_plugins OBJECT 
  TrackTimeValueMapProducer.cc
  CosmicParametersDefinerForTPESProducer.cc
  ConfigurableFlatResolutionModel.cc
  StripCompactDigiSimLinksProducer.cc
  ParametersDefinerForTPESProducer.cc
  MCTrackMatcher.cc
  PerfectResolutionModel.cc
  TrackAssociatorEDProducer.cc
  TrackMCQuality.cc
)

target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /usr/include/root/)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /usr/include/boost/)
target_include_directories(SimTrackerTrackAssociation_plugins PUBLIC /usr/include/boost/regex/)

