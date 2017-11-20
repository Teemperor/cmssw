add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsSiPixelObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/SiPixelObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsSiPixelObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/SiPixelObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/SiPixelObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/SiPixelObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsSiPixelObjectssrcclassesh")

add_library(CondFormatsSiPixelObjects OBJECT 
  src/SiPixelLorentzAngle.cc
  src/PixelFEDLink.cc
  src/T_EventSetup_SiPixelGenErrorDBObject.cc
  src/SiPixelGainCalibrationForHLT.cc
  src/SiPixelQuality.cc
  src/T_EventSetup_SiPixelDynamicInefficiency.cc
  src/SiPixelGainCalibration.cc
  src/T_EventSetup_SiPixelDisabledModules.cc
  src/T_EventSetup_SiPixelTemplateDBObject.cc
  src/SiPixelPedestals.cc
  src/T_EventSetup_SiPixelCPEGenericErrorParm.cc
  src/T_EventSetup_SiPixelLorentzAngle.cc
  src/SiPixelPerformanceSummary.cc
  src/T_EventSetup_SiPixelGainCalibration.cc
  src/SiPixelCPEGenericErrorParm.cc
  src/SiPixelFedCablingMap.cc
  src/SiPixelCalibConfiguration.cc
  src/T_EventSetup_SiPixelQuality.cc
  src/T_EventSetup_SiPixelFedCablingMap.cc
  src/T_EventSetup_SiPixelPerformanceSummary.cc
  src/SiPixelFedCablingTree.cc
  src/T_EventSetup_SiPixelPedestals.cc
  src/SiPixelGainCalibrationOffline.cc
  src/T_EventSetup_SiPixel2DTemplateDBObject.cc
  src/SiPixelDbItem.cc
  src/SiPixelDetSummary.cc
  src/SiPixelDynamicInefficiency.cc
  src/PixelFEDCabling.cc
  src/PixelROC.cc
  src/FrameConversion.cc
  src/T_EventSetup_SiPixelCalibConfiguration.cc
  src/T_EventSetup_PixelDCSObject.cc
  src/T_EventSetup_SiPixelGainCalibrationForHLT.cc
  src/SiPixelDisabledModules.cc
  src/SiPixelFrameReverter.cc
  src/SiPixelFrameConverter.cc
  src/T_EventSetup_SiPixelGainCalibrationOffline.cc
  ${CMAKE_BINARY_DIR}/CondFormatsSiPixelObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsSiPixelObjects PUBLIC /usr/include/boost/regex/)

