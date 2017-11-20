add_library(L1TriggerGlobalTriggerPlugins OBJECT 
  L1GlobalTrigger.cc
  L1GTPrescaler.cc
  CompareToObjectMapRecord.cc
  ConvertObjectMapRecord.cc
)

target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/root/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerGlobalTriggerPlugins PUBLIC /usr/include/boost/regex/)

