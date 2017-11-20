add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsScoutingsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Scouting/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsScoutingsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Scouting/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Scouting/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Scouting/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsScoutingsrcclassesh")

add_library(DataFormatsScouting OBJECT 
  ${CMAKE_BINARY_DIR}/DataFormatsScoutingsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsScouting PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsScouting PUBLIC /usr/include/root/)
target_include_directories(DataFormatsScouting PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsScouting PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsScouting PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsScouting PUBLIC /usr/include/boost/regex/)

