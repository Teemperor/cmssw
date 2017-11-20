add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/FWCoreCommonsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/FWCore/Common/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/FWCoreCommonsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/FWCore/Common/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/FWCore/Common/src/classes.h /home/teemperor/cms/cmssw/FWCore/Common/src/classes_def.xml
  COMMENT "Generating ROOT dict FWCoreCommonsrcclassesh")

add_library(FWCoreCommon OBJECT 
  src/EventBase.cc
  src/Provenance.cc
  src/LuminosityBlockBase.cc
  src/TriggerNames.cc
  src/RunBase.cc
  src/TriggerResultsByName.cc
  ${CMAKE_BINARY_DIR}/FWCoreCommonsrcclassesh_rflx.cpp
)

target_include_directories(FWCoreCommon PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FWCoreCommon PUBLIC /usr/include/root/)
target_include_directories(FWCoreCommon PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FWCoreCommon PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FWCoreCommon PUBLIC /usr/include/boost/)
target_include_directories(FWCoreCommon PUBLIC /usr/include/boost/regex/)

