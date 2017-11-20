add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsHIObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/HIObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsHIObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/HIObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/HIObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/HIObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsHIObjectssrcclassesh")

add_library(CondFormatsHIObjects OBJECT 
  src/T_EventSetup_CentralityCuts.cc
  ${CMAKE_BINARY_DIR}/CondFormatsHIObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsHIObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsHIObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsHIObjects PUBLIC /usr/include/boost/regex/)

