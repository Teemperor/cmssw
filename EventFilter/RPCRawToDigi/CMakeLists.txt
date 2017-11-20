add_subdirectory(plugins)
add_library(EventFilterRPCRawToDigi OBJECT 
  src/RPCLBRecord.cc
  src/RPCTwinMuxPacker.cc
  src/RPCRecordFormatter.cc
  src/RPCPackingModule.cc
  src/RPCLBPacker.cc
  src/EventRecords.cc
  src/RPCTwinMuxRecord.cc
)

target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterRPCRawToDigi PUBLIC /usr/include/boost/regex/)

