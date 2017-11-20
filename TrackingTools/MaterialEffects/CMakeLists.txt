add_subdirectory(plugins)
add_library(TrackingToolsMaterialEffects OBJECT 
  src/PropagatorWithMaterial.cc
  src/VolumeMaterialEffectsUpdator.cc
  src/MultipleScatteringUpdator.cc
  src/CombinedMaterialEffectsUpdator.cc
  src/MaterialEffectsUpdator.cc
  src/EnergyLossUpdator.cc
  src/VolumeMultipleScatteringEstimator.cc
  src/VolumeEnergyLossEstimator.cc
  src/VolumeMaterialEffectsEstimate.cc
)

target_include_directories(TrackingToolsMaterialEffects PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsMaterialEffects PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/PropagatorWithMaterial.cc
  src/VolumeMaterialEffectsUpdator.cc
  src/MultipleScatteringUpdator.cc
  src/CombinedMaterialEffectsUpdator.cc
  src/MaterialEffectsUpdator.cc
  src/EnergyLossUpdator.cc
  src/VolumeMultipleScatteringEstimator.cc
  src/VolumeEnergyLossEstimator.cc
  src/VolumeMaterialEffectsEstimate.cc
PROPERTIES COMPILE_FLAGS "-Ofast")

