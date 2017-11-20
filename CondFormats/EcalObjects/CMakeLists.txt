add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsEcalObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/EcalObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsEcalObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/EcalObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/EcalObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/EcalObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsEcalObjectssrcclassesh")

add_library(CondFormatsEcalObjects OBJECT 
  src/T_EventSetup_EcalTimeBiasCorrections.cc
  src/EcalPedestals.cc
  src/EcalDCSTowerStatus.cc
  src/EcalTBWeights.cc
  src/T_EventSetup_EcalDCSTowerStatus.cc
  src/T_EventSetup_EcalPulseSymmCovariances.cc
  src/EcalTPGWeights.cc
  src/T_EventSetup_EcalTPGLinearizationConst.cc
  src/EcalTPGWeightIdMap.cc
  src/T_EventSetup_EcalDQMChannelStatus.cc
  src/EcalDQMStatusHelper.cc
  src/T_EventSetup_EcalCondObjectContainer_Float.cc
  src/T_EventSetup_EcalMappingElectronics.cc
  src/T_EventSetup_EcalTPGPedestals.cc
  src/EcalTPGWeightGroup.cc
  src/T_EventSetup_EcalDAQTowerStatus.cc
  src/T_EventSetup_EcalTimeDependentCorrections.cc
  src/T_EventSetup_EcalPTMTemperatures.cc
  src/T_EventSetup_EcalTPGCrystalStatus.cc
  src/EcalTPGTowerStatus.cc
  src/T_EventSetup_EcalSamplesCorrelation.cc
  src/EcalWeightSet.cc
  src/T_EventSetup_EcalTPGLutIdMap.cc
  src/T_EventSetup_EcalTPGStripStatus.cc
  src/EcalSampleMask.cc
  src/EcalTPGFineGrainTowerEE.cc
  src/EcalTPGFineGrainEBGroup.cc
  src/EcalTPGSpike.cc
  src/T_EventSetup_EcalTPGFineGrainTowerEE.cc
  src/EcalPulseCovariances.cc
  src/EcalMGPAGainRatio.cc
  src/T_EventSetup_EcalLaserAPDPNRatios.cc
  src/EcalADCToGeVConstant.cc
  src/T_EventSetup_EcalTPGFineGrainEBIdMap.cc
  src/EcalTPGLut.cc
  src/T_EventSetup_EcalDQMTowerStatus.cc
  src/EcalCondTowerObjectContainer.cc
  src/EcalWeight.cc
  src/EcalTPGCrystalStatusCode.cc
  src/T_EventSetup_EcalSampleMask.cc
  src/EcalTPGLutGroup.cc
  src/T_EventSetup_EcalChannnelStatus.cc
  src/T_EventSetup_EcalTPGWeightGroup.cc
  src/EcalTPGStripStatus.cc
  src/T_EventSetup_EcalWeightXtalGroups.cc
  src/T_EventSetup_EcalTPGWeightIdMap.cc
  src/T_EventSetup_EcalDCUTemperatures.cc
  src/EcalDAQStatusCode.cc
  src/EcalSamplesCorrelation.cc
  src/EcalDQMTowerStatus.cc
  src/EcalPulseSymmCovariances.cc
  src/T_EventSetup_EcalFunctionParameters.cc
  src/EcalTimeBiasCorrections.cc
  src/EcalDAQTowerStatus.cc
  src/EcalDQMStatusCode.cc
  src/EcalXtalGroupId.cc
  src/EcalTPGFineGrainConstEB.cc
  src/T_EventSetup_EcalADCToGeVConstant.cc
  src/T_EventSetup_EcalTPGFineGrainStripEE.cc
  src/EcalDCSTowerStatusHelper.cc
  src/EcalTPGLutIdMap.cc
  src/T_EventSetup_EcalTPGSlidingWindow.cc
  src/T_EventSetup_EcalSRSettings.cc
  src/EcalTPGGroups.cc
  src/T_EventSetup_EcalPulseShapes.cc
  src/EcalTimeOffsetConstant.cc
  src/EcalDCUTemperatures.cc
  src/EcalTPGSlidingWindow.cc
  src/EcalPTMTemperatures.cc
  src/T_EventSetup_EcalTBWeights.cc
  src/T_EventSetup_EcalTPGPhysicsConst.cc
  src/EcalSRSettings.cc
  src/T_EventSetup_EcalTPGFineGrainEBGroup.cc
  src/T_EventSetup_EcalTimeOffsetConstant.cc
  src/T_EventSetup_EcalTPGSpike.cc
  src/EcalDQMChannelStatus.cc
  src/EcalTPGFineGrainEBIdMap.cc
  src/T_EventSetup_EcalTPGTowerStatus.cc
  src/EcalPulseShapes.cc
  src/EcalTPGFineGrainStripEE.cc
  src/EcalTPGPhysicsConst.cc
  src/T_EventSetup_EcalPulseCovariances.cc
  src/T_EventSetup_EcalTPGLutGroup.cc
  src/T_EventSetup_EcalPedestals.cc
  src/T_EventSetup_EcalGainRatios.cc
  ${CMAKE_BINARY_DIR}/CondFormatsEcalObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsEcalObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsEcalObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsEcalObjects PUBLIC /usr/include/boost/regex/)

