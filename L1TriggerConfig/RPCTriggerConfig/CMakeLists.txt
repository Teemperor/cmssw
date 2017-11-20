add_subdirectory(test)
add_library(L1TriggerConfigRPCTriggerConfig OBJECT 
  src/L1RPCConeDefinitionProducer.cc
  src/RPCTriggerConfig.cc
  src/L1RPCConeDefinitionOnlineProd.cc
  src/RPCTriggerHsbConfig.cc
  src/RPCConfigOnlineProd.cc
  src/RPCTriggerBxOrConfig.cc
  src/L1RPCHsbConfigOnlineProd.cc
  src/L1RPCBxOrConfigOnlineProd.cc
  src/RPCTriggerHwConfig.cc
  src/RPCObjectKeysOnlineProd.cc
)

target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/python2.7/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /home/teemperor/cms/md5/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/boost/serialization/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/boost/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/boost/python/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/boost/filesystem/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/root/)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(L1TriggerConfigRPCTriggerConfig PUBLIC /usr/include/boost/regex/)

