add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiStripDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiStripDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiStripDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiStripDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiStripDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiStripDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiStripDetIdsrcclassesh")

add_library(DataFormatsSiStripDetId OBJECT 
  src/SiStripSubStructure.cc
  src/TECDetId.cc
  src/TIDDetId.cc
  src/SiStripDetId.cc
  src/TOBDetId.cc
  src/TIBDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiStripDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiStripDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiStripDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiStripDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiStripDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiStripDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiStripDetId PUBLIC /usr/include/boost/regex/)

