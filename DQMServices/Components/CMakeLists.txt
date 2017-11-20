add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(DQMServicesComponents OBJECT 
  src/DQMScalInfo.cc
  src/DQMStoreStats.cc
  src/DQMMessageLoggerClient.cc
  src/DQMDcsInfoClient.cc
  src/DQMFileSaver.cc
  src/DQMFEDIntegrityClient.cc
  src/DQMFileReader.cc
  src/DQMMessageLogger.cc
  src/QualityTester.cc
  src/DQMDcsInfo.cc
  src/DQMProvInfo.cc
  src/DQMDaqInfo.cc
  src/DQMEventInfo.cc
)

target_include_directories(DQMServicesComponents PUBLIC /usr/include/boost/iostreams/)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/python2.7/)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/boost/serialization/)
target_include_directories(DQMServicesComponents PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/boost/)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/boost/python/)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/root/)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DQMServicesComponents PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(DQMServicesComponents PUBLIC /usr/include/boost/regex/)

