add_library(CondToolsL1TriggerExtPlugins OBJECT 
  SealModule.cc
  L1CondDBPayloadWriterExt.cc
  L1TriggerKeyOnlineProdExt.cc
  L1SubsystemKeysOnlineProdExt.cc
  L1O2OTestAnalyzerExt.cc
  L1TriggerKeyListDummyProdExt.cc
  L1CondDBIOVWriterExt.cc
  L1TriggerKeyDummyProdExt.cc
)

target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/root/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/boost/)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsL1TriggerExtPlugins PUBLIC /usr/include/boost/regex/)

