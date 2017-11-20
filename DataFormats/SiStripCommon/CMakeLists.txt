add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiStripCommonsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiStripCommon/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiStripCommonsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiStripCommon/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiStripCommon/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiStripCommon/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiStripCommonsrcclassesh")

add_library(DataFormatsSiStripCommon OBJECT 
  src/SiStripConstants.cc
  src/SiStripDetKey.cc
  src/SiStripEventSummary.cc
  src/SiStripFecKey.cc
  src/SiStripHistoTitle.cc
  src/SiStripEnumsAndStrings.cc
  src/SiStripFedKey.cc
  src/SiStripNullKey.cc
  src/SiStripKey.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiStripCommonsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiStripCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiStripCommon PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiStripCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiStripCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiStripCommon PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiStripCommon PUBLIC /usr/include/boost/regex/)

