add_subdirectory(plugins)
add_library(DQMEcalMonitorClient OBJECT 
  src/IntegrityClient.cc
  src/LaserClient.cc
  src/LedClient.cc
  src/PresampleClient.cc
  src/TowerStatusTask.cc
  src/RawDataClient.cc
  src/SelectiveReadoutClient.cc
  src/TrigPrimClient.cc
  src/PNIntegrityClient.cc
  src/TestPulseClient.cc
  src/TimingClient.cc
  src/DQWorkerClient.cc
  src/PedestalClient.cc
  src/CalibrationSummaryClient.cc
  src/CertificationClient.cc
  src/OccupancyClient.cc
  src/SummaryClient.cc
)

target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQMEcalMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMEcalMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMEcalMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQMEcalMonitorClient PUBLIC /usr/include/boost/regex/)

