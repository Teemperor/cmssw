add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsCTPPSReadoutObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/CTPPSReadoutObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsCTPPSReadoutObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/CTPPSReadoutObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/CTPPSReadoutObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/CTPPSReadoutObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsCTPPSReadoutObjectssrcclassesh")

add_library(CondFormatsCTPPSReadoutObjects OBJECT 
  src/T_EventSetup_CTPPSPixelDAQMapping.cc
  src/TotemSymbId.cc
  src/CTPPSPixelDAQMapping.cc
  src/TotemFramePosition.cc
  src/T_EventSetup_CTPPSPixelAnalysisMask.cc
  src/TotemDAQMapping.cc
  src/CTPPSPixelAnalysisMask.cc
  src/TotemAnalysisMask.cc
  src/CTPPSPixelFramePosition.cc
  src/CTPPSPixelROC.cc
  ${CMAKE_BINARY_DIR}/CondFormatsCTPPSReadoutObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsCTPPSReadoutObjects PUBLIC /usr/include/boost/regex/)

