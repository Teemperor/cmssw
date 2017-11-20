add_subdirectory(test)
add_library(DataFormatsPatCandidates OBJECT 
  src/PackedGenParticle.cc
  src/TriggerEvent.cc
  src/Vertexing.cc
  src/ParametrizationHelper.cc
  src/Tau.cc
  src/TauCaloSpecific.cc
  src/ResolutionHelper.cc
  src/HardEventHypothesis.cc
  src/EventHypothesis.cc
  src/Jet.cc
  src/TriggerObjectStandAlone.cc
  src/libminifloat.cc
  src/TriggerFilter.cc
  src/PATTauDiscriminator.cc
  src/throwMissingLabel.cc
  src/CompositeCandidate.cc
  src/GenericParticle.cc
  src/Conversion.cc
  src/Flags.cc
  src/MHT.cc
  src/StringMap.cc
  src/PackedTriggerPrescales.cc
  src/TauJetCorrFactors.cc
  src/JetCorrFactors.cc
  src/TauPFEssential.cc
  src/Particle.cc
  src/PFParticle.cc
  src/Photon.cc
  src/PackedCandidate.cc
  src/Muon.cc
  src/UserData.cc
  src/Electron.cc
  src/CovarianceParameterization.cc
  src/TriggerPath.cc
  src/TriggerObject.cc
  src/TriggerAlgorithm.cc
  src/TriggerCondition.cc
  src/MET.cc
  src/CandKinResolution.cc
  src/TauPFSpecific.cc
  src/VIDCutFlowResult.cc
)

target_include_directories(DataFormatsPatCandidates PUBLIC /usr/include/boost/filesystem/)
target_include_directories(DataFormatsPatCandidates PUBLIC /usr/include/root/)
target_include_directories(DataFormatsPatCandidates PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(DataFormatsPatCandidates PUBLIC /home/teemperor/cms/md5/)
target_include_directories(DataFormatsPatCandidates PUBLIC /usr/include/boost/serialization/)
target_include_directories(DataFormatsPatCandidates PUBLIC /usr/include/boost/)
target_include_directories(DataFormatsPatCandidates PUBLIC /usr/include/boost/regex/)

