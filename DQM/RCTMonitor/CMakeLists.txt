add_library(DQMRCTMonitor OBJECT 
  src/RCTMonitor.cc
)

target_include_directories(DQMRCTMonitor PUBLIC /usr/include/boost/python/)
target_include_directories(DQMRCTMonitor PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMRCTMonitor PUBLIC /usr/include/python2.7/)
target_include_directories(DQMRCTMonitor PUBLIC /usr/include/root/)
target_include_directories(DQMRCTMonitor PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMRCTMonitor PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMRCTMonitor PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMRCTMonitor PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMRCTMonitor PUBLIC /usr/include/boost/)
target_include_directories(DQMRCTMonitor PUBLIC /usr/include/boost/regex/)

