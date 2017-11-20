add_library(SimG4CorePhysics OBJECT 
  src/DDG4ProductionCuts.cc
  src/G4Monopole.cc
  src/PhysicsList.cc
  src/G4ProcessTypeEnumerator.cc
  src/PhysicsListFactory.cc
)

target_include_directories(SimG4CorePhysics PUBLIC /usr/include/boost/filesystem/)
target_include_directories(SimG4CorePhysics PUBLIC /usr/include/sigc++-2.0/)
target_include_directories(SimG4CorePhysics PUBLIC /usr/include/root/)
target_include_directories(SimG4CorePhysics PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(SimG4CorePhysics PUBLIC /home/teemperor/cms/md5/)
target_include_directories(SimG4CorePhysics PUBLIC /usr/lib/sigc++-2.0/include/)
target_include_directories(SimG4CorePhysics PUBLIC /usr/include/boost/)
target_include_directories(SimG4CorePhysics PUBLIC /usr/include/Geant4/)
target_include_directories(SimG4CorePhysics PUBLIC /usr/include/boost/regex/)

