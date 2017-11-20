add_library(L1GlobalTriggerObjectMaps_t OBJECT 
  L1GlobalTriggerObjectMaps_t.cc
)

target_include_directories(L1GlobalTriggerObjectMaps_t PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1GlobalTriggerObjectMaps_t PUBLIC /usr/include/root/)
target_include_directories(L1GlobalTriggerObjectMaps_t PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1GlobalTriggerObjectMaps_t PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1GlobalTriggerObjectMaps_t PUBLIC /usr/include/boost/)
target_include_directories(L1GlobalTriggerObjectMaps_t PUBLIC /usr/include/boost/regex/)

