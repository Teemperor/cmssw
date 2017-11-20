add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCSCDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CSCDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCSCDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CSCDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CSCDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CSCDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCSCDigisrcclassesh")

add_library(DataFormatsCSCDigi OBJECT 
  src/CSCDDUStatusDigi.cc
  src/CSCDMBStatusDigi.cc
  src/CSCDCCStatusDigi.cc
  src/CSCStripDigi.cc
  src/CSCWireDigi.cc
  src/CSCDCCFormatStatusDigi.cc
  src/CSCComparatorDigi.cc
  src/CSCALCTStatusDigi.cc
  src/CSCCLCTDigi.cc
  src/CSCALCTDigi.cc
  src/CSCCorrelatedLCTDigi.cc
  src/CSCCFEBStatusDigi.cc
  src/CSCRPCDigi.cc
  src/CSCTMBStatusDigi.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCSCDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCSCDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCSCDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCSCDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCSCDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCSCDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCSCDigi PUBLIC /usr/include/boost/regex/)

