add_subdirectory(test)
add_subdirectory(plugins)
add_library(TrackingToolsGsfTools OBJECT 
  src/MultiTrajectoryStateAssembler.cc
  src/GSUtilities.cc
  src/module.cc
  src/BasicMultiTrajectoryState.cc
  src/GaussianSumUtilities1D.cc
  src/MultiGaussianStateCombiner1D.cc
  src/GsfPropagatorAdapter.cc
  src/MultiTrajectoryStateTransform.cc
  src/MultiGaussianState1D.cc
  src/MultiTrajectoryStateMode.cc
  src/MultiGaussianStateTransform.cc
)

target_include_directories(TrackingToolsGsfTools PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsGsfTools PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsGsfTools PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsGsfTools PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsGsfTools PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsGsfTools PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsGsfTools PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsGsfTools PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/MultiTrajectoryStateAssembler.cc
  src/GSUtilities.cc
  src/module.cc
  src/BasicMultiTrajectoryState.cc
  src/GaussianSumUtilities1D.cc
  src/MultiGaussianStateCombiner1D.cc
  src/GsfPropagatorAdapter.cc
  src/MultiTrajectoryStateTransform.cc
  src/MultiGaussianState1D.cc
  src/MultiTrajectoryStateMode.cc
  src/MultiGaussianStateTransform.cc
PROPERTIES COMPILE_FLAGS "-Ofast")

