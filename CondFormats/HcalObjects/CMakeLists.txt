add_subdirectory(test)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/CondFormatsHcalObjectssrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/CondFormats/HcalObjects/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/CondFormatsHcalObjectssrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/CondFormats/HcalObjects/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/CondFormats/HcalObjects/src/classes.h /home/teemperor/cms/cmssw/CondFormats/HcalObjects/src/classes_def.xml
  COMMENT "Generating ROOT dict CondFormatsHcalObjectssrcclassesh")

add_library(CondFormatsHcalObjects OBJECT 
  src/HcalLongRecoParam.cc
  src/HcalTPParameters.cc
  src/T_EventSetup_HcalFlagHFDigiTimeParams.cc
  src/T_EventSetup_HcalPedestalWidths.cc
  src/OOTPileupCorrData.cc
  src/HcalZDCLowGainFraction.cc
  src/HcalCalibrationQIECoder.cc
  src/T_EventSetup_HcalLongRecoParams.cc
  src/HcalConstFunctor.cc
  src/HcalQIEData.cc
  src/HcalDcsValue.cc
  src/T_EventSetup_HcalL1TriggerObjects.cc
  src/T_EventSetup_HcalQIEShape.cc
  src/HcalDcsValues.cc
  src/HcalL1TriggerObject.cc
  src/T_EventSetup_OOTPileupCorrectionColl.cc
  src/T_EventSetup_HcalLUTCorrs.cc
  src/HcalCondObjectContainerBase.cc
  src/HcalPedestalWidth.cc
  src/T_EventSetup_HcalQIEData.cc
  src/T_EventSetup_OOTPileupCorrectionBuffer.cc
  src/T_EventSetup_HcalZSThresholds.cc
  src/HBHEDarkening.cc
  src/HcalZDCLowGainFractions.cc
  src/HcalValidationCorrs.cc
  src/HcalRawGains.cc
  src/HcalQIECoder.cc
  src/HcalChannelStatus.cc
  src/HcalRecoParam.cc
  src/HcalMCParams.cc
  src/T_EventSetup_HcalCalibrationQIEData.cc
  src/HcalLongRecoParams.cc
  src/HcalZSThresholds.cc
  src/HcalGainWidths.cc
  src/T_EventSetup_HcalFrontEndMap.cc
  src/T_EventSetup_HcalDcsValues.cc
  src/HcalSiPMParameters.cc
  src/HcalCubicInterpolator.cc
  src/T_EventSetup_HcalGainWidths.cc
  src/HcalFlagHFDigiTimeParam.cc
  src/HcalLogicalMap.cc
  src/T_EventSetup_HcalZDCLowGainFraction.cc
  src/T_EventSetup_HcalPFCorrs.cc
  src/HcalTimeCorrs.cc
  src/HBHELinearMap.cc
  src/T_EventSetup_HcalGains.cc
  src/T_EventSetup_HcalTimeCorrs.cc
  src/PiecewiseScalingPolynomial.cc
  src/T_EventSetup_OOTPileupCorrectionMapColl.cc
  src/T_EventSetup_HcalPedestals.cc
  src/HcalQIETypes.cc
  src/HcalMappingEntry.cc
  src/HcalChannelQuality.cc
  src/OOTPileupCorrectionColl.cc
  src/HcalRespCorrs.cc
  src/T_EventSetup_HcalChannelQuality.cc
  src/HBHENegativeEFilter.cc
  src/HcalChebyshevFunctor.cc
  src/T_EventSetup_HcalElectronicsMap.cc
  src/T_EventSetup_HcalQIETypes.cc
  src/T_EventSetup_HcalTPChannelParameters.cc
  src/HcalPedestalWidths.cc
  src/HcalLinearCompositionFunctor.cc
  src/HcalPolynomialFunctor.cc
  src/HcalIndexLookup.cc
  src/HcalSiPMCharacteristics.cc
  src/T_EventSetup_HcalLutMetadata.cc
  src/HcalCondObjectContainer.cc
  src/HcalRecoParams.cc
  src/T_EventSetup_HcalDcsMap.cc
  src/HcalFlagHFDigiTimeParams.cc
  src/HcalPedestals.cc
  src/HcalTPChannelParameters.cc
  src/HcalPiecewiseLinearFunctor.cc
  src/T_EventSetup_HcalRecoParams.cc
  src/HcalFrontEndMap.cc
  src/T_EventSetup_HcalSiPMCharacteristics.cc
  src/T_EventSetup_HcalInterpolatedPulseColl.cc
  src/HcalDetIdRelationship.cc
  src/T_EventSetup_HBHENegativeEFilter.cc
  src/HcalLUTCorrs.cc
  src/T_EventSetup_HcalRespCorrs.cc
  src/T_EventSetup_HcalTimingParams.cc
  src/T_EventSetup_HcalSiPMParameters.cc
  src/HcalInterpolatedPulseColl.cc
  src/DummyOOTPileupCorrection.cc
  src/HcalElectronicsMap.cc
  src/HcalDetIdTransform.cc
  src/T_EventSetup_HcalMCParams.cc
  src/HcalSiPMParameter.cc
  src/HcalPedestal.cc
  src/T_EventSetup_HcalTPParameters.cc
  src/T_EventSetup_HcalValidationCorrs.cc
  src/HcalTimingParam.cc
  src/HcalTPChannelParameter.cc
  src/HcalDcsMap.cc
  src/HcalLutMetadata.cc
  src/HcalInterpolatedTableFunctor.cc
  src/HcalCalibrationQIEData.cc
  src/HcalGains.cc
  src/HcalQIEShape.cc
  src/HcalPFCorrs.cc
  src/T_EventSetup_HBHEDarkening.cc
  src/T_EventSetup_HFPhase1PMTParams.cc
  src/HcalMCParam.cc
  ${CMAKE_BINARY_DIR}/CondFormatsHcalObjectssrcclassesh_rflx.cpp
)

target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/boost/python/)
target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/python2.7/)
target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/root/)
target_include_directories(CondFormatsHcalObjects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondFormatsHcalObjects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/boost/)
target_include_directories(CondFormatsHcalObjects PUBLIC /usr/include/boost/regex/)

