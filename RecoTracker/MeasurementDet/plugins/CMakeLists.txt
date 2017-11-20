add_library(RecoTrackerMeasurementDetPlugins OBJECT 
  Chi2ChargeMeasurementEstimatorESProducer.cc
  module.cc
  RecHitPropagator.cc
  NonPropagatingDetMeasurements.cc
  TkGluedMeasurementDet.cc
  TkStackMeasurementDet.cc
  MeasurementTrackerImpl.cc
  MaskedMeasurementTrackerEventProducer.cc
  MeasurementTrackerEventProducer.cc
  MeasurementTrackerESProducer.cc
  TkStripMeasurementDet.cc
  TkPhase2OTMeasurementDet.cc
  TkPixelMeasurementDet.cc
)

target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoTrackerMeasurementDetPlugins PUBLIC /usr/include/boost/regex/)

