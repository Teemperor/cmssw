add_library(TrackingToolsGsfTrackingPlugins OBJECT 
  module.cc
  GsfMaterialEffectsESProducer.cc
  GsfTrajectorySmootherESProducer.cc
  GsfTrajectoryFitterESProducer.cc
)

target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsGsfTrackingPlugins PUBLIC /usr/include/boost/regex/)

