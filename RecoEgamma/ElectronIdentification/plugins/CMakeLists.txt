add_library(RecoEgammaElectronIdentificationPlugins OBJECT 
  SealModule.cc
  ElectronMVAEstimatorRun2Spring16HZZ_Reg.cc
  ElectronRegressionValueMapProducer.cc
  ElectronMVAEstimatorRun2Phys14NonTrig.cc
  ElectronIDValueMapProducer.cc
  VersionedPatElectronIdProducer.cc
  ElectronMVAEstimatorRun2Spring15Trig.cc
  ElectronHEEPIDValueMapProducer.cc
  ElectronMVAValueMapProducer.cc
  ElectronLikelihoodESSource.cc
  VersionedGsfElectronIdProducer.cc
  ElectronMVAEstimatorRun2Spring15NonTrig.cc
  ElectronIDSelectorCutBased.cc
  ElectronIDSelectorLikelihood.cc
  ElectronMVAEstimatorRun2Spring16GeneralPurpose_Reg.cc
  ElectronIDSelectorNeuralNet.cc
  ElectronIdMVABased.cc
)

target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaElectronIdentificationPlugins PUBLIC /usr/include/boost/regex/)

add_library(RecoEgammaElectronIdentificationPlugins_cuts OBJECT 
  cuts/GsfEleFull5x5E2x5OverE5x5Cut.cc
  cuts/GsfEleConversionVetoCut.cc
  cuts/GsfEleValueMapIsoRhoCut.cc
  cuts/GsfEleTrkPtIsoCut.cc
  cuts/GsfEleFull5x5SigmaIEtaIEtaWithSatCut.cc
  cuts/GsfEleDEtaInCut.cc
  cuts/GsfEleNormalizedGsfChi2Cut.cc
  cuts/GsfEleDeltaBetaIsoCutStandalone.cc
  cuts/GsfEleDeltaBetaIsoCut.cc
  cuts/GsfEleSCEtaMultiRangeCut.cc
  cuts/GsfEleDEtaInSeedCut.cc
  cuts/GsfEleSigmaIEtaIEtaCut.cc
  cuts/GsfEleFull5x5SigmaIEtaIEtaCut.cc
  cuts/GsfEleEInverseMinusPInverseCut.cc
  cuts/GsfEleMVACut.cc
  cuts/GsfEleDxyCut.cc
  cuts/GsfEleDEtaInLinearCut.cc
  cuts/GsfEleSCMaxAbsEtaCut.cc
  cuts/GsfEleCalPFClusterIsoCut.cc
  cuts/GsfEleHadronicOverEMLinearCut.cc
  cuts/GsfEleHadronicOverEMCut.cc
  cuts/GsfEleE2x5OverE5x5Cut.cc
  cuts/GsfEleEmHadD1IsoRhoCut.cc
  cuts/GsfEleDPhiInCut.cc
  cuts/GsfEleEffAreaPFIsoCut.cc
  cuts/GsfEleMissingHitsCut.cc
  cuts/GsfEleFull5x5E2x5OverE5x5WithSatCut.cc
  cuts/GsfEleEcalDrivenCut.cc
  cuts/GsfEleTrkPtIsoRhoCut.cc
  cuts/GsfEleDzCut.cc
)

target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/python2.7/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/boost/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/eigen3/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/boost/python/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/root/)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoEgammaElectronIdentificationPlugins_cuts PUBLIC /usr/include/boost/regex/)

