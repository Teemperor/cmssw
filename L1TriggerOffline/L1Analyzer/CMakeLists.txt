add_library(L1TriggerOfflineL1Analyzer OBJECT 
  src/BSCTrigger.cc
)

target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /usr/include/root/)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerOfflineL1Analyzer PUBLIC /usr/include/boost/regex/)

