add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsFTLDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/FTLDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsFTLDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/FTLDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/FTLDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/FTLDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsFTLDigisrcclassesh")

add_library(DataFormatsFTLDigi OBJECT 
  src/FTLDataFrameT.cc
  ${CMAKE_BINARY_DIR}/DataFormatsFTLDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsFTLDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsFTLDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsFTLDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsFTLDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsFTLDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsFTLDigi PUBLIC /usr/include/boost/regex/)

