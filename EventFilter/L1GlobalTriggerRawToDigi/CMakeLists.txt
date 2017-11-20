add_library(EventFilterL1GlobalTriggerRawToDigi OBJECT 
  src/L1GtTriggerMenuLiteProducer.cc
  src/SealModule.cc
  src/L1GlobaTriggerRawToDigi.cc
  src/ConditionDumperInEdm.cc
  src/L1GlobaTriggerRecordProducer.cc
  src/L1GTDigiToRaw.cc
  src/L1GTEvmDigiToRaw.cc
  src/L1GlobaTriggerEvmRawToDigi.cc
  src/L1GtTextToRaw.cc
)

target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterL1GlobalTriggerRawToDigi PUBLIC /usr/include/boost/regex/)

