add_subdirectory(bin)
add_library(DQMSiStripMonitorClient OBJECT 
  src/SiStripTrackerMapCreator.cc
  src/SiStripQualityChecker.cc
  src/SiStripUtility.cc
  src/SiStripHistoPlotter.cc
  src/SiStripConfigWriter.cc
  src/SiStripDaqInfo.cc
  src/SiStripAnalyser.cc
  src/SiStripConfigParser.cc
  src/SiStripDcsInfo.cc
  src/SiStripOfflineDQM.cc
  src/SiStripActionExecutor.cc
  src/SiStripSummaryCreator.cc
  src/SiStripCertificationInfo.cc
  src/SiStripLayoutParser.cc
  src/SiStripInformationExtractor.cc
)

target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiStripMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMSiStripMonitorClient PUBLIC /usr/include/boost/regex/)

