add_library(DQMSiStripCommissioningAnalysis OBJECT 
  src/PedsOnlyAlgorithm.cc
  src/NoiseAlgorithm.cc
  src/SamplingAlgorithm.cc
  src/FedCablingAlgorithm.cc
  src/PedestalsAlgorithm.cc
  src/FedTimingAlgorithm.cc
  src/DaqScopeModeAlgorithm.cc
  src/CalibrationAlgorithm.cc
  src/OptoScanAlgorithm.cc
  src/FastFedCablingAlgorithm.cc
  src/SiStripPulseShape.cc
  src/PedsFullNoiseAlgorithm.cc
  src/VpspScanAlgorithm.cc
  src/ApvTimingAlgorithm.cc
  src/CommissioningAlgorithm.cc
  src/ApvLatencyAlgorithm.cc
  src/Utility.cc
)

target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningAnalysis PUBLIC /usr/include/boost/regex/)

