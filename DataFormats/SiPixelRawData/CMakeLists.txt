add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiPixelRawDatasrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiPixelRawData/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiPixelRawDatasrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiPixelRawData/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiPixelRawData/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiPixelRawData/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiPixelRawDatasrcclassesh")

add_library(DataFormatsSiPixelRawData OBJECT 
  src/SiPixelRawDataError.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiPixelRawDatasrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiPixelRawData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiPixelRawData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiPixelRawData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiPixelRawData PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiPixelRawData PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiPixelRawData PUBLIC /usr/include/boost/regex/)

