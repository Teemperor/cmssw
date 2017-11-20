add_subdirectory(test)
add_subdirectory(plugins)
add_custom_command(
  OUTPUT ${CMAKE_BINARY_DIR}/TrackingToolsGsfTrackingsrcclassesh_rflx.cpp
  COMMAND genreflex /home/teemperor/cms/cmssw/TrackingTools/GsfTracking/src/classes.h -I${CMAKE_SOURCE_DIR}  -o ${CMAKE_BINARY_DIR}/TrackingToolsGsfTrackingsrcclassesh_rflx.cpp -s /home/teemperor/cms/cmssw/TrackingTools/GsfTracking/src/classes_def.xml
  DEPENDS /home/teemperor/cms/cmssw/TrackingTools/GsfTracking/src/classes.h /home/teemperor/cms/cmssw/TrackingTools/GsfTracking/src/classes_def.xml
  COMMENT "Generating ROOT dict TrackingToolsGsfTrackingsrcclassesh")

add_library(TrackingToolsGsfTracking OBJECT 
  src/GsfMaterialEffectsUpdator.cc
  src/GsfBetheHeitlerUpdator.cc
  src/module.cc
  src/GsfMaterialEffectsAdapter.cc
  src/TsosGaussianStateConversions.cc
  src/GsfTrajectoryFitter.cc
  src/GsfTrajectorySmoother.cc
  src/FullConvolutionWithMaterial.cc
  src/GsfMultipleScatteringUpdator.cc
  src/GsfPropagatorWithMaterial.cc
  src/GsfCombinedMaterialEffectsUpdator.cc
  src/GsfChi2MeasurementEstimator.cc
  src/GsfMultiStateUpdator.cc
  src/GsfConstraintAtVertex.cc
  src/PosteriorWeightsCalculator.cc
  src/MultiTrajectoryStateMerger.cc
  ${CMAKE_BINARY_DIR}/TrackingToolsGsfTrackingsrcclassesh_rflx.cpp
)

target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/boost/python/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/boost/filesystem/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/python2.7/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/root/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /home/teemperor/CERN/root-build/include)
target_include_directories(TrackingToolsGsfTracking PUBLIC /home/teemperor/cms/md5/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/boost/serialization/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/boost/)
target_include_directories(TrackingToolsGsfTracking PUBLIC /usr/include/boost/regex/)
set_source_files_properties(

  src/GsfMaterialEffectsUpdator.cc
  src/GsfBetheHeitlerUpdator.cc
  src/module.cc
  src/GsfMaterialEffectsAdapter.cc
  src/TsosGaussianStateConversions.cc
  src/GsfTrajectoryFitter.cc
  src/GsfTrajectorySmoother.cc
  src/FullConvolutionWithMaterial.cc
  src/GsfMultipleScatteringUpdator.cc
  src/GsfPropagatorWithMaterial.cc
  src/GsfCombinedMaterialEffectsUpdator.cc
  src/GsfChi2MeasurementEstimator.cc
  src/GsfMultiStateUpdator.cc
  src/GsfConstraintAtVertex.cc
  src/PosteriorWeightsCalculator.cc
  src/MultiTrajectoryStateMerger.cc
  ${CMAKE_BINARY_DIR}/TrackingToolsGsfTrackingsrcclassesh_rflx.cpp
PROPERTIES COMPILE_FLAGS "-Ofast")

