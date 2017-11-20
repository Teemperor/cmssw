add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsHLTObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/HLTObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsHLTObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/HLTObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/HLTObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/HLTObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsHLTObjectssrcclassesh")

add_library(CondFormatsHLTObjects OBJECT 
  src/AlCaRecoTriggerBits.cc
  src/T_EventSetup_HLTPrescaleTableCond.cc
  src/T_EventSetup_AlCaRecoTriggerBits.cc
  ${CMAKE_BINARY_DIR}/CondFormatsHLTObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsHLTObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsHLTObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsHLTObjects PUBLIC /usr/include/boost/regex/)

