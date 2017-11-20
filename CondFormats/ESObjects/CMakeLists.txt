add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsESObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/ESObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsESObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/ESObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/ESObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/ESObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsESObjectssrcclassesh")

add_library(CondFormatsESObjects OBJECT 
  src/T_EventSetup_ESWeightStripGroups.cc
  src/ESGain.cc
  src/T_EventSetup_ESChannelStatus.cc
  src/ESStripGroupId.cc
  src/ESADCToGeVConstant.cc
  src/T_EventSetup_ESMIPToGeVConstant.cc
  src/ESRecHitRatioCuts.cc
  src/ESPedestals.cc
  src/ESChannelStatus.cc
  src/ESWeight.cc
  src/ESEEIntercalibConstants.cc
  src/T_EventSetup_ESRecHitRatioCuts.cc
  src/ESTimeSampleWeights.cc
  src/T_EventSetup_ESMissingEnergyCalibration.cc
  src/T_EventSetup_ESTimeSampleWeights.cc
  src/ESMIPToGeVConstant.cc
  src/ESThresholds.cc
  src/ESWeightSet.cc
  src/ESCondObjectContainer.cc
  src/ESMissingEnergyCalibration.cc
  src/T_EventSetup_ESEEIntercalibConstants.cc
  src/T_EventSetup_ESThresholds.cc
  src/T_EventSetup_ESCondObjectContainer_Float.cc
  src/T_EventSetup_ESGain.cc
  src/T_EventSetup_ESPedestals.cc
  src/ESTBWeights.cc
  src/T_EventSetup_ESADCToGeVConstant.cc
  src/T_EventSetup_ESTBWeights.cc
  src/ESChannelStatusCode.cc
  ${CMAKE_BINARY_DIR}/CondFormatsESObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsESObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsESObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsESObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsESObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsESObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsESObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsESObjects PUBLIC /usr/include/boost/regex/)

