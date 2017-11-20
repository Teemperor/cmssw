add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCTPPSDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CTPPSDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCTPPSDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CTPPSDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CTPPSDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CTPPSDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCTPPSDigisrcclassesh")

add_library(DataFormatsCTPPSDigi OBJECT 
  src/CTPPSDiamondDigi.cc
  src/CTPPSPixelDigi.cc
  src/TotemVFATStatus.cc
  src/CTPPSPixelDigiCollection.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCTPPSDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCTPPSDigi PUBLIC /usr/include/boost/python/)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /usr/include/python2.7/)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCTPPSDigi PUBLIC /usr/include/boost/regex/)

