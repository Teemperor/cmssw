add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsAlignmentsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/Alignment/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsAlignmentsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/Alignment/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/Alignment/src/classes.h /home/teemperor/cms/cmssw/CondFormats/Alignment/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsAlignmentsrcclassesh")

add_library(CondFormatsAlignment OBJECT 
  src/T_EventSetup_Alignment.cc
  src/DetectorGlobalPosition.cc
  src/T_EventSetup_AlignmentSurfaceDeformation.cc
  src/T_EventSetup_AlignmentErrorExtended.cc
  src/T_EventSetup_AlignmentError.cc
  src/T_EventSetup_SurveyErrors.cc
  ${CMAKE_BINARY_DIR}/CondFormatsAlignmentsrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsAlignment PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsAlignment PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsAlignment PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsAlignment PUBLIC /usr/include/root/)
target_include_directories(CondFormatsAlignment PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsAlignment PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsAlignment PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsAlignment PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsAlignment PUBLIC /usr/include/boost/regex/)

