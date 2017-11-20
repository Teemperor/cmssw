add_subdirectory(bin)
add_subdirectory(test)
add_subdirectory(plugins)
add_library(CondToolsHcal OBJECT 
  src/HcalLutMetadataHandler.cc
  src/HcalQIEDataHandler.cc
  src/CastorQIEDataHandler.cc
  src/HcalQIETypesHandler.cc
  src/HcalLUTCorrsHandler.cc
  src/HcalDcsMapHandler.cc
  src/HcalTPParametersHandler.cc
  src/HcalPedestalsHandler.cc
  src/HcalZSThresholdsHandler.cc
  src/HcalMCParamsHandler.cc
  src/HcalSiPMCharacteristicsHandler.cc
  src/HcalGainWidthsHandler.cc
  src/parseHcalDetId.cc
  src/StreamOutFormatTarget.cc
  src/CastorSaturationCorrsHandler.cc
  src/HcalRespCorrsHandler.cc
  src/HcalElectronicsMapHandler.cc
  src/HcalDcsValuesHandler.cc
  src/CastorElectronicsMapHandler.cc
  src/HcalChannelQualityHandler.cc
  src/HcalRecoParamsHandler.cc
  src/CastorPedestalWidthsHandler.cc
  src/CastorPedestalsHandler.cc
  src/HcalSiPMParametersHandler.cc
  src/HcalZDCLowGainFractionsHandler.cc
  src/HcalTimingParamsHandler.cc
  src/CastorGainWidthsHandler.cc
  src/HcalPedestalWidthsHandler.cc
  src/HcalTPChannelsParametersHandler.cc
  src/HcalLongRecoParamsHandler.cc
  src/HcalFrontEndMapHandler.cc
  src/CastorChannelQualityHandler.cc
  src/CastorGainsHandler.cc
  src/HcalGainsHandler.cc
  src/HcalDbXml.cc
  src/HcalTimeCorrsHandler.cc
  src/HcalL1TriggerObjectsHandler.cc
  src/HcalPFCorrsHandler.cc
  src/HcalValidationCorrsHandler.cc
  src/CastorRecoParamsHandler.cc
  src/HcalFlagHFDigiTimeParamsHandler.cc
)

target_include_directories(CondToolsHcal PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsHcal PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsHcal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsHcal PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsHcal PUBLIC /usr/include/boost/)
target_include_directories(CondToolsHcal PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsHcal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsHcal PUBLIC /usr/include/root/)
target_include_directories(CondToolsHcal PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsHcal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsHcal PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsHcal PUBLIC /usr/include/boost/regex/)

