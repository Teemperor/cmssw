add_library(L1TriggerL1TCommon OBJECT 
  src/Tools.cc
  src/TrigSystem.cc
  src/Setting.cc
  src/Mask.cc
  src/Parameter.cc
  src/XmlConfigReader.cc
  src/TriggerSystem.cc
  src/XmlConfigParser.cc
)

target_include_directories(L1TriggerL1TCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerL1TCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerL1TCommon PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerL1TCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerL1TCommon PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerL1TCommon PUBLIC /usr/include/root/)
target_include_directories(L1TriggerL1TCommon PUBLIC /usr/include/boost/regex/)

