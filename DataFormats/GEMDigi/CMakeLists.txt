add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsGEMDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/GEMDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsGEMDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/GEMDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/GEMDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/GEMDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsGEMDigisrcclassesh")

add_library(DataFormatsGEMDigi OBJECT 
  src/ME0DigiPreReco.cc
  src/GEMCoPadDigi.cc
  src/ME0PadDigi.cc
  src/GEMPadDigiCluster.cc
  src/ME0TriggerDigi.cc
  src/GEMPadDigi.cc
  src/ME0Digi.cc
  src/GEMDigi.cc
  ${CMAKE_BINARY_DIR}/DataFormatsGEMDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsGEMDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsGEMDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsGEMDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsGEMDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsGEMDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsGEMDigi PUBLIC /usr/include/boost/regex/)

