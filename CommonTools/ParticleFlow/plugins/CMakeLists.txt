add_library(CommonToolsParticleFlow_plugins OBJECT 
  PFMuonUntagger.cc
  PFEGammaToCandidateRemapper.cc
  SealModule.cc
  IPCutPFCandidateSelector.cc
  IsolatedPFCandidateMerger.cc
  ElectronIDPFCandidateSelector.cc
  Type1PFMET.cc
  PFCandWithSuperClusterExtractor.cc
  IsolatedPFCandidateSelector.cc
  PFMET.cc
  PdgIdPFCandidateSelector.cc
  GenericPFCandidateSelector.cc
  PtMinPFCandidateSelector.cc
  TopProjector.cc
  DeltaBetaWeights.cc
  PFPileUp.cc
  MuonIDPFCandidateSelector.cc
  PFCandIsolatorFromDeposit.cc
  GenericPFJetSelector.cc
  PFCandidateMuonUntagger.cc
)

target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/root/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/boost/)
target_include_directories(CommonToolsParticleFlow_plugins PUBLIC /usr/include/boost/regex/)

