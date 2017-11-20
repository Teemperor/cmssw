add_subdirectory(plugins)
add_library(TrackingToolsRecoGeometry OBJECT 
  src/RecoGeometryRecord.cc
  src/GlobalDetLayerGeometry.cc
)

target_include_directories(TrackingToolsRecoGeometry PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsRecoGeometry PUBLIC /usr/include/boost/regex/)

