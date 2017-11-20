add_library(DQMSiStripCommissioningSummary OBJECT 
  src/ApvTimingSummaryFactory.cc
  src/FastFedCablingSummaryFactory.cc
  src/DaqScopeModeSummaryFactory.cc
  src/SummaryGenerator.cc
  src/VpspScanSummaryFactory.cc
  src/SummaryGeneratorControlView.cc
  src/SummaryGeneratorReadoutView.cc
  src/ViewTranslator.cc
  src/FedTimingSummaryFactory.cc
  src/PedestalsSummaryFactory.cc
  src/SamplingSummaryFactory.cc
  src/FedCablingSummaryFactory.cc
  src/PedsOnlySummaryFactory.cc
  src/SummaryHistogramFactory.cc
  src/NoiseSummaryFactory.cc
  src/CalibrationSummaryFactory.cc
  src/SummaryPlot.cc
  src/PedsFullNoiseSummaryFactory.cc
  src/SummaryPlotFactory.cc
  src/SummaryPlotFactoryBase.cc
  src/CommissioningSummaryFactory.cc
  src/OptoScanSummaryFactory.cc
)

target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripCommissioningSummary PUBLIC /usr/include/boost/regex/)

