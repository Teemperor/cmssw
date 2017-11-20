add_library(DQMSiPixelMonitorTrack OBJECT 
  src/SiPixelTrackResidualSource.cc
  src/SiPixelTrackResidualModule.cc
  src/SiPixelHitEfficiencySource.cc
  src/SiPixelHitEfficiencyModule.cc
)

target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/root/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/boost/)
target_include_directories(DQMSiPixelMonitorTrack PUBLIC /usr/include/boost/regex/)

