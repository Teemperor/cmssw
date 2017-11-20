add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsMuonDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/MuonDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsMuonDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/MuonDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/MuonDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/MuonDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsMuonDetIdsrcclassesh")

add_library(DataFormatsMuonDetId OBJECT 
  src/CSCTriggerNumbering.cc
  src/DTChamberId.cc
  src/GEMDetId.cc
  src/CSCIndexer.cc
  src/DTLayerId.cc
  src/DTSuperLayerId.cc
  src/CSCDetId.cc
  src/ME0DetId.cc
  src/DTWireId.cc
  src/DTSectCollId.cc
  src/RPCDetId.cc
  src/RPCCompDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsMuonDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsMuonDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsMuonDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsMuonDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsMuonDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsMuonDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsMuonDetId PUBLIC /usr/include/boost/regex/)

