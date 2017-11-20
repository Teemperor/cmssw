add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsCastorObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/CastorObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsCastorObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/CastorObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/CastorObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/CastorObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsCastorObjectssrcclassesh")

add_library(CondFormatsCastorObjects OBJECT 
  src/CastorRecoParam.cc
  src/CastorElectronicsMap.cc
  src/CastorChannelQuality.cc
  src/T_EventSetup_CastorRecoParams.cc
  src/CastorCondObjectContainer.cc
  src/CastorChannelStatus.cc
  src/CastorPedestals.cc
  src/CastorSaturationCorrs.cc
  src/CastorGains.cc
  src/CastorPedestal.cc
  src/T_EventSetup_CastorSaturationCorrs.cc
  src/CastorPedestalWidths.cc
  src/CastorCalibrationQIECoder.cc
  src/CastorQIEData.cc
  src/T_EventSetup_CastorGains.cc
  src/CastorSaturationCorr.cc
  src/T_EventSetup_CastorQIEShape.cc
  src/T_EventSetup_CastorPedestalWidths.cc
  src/CastorQIEShape.cc
  src/T_EventSetup_CastorElectronicsMap.cc
  src/T_EventSetup_CastorCalibrationQIEData.cc
  src/CastorQIECoder.cc
  src/CastorCalibrationQIEData.cc
  src/T_EventSetup_CastorGainWidths.cc
  src/T_EventSetup_CastorPedestals.cc
  src/CastorGainWidths.cc
  src/CastorPedestalWidth.cc
  src/CastorRawGains.cc
  src/T_EventSetup_CastorChannelQuality.cc
  src/T_EventSetup_CastorQIEData.cc
  src/CastorRecoParams.cc
  ${CMAKE_BINARY_DIR}/CondFormatsCastorObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsCastorObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsCastorObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsCastorObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsCastorObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsCastorObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsCastorObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsCastorObjects PUBLIC /usr/include/boost/regex/)

