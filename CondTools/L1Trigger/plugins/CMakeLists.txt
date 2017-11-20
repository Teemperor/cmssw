add_library(CondToolsL1TriggerPlugins OBJECT 
  L1GtRunSettingsViewer.cc
  SealModule.cc
  L1TriggerKeyListDummyProd.cc
  L1O2OTestAnalyzer.cc
  L1TriggerKeyOnlineProd.cc
  L1SubsystemKeysOnlineProd.cc
  L1TriggerKeyDummyProd.cc
  L1CondDBPayloadWriter.cc
  L1CondDBIOVWriter.cc
)

target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/root/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/boost/)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsL1TriggerPlugins PUBLIC /usr/include/boost/regex/)

