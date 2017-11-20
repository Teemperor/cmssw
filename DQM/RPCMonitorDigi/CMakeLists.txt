add_library(DQMRPCMonitorDigi OBJECT 
  src/SealModule.cc
  src/RPCTTUMonitor.cc
  src/RPCRecHitProbability.cc
  src/RPCDcsInfo.cc
  src/RPCBookDetUnitME.cc
  src/RPCMonitorDigi.cc
  src/RPCEfficiency.cc
  src/RPCEfficiencyBook.cc
)

target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/boost/python/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/python2.7/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/root/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMRPCMonitorDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/boost/)
target_include_directories(DQMRPCMonitorDigi PUBLIC /usr/include/boost/regex/)

