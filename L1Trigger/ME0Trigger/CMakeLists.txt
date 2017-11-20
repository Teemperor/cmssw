add_subdirectory(plugins)
add_library(L1TriggerME0Trigger OBJECT 
  src/ME0TriggerBuilder.cc
  src/ME0Motherboard.cc
)

target_include_directories(L1TriggerME0Trigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerME0Trigger PUBLIC /usr/include/root/)
target_include_directories(L1TriggerME0Trigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerME0Trigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerME0Trigger PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerME0Trigger PUBLIC /usr/include/boost/regex/)

