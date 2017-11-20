add_subdirectory(plugins)
add_library(SimG4CoreCustomPhysics OBJECT 
  src/CustomPhysicsListSS.cc
  src/CustomPhysics.cc
  src/G4ProcessHelper.cc
  src/CustomParticle.cc
  src/FullModelReactionDynamics.cc
  src/HadronicProcessHelper.cc
  src/CMSDarkPairProductionProcess.cc
  src/ToyModelHadronicProcess.cc
  src/FullModelHadronicProcess.cc
  src/CustomParticleFactory.cc
  src/Decay3Body.cc
  src/CustomPhysicsList.cc
  src/DummyChargeFlipProcess.cc
  src/CustomPDGParser.cc
  src/CMSDarkPairProduction.cc
)

target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/boost/python/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/python2.7/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/root/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/boost/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CoreCustomPhysics PUBLIC /usr/include/boost/regex/)

