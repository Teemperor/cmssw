add_subdirectory(test)
add_library(EventFilterEcalTBRawToDigi OBJECT 
  src/CamacTBDataFormatter.cc
  src/EcalTB07DaqFormatter.cc
  src/SealModule.cc
  src/EcalDCCHeaderRuntypeDecoder.cc
  src/DCCTrailerBlock.cc
  src/DCCTCCBlock.cc
  src/MatacqRawEvent.cc
  src/EcalDCCUnpackingModule.cc
  src/MatacqDataFormatter.cc
  src/DCCDataMapper.cc
  src/EcalDCC07UnpackingModule.cc
  src/TableDataFormatter.cc
  src/EcalTBDaqFormatter.cc
  src/DCCDataParser.cc
  src/DCCSRPBlock.cc
  src/EcalSupervisorDataFormatter.cc
  src/DCCTowerBlock.cc
  src/DCCBlockPrototype.cc
  src/DCCXtalBlock.cc
  src/DCCEventBlock.cc
)

target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /usr/include/boost/python/)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /usr/include/python2.7/)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /usr/include/root/)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /usr/include/boost/)
target_include_directories(EventFilterEcalTBRawToDigi PUBLIC /usr/include/boost/regex/)

