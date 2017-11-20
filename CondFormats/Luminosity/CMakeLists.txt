add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsLuminositysrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/Luminosity/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsLuminositysrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/Luminosity/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/Luminosity/src/classes.h /home/teemperor/cms/cmssw/CondFormats/Luminosity/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsLuminositysrcclassesh")

add_library(CondFormatsLuminosity OBJECT 
  src/T_EventSetup_LumiSectionData.cc
  src/LumiSectionData.cc
  ${CMAKE_BINARY_DIR}/CondFormatsLuminositysrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsLuminosity PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsLuminosity PUBLIC /usr/include/root/)
target_include_directories(CondFormatsLuminosity PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsLuminosity PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsLuminosity PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsLuminosity PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsLuminosity PUBLIC /usr/include/boost/regex/)

