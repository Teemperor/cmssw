add_library(DQMSiPixelMonitorClient OBJECT 
  src/SiPixelCertification.cc
  src/SiPixelConfigWriter.cc
  src/SiPixelConfigParser.cc
  src/SiPixelDataQuality.cc
  src/SiPixelLayoutParser.cc
  src/SealModules.cc
  src/SiPixelActionExecutor.cc
  src/SiPixelDaqInfo.cc
  src/SiPixelDcsInfo.cc
  src/SiPixelInformationExtractor.cc
  src/SiPixelUtility.cc
  src/SiPixelEDAClient.cc
)

target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/python2.7/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/boost/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/boost/python/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/root/)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMSiPixelMonitorClient PUBLIC /usr/include/boost/regex/)

