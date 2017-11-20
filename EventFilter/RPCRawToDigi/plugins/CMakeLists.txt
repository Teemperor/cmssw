add_library(EventFilterRPCRawToDigiPlugins OBJECT 
  RPCTwinMuxDigiToRaw.cc
  SealModule.cc
  RPCUnpackingModule.cc
  RPCReadOutMappingWithFastSearch.cc
  RPCTwinMuxRawToDigi.cc
)

target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/root/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/boost/)
target_include_directories(EventFilterRPCRawToDigiPlugins PUBLIC /usr/include/boost/regex/)

