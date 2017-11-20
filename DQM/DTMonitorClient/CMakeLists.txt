add_library(DQMDTMonitorClient OBJECT 
  src/DTDCSSummary.cc
  src/SealModule.cc
  src/DTDataIntegrityTest.cc
  src/DTDCSByLumiSummary.cc
  src/DTOccupancyPoint.cc
  src/DTOfflineSummaryClients.cc
  src/DTLocalTriggerLutTest.cc
  src/DTTriggerEfficiencyTest.cc
  src/DTSummaryClients.cc
  src/DTLocalTriggerBaseTest.cc
  src/DTCertificationSummary.cc
  src/DTResolutionTest.cc
  src/DTOccupancyCluster.cc
  src/DTResolutionAnalysisTest.cc
  src/DTNoiseAnalysisTest.cc
  src/DTLocalTriggerTPTest.cc
  src/DTTriggerLutTest.cc
  src/DTOccupancyClusterBuilder.cc
  src/DTSegmentAnalysisTest.cc
  src/DTOccupancyTest.cc
  src/DTDAQInfo.cc
  src/DTLocalTriggerEfficiencyTest.cc
  src/DTChamberEfficiencyTest.cc
  src/DTRunConditionVarClient.cc
  src/DTLocalTriggerSynchTest.cc
  src/DTLocalTriggerTest.cc
  src/DTChamberEfficiencyClient.cc
  src/DTBlockedROChannelsTest.cc
  src/DTEfficiencyTest.cc
)

target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMDTMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMDTMonitorClient PUBLIC /usr/include/boost/regex/)

