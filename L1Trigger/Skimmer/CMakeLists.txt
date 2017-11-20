add_library(L1TriggerSkimmer OBJECT 
  src/L1Filter.cc
)

target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/root/)
target_include_directories(L1TriggerSkimmer PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerSkimmer PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerSkimmer PUBLIC /usr/include/boost/regex/)

