add_library(TrackingToolsMaterialEffectsPlugins OBJECT 
  module.cc
  PropagatorWithMaterialESProducer.cc
)

target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsMaterialEffectsPlugins PUBLIC /usr/include/boost/regex/)

