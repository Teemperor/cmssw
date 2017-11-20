add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsDTObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/DTObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsDTObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/DTObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/DTObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/DTObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsDTObjectssrcclassesh")

add_library(CondFormatsDTObjects OBJECT 
  src/DTMtime.cc
  src/DTTtrig.cc
  src/DTKeyedConfig.cc
  src/T_EventSetup_DTDeadFlag.cc
  src/T_EventSetup_DTT0.cc
  src/DTPerformance.cc
  src/DTRangeT0.cc
  src/T_EventSetup_DTMtime.cc
  src/DTT0.cc
  src/T_EventSetup_DTStatusFlag.cc
  src/T_EventSetup_DTPerformance.cc
  src/DTDeadFlag.cc
  src/T_EventSetup_DTCCBConfig.cc
  src/DTTimeUnits.cc
  src/T_EventSetup_DTRecoConditions.cc
  src/T_EventSetup_DTReadOutMapping.cc
  src/T_EventSetup_DTRangeT0.cc
  src/DTRecoUncertainties.cc
  src/T_EventSetup_DTHVStatus.cc
  src/DTSequentialCellNumber.cc
  src/T_EventSetup_DTLVStatus.cc
  src/DTTPGParameters.cc
  src/DTLVStatus.cc
  src/DTStatusFlag.cc
  src/DTCCBConfig.cc
  src/DTSequentialLayerNumber.cc
  src/T_EventSetup_DTRecoUncertainties.cc
  src/DTRecoConditions.cc
  src/T_EventSetup_DTTtrig.cc
  src/T_EventSetup_DTTPGParameters.cc
  src/DTHVStatus.cc
  src/DTReadOutMapping.cc
  src/DTVelocityUnits.cc
  ${CMAKE_BINARY_DIR}/CondFormatsDTObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsDTObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsDTObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsDTObjects PUBLIC /usr/include/boost/regex/)

