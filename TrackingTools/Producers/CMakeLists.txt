add_library(TrackingToolsProducers OBJECT 
  src/StraightLinePropagatorESProducer.cc
  src/module.cc
  src/SmartPropagatorESProducer.cc
  src/AnalyticalPropagatorESProducer.cc
  src/TrajectoryCleanerESProducer.cc
  src/BeamHaloPropagatorESProducer.cc
)

target_include_directories(TrackingToolsProducers PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsProducers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsProducers PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsProducers PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsProducers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsProducers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsProducers PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsProducers PUBLIC /usr/include/boost/regex/)

