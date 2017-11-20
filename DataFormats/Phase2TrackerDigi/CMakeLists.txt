add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsPhase2TrackerDigisrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerDigi/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsPhase2TrackerDigisrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerDigi/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerDigi/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Phase2TrackerDigi/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsPhase2TrackerDigisrcclassesh")

add_library(DataFormatsPhase2TrackerDigi OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsPhase2TrackerDigisrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsPhase2TrackerDigi PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsPhase2TrackerDigi PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsPhase2TrackerDigi PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsPhase2TrackerDigi PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsPhase2TrackerDigi PUBLIC /usr/include/root/)
target_include_directories(DataFormatsPhase2TrackerDigi PUBLIC /usr/include/boost/regex/)

