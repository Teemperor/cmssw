add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsRunInfosrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/RunInfo/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsRunInfosrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/RunInfo/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/RunInfo/src/classes.h /home/teemperor/cms/cmssw/CondFormats/RunInfo/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsRunInfosrcclassesh")

add_library(CondFormatsRunInfo OBJECT 
  src/T_EventSetup_MixingModuleConfig.cc
  src/T_EventSetup_L1TriggerScaler.cc
  src/T_EventSetup_RunInfo.cc
  src/T_EventSetup_FillInfo.cc
  src/L1TriggerScaler.cc
  src/RunSummary.cc
  src/T_EventSetup_RunSummary.cc
  src/RunNumber.cc
  src/RunInfo.cc
  src/T_EventSetup_RunNumber.cc
  src/MixingModuleConfig.cc
  src/FillInfo.cc
  ${CMAKE_BINARY_DIR}/CondFormatsRunInfosrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsRunInfo PUBLIC /home/teemperor/cms/ext/coral/CoralBase)
target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/root/)
target_include_directories(CondFormatsRunInfo PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsRunInfo PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsRunInfo PUBLIC /usr/include/boost/regex/)

