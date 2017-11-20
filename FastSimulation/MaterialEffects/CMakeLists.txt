add_subdirectory(test)
add_library(FastSimulationMaterialEffects OBJECT 
  src/PetrukhinModel.cc
  src/MultipleScatteringSimulator.cc
  src/BremsstrahlungSimulator.cc
  src/PairProductionSimulator.cc
  src/NuclearInteractionFTFSimulator.cc
  src/NuclearInteractionSimulator.cc
  src/MaterialEffectsSimulator.cc
  src/EnergyLossSimulator.cc
  src/MaterialEffects.cc
  src/MuonBremsstrahlungSimulator.cc
)

target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/boost/python/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/python2.7/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/root/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(FastSimulationMaterialEffects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/boost/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/Geant4/)
target_include_directories(FastSimulationMaterialEffects PUBLIC /usr/include/boost/regex/)

