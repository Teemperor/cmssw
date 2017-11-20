add_subdirectory(test)
add_subdirectory(plugins)
add_library(PhysicsToolsHepMCCandAlgos OBJECT 
  src/MCTruthHelper.cc
  src/GenParticlesHelper.cc
  src/PdgEntryReplacer.cc
  src/PDFWeightsHelper.cc
  src/FlavorHistorySelectorUtil.cc
)

target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/boost/iostreams/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/python2.7/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/boost/serialization/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/eigen3/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/boost/python/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsHepMCCandAlgos PUBLIC /usr/include/boost/regex/)

