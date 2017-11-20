add_library(DQMSiPixelMonitorCluster OBJECT 
  src/SiPixelClusterModule.cc
  src/SiPixelClusterSource.cc
)

target_include_directories(DQMSiPixelMonitorCluster PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /usr/include/root/)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /usr/include/boost/)
target_include_directories(DQMSiPixelMonitorCluster PUBLIC /usr/include/boost/regex/)

