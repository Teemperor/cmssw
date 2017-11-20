add_library(PhysicsToolsPatAlgos_plugins OBJECT 
  PileupSummaryInfoSlimmer.cc
  PATPackedGenParticleProducer.cc
  PATPackedCandidateProducer.cc
  DuplicatedElectronCleaner.cc
  PATJetSlimmer.cc
  PATLeptonCountFilter.cc
  PATHeavyIonProducer.cc
  PATMETSlimmer.cc
  PATTauSlimmer.cc
  PATElectronSlimmer.cc
  PATGenCandsFromSimTracksProducer.cc
  TauJetCorrFactorsProducer.cc
  PATSingleVertexSelector.cc
  PATMuonSlimmer.cc
  PATMETProducer.cc
  PATTriggerMatcher.cc
  PATPhotonSlimmer.cc
  PATGenericParticleProducer.cc
  PATJetProducer.cc
  ModifiedObjectProducers.cc
  PATObjectSelector.cc
  RecoMETExtractor.cc
  PATGenJetSlimmer.cc
  PackedPFCandidateRefMixer.cc
  PATCleaner.cc
  PATTriggerEventProducer.cc
  StringResolutionProviderESProducer.cc
  PATMHTProducer.cc
  PATTriggerMatchEmbedder.cc
  PATPhotonProducer.cc
  PATHemisphereProducer.cc
  PATJetUpdater.cc
  TrackAndVertexUnpacker.cc
  PATMuonProducer.cc
  PATElectronProducer.cc
  PATPFParticleProducer.cc
  JetCorrFactorsProducer.cc
  PATObjectFilter.cc
  CandidateSummaryTable.cc
  PATLostTracks.cc
  PATTauProducer.cc
  PATTriggerProducer.cc
  GenMETExtractor.cc
  PATSecondaryVertexSlimmer.cc
  PATTauIDEmbedder.cc
  PATConversionProducer.cc
  PATVertexSlimmer.cc
  PATTriggerObjectStandAloneUnpacker.cc
  VertexAssociationProducer.cc
  PATPrimaryVertexCleaner.cc
  PATCompositeCandidateProducer.cc
)

target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /home/teemperor/cms/ext/coral/RelationalAccess)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /home/teemperor/cms/ext/coral/CoralKernel)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /home/teemperor/cms/ext/coral/CoralCommon)
target_include_directories(PhysicsToolsPatAlgos_plugins PUBLIC /usr/include/boost/regex/)

