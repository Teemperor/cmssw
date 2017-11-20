add_library(TrackingToolsKalmanUpdatorsPlugins OBJECT 
  module.cc
  TrackingRecHitPropagatorESProducer.cc
  Chi2MeasurementEstimatorESProducer.cc
  KFUpdatorESProducer.cc
  KFSwitching1DUpdatorESProducer.cc
  MRHChi2MeasurementEstimatorESProducer.cc
)

target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsKalmanUpdatorsPlugins PUBLIC /usr/include/boost/regex/)

