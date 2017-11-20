add_subdirectory(test)
add_subdirectory(plugins)
add_library(RecoTrackerTrackProducer OBJECT 
  src/TrackProducerAlgorithm.cc
  src/GsfTrackProducerBase.cc
  src/KfTrackProducerBase.cc
  src/TrajectoryToResiduals.cc
  src/DAFTrackProducerAlgorithm.cc
)

target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerTrackProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerTrackProducer PUBLIC /usr/include/boost/regex/)

