add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(FWCoreMessageService OBJECT 
  src/ThreadQueue.cc
  src/MessageLogger.cc
  src/ELoutput.cc
  src/MessageServicePSetValidation.cc
  src/ThreadSafeLogMessageLoggerScribe.cc
  src/ELdestination.cc
  src/ELadministrator.cc
  src/SingleThreadMSPresence.cc
  src/MessageServicePresence.cc
  src/MessageLoggerScribe.cc
  src/ELlimitsTable.cc
  src/MessageLoggerDefaults.cc
  src/MainThreadMLscribe.cc
  src/ELstatistics.cc
  src/ELdestControl.cc
  src/HardwiredDefaults.cc
)

target_include_directories(FWCoreMessageService PUBLIC /usr/include/boost/python/)
target_include_directories(FWCoreMessageService PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreMessageService PUBLIC /usr/include/python2.7/)
target_include_directories(FWCoreMessageService PUBLIC /usr/include/root/)
target_include_directories(FWCoreMessageService PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreMessageService PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreMessageService PUBLIC /usr/include/boost/)
target_include_directories(FWCoreMessageService PUBLIC /usr/include/boost/regex/)

