add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsHGCDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/HGCDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsHGCDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/HGCDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/HGCDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/HGCDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsHGCDigisrcclassesh")

add_library(DataFormatsHGCDigi OBJECT 
  src/HGCDataFrame.cc
  ${CMAKE_BINARY_DIR}/DataFormatsHGCDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsHGCDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsHGCDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsHGCDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsHGCDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsHGCDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsHGCDigi PUBLIC /usr/include/boost/regex/)

