add_subdirectory(plugins)
add_library(DQMSiStripCommissioningClients OBJECT 
  src/OptoScanHistograms.cc
  src/CalibrationHistograms.cc
  src/FedCablingHistograms.cc
  src/SamplingHistograms.cc
  src/VpspScanHistograms.cc
  src/SummaryPlotXmlParser.cc
  src/ApvTimingHistograms.cc
  src/PedsFullNoiseHistograms.cc
  src/FastFedCablingHistograms.cc
  src/SiStripTFile.cc
  src/FedTimingHistograms.cc
  src/DaqScopeModeHistograms.cc
  src/CommissioningHistograms.cc
  src/PedsOnlyHistograms.cc
  src/SiStripCommissioningOfflineClient.cc
  src/PedestalsHistograms.cc
  src/NoiseHistograms.cc
)

target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningClients PUBLIC /usr/include/boost/regex/)

