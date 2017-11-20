add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsCTPPSAlignmentsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/CTPPSAlignment/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsCTPPSAlignmentsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/CTPPSAlignment/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/CTPPSAlignment/src/classes.h /home/teemperor/cms/cmssw/DataFormats/CTPPSAlignment/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsCTPPSAlignmentsrcclassesh")

add_library(DataFormatsCTPPSAlignment OBJECT 
  src/RPAlignmentCorrectionsData.cc
  src/RPAlignmentCorrectionData.cc
  ${CMAKE_BINARY_DIR}/DataFormatsCTPPSAlignmentsrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsCTPPSAlignment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsCTPPSAlignment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsCTPPSAlignment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsCTPPSAlignment PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsCTPPSAlignment PUBLIC /usr/include/root/)
target_include_directories(DataFormatsCTPPSAlignment PUBLIC /usr/include/boost/regex/)

