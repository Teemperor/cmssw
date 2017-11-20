add_library(GeometryTrackerGeometryBuilderPlugins OBJECT 
  TrackerParametersESModule.cc
  TrackerDigiGeometryESModule.cc
)

target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/root/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/boost/)
target_include_directories(GeometryTrackerGeometryBuilderPlugins PUBLIC /usr/include/boost/regex/)

