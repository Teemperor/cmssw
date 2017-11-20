add_subdirectory(bin)
add_subdirectory(plugins)
add_library(CondToolsEcal OBJECT 
  src/EcalTPGLinearizationConstXMLTranslator.cc
  src/EcalTPGFineGrainTowerfromFile.cc
  src/EcalTPGSpikeThresholdfromFile.cc
  src/EcalLaser_weekly_Handler.cc
  src/EcalDCSHandler.cc
  src/EcalWeightSetXMLTranslator.cc
  src/EcalTPGPhysicsConstfromFile.cc
  src/EcalTPGFineGrainStripfromFile.cc
  src/EcalClusterEnergyCorrectionObjectSpecificXMLTranslator.cc
  src/EcalClusterEnergyCorrectionXMLTranslator.cc
  src/EcalClusterLocalContCorrXMLTranslator.cc
  src/EcalIntercalibHandler.cc
  src/EcalTPGPhysicsConstHandler.cc
  src/EcalTPGStripStatusXMLTranslator.cc
  src/EcalClusterCrackCorrXMLTranslator.cc
  src/EcalADCToGeVXMLTranslator.cc
  src/EcalTPGSpikeThresholdHandler.cc
  src/EcalDAQTowerStatusXMLTranslator.cc
  src/EcalTPGBadXTHandler.cc
  src/EcalPulseSymmCovariancesHandler.cc
  src/EcalAlignmentXMLTranslator.cc
  src/EcalTBWeightsXMLTranslator.cc
  src/EcalTPGFineGrainEBIdMapHandler.cc
  src/EcalTPGLutGroupHandler.cc
  src/EcalPulseShapesHandler.cc
  src/EcalLaser_weekly_Linearization_Check.cc
  src/EcalTPGTowerStatusXMLTranslator.cc
  src/EcalDCSTowerStatusXMLTranslator.cc
  src/EcalTestDevDB.cc
  src/EcalTPGPedfromFile.cc
  src/EcalTPGPedestalsHandler.cc
  src/EcalLaserAPDPNRatiosXMLTranslator.cc
  src/EcalLinearCorrectionsXMLTranslator.cc
  src/EcalTPGLinPed.cc
  src/DOMHelperFunctions.cc
  src/EcalTPGFineGrainTowerEEHandler.cc
  src/EcalLaser_weekly_Linearization.cc
  src/EcalTimeOffsetXMLTranslator.cc
  src/EcalTPGBadStripHandler.cc
  src/EcalTPGFineGrainEBGroupHandler.cc
  src/EcalWeightGroupXMLTranslator.cc
  src/ESGainXMLTranslator.cc
  src/EcalTPGCrystalStatusXMLTranslator.cc
  src/EcalPedestalsXMLTranslator.cc
  src/EcalSRPHandler.cc
  src/EcalPulseShapesXMLTranslator.cc
  src/EcalGainRatiosXMLTranslator.cc
  src/EcalADCToGeVHandler.cc
  src/EcalGetLaserData.cc
  src/EcalDAQHandler.cc
  src/EcalDBCopy.cc
  src/EcalTimeBiasCorrectionsXMLTranslator.cc
  src/EcalTPGLinConstHandler.cc
  src/EcalChannelStatusHandler.cc
  src/EcalFloatCondObjectContainerXMLTranslator.cc
  src/EcalPulseSymmCovariancesXMLTranslator.cc
  src/EcalChannelStatusXMLTranslator.cc
  src/EcalTPGLutIdMapHandler.cc
  src/EcalLaserHandler.cc
  src/EcalErrorMask.cc
  src/EcalTPGSlidingWindowHandler.cc
  src/ESDBCopy.cc
  src/EcalTPGBadTTHandler.cc
  src/EcalTPGWeightIdMapHandler.cc
  src/EcalPedestalsHandler.cc
  src/EcalTPGFineGrainStripEEHandler.cc
  src/EcalTPGWeightGroupHandler.cc
  src/EcalMappingElectronicsHandler.cc
  src/EcalPedestalHistory.cc
)

target_include_directories(CondToolsEcal PUBLIC /usr/include/python2.7/)
target_include_directories(CondToolsEcal PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CondToolsEcal PUBLIC /usr/include/boost/serialization/)
target_include_directories(CondToolsEcal PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(CondToolsEcal PUBLIC /usr/include/boost/)
target_include_directories(CondToolsEcal PUBLIC /usr/include/boost/python/)
target_include_directories(CondToolsEcal PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CondToolsEcal PUBLIC /usr/include/root/)
target_include_directories(CondToolsEcal PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(CondToolsEcal PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CondToolsEcal PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(CondToolsEcal PUBLIC /usr/include/boost/regex/)

