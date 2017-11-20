add_library(DQML1TMonitorClient OBJECT 
  src/L1TRPCTFClient.cc
  src/L1TOccupancyClient.cc
  src/L1TDTTPGClient.cc
  src/SealModule.cc
  src/L1TEventInfoClient.cc
  src/L1EmulatorErrorFlagClient.cc
  src/L1TDTTFClient.cc
  src/L1TStage2CaloLayer2DEClient.cc
  src/L1TTestsSummary.cc
  src/L1TOccupancyClientHistogramService.cc
  src/L1TGCTClient.cc
  src/L1TCSCTFClient.cc
  src/L1TGMTClient.cc
)

target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQML1TMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQML1TMonitorClient PUBLIC /usr/include/boost/regex/)

