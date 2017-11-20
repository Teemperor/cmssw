add_library(RecoTrackerSiTrackerMRHTools OBJECT 
  src/SimpleDAFHitCollector.cc
  src/module.cc
  src/MeasurementByLayerGrouper.cc
  src/GenericProjectedRecHit2D.cc
  src/SiTrackerMultiRecHitUpdator.cc
  src/GroupedDAFHitCollector.cc
)

target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerSiTrackerMRHTools PUBLIC /usr/include/boost/regex/)

