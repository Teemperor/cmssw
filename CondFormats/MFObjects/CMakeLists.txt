add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsMFObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/MFObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsMFObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/MFObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/MFObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/MFObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsMFObjectssrcclassesh")

add_library(CondFormatsMFObjects OBJECT 
  src/T_EventSetup_MagFieldConfig.cc
  src/MagFieldConfig.cc
  ${CMAKE_BINARY_DIR}/CondFormatsMFObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsMFObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsMFObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsMFObjects PUBLIC /usr/include/boost/regex/)

