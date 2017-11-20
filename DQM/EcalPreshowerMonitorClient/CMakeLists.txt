add_library(DQMEcalPreshowerMonitorClient OBJECT 
  src/ESClient.cc
  src/ESPedestalClient.cc
  src/ESSummaryClient.cc
  src/EcalPreshowerMonitorClient.cc
  src/ESIntegrityClient.cc
)

target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQMEcalPreshowerMonitorClient PUBLIC /usr/include/boost/regex/)

