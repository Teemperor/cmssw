add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsL1TGlobalsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/L1TGlobal/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsL1TGlobalsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/L1TGlobal/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/L1TGlobal/src/classes.h /home/teemperor/cms/cmssw/DataFormats/L1TGlobal/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsL1TGlobalsrcclassesh")

add_library(DataFormatsL1TGlobal OBJECT 
  src/GlobalAlgBlk.cc
  src/GlobalExtBlk.cc
  src/GlobalObjectMap.cc
  src/GlobalObject.cc
  src/GlobalLogicParser.cc
  src/GlobalObjectMapRecord.cc
  ${CMAKE_BINARY_DIR}/DataFormatsL1TGlobalsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsL1TGlobal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsL1TGlobal PUBLIC /usr/include/root/)
target_include_directories(DataFormatsL1TGlobal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsL1TGlobal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsL1TGlobal PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsL1TGlobal PUBLIC /usr/include/boost/regex/)

