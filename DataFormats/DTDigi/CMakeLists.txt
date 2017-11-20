add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsDTDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/DTDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsDTDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/DTDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/DTDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/DTDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsDTDigisrcclassesh")

add_library(DataFormatsDTDigi OBJECT 
  src/DTDigi.cc
  src/DTLocalTrigger.cc
  ${CMAKE_BINARY_DIR}/DataFormatsDTDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsDTDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsDTDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsDTDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsDTDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsDTDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsDTDigi PUBLIC /usr/include/boost/regex/)

