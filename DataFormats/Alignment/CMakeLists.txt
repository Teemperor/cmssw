add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsAlignmentsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Alignment/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsAlignmentsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Alignment/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Alignment/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Alignment/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsAlignmentsrcclassesh")

add_library(DataFormatsAlignment OBJECT 
  src/TkLasBeam.cc
  src/TkFittedLasBeam.cc
  src/AlignmentClusterFlag.cc
  ${CMAKE_BINARY_DIR}/DataFormatsAlignmentsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsAlignment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsAlignment PUBLIC /usr/include/root/)
target_include_directories(DataFormatsAlignment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsAlignment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsAlignment PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsAlignment PUBLIC /usr/include/boost/regex/)

