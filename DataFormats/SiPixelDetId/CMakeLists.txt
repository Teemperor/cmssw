add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiPixelDetIdsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiPixelDetId/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiPixelDetIdsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiPixelDetId/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiPixelDetId/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiPixelDetId/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiPixelDetIdsrcclassesh")

add_library(DataFormatsSiPixelDetId OBJECT 
  src/PixelChannelIdentifier.cc
  src/PixelModuleName.cc
  src/PixelBarrelName.cc
  src/PXFDetId.cc
  src/PixelBarrelNameUpgrade.cc
  src/PixelEndcapNameUpgrade.cc
  src/PixelEndcapName.cc
  src/PXBDetId.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiPixelDetIdsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiPixelDetId PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiPixelDetId PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiPixelDetId PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiPixelDetId PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiPixelDetId PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiPixelDetId PUBLIC /usr/include/boost/regex/)

