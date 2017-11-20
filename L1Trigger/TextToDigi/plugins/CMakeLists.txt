add_library(L1TriggerTextToDigiPlugins OBJECT 
  RctInputTextToDigi.cc
  RctDigiToRctText.cc
  SealModule.cc
  RawToText.cc
  GtPsbTextToDigi.cc
  TextToRaw.cc
  RctDigiToSourceCardText.cc
  SourceCardTextToRctDigi.cc
  RctTextToRctDigi.cc
  GctDigiToPsbText.cc
)

target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerTextToDigiPlugins PUBLIC /usr/include/boost/regex/)

