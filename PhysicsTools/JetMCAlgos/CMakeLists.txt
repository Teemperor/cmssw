add_subdirectory(test)
add_subdirectory(plugins)
add_library(PhysicsToolsJetMCAlgos OBJECT 
  src/SherpaPartonSelector.cc
  src/BasePartonSelector.cc
  src/Pythia8PartonSelector.cc
  src/Pythia6PartonSelector.cc
  src/Herwig6PartonSelector.cc
  src/HerwigppPartonSelector.cc
)

target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsJetMCAlgos PUBLIC /usr/include/boost/regex/)

