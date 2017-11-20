add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsForwardDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/ForwardDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsForwardDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/ForwardDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/ForwardDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/ForwardDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsForwardDetIdsrcclassesh")

add_library(DataFormatsForwardDetId OBJECT 
  src/HGCTriggerDetId.cc
  src/HGCHEDetId.cc
  src/HGCalDetId.cc
  src/FastTimeDetId.cc
  src/HGCEEDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsForwardDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsForwardDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsForwardDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsForwardDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsForwardDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsForwardDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsForwardDetId PUBLIC /usr/include/boost/regex/)

