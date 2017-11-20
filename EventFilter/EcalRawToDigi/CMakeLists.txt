add_subdirectory(plugins)
add_library(EventFilterEcalRawToDigi OBJECT 
  src/EcalDCCHeaderRuntypeDecoder.cc
  src/DCCTCCBlock.cc
  src/MatacqRawEvent.cc
  src/DCCEESRPBlock.cc
  src/DCCDataUnpacker.cc
  src/Majority.cc
  src/MatacqDataFormatter.cc
  src/DCCFEBlock.cc
  src/EcalElectronicsMapper.cc
  src/EcalRegionCablingRecord.cc
  src/DCCEBEventBlock.cc
  src/DCCEBTCCBlock.cc
  src/DCCSCBlock.cc
  src/DCCEBSRPBlock.cc
  src/DCCEEEventBlock.cc
  src/DCCSRPBlock.cc
  src/DCCTowerBlock.cc
  src/EcalRegionCabling.cc
  src/DCCEETCCBlock.cc
  src/DCCEventBlock.cc
  src/DCCMemBlock.cc
  src/DCCDataBlockPrototype.cc
)

target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/eigen3/)
target_include_directories(EventFilterEcalRawToDigi PUBLIC /usr/include/boost/regex/)

