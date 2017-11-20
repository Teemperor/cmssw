add_library(CondToolsHcalPlugin OBJECT 
  HcalDcsValuesPopConAnalyzer.cc
  HcalGainsCheck.cc
  OOTPileupCompatibilityModules.cc
  HcalSiPMParametersPopConAnalyzer.cc
  OOTPileupCorrectionDBModules.cc
  HcalZDCLowGainFractionsPopConAnalyzer.cc
  HcalValidationCorrsPopConAnalyzer.cc
  HcalTimeCorrsPopConAnalyzer.cc
  HcalGainsPopConAnalyzer.cc
  CastorPedestalsPopConAnalyzer.cc
  HcalTimingParamsPopConAnalyzer.cc
  HcalFrontEndMapPopConAnalyzer.cc
  HcalDcsMapPopConAnalyzer.cc
  HcalZSThresholdsPopConAnalyzer.cc
  HcalAutoPedestalValidator.cc
  HcalDumpConditions.cc
  CastorGainsPopConAnalyzer.cc
  HcalFlagHFDigiTimeParamsPopConAnalyzer.cc
  HcalQIEDataPopConAnalyzer.cc
  HcalTPChannelParametersPopConAnalyzer.cc
  HBHENegativeEFilterDBModules.cc
  HcalQIEDataCheck.cc
  HcalPedestalsCheck.cc
  HcalGainWidthsPopConAnalyzer.cc
  CastorElectronicsMapPopConAnalyzer.cc
  HcalPedestalsPopConAnalyzer.cc
  HcalLongRecoParamsPopConAnalyzer.cc
  HcalLutMetadataPopConAnalyzer.cc
  HcalPedestalWidthsPopConAnalyzer.cc
  HcalQIETypesPopConAnalyzer.cc
  CastorRecoParamsPopConAnalyzer.cc
  HcalLUTCorrsPopConAnalyzer.cc
  CastorGainWidthsPopConAnalyzer.cc
  HcalInterpolatedPulseDBModules.cc
  HcalPedestalWidthsCheck.cc
  HcalTPParametersPopConAnalyzer.cc
  CastorChannelQualityPopConAnalyzer.cc
  BufferedBoostIODBWriter.cc
  HcalElectronicsMapPopConAnalyzer.cc
  HFPhase1PMTParamsDBModules.cc
  HcalSiPMCharacteristicsPopConAnalyzer.cc
  CastorSaturationCorrsPopConAnalyzer.cc
  HcalPFCorrsPopConAnalyzer.cc
  HcalRespCorrsPopConAnalyzer.cc
  HcalChannelQualityPopConAnalyzer.cc
  CastorDumpConditions.cc
  HcalRecoParamsPopConAnalyzer.cc
  HcalL1TriggerObjectsPopConAnalyzer.cc
  CastorPedestalWidthsPopConAnalyzer.cc
  CastorQIEDataPopConAnalyzer.cc
  HcalMCParamsPopConAnalyzer.cc
)

target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsHcalPlugin PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsHcalPlugin PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/boost/)
target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/root/)
target_include_directories(CondToolsHcalPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsHcalPlugin PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsHcalPlugin PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsHcalPlugin PUBLIC /usr/include/boost/regex/)

