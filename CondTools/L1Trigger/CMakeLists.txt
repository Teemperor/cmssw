add_subdirectory(plugins)
add_library(CondToolsL1Trigger OBJECT 
  src/OMDSReader.cc
  src/Exception.cc
  src/WriterProxy.cc
  src/DataWriter.cc
  src/DataManager.cc
  src/L1ObjectKeysOnlineProdBase.cc
)

target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsL1Trigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsL1Trigger PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/boost/)
target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/root/)
target_include_directories(CondToolsL1Trigger PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsL1Trigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsL1Trigger PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsL1Trigger PUBLIC /usr/include/boost/regex/)

