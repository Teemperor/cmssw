add_library(RecoTauTagRecoTauPlugins OBJECT 
  CaloRecoTauDiscriminationByTauPolarization.cc
  PFRecoTauDiscriminationByDeltaE.cc
  PFRecoTauDiscriminationAgainstElectronMVA6.cc
  RecoTauDiscriminantFunctionPlugins.cc
  CaloRecoTauDiscriminationByCharge.cc
  PFRecoTauChargedHadronQualityPlugins.cc
  RecoTauChargedHadronMultiplicityCleanerPlugin.cc
  PFRecoTauDiscriminationAgainstElectron2.cc
  PFTauViewRefMerger.cc
  PFRecoTauDiscriminationAgainstMuon.cc
  RecoTauCleaner.cc
  CaloRecoTauDiscriminationByIsolation.cc
  PFRecoTauDiscriminationByHPSSelection.cc
  PATTauDiscriminationByMVAIsolationRun2.cc
  PFRecoTauCorrectedInvariantMassProducer.cc
  TauDiscriminationAgainstCaloMuon.cc
  RecoTauBuilderCombinatoricPlugin.cc
  PFRecoTauDiscriminationByNProngs.cc
  CaloRecoTauDiscriminationByDeltaE.cc
  RecoTauStringCleanerPlugin.cc
  PFRecoTauDiscriminationAgainstMuon2.cc
  PFRecoTauChargedHadronFromPFCandidatePlugin.cc
  PFRecoTauMassPlugin.cc
  RecoTauDiscriminantFromDiscriminator.cc
  RecoTauPiZeroQualityPlugins.cc
  PFRecoTauDiscriminationAgainstMuonMVA.cc
  RecoTauTwoProngFilter.cc
  CaloRecoTauDiscriminationAgainstElectron.cc
  RecoTauTauTagInfoWorkaroundModifier.cc
  RecoTauSoftTwoProngTausCleanerPlugin.cc
  CaloRecoTauTagInfoProducer.cc
  RecoTauEnergyRecoveryPlugin2.cc
  RecoTauIsolationDiscriminantPlugins.cc
  RecoTauDiscriminantInvariantWidth.cc
  RecoTauPiZeroStripPlugin2.cc
  RecoTauBuilderConePlugin.cc
  RecoTauPiZeroStripPlugin3.cc
  CaloRecoTauDiscriminationByLeadingTrackPtCut.cc
  RecoTauDecayModeCutMultiplexer.cc
  CaloRecoTauDiscriminationByFlightPathSignificance.cc
  PFRecoTauDiscriminationByCharge.cc
  CaloRecoTauDiscriminationByInvMass.cc
  TauDiscriminationAgainstMuon.cc
  RecoTauPiZeroStripPlugin.cc
  PFRecoTauDiscriminationByMVAIsolation2.cc
  CaloRecoTauDiscriminationByNProngs.cc
  RecoTauPiZeroCombinatoricPlugin.cc
  PFRecoTauTagInfoProducer.cc
  PFRecoTauDiscriminationByTauPolarization.cc
  PFRecoTauDiscriminationAgainstElectronMVA5.cc
  PFRecoTauDiscriminationByMVAIsolationRun2.cc
  PFTauDiscriminatorLogicalAndProducer.cc
  PFRecoTauProducer.cc
  PFTauSecondaryVertexProducer.cc
  RecoTauElectronRejectionPlugin.cc
  PFRecoTauDiscriminationByLeadingObjectPtCut.cc
  PFRecoTauDiscriminationByFlightPathSignificance.cc
  PFRecoTauDecayModeIndexProducer.cc
  RecoTauPiZeroUnembedder.cc
  RecoTauDiscriminantCutMultiplexer.cc
  RecoTauChargeCleanerPlugin.cc
  PFTauPrimaryVertexProducer.cc
  PFRecoTauEnergyAlgorithmPlugin.cc
  RecoTauProducer.cc
  PFTauDecayModeCutMultiplexer.cc
  PATTauDiscriminantCutMultiplexer.cc
  RecoTauJetRegionProducer.cc
  PFRecoTauDiscriminationAgainstElectron.cc
  PFRecoTauDiscriminationAgainstElectronDeadECAL.cc
  RecoTauDiscriminantCleanerPlugin.cc
  CaloRecoTauProducer.cc
  RecoTauPileUpVertexSelector.cc
  RecoTauMVATransform.cc
  RecoTauImpactParameterSignificancePlugin.cc
  RecoTauPiZeroProducer.cc
  PFRecoTauDiscriminationByInvMass.cc
  PATTauDiscriminationAgainstElectronMVA6.cc
  PFRecoTauDiscriminationByIsolation.cc
  RecoTauDiscriminationByFlight.cc
  RecoTauPiZeroTrivialPlugin.cc
  PFRecoTauChargedHadronFromTrackPlugin.cc
  RecoTauPhotonFilter.cc
  PFRecoTauChargedHadronProducer.cc
  PFTauTransverseImpactParameters.cc
)

target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/boost/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/root/)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(RecoTauTagRecoTauPlugins PUBLIC /usr/include/boost/regex/)

