add_subdirectory(plugins)
add_library(DQMSiStripCommissioningDbClients OBJECT 
  src/OptoScanHistosUsingDb.cc
  src/LatencyHistosUsingDb.cc
  src/FineDelayHistosUsingDb.cc
  src/ApvTimingHistosUsingDb.cc
  src/FastFedCablingHistosUsingDb.cc
  src/PedsOnlyHistosUsingDb.cc
  src/VpspScanHistosUsingDb.cc
  src/PedsFullNoiseHistosUsingDb.cc
  src/NoiseHistosUsingDb.cc
  src/PedestalsHistosUsingDb.cc
  src/CommissioningHistosUsingDb.cc
  src/CalibrationHistosUsingDb.cc
)

target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /usr/include/boost/regex/)
target_include_directories(DQMSiStripCommissioningDbClients PUBLIC /home/teemperor/cms/ext/misc/)

