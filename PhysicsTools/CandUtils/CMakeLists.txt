add_subdirectory(test)
add_library(PhysicsToolsCandUtils OBJECT 
  src/EventShapeVariables.cc
  src/Booster.cc
  src/cloneDecayTree.cc
  src/helicityAngle.cc
  src/AddFourMomenta.cc
  src/Thrust.cc
  src/makeCompositeCandidate.cc
  src/zMCLeptonDaughters.cc
  src/ApplyEnergyCorrection.cc
  src/CenterOfMassBooster.cc
  src/CandSelector.cc
  src/NamedCandCombinerBase.cc
  src/makeNamedCompositeCandidate.cc
)

target_include_directories(PhysicsToolsCandUtils PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(PhysicsToolsCandUtils PUBLIC /home/teemperor/cms/md5/)
target_include_directories(PhysicsToolsCandUtils PUBLIC /usr/include/boost/filesystem/)
target_include_directories(PhysicsToolsCandUtils PUBLIC /usr/include/boost/)
target_include_directories(PhysicsToolsCandUtils PUBLIC /usr/include/root/)
target_include_directories(PhysicsToolsCandUtils PUBLIC /usr/include/boost/regex/)

