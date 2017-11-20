add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/DataFormatsScalerssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/DataFormats/Scalers/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/DataFormatsScalerssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/DataFormats/Scalers/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/DataFormats/Scalers/src/classes.h /home/teemperor/cms/cmssw/DataFormats/Scalers/src/classes_def.xml
  COMMENT "Generating ROOT dict DataFormatsScalerssrcclassesh")

add_library(DataFormatsScalers OBJECT 
  src/Level1TriggerScalers.cc
  src/L1TriggerRates.cc
  src/TimeSpec.cc
  src/LumiScalers.cc
  src/BeamSpotOnline.cc
  src/L1AcceptBunchCrossing.cc
  src/Level1TriggerRates.cc
  src/DcsStatus.cc
  src/L1TriggerScalers.cc
  ${CMAKE_BINARY_DIR}/DataFormatsScalerssrcclassesh_rflx.cpp
)

target_include_directories(DataFormatsScalers PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsScalers PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsScalers PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsScalers PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsScalers PUBLIC /usr/include/root/)
target_include_directories(DataFormatsScalers PUBLIC /usr/include/boost/regex/)

