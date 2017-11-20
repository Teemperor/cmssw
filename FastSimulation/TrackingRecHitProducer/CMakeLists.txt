add_library(FastSimulationTrackingRecHitProducer OBJECT 
  src/TrackingRecHitAlgorithmFactory.cc
  src/TrackingRecHitAlgorithm.cc
  src/TrackerDetIdSelector.cc
  src/PixelTemplateSmearerBase.cc
)

target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/root/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/boost/serialization/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationTrackingRecHitProducer PUBLIC /usr/include/boost/regex/)

