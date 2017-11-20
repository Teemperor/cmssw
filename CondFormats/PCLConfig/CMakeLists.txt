add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsPCLConfigsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/PCLConfig/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsPCLConfigsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/PCLConfig/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/PCLConfig/src/classes.h /home/teemperor/cms/cmssw/CondFormats/PCLConfig/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsPCLConfigsrcclassesh")

add_library(CondFormatsPCLConfig OBJECT 
  src/T_EventSetup_AlignPCLThresholds.cc
  src/AlignPCLThreshold.cc
  src/AlignPCLThresholds.cc
  ${CMAKE_BINARY_DIR}/CondFormatsPCLConfigsrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/root/)
target_include_directories(CondFormatsPCLConfig PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsPCLConfig PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsPCLConfig PUBLIC /usr/include/boost/regex/)

