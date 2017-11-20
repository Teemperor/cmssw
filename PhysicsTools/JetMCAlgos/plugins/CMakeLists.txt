add_library(PhysicsToolsJetMCAlgosPlugins OBJECT 
  HadronAndPartonSelector.cc
  CandOneToManyDeltaRMatcher.cc
  ttHFGenFilter.cc
  JetFlavourIdentifier.cc
  CandOneToOneDeltaRMatcher.cc
  GenHFHadronMatcher.cc
  JetFlavourClustering.cc
  TauGenJetProducer.cc
  GenJetBCEnergyRatio.cc
  GenJetSelector.cc
  JetPartonMatcher.cc
  PartonSelector.cc
  TauGenJetDecayModeSelector.cc
)

target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /home/teemperor/cms/ext/fastjet/include)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsJetMCAlgosPlugins PUBLIC /usr/include/boost/regex/)

