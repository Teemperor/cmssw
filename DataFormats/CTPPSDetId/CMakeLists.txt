add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCTPPSDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CTPPSDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCTPPSDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CTPPSDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CTPPSDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CTPPSDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCTPPSDetIdsrcclassesh")

add_library(DataFormatsCTPPSDetId OBJECT 
  src/CTPPSDiamondDetId.cc
  src/TotemRPDetId.cc
  src/CTPPSPixelDetId.cc
  src/CTPPSDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCTPPSDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCTPPSDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCTPPSDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCTPPSDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCTPPSDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCTPPSDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCTPPSDetId PUBLIC /usr/include/boost/regex/)

