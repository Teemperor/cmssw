add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsRPCDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/RPCDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsRPCDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/RPCDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/RPCDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/RPCDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsRPCDigisrcclassesh")

add_library(DataFormatsRPCDigi OBJECT 
  src/RPCAMCLinkCounters.cc
  src/RecordSLD.cc
  src/RecordBX.cc
  src/RPCDigi.cc
  src/ErrorRDM.cc
  src/RPCDigiL1Link.cc
  src/ErrorRDDM.cc
  src/ErrorRCDM.cc
  src/ReadoutError.cc
  src/DataRecord.cc
  src/RecordCD.cc
  src/RPCRawDataCounts.cc
  ${CMAKE_BINARY_DIR}/DataFormatsRPCDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsRPCDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsRPCDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsRPCDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsRPCDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsRPCDigi PUBLIC /usr/include/boost/serialization/)
target_include_directories(DataFormatsRPCDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsRPCDigi PUBLIC /usr/include/boost/regex/)

