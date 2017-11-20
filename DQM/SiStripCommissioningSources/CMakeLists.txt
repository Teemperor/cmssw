add_subdirectory(plugins)
add_library(DQMSiStripCommissioningSources OBJECT 
  src/NoiseTask.cc
  src/LatencyTask.cc
  src/Averages.cc
  src/OptoScanTask.cc
  src/FineDelayTask.cc
  src/SiStripCommissioningSource.cc
  src/VpspScanTask.cc
  src/CommissioningTask.cc
  src/DaqScopeModeTask.cc
  src/FedTimingTask.cc
  src/FedCablingTask.cc
  src/CalibrationTask.cc
  src/FastFedCablingTask.cc
  src/ApvTimingTask.cc
  src/CalibrationScanTask.cc
  src/PedestalsTask.cc
  src/PedsFullNoiseTask.cc
  src/PedsOnlyTask.cc
)

target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningSources PUBLIC /usr/include/boost/regex/)

