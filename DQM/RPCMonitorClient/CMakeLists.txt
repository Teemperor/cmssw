add_library(DQMRPCMonitorClient OBJECT 
  src/RPCDataCertification.cc
  src/RPCEfficiencyShiftHisto.cc
  src/SealModule.cc
  src/RPCDaqInfo.cc
  src/RPCLinkSynchroStat.cc
  src/RPCRechitProbabilityClient.cc
  src/RPCDcsInfoClient.cc
  src/RPCMultiplicityTest.cc
  src/RPCBxTest.cc
  src/RPCEfficiencyPerRingLayer.cc
  src/RPCDBHandler.cc
  src/RPCMonitorRaw.cc
  src/RPCEventSummary.cc
  src/RPCDCSSummary.cc
  src/RPCLinkSynchroHistoMaker.cc
  src/RPCNoisyStripTest.cc
  src/RPCDeadChannelTest.cc
  src/RPCFEDIntegrity.cc
  src/RPCChamberQuality.cc
  src/RPCDqmClient.cc
  src/RPCOccupancyTest.cc
  src/RPCRawDataCountsHistoMaker.cc
  src/RPCEfficiencySecond.cc
  src/RPCMonitorLinkSynchro.cc
  src/RPCClusterSizeTest.cc
)

target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMRPCMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMRPCMonitorClient PUBLIC /usr/include/boost/regex/)

