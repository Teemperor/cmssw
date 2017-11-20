add_library(DQMEcalPreshowerMonitorModule OBJECT 
  src/ESOccupancyTask.cc
  src/ESRawDataTask.cc
  src/ESDcsInfoTask.cc
  src/ESTrendTask.cc
  src/ESTimingTask.cc
  src/ESPedestalTask.cc
  src/ESDaqInfoTask.cc
  src/ESFEDIntegrityTask.cc
  src/ESDataCertificationTask.cc
  src/ESIntegrityTask.cc
)

target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/boost/python/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/python2.7/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/root/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/boost/)
target_include_directories(DQMEcalPreshowerMonitorModule PUBLIC /usr/include/boost/regex/)

