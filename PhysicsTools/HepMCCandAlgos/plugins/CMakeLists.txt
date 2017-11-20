add_library(PhysicsToolsHepMCCandAlgos_plugins OBJECT 
  FlavorHistoryProducer.cc
  MCTruthDeltaRMatcherNew.cc
  ParticleDecayDrawer.cc
  ModelFilter.cc
  MCTruthCompositeMatcherNew.cc
  ParticleListDrawer.cc
  MCTruthDeltaRMatcher.cc
  MCMatchCandRefSelector.cc
  MCTruthMatchers.cc
  GenParticleMatchMerger.cc
  GenPlusSimParticleProducer.cc
  GenParticleSelector.cc
  GenParticleRefSelector.cc
  ParticleTreeDrawer.cc
  GenParticleProducer.cc
  FlavorHistoryFilter.cc
  GenParticlePruner.cc
  PDFWeightsTest.cc
  MCTruthDeltaRViewMatcher.cc
  GenParticleDecaySelector.cc
  HFFilter.cc
)

target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsHepMCCandAlgos_plugins PUBLIC /usr/include/boost/regex/)

