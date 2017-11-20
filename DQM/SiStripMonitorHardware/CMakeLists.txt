add_library(DQMSiStripMonitorHardware OBJECT 
  src/SiStripSpyIdentifyRuns.cc
  src/FEDErrors.cc
  src/SiStripSpyDigiConverter.cc
  src/SiStripFEDMonitor.cc
  src/SiStripSpyUtilities.cc
  src/SiStripSpyEventSummaryProducer.cc
  src/SiStripShotFilter.cc
  src/BuildTrackerMap.cc
  src/SiStripSpyUnpacker.cc
  src/SiStripSpyUnpackerModule.cc
  src/SiStripFEDDataCheck.cc
  src/SPYHistograms.cc
  src/SiStripSpyDisplayModule.cc
  src/FEDHistograms.cc
  src/HistogramBase.cc
  src/SiStripFEDEmulator.cc
  src/SiStripFEDEmulatorModule.cc
  src/SiStripSpyExtractRunModule.cc
  src/SiStripCMMonitor.cc
  src/SiStripSpyDigiConverterModule.cc
  src/SiStripSpyEventMatcherModule.cc
  src/SiStripSpyMonitorModule.cc
  src/SiStripSpyEventMatcher.cc
  src/SiStripFEDSpyBuffer.cc
  src/CMHistograms.cc
  src/SiStripFEDDump.cc
)

target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripMonitorHardware PUBLIC /usr/include/boost/regex/)

