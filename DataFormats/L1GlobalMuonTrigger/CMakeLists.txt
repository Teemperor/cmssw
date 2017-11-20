add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalMuonTriggersrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1GlobalMuonTrigger/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalMuonTriggersrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1GlobalMuonTrigger/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1GlobalMuonTrigger/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1GlobalMuonTrigger/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1GlobalMuonTriggersrcclassesh")

add_library(DataFormatsL1GlobalMuonTrigger OBJECT 
  src/L1MuGMTExtendedCand.cc
  src/L1MuRegionalCand.cc
  src/L1MuGMTCand.cc
  src/L1MuGMTReadoutCollection.cc
  src/L1MuGMTReadoutRecord.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1GlobalMuonTriggersrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1GlobalMuonTrigger PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1GlobalMuonTrigger PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1GlobalMuonTrigger PUBLIC /usr/include/boost/regex/)

