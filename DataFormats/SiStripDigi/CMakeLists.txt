add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsSiStripDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/SiStripDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsSiStripDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/SiStripDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/SiStripDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/SiStripDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsSiStripDigisrcclassesh")

add_library(DataFormatsSiStripDigi OBJECT 
  src/SiStripDigi.cc
  ${CMAKE_BINARY_DIR}/DataFormatsSiStripDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsSiStripDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsSiStripDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsSiStripDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsSiStripDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsSiStripDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsSiStripDigi PUBLIC /usr/include/boost/regex/)

