add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsKalmanUpdators OBJECT 
  src/EtaPhiMeasurementEstimator.cc
  src/module.cc
  src/Strip1DMeasurementTransformator.cc
  src/Chi2Strip1DEstimator.cc
  src/Chi2MeasurementEstimator.cc
  src/Chi2MeasurementEstimatorBase.cc
  src/KFUpdator.cc
  src/Chi2Switching1DEstimator.cc
  src/KFStrip1DUpdator.cc
  src/MRHChi2MeasurementEstimator.cc
  src/KFSwitching1DUpdator.cc
)

target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsKalmanUpdators PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/EtaPhiMeasurementEstimator.cc
  src/module.cc
  src/Strip1DMeasurementTransformator.cc
  src/Chi2Strip1DEstimator.cc
  src/Chi2MeasurementEstimator.cc
  src/Chi2MeasurementEstimatorBase.cc
  src/KFUpdator.cc
  src/Chi2Switching1DEstimator.cc
  src/KFStrip1DUpdator.cc
  src/MRHChi2MeasurementEstimator.cc
  src/KFSwitching1DUpdator.cc
PROPERTIES COMPILE_FLAGS "-Ofast -funroll-all-loops")

