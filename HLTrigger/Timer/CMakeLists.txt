add_subdirectory(test)
add_subdirectory(plugins)
add_library(HLTriggerTimer OBJECT 
  src/Timer.cc
  src/TimerService.cc
  src/CPUAffinity.cc
  src/FastTimerService.cc
  src/EDMModuleType.cc
  src/ProcessCallGraph.cc
)

target_include_directories(HLTriggerTimer PUBLIC /usr/include/boost/python/)
target_include_directories(HLTriggerTimer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(HLTriggerTimer PUBLIC /usr/include/python2.7/)
target_include_directories(HLTriggerTimer PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(HLTriggerTimer PUBLIC /usr/include/root/)
target_include_directories(HLTriggerTimer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(HLTriggerTimer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(HLTriggerTimer PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(HLTriggerTimer PUBLIC /home/teemperor/cms/ext/classlib)
target_include_directories(HLTriggerTimer PUBLIC /usr/include/boost/)
target_include_directories(HLTriggerTimer PUBLIC /usr/include/boost/regex/)

