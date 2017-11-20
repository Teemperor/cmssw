add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsFEDRawDatasrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/FEDRawData/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsFEDRawDatasrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/FEDRawData/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/FEDRawData/src/classes.h /home/teemperor/cms/cmssw/DataFormats/FEDRawData/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsFEDRawDatasrcclassesh")

add_library(DataFormatsFEDRawData OBJECT 
  src/FEDHeader.cc
  src/FEDRawData.cc
  src/FEDRawDataCollection.cc
  src/FEDNumbering.cc
  src/FEDTrailer.cc
  ${CMAKE_BINARY_DIR}/DataFormatsFEDRawDatasrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsFEDRawData PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsFEDRawData PUBLIC /usr/include/root/)
target_include_directories(DataFormatsFEDRawData PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsFEDRawData PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsFEDRawData PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsFEDRawData PUBLIC /usr/include/boost/regex/)

